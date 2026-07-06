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

// Function: sub_001D8948
// Address: 0x1d8948 - 0x1d8a40
void sub_001D8948_0x1d8948(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D8948_0x1d8948");
#endif

    switch (ctx->pc) {
        case 0x1d8970u: goto label_1d8970;
        case 0x1d89a0u: goto label_1d89a0;
        case 0x1d89c4u: goto label_1d89c4;
        case 0x1d89d0u: goto label_1d89d0;
        case 0x1d89dcu: goto label_1d89dc;
        case 0x1d89e4u: goto label_1d89e4;
        case 0x1d89ecu: goto label_1d89ec;
        case 0x1d89f4u: goto label_1d89f4;
        case 0x1d89fcu: goto label_1d89fc;
        case 0x1d8a04u: goto label_1d8a04;
        default: break;
    }

    ctx->pc = 0x1d8948u;

    // 0x1d8948: 0x3c030039  lui         $v1, 0x39
    ctx->pc = 0x1d8948u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)57 << 16));
    // 0x1d894c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1d894cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d8950: 0x8c62e6a8  lw          $v0, -0x1958($v1)
    ctx->pc = 0x1d8950u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960808)));
    // 0x1d8954: 0x8c45000c  lw          $a1, 0xC($v0)
    ctx->pc = 0x1d8954u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x1d8958: 0x18a0000e  blez        $a1, . + 4 + (0xE << 2)
    ctx->pc = 0x1D8958u;
    {
        const bool branch_taken_0x1d8958 = (GPR_S32(ctx, 5) <= 0);
        ctx->pc = 0x1D895Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8958u;
        // 0x1d895c: 0x24420010  addiu       $v0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d8958) {
            ctx->pc = 0x1D8994u;
            goto label_1d8994;
        }
    }
    ctx->pc = 0x1D8960u;
    // 0x1d8960: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1d8960u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d8964: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1d8964u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d8968: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1d8968u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1d896c: 0x0  nop
    ctx->pc = 0x1d896cu;
    // NOP
label_1d8970:
    // 0x1d8970: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x1d8970u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d8974: 0x10670008  beq         $v1, $a3, . + 4 + (0x8 << 2)
    ctx->pc = 0x1D8974u;
    {
        const bool branch_taken_0x1d8974 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 7));
        ctx->pc = 0x1D8978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8974u;
        // 0x1d8978: 0x24840100  addiu       $a0, $a0, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 256));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d8974) {
            ctx->pc = 0x1D8998u;
            goto label_1d8998;
        }
    }
    ctx->pc = 0x1D897Cu;
    // 0x1d897c: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x1d897cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x1d8980: 0xc5102a  slt         $v0, $a2, $a1
    ctx->pc = 0x1d8980u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x1d8984: 0x0  nop
    ctx->pc = 0x1d8984u;
    // NOP
    // 0x1d8988: 0x0  nop
    ctx->pc = 0x1d8988u;
    // NOP
    // 0x1d898c: 0x5440fff8  bnel        $v0, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x1D898Cu;
    {
        const bool branch_taken_0x1d898c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d898c) {
            ctx->pc = 0x1D8990u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D898Cu;
            // 0x1d8990: 0x8c830000  lw          $v1, 0x0($a0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D8970u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1d8970;
        }
    }
    ctx->pc = 0x1D8994u;
label_1d8994:
    // 0x1d8994: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1d8994u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d8998:
    // 0x1d8998: 0x3e00008  jr          $ra
    ctx->pc = 0x1D8998u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D8998u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D89A0u;
label_1d89a0:
    // 0x1d89a0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1d89a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1d89a4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d89a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d89a8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d89a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d89ac: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1d89acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d89b0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1d89b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1d89b4: 0x24110002  addiu       $s1, $zero, 0x2
    ctx->pc = 0x1d89b4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1d89b8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1d89b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1d89bc: 0xc0758fa  jal         func_1D63E8
    ctx->pc = 0x1D89BCu;
    SET_GPR_U32(ctx, 31, 0x1D89C4u);
    ctx->pc = 0x1D89C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D89BCu;
    // 0x1d89c0: 0x24060040  addiu       $a2, $zero, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D63E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D63E8u, 0x1D89BCu, 0x1D89C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D89C4u;
label_1d89c4:
    // 0x1d89c4: 0xae110000  sw          $s1, 0x0($s0)
    ctx->pc = 0x1d89c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 17));
    // 0x1d89c8: 0xc0761c2  jal         func_1D8708
    ctx->pc = 0x1D89C8u;
    SET_GPR_U32(ctx, 31, 0x1D89D0u);
    ctx->pc = 0x1D89CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D89C8u;
    // 0x1d89cc: 0x26040004  addiu       $a0, $s0, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D8708u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D8708u, 0x1D89C8u, 0x1D89D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D89D0u;
label_1d89d0:
    // 0x1d89d0: 0xae110010  sw          $s1, 0x10($s0)
    ctx->pc = 0x1d89d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 17));
    // 0x1d89d4: 0xc076290  jal         func_1D8A40
    ctx->pc = 0x1D89D4u;
    SET_GPR_U32(ctx, 31, 0x1D89DCu);
    ctx->pc = 0x1D89D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D89D4u;
    // 0x1d89d8: 0x26040018  addiu       $a0, $s0, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D8A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D8A40u, 0x1D89D4u, 0x1D89DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D89DCu;
label_1d89dc:
    // 0x1d89dc: 0xc076296  jal         func_1D8A58
    ctx->pc = 0x1D89DCu;
    SET_GPR_U32(ctx, 31, 0x1D89E4u);
    ctx->pc = 0x1D89E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D89DCu;
    // 0x1d89e0: 0x26040028  addiu       $a0, $s0, 0x28 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 40));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D8A58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D8A58u, 0x1D89DCu, 0x1D89E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D89E4u;
label_1d89e4:
    // 0x1d89e4: 0xc076296  jal         func_1D8A58
    ctx->pc = 0x1D89E4u;
    SET_GPR_U32(ctx, 31, 0x1D89ECu);
    ctx->pc = 0x1D89E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D89E4u;
    // 0x1d89e8: 0x26040048  addiu       $a0, $s0, 0x48 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 72));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D8A58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D8A58u, 0x1D89E4u, 0x1D89ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D89ECu;
label_1d89ec:
    // 0x1d89ec: 0xc076296  jal         func_1D8A58
    ctx->pc = 0x1D89ECu;
    SET_GPR_U32(ctx, 31, 0x1D89F4u);
    ctx->pc = 0x1D89F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D89ECu;
    // 0x1d89f0: 0x26040068  addiu       $a0, $s0, 0x68 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 104));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D8A58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D8A58u, 0x1D89ECu, 0x1D89F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D89F4u;
label_1d89f4:
    // 0x1d89f4: 0xc076296  jal         func_1D8A58
    ctx->pc = 0x1D89F4u;
    SET_GPR_U32(ctx, 31, 0x1D89FCu);
    ctx->pc = 0x1D89F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D89F4u;
    // 0x1d89f8: 0x26040088  addiu       $a0, $s0, 0x88 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 136));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D8A58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D8A58u, 0x1D89F4u, 0x1D89FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D89FCu;
label_1d89fc:
    // 0x1d89fc: 0xc0762a0  jal         func_1D8A80
    ctx->pc = 0x1D89FCu;
    SET_GPR_U32(ctx, 31, 0x1D8A04u);
    ctx->pc = 0x1D8A00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D89FCu;
    // 0x1d8a00: 0x260400a8  addiu       $a0, $s0, 0xA8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 168));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D8A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D8A80u, 0x1D89FCu, 0x1D8A04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D8A04u;
label_1d8a04:
    // 0x1d8a04: 0xae0000d0  sw          $zero, 0xD0($s0)
    ctx->pc = 0x1d8a04u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 208), GPR_U32(ctx, 0));
    // 0x1d8a08: 0x3c02001d  lui         $v0, 0x1D
    ctx->pc = 0x1d8a08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)29 << 16));
    // 0x1d8a0c: 0xae0000d8  sw          $zero, 0xD8($s0)
    ctx->pc = 0x1d8a0cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 216), GPR_U32(ctx, 0));
    // 0x1d8a10: 0x244266b0  addiu       $v0, $v0, 0x66B0
    ctx->pc = 0x1d8a10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 26288));
    // 0x1d8a14: 0xae0000dc  sw          $zero, 0xDC($s0)
    ctx->pc = 0x1d8a14u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 220), GPR_U32(ctx, 0));
    // 0x1d8a18: 0xae0200d4  sw          $v0, 0xD4($s0)
    ctx->pc = 0x1d8a18u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 212), GPR_U32(ctx, 2));
    // 0x1d8a1c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1d8a1cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d8a20: 0xae0000e0  sw          $zero, 0xE0($s0)
    ctx->pc = 0x1d8a20u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 224), GPR_U32(ctx, 0));
    // 0x1d8a24: 0xae0000e4  sw          $zero, 0xE4($s0)
    ctx->pc = 0x1d8a24u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 228), GPR_U32(ctx, 0));
    // 0x1d8a28: 0xae0000e8  sw          $zero, 0xE8($s0)
    ctx->pc = 0x1d8a28u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 232), GPR_U32(ctx, 0));
    // 0x1d8a2c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1d8a2cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d8a30: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d8a30u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d8a34: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1d8a34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d8a38: 0x3e00008  jr          $ra
    ctx->pc = 0x1D8A38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D8A3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8A38u;
        // 0x1d8a3c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D8A38u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D8A40u;
}
