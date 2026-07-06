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

// Function: sub_0034A590
// Address: 0x34a590 - 0x34a710
void sub_0034A590_0x34a590(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0034A590_0x34a590");
#endif

    switch (ctx->pc) {
        case 0x34a5e8u: goto label_34a5e8;
        case 0x34a5f4u: goto label_34a5f4;
        case 0x34a66cu: goto label_34a66c;
        case 0x34a678u: goto label_34a678;
        default: break;
    }

    ctx->pc = 0x34a590u;

    // 0x34a590: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x34a590u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x34a594: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x34a594u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
    // 0x34a598: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x34a598u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x34a59c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x34a59cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x34a5a0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x34a5a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x34a5a4: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x34a5a4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34a5a8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x34a5a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x34a5ac: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x34a5acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x34a5b0: 0x9042bea9  lbu         $v0, -0x4157($v0)
    ctx->pc = 0x34a5b0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294950569)));
    // 0x34a5b4: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x34A5B4u;
    {
        const bool branch_taken_0x34a5b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x34A5B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34A5B4u;
        // 0x34a5b8: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34a5b4) {
            ctx->pc = 0x34A5C4u;
            goto label_34a5c4;
        }
    }
    ctx->pc = 0x34A5BCu;
    // 0x34a5bc: 0x1000004d  b           . + 4 + (0x4D << 2)
    ctx->pc = 0x34A5BCu;
    {
        const bool branch_taken_0x34a5bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34A5C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34A5BCu;
        // 0x34a5c0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34a5bc) {
            ctx->pc = 0x34A6F4u;
            goto label_34a6f4;
        }
    }
    ctx->pc = 0x34A5C4u;
label_34a5c4:
    // 0x34a5c4: 0x3c0201df  lui         $v0, 0x1DF
    ctx->pc = 0x34a5c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)479 << 16));
    // 0x34a5c8: 0x8c42dd90  lw          $v0, -0x2270($v0)
    ctx->pc = 0x34a5c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294958480)));
    // 0x34a5cc: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x34A5CCu;
    {
        const bool branch_taken_0x34a5cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x34a5cc) {
            ctx->pc = 0x34A5DCu;
            goto label_34a5dc;
        }
    }
    ctx->pc = 0x34A5D4u;
    // 0x34a5d4: 0x10000047  b           . + 4 + (0x47 << 2)
    ctx->pc = 0x34A5D4u;
    {
        const bool branch_taken_0x34a5d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34A5D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34A5D4u;
        // 0x34a5d8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34a5d4) {
            ctx->pc = 0x34A6F4u;
            goto label_34a6f4;
        }
    }
    ctx->pc = 0x34A5DCu;
label_34a5dc:
    // 0x34a5dc: 0x3c10009c  lui         $s0, 0x9C
    ctx->pc = 0x34a5dcu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)156 << 16));
    // 0x34a5e0: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x34a5e0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34a5e4: 0x2610ef90  addiu       $s0, $s0, -0x1070
    ctx->pc = 0x34a5e4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294963088));
label_34a5e8:
    // 0x34a5e8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x34a5e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34a5ec: 0xc0d0a6c  jal         func_3429B0
    ctx->pc = 0x34A5ECu;
    SET_GPR_U32(ctx, 31, 0x34A5F4u);
    ctx->pc = 0x34A5F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34A5ECu;
    // 0x34a5f0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3429B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3429B0u, 0x34A5ECu, 0x34A5F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34A5F4u;
label_34a5f4:
    // 0x34a5f4: 0x14400016  bnez        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x34A5F4u;
    {
        const bool branch_taken_0x34a5f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x34a5f4) {
            ctx->pc = 0x34A650u;
            goto label_34a650;
        }
    }
    ctx->pc = 0x34A5FCu;
    // 0x34a5fc: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x34a5fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
    // 0x34a600: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x34a600u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x34a604: 0x9044beaa  lbu         $a0, -0x4156($v0)
    ctx->pc = 0x34a604u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294950570)));
    // 0x34a608: 0x1083000b  beq         $a0, $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x34A608u;
    {
        const bool branch_taken_0x34a608 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x34a608) {
            ctx->pc = 0x34A638u;
            goto label_34a638;
        }
    }
    ctx->pc = 0x34A610u;
    // 0x34a610: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x34a610u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x34a614: 0x10820004  beq         $a0, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x34A614u;
    {
        const bool branch_taken_0x34a614 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x34a614) {
            ctx->pc = 0x34A628u;
            goto label_34a628;
        }
    }
    ctx->pc = 0x34A61Cu;
    // 0x34a61c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x34A61Cu;
    {
        const bool branch_taken_0x34a61c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x34a61c) {
            ctx->pc = 0x34A650u;
            goto label_34a650;
        }
    }
    ctx->pc = 0x34A624u;
    // 0x34a624: 0x0  nop
    ctx->pc = 0x34a624u;
    // NOP
label_34a628:
    // 0x34a628: 0x36420001  ori         $v0, $s2, 0x1
    ctx->pc = 0x34a628u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) | (uint64_t)(uint16_t)1);
    // 0x34a62c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x34A62Cu;
    {
        const bool branch_taken_0x34a62c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34A630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34A62Cu;
        // 0x34a630: 0x305200ff  andi        $s2, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x34a62c) {
            ctx->pc = 0x34A650u;
            goto label_34a650;
        }
    }
    ctx->pc = 0x34A634u;
    // 0x34a634: 0x0  nop
    ctx->pc = 0x34a634u;
    // NOP
label_34a638:
    // 0x34a638: 0x92020020  lbu         $v0, 0x20($s0)
    ctx->pc = 0x34a638u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x34a63c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x34A63Cu;
    {
        const bool branch_taken_0x34a63c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x34a63c) {
            ctx->pc = 0x34A650u;
            goto label_34a650;
        }
    }
    ctx->pc = 0x34A644u;
    // 0x34a644: 0x36420001  ori         $v0, $s2, 0x1
    ctx->pc = 0x34a644u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) | (uint64_t)(uint16_t)1);
    // 0x34a648: 0x305200ff  andi        $s2, $v0, 0xFF
    ctx->pc = 0x34a648u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x34a64c: 0x0  nop
    ctx->pc = 0x34a64cu;
    // NOP
label_34a650:
    // 0x34a650: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x34a650u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x34a654: 0x2a220014  slti        $v0, $s1, 0x14
    ctx->pc = 0x34a654u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)20) ? 1 : 0);
    // 0x34a658: 0x1440ffe3  bnez        $v0, . + 4 + (-0x1D << 2)
    ctx->pc = 0x34A658u;
    {
        const bool branch_taken_0x34a658 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x34A65Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34A658u;
        // 0x34a65c: 0x26100022  addiu       $s0, $s0, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 34));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34a658) {
            ctx->pc = 0x34A5E8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_34a5e8;
        }
    }
    ctx->pc = 0x34A660u;
    // 0x34a660: 0x3c11009c  lui         $s1, 0x9C
    ctx->pc = 0x34a660u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)156 << 16));
    // 0x34a664: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x34a664u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34a668: 0x2631ece0  addiu       $s1, $s1, -0x1320
    ctx->pc = 0x34a668u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294962400));
label_34a66c:
    // 0x34a66c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x34a66cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34a670: 0xc0d0a6c  jal         func_3429B0
    ctx->pc = 0x34A670u;
    SET_GPR_U32(ctx, 31, 0x34A678u);
    ctx->pc = 0x34A674u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34A670u;
    // 0x34a674: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3429B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3429B0u, 0x34A670u, 0x34A678u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34A678u;
label_34a678:
    // 0x34a678: 0x14400019  bnez        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x34A678u;
    {
        const bool branch_taken_0x34a678 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x34a678) {
            ctx->pc = 0x34A6E0u;
            goto label_34a6e0;
        }
    }
    ctx->pc = 0x34A680u;
    // 0x34a680: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x34a680u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
    // 0x34a684: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x34a684u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x34a688: 0x9044beab  lbu         $a0, -0x4155($v0)
    ctx->pc = 0x34a688u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294950571)));
    // 0x34a68c: 0x1083000e  beq         $a0, $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x34A68Cu;
    {
        const bool branch_taken_0x34a68c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x34a68c) {
            ctx->pc = 0x34A6C8u;
            goto label_34a6c8;
        }
    }
    ctx->pc = 0x34A694u;
    // 0x34a694: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x34a694u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x34a698: 0x1082000b  beq         $a0, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x34A698u;
    {
        const bool branch_taken_0x34a698 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x34a698) {
            ctx->pc = 0x34A6C8u;
            goto label_34a6c8;
        }
    }
    ctx->pc = 0x34A6A0u;
    // 0x34a6a0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x34a6a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x34a6a4: 0x10820004  beq         $a0, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x34A6A4u;
    {
        const bool branch_taken_0x34a6a4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x34a6a4) {
            ctx->pc = 0x34A6B8u;
            goto label_34a6b8;
        }
    }
    ctx->pc = 0x34A6ACu;
    // 0x34a6ac: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x34A6ACu;
    {
        const bool branch_taken_0x34a6ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x34a6ac) {
            ctx->pc = 0x34A6E0u;
            goto label_34a6e0;
        }
    }
    ctx->pc = 0x34A6B4u;
    // 0x34a6b4: 0x0  nop
    ctx->pc = 0x34a6b4u;
    // NOP
label_34a6b8:
    // 0x34a6b8: 0x36420002  ori         $v0, $s2, 0x2
    ctx->pc = 0x34a6b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) | (uint64_t)(uint16_t)2);
    // 0x34a6bc: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x34A6BCu;
    {
        const bool branch_taken_0x34a6bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34A6C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34A6BCu;
        // 0x34a6c0: 0x305200ff  andi        $s2, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x34a6bc) {
            ctx->pc = 0x34A6E0u;
            goto label_34a6e0;
        }
    }
    ctx->pc = 0x34A6C4u;
    // 0x34a6c4: 0x0  nop
    ctx->pc = 0x34a6c4u;
    // NOP
label_34a6c8:
    // 0x34a6c8: 0x92220020  lbu         $v0, 0x20($s1)
    ctx->pc = 0x34a6c8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x34a6cc: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x34A6CCu;
    {
        const bool branch_taken_0x34a6cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x34a6cc) {
            ctx->pc = 0x34A6E0u;
            goto label_34a6e0;
        }
    }
    ctx->pc = 0x34A6D4u;
    // 0x34a6d4: 0x36420002  ori         $v0, $s2, 0x2
    ctx->pc = 0x34a6d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) | (uint64_t)(uint16_t)2);
    // 0x34a6d8: 0x305200ff  andi        $s2, $v0, 0xFF
    ctx->pc = 0x34a6d8u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x34a6dc: 0x0  nop
    ctx->pc = 0x34a6dcu;
    // NOP
label_34a6e0:
    // 0x34a6e0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x34a6e0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x34a6e4: 0x2a020014  slti        $v0, $s0, 0x14
    ctx->pc = 0x34a6e4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)20) ? 1 : 0);
    // 0x34a6e8: 0x1440ffe0  bnez        $v0, . + 4 + (-0x20 << 2)
    ctx->pc = 0x34A6E8u;
    {
        const bool branch_taken_0x34a6e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x34A6ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34A6E8u;
        // 0x34a6ec: 0x26310022  addiu       $s1, $s1, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 34));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34a6e8) {
            ctx->pc = 0x34A66Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_34a66c;
        }
    }
    ctx->pc = 0x34A6F0u;
    // 0x34a6f0: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x34a6f0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_34a6f4:
    // 0x34a6f4: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x34a6f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x34a6f8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x34a6f8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x34a6fc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x34a6fcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x34a700: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x34a700u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x34a704: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x34a704u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x34a708: 0x3e00008  jr          $ra
    ctx->pc = 0x34A708u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x34A70Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34A708u;
        // 0x34a70c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34A708u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x34A710u;
}
