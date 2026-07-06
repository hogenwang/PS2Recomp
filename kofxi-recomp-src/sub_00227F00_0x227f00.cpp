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

// Function: sub_00227F00
// Address: 0x227f00 - 0x228098
void sub_00227F00_0x227f00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00227F00_0x227f00");
#endif

    switch (ctx->pc) {
        case 0x227f34u: goto label_227f34;
        case 0x227f38u: goto label_227f38;
        case 0x227f40u: goto label_227f40;
        case 0x227f58u: goto label_227f58;
        case 0x227fccu: goto label_227fcc;
        case 0x227fdcu: goto label_227fdc;
        case 0x228030u: goto label_228030;
        default: break;
    }

    ctx->pc = 0x227f00u;

    // 0x227f00: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x227f00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x227f04: 0x3c07003f  lui         $a3, 0x3F
    ctx->pc = 0x227f04u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)63 << 16));
    // 0x227f08: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x227f08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x227f0c: 0x24e742c8  addiu       $a3, $a3, 0x42C8
    ctx->pc = 0x227f0cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 17096));
    // 0x227f10: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x227f10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x227f14: 0x2405015e  addiu       $a1, $zero, 0x15E
    ctx->pc = 0x227f14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 350));
    // 0x227f18: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x227f18u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x227f1c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x227f1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x227f20: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x227f20u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x227f24: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x227f24u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x227f28: 0x248442e8  addiu       $a0, $a0, 0x42E8
    ctx->pc = 0x227f28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17128));
    // 0x227f2c: 0xc0897d6  jal         func_225F58
    ctx->pc = 0x227F2Cu;
    SET_GPR_U32(ctx, 31, 0x227F34u);
    ctx->pc = 0x227F30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x227F2Cu;
    // 0x227f30: 0x220402d  daddu       $t0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225F58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x225F58u, 0x227F2Cu, 0x227F34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x227F34u;
label_227f34:
    // 0x227f34: 0x3c10003a  lui         $s0, 0x3A
    ctx->pc = 0x227f34u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)58 << 16));
label_227f38:
    // 0x227f38: 0xc089f4c  jal         func_227D30
    ctx->pc = 0x227F38u;
    SET_GPR_U32(ctx, 31, 0x227F40u);
    ctx->pc = 0x227D30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227D30u, 0x227F38u, 0x227F40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x227F40u;
label_227f40:
    // 0x227f40: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x227F40u;
    {
        const bool branch_taken_0x227f40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x227F44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227F40u;
        // 0x227f44: 0x8e0ef200  lw          $t6, -0xE00($s0) (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294963712)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x227f40) {
            ctx->pc = 0x227F70u;
            goto label_227f70;
        }
    }
    ctx->pc = 0x227F48u;
    // 0x227f48: 0x3c0f003a  lui         $t7, 0x3A
    ctx->pc = 0x227f48u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)58 << 16));
    // 0x227f4c: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x227f4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x227f50: 0xc089f40  jal         func_227D00
    ctx->pc = 0x227F50u;
    SET_GPR_U32(ctx, 31, 0x227F58u);
    ctx->pc = 0x227F54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x227F50u;
    // 0x227f54: 0xadf1f57c  sw          $s1, -0xA84($t7) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 15), 4294964604), GPR_U32(ctx, 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227D00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227D00u, 0x227F50u, 0x227F58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x227F58u;
label_227f58:
    // 0x227f58: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x227f58u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x227f5c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x227f5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x227f60: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x227f60u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x227f64: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x227f64u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x227f68: 0x8089fb0  j           func_227EC0
    ctx->pc = 0x227F68u;
    ctx->pc = 0x227F6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x227F68u;
    // 0x227f6c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227EC0u;
    sub_00227EC0_0x227ec0(rdram, ctx, runtime); return;
    ctx->pc = 0x227F70u;
label_227f70:
    // 0x227f70: 0x8dcf0328  lw          $t7, 0x328($t6)
    ctx->pc = 0x227f70u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 808)));
    // 0x227f74: 0x25ef0001  addiu       $t7, $t7, 0x1
    ctx->pc = 0x227f74u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 1));
    // 0x227f78: 0x1000ffef  b           . + 4 + (-0x11 << 2)
    ctx->pc = 0x227F78u;
    {
        const bool branch_taken_0x227f78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x227F7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227F78u;
        // 0x227f7c: 0xadcf0328  sw          $t7, 0x328($t6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 14), 808), GPR_U32(ctx, 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x227f78) {
            ctx->pc = 0x227F38u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_227f38;
        }
    }
    ctx->pc = 0x227F80u;
    // 0x227f80: 0x3c0f003a  lui         $t7, 0x3A
    ctx->pc = 0x227f80u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)58 << 16));
    // 0x227f84: 0x8de2f57c  lw          $v0, -0xA84($t7)
    ctx->pc = 0x227f84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 4294964604)));
    // 0x227f88: 0x3e00008  jr          $ra
    ctx->pc = 0x227F88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x227F8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227F88u;
        // 0x227f8c: 0xade0f57c  sw          $zero, -0xA84($t7) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 15), 4294964604), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x227F88u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x227F90u;
    // 0x227f90: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x227f90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x227f94: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x227f94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x227f98: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x227f98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x227f9c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x227f9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x227fa0: 0x8089f40  j           func_227D00
    ctx->pc = 0x227FA0u;
    ctx->pc = 0x227FA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x227FA0u;
    // 0x227fa4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227D00u;
    sub_00227D00_0x227d00(rdram, ctx, runtime); return;
    ctx->pc = 0x227FA8u;
    // 0x227fa8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x227fa8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x227fac: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x227facu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x227fb0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x227fb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x227fb4: 0x24060044  addiu       $a2, $zero, 0x44
    ctx->pc = 0x227fb4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
    // 0x227fb8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x227fb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x227fbc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x227fbcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x227fc0: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x227fc0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x227fc4: 0xc049cb6  jal         func_1272D8
    ctx->pc = 0x227FC4u;
    SET_GPR_U32(ctx, 31, 0x227FCCu);
    ctx->pc = 0x227FC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x227FC4u;
    // 0x227fc8: 0x2484f538  addiu       $a0, $a0, -0xAC8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294964536));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1272D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1272D8u, 0x227FC4u, 0x227FCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x227FCCu;
label_227fcc:
    // 0x227fcc: 0x3c0f003a  lui         $t7, 0x3A
    ctx->pc = 0x227fccu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)58 << 16));
    // 0x227fd0: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x227fd0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x227fd4: 0x8de9f204  lw          $t1, -0xDFC($t7)
    ctx->pc = 0x227fd4u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 4294963716)));
    // 0x227fd8: 0xa68c0  sll         $t5, $t2, 3
    ctx->pc = 0x227fd8u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 10), 3));
label_227fdc:
    // 0x227fdc: 0x1b06021  addu        $t4, $t5, $s0
    ctx->pc = 0x227fdcu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 16)));
    // 0x227fe0: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x227fe0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x227fe4: 0x8d8e0000  lw          $t6, 0x0($t4)
    ctx->pc = 0x227fe4u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x227fe8: 0x1a96821  addu        $t5, $t5, $t1
    ctx->pc = 0x227fe8u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 9)));
    // 0x227fec: 0xadae0000  sw          $t6, 0x0($t5)
    ctx->pc = 0x227fecu;
    WRITE32(ADD32(GPR_U32(ctx, 13), 0), GPR_U32(ctx, 14));
    // 0x227ff0: 0x8d8f0004  lw          $t7, 0x4($t4)
    ctx->pc = 0x227ff0u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 4)));
    // 0x227ff4: 0xadaf0004  sw          $t7, 0x4($t5)
    ctx->pc = 0x227ff4u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 4), GPR_U32(ctx, 15));
    // 0x227ff8: 0x8d8e0004  lw          $t6, 0x4($t4)
    ctx->pc = 0x227ff8u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 4)));
    // 0x227ffc: 0x11c00003  beqz        $t6, . + 4 + (0x3 << 2)
    ctx->pc = 0x227FFCu;
    {
        const bool branch_taken_0x227ffc = (GPR_U64(ctx, 14) == GPR_U64(ctx, 0));
        ctx->pc = 0x228000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227FFCu;
        // 0x228000: 0x294b0008  slti        $t3, $t2, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 11, ((int64_t)GPR_S64(ctx, 10) < (int64_t)(int32_t)8) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x227ffc) {
            ctx->pc = 0x22800Cu;
            goto label_22800c;
        }
    }
    ctx->pc = 0x228004u;
    // 0x228004: 0x1560fff5  bnez        $t3, . + 4 + (-0xB << 2)
    ctx->pc = 0x228004u;
    {
        const bool branch_taken_0x228004 = (GPR_U64(ctx, 11) != GPR_U64(ctx, 0));
        ctx->pc = 0x228008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x228004u;
        // 0x228008: 0xa68c0  sll         $t5, $t2, 3 (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 10), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x228004) {
            ctx->pc = 0x227FDCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_227fdc;
        }
    }
    ctx->pc = 0x22800Cu;
label_22800c:
    // 0x22800c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x22800cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x228010: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x228010u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x228014: 0x3e00008  jr          $ra
    ctx->pc = 0x228014u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x228018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x228014u;
        // 0x228018: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x228014u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22801Cu;
    // 0x22801c: 0x0  nop
    ctx->pc = 0x22801cu;
    // NOP
    // 0x228020: 0x3c0f003a  lui         $t7, 0x3A
    ctx->pc = 0x228020u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)58 << 16));
    // 0x228024: 0x602d  daddu       $t4, $zero, $zero
    ctx->pc = 0x228024u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x228028: 0x8deef204  lw          $t6, -0xDFC($t7)
    ctx->pc = 0x228028u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 4294963716)));
    // 0x22802c: 0x8dcd0004  lw          $t5, 0x4($t6)
    ctx->pc = 0x22802cu;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 4)));
label_228030:
    // 0x228030: 0x1c0102d  daddu       $v0, $t6, $zero
    ctx->pc = 0x228030u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
    // 0x228034: 0x8dcf0000  lw          $t7, 0x0($t6)
    ctx->pc = 0x228034u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x228038: 0x11e40008  beq         $t7, $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x228038u;
    {
        const bool branch_taken_0x228038 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 4));
        ctx->pc = 0x22803Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x228038u;
        // 0x22803c: 0x25ce0008  addiu       $t6, $t6, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x228038) {
            ctx->pc = 0x22805Cu;
            goto label_22805c;
        }
    }
    ctx->pc = 0x228040u;
    // 0x228040: 0x11a00006  beqz        $t5, . + 4 + (0x6 << 2)
    ctx->pc = 0x228040u;
    {
        const bool branch_taken_0x228040 = (GPR_U64(ctx, 13) == GPR_U64(ctx, 0));
        ctx->pc = 0x228044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x228040u;
        // 0x228044: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x228040) {
            ctx->pc = 0x22805Cu;
            goto label_22805c;
        }
    }
    ctx->pc = 0x228048u;
    // 0x228048: 0x258c0001  addiu       $t4, $t4, 0x1
    ctx->pc = 0x228048u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 1));
    // 0x22804c: 0x298f0008  slti        $t7, $t4, 0x8
    ctx->pc = 0x22804cu;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 12) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x228050: 0x55e0fff7  bnel        $t7, $zero, . + 4 + (-0x9 << 2)
    ctx->pc = 0x228050u;
    {
        const bool branch_taken_0x228050 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        if (branch_taken_0x228050) {
            ctx->pc = 0x228054u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x228050u;
            // 0x228054: 0x8dcd0004  lw          $t5, 0x4($t6) (Delay Slot)
            SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x228030u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_228030;
        }
    }
    ctx->pc = 0x228058u;
    // 0x228058: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x228058u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_22805c:
    // 0x22805c: 0x3e00008  jr          $ra
    ctx->pc = 0x22805Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22805Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x228064u;
    // 0x228064: 0x0  nop
    ctx->pc = 0x228064u;
    // NOP
    // 0x228068: 0x3c0f003a  lui         $t7, 0x3A
    ctx->pc = 0x228068u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)58 << 16));
    // 0x22806c: 0x8deef204  lw          $t6, -0xDFC($t7)
    ctx->pc = 0x22806cu;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 4294963716)));
    // 0x228070: 0x8dc20040  lw          $v0, 0x40($t6)
    ctx->pc = 0x228070u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 64)));
    // 0x228074: 0x3e00008  jr          $ra
    ctx->pc = 0x228074u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x228078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x228074u;
        // 0x228078: 0x2102b  sltu        $v0, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x228074u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22807Cu;
    // 0x22807c: 0x0  nop
    ctx->pc = 0x22807cu;
    // NOP
    // 0x228080: 0x3c0f003a  lui         $t7, 0x3A
    ctx->pc = 0x228080u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)58 << 16));
    // 0x228084: 0x4202b  sltu        $a0, $zero, $a0
    ctx->pc = 0x228084u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x228088: 0x8deef204  lw          $t6, -0xDFC($t7)
    ctx->pc = 0x228088u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 4294963716)));
    // 0x22808c: 0x3e00008  jr          $ra
    ctx->pc = 0x22808Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x228090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22808Cu;
        // 0x228090: 0xadc40040  sw          $a0, 0x40($t6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 14), 64), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22808Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x228094u;
    // 0x228094: 0x0  nop
    ctx->pc = 0x228094u;
    // NOP
    if (ctx->pc == 0x228094u) { ctx->pc = 0x228098u; }
}
