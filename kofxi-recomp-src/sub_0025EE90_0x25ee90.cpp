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

// Function: sub_0025EE90
// Address: 0x25ee90 - 0x25ef50
void sub_0025EE90_0x25ee90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025EE90_0x25ee90");
#endif

    switch (ctx->pc) {
        case 0x25eed0u: goto label_25eed0;
        case 0x25eed8u: goto label_25eed8;
        case 0x25ef04u: goto label_25ef04;
        default: break;
    }

    ctx->pc = 0x25ee90u;

    // 0x25ee90: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x25ee90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x25ee94: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x25ee94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x25ee98: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x25ee98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x25ee9c: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x25ee9cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25eea0: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x25eea0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x25eea4: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x25eea4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25eea8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x25eea8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x25eeac: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x25eeacu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25eeb0: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x25eeb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x25eeb4: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x25eeb4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25eeb8: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x25eeb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x25eebc: 0x18c00018  blez        $a2, . + 4 + (0x18 << 2)
    ctx->pc = 0x25EEBCu;
    {
        const bool branch_taken_0x25eebc = (GPR_S32(ctx, 6) <= 0);
        ctx->pc = 0x25EEC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25EEBCu;
        // 0x25eec0: 0xffb20020  sd          $s2, 0x20($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25eebc) {
            ctx->pc = 0x25EF20u;
            goto label_25ef20;
        }
    }
    ctx->pc = 0x25EEC4u;
    // 0x25eec4: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x25eec4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25eec8: 0x24150020  addiu       $s5, $zero, 0x20
    ctx->pc = 0x25eec8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x25eecc: 0x0  nop
    ctx->pc = 0x25eeccu;
    // NOP
label_25eed0:
    // 0x25eed0: 0xc08c0ca  jal         func_230328
    ctx->pc = 0x25EED0u;
    SET_GPR_U32(ctx, 31, 0x25EED8u);
    ctx->pc = 0x25EED4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25EED0u;
    // 0x25eed4: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x230328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230328u, 0x25EED0u, 0x25EED8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25EED8u;
label_25eed8:
    // 0x25eed8: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x25EED8u;
    {
        const bool branch_taken_0x25eed8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x25eed8) {
            ctx->pc = 0x25EEDCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25EED8u;
            // 0x25eedc: 0x96050004  lhu         $a1, 0x4($s0) (Delay Slot)
            SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x25EEECu;
            goto label_25eeec;
        }
    }
    ctx->pc = 0x25EEE0u;
    // 0x25eee0: 0xa6150006  sh          $s5, 0x6($s0)
    ctx->pc = 0x25eee0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 6), (uint16_t)GPR_U32(ctx, 21));
    // 0x25eee4: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x25EEE4u;
    {
        const bool branch_taken_0x25eee4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25EEE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25EEE4u;
        // 0x25eee8: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25eee4) {
            ctx->pc = 0x25EF14u;
            goto label_25ef14;
        }
    }
    ctx->pc = 0x25EEECu;
label_25eeec:
    // 0x25eeec: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x25eeecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25eef0: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x25eef0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25eef4: 0x34a50018  ori         $a1, $a1, 0x18
    ctx->pc = 0x25eef4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)24);
    // 0x25eef8: 0x52c00  sll         $a1, $a1, 16
    ctx->pc = 0x25eef8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
    // 0x25eefc: 0xc08c04a  jal         func_230128
    ctx->pc = 0x25EEFCu;
    SET_GPR_U32(ctx, 31, 0x25EF04u);
    ctx->pc = 0x25EF00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25EEFCu;
    // 0x25ef00: 0x52c03  sra         $a1, $a1, 16 (Delay Slot)
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x230128u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230128u, 0x25EEFCu, 0x25EF04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25EF04u;
label_25ef04:
    // 0x25ef04: 0x26240001  addiu       $a0, $s1, 0x1
    ctx->pc = 0x25ef04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x25ef08: 0x21c00  sll         $v1, $v0, 16
    ctx->pc = 0x25ef08u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x25ef0c: 0xa6020006  sh          $v0, 0x6($s0)
    ctx->pc = 0x25ef0cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 6), (uint16_t)GPR_U32(ctx, 2));
    // 0x25ef10: 0x83880b  movn        $s1, $a0, $v1
    ctx->pc = 0x25ef10u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 4));
label_25ef14:
    // 0x25ef14: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x25ef14u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x25ef18: 0x1640ffed  bnez        $s2, . + 4 + (-0x13 << 2)
    ctx->pc = 0x25EF18u;
    {
        const bool branch_taken_0x25ef18 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x25EF1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25EF18u;
        // 0x25ef1c: 0x26100008  addiu       $s0, $s0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25ef18) {
            ctx->pc = 0x25EED0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_25eed0;
        }
    }
    ctx->pc = 0x25EF20u;
label_25ef20:
    // 0x25ef20: 0xae910000  sw          $s1, 0x0($s4)
    ctx->pc = 0x25ef20u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 17));
    // 0x25ef24: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x25ef24u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25ef28: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x25ef28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x25ef2c: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x25ef2cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x25ef30: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x25ef30u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x25ef34: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x25ef34u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x25ef38: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x25ef38u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x25ef3c: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x25ef3cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25ef40: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x25ef40u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25ef44: 0x3e00008  jr          $ra
    ctx->pc = 0x25EF44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25EF48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25EF44u;
        // 0x25ef48: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25EF44u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25EF4Cu;
    // 0x25ef4c: 0x0  nop
    ctx->pc = 0x25ef4cu;
    // NOP
}
