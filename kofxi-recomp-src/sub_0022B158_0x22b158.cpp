#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0022B158
// Address: 0x22b158 - 0x22b220
void sub_0022B158_0x22b158(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022B158_0x22b158");
#endif

    switch (ctx->pc) {
        case 0x22b180u: goto label_22b180;
        case 0x22b1a8u: goto label_22b1a8;
        case 0x22b1e4u: goto label_22b1e4;
        case 0x22b1fcu: goto label_22b1fc;
        default: break;
    }

    ctx->pc = 0x22b158u;

    // 0x22b158: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x22b158u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x22b15c: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x22b15cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x22b160: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x22b160u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x22b164: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x22b164u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x22b168: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x22b168u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22b16c: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x22b16cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x22b170: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x22b170u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x22b174: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x22B174u;
    {
        const bool branch_taken_0x22b174 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x22B178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B174u;
        // 0x22b178: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22b174) {
            ctx->pc = 0x22B19Cu;
            goto label_22b19c;
        }
    }
    ctx->pc = 0x22B17Cu;
    // 0x22b17c: 0x0  nop
    ctx->pc = 0x22b17cu;
    // NOP
label_22b180:
    // 0x22b180: 0x60802d  daddu       $s0, $v1, $zero
    ctx->pc = 0x22b180u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22b184: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x22b184u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x22b188: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x22b188u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22b18c: 0x0  nop
    ctx->pc = 0x22b18cu;
    // NOP
    // 0x22b190: 0x0  nop
    ctx->pc = 0x22b190u;
    // NOP
    // 0x22b194: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x22B194u;
    {
        const bool branch_taken_0x22b194 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x22b194) {
            ctx->pc = 0x22B180u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_22b180;
        }
    }
    ctx->pc = 0x22B19Cu;
label_22b19c:
    // 0x22b19c: 0x1220001a  beqz        $s1, . + 4 + (0x1A << 2)
    ctx->pc = 0x22B19Cu;
    {
        const bool branch_taken_0x22b19c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x22B1A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B19Cu;
        // 0x22b1a0: 0x26120100  addiu       $s2, $s0, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 256));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22b19c) {
            ctx->pc = 0x22B208u;
            goto label_22b208;
        }
    }
    ctx->pc = 0x22B1A4u;
    // 0x22b1a4: 0x96020012  lhu         $v0, 0x12($s0)
    ctx->pc = 0x22b1a4u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 18)));
label_22b1a8:
    // 0x22b1a8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x22b1a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x22b1ac: 0x54400016  bnel        $v0, $zero, . + 4 + (0x16 << 2)
    ctx->pc = 0x22B1ACu;
    {
        const bool branch_taken_0x22b1ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x22b1ac) {
            ctx->pc = 0x22B1B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22B1ACu;
            // 0x22b1b0: 0xae110000  sw          $s1, 0x0($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 17));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22B208u;
            goto label_22b208;
        }
    }
    ctx->pc = 0x22B1B4u;
    // 0x22b1b4: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x22b1b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x22b1b8: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x22b1b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x22b1bc: 0x8e26000c  lw          $a2, 0xC($s1)
    ctx->pc = 0x22b1bcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x22b1c0: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x22b1c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x22b1c4: 0x861021  addu        $v0, $a0, $a2
    ctx->pc = 0x22b1c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x22b1c8: 0x52102b  sltu        $v0, $v0, $s2
    ctx->pc = 0x22b1c8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
    // 0x22b1cc: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x22B1CCu;
    {
        const bool branch_taken_0x22b1cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x22b1cc) {
            ctx->pc = 0x22B1DCu;
            goto label_22b1dc;
        }
    }
    ctx->pc = 0x22B1D4u;
    // 0x22b1d4: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x22B1D4u;
    {
        const bool branch_taken_0x22b1d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22B1D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B1D4u;
        // 0x22b1d8: 0xae110000  sw          $s1, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22b1d4) {
            ctx->pc = 0x22B208u;
            goto label_22b208;
        }
    }
    ctx->pc = 0x22B1DCu;
label_22b1dc:
    // 0x22b1dc: 0xc08b538  jal         func_22D4E0
    ctx->pc = 0x22B1DCu;
    SET_GPR_U32(ctx, 31, 0x22B1E4u);
    ctx->pc = 0x22B1E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22B1DCu;
    // 0x22b1e0: 0x8e250008  lw          $a1, 0x8($s1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D4E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D4E0u, 0x22B1DCu, 0x22B1E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22B1E4u;
label_22b1e4:
    // 0x22b1e4: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x22b1e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x22b1e8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x22b1e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22b1ec: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x22b1ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x22b1f0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x22b1f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x22b1f4: 0xc08a996  jal         func_22A658
    ctx->pc = 0x22B1F4u;
    SET_GPR_U32(ctx, 31, 0x22B1FCu);
    ctx->pc = 0x22B1F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22B1F4u;
    // 0x22b1f8: 0xae02000c  sw          $v0, 0xC($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22A658u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22A658u, 0x22B1F4u, 0x22B1FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22B1FCu;
label_22b1fc:
    // 0x22b1fc: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x22b1fcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22b200: 0x5620ffe9  bnel        $s1, $zero, . + 4 + (-0x17 << 2)
    ctx->pc = 0x22B200u;
    {
        const bool branch_taken_0x22b200 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x22b200) {
            ctx->pc = 0x22B204u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22B200u;
            // 0x22b204: 0x96020012  lhu         $v0, 0x12($s0) (Delay Slot)
            SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 18)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22B1A8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_22b1a8;
        }
    }
    ctx->pc = 0x22B208u;
label_22b208:
    // 0x22b208: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x22b208u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x22b20c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x22b20cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x22b210: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x22b210u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22b214: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x22b214u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22b218: 0x3e00008  jr          $ra
    ctx->pc = 0x22B218u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22B21Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B218u;
        // 0x22b21c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22B218u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22B220u;
}
