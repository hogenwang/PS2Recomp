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

// Function: sub_001C6668
// Address: 0x1c6668 - 0x1c6748
void sub_001C6668_0x1c6668(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C6668_0x1c6668");
#endif

    switch (ctx->pc) {
        case 0x1c6680u: goto label_1c6680;
        case 0x1c66a0u: goto label_1c66a0;
        case 0x1c66dcu: goto label_1c66dc;
        case 0x1c6700u: goto label_1c6700;
        case 0x1c671cu: goto label_1c671c;
        case 0x1c6728u: goto label_1c6728;
        case 0x1c6730u: goto label_1c6730;
        default: break;
    }

    ctx->pc = 0x1c6668u;

    // 0x1c6668: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c6668u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c666c: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1C666Cu;
    {
        const bool branch_taken_0x1c666c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C6670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C666Cu;
        // 0x1c6670: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c666c) {
            ctx->pc = 0x1C6688u;
            goto label_1c6688;
        }
    }
    ctx->pc = 0x1C6674u;
    // 0x1c6674: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x1c6674u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x1c6678: 0xc071ac8  jal         func_1C6B20
    ctx->pc = 0x1C6678u;
    SET_GPR_U32(ctx, 31, 0x1C6680u);
    ctx->pc = 0x1C667Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C6678u;
    // 0x1c667c: 0x2484a810  addiu       $a0, $a0, -0x57F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294944784));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C6B20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C6B20u, 0x1C6678u, 0x1C6680u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6680u;
label_1c6680:
    // 0x1c6680: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x1C6680u;
    {
        const bool branch_taken_0x1c6680 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C6684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6680u;
        // 0x1c6684: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6680) {
            ctx->pc = 0x1C66F0u;
            goto label_1c66f0;
        }
    }
    ctx->pc = 0x1C6688u;
label_1c6688:
    // 0x1c6688: 0x24860038  addiu       $a2, $a0, 0x38
    ctx->pc = 0x1c6688u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 56));
    // 0x1c668c: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x1c668cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1c6690: 0x1045000c  beq         $v0, $a1, . + 4 + (0xC << 2)
    ctx->pc = 0x1C6690u;
    {
        const bool branch_taken_0x1c6690 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        ctx->pc = 0x1C6694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6690u;
        // 0x1c6694: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6690) {
            ctx->pc = 0x1C66C4u;
            goto label_1c66c4;
        }
    }
    ctx->pc = 0x1C6698u;
    // 0x1c6698: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1c6698u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1c669c: 0x0  nop
    ctx->pc = 0x1c669cu;
    // NOP
label_1c66a0:
    // 0x1c66a0: 0x28620010  slti        $v0, $v1, 0x10
    ctx->pc = 0x1c66a0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x1c66a4: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1C66A4u;
    {
        const bool branch_taken_0x1c66a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C66A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C66A4u;
        // 0x1c66a8: 0x24c60020  addiu       $a2, $a2, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c66a4) {
            ctx->pc = 0x1C66C4u;
            goto label_1c66c4;
        }
    }
    ctx->pc = 0x1C66ACu;
    // 0x1c66ac: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x1c66acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1c66b0: 0x0  nop
    ctx->pc = 0x1c66b0u;
    // NOP
    // 0x1c66b4: 0x0  nop
    ctx->pc = 0x1c66b4u;
    // NOP
    // 0x1c66b8: 0x0  nop
    ctx->pc = 0x1c66b8u;
    // NOP
    // 0x1c66bc: 0x5445fff8  bnel        $v0, $a1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x1C66BCu;
    {
        const bool branch_taken_0x1c66bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        if (branch_taken_0x1c66bc) {
            ctx->pc = 0x1C66C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C66BCu;
            // 0x1c66c0: 0x24630001  addiu       $v1, $v1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C66A0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1c66a0;
        }
    }
    ctx->pc = 0x1C66C4u;
label_1c66c4:
    // 0x1c66c4: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x1c66c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1c66c8: 0x54620007  bnel        $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1C66C8u;
    {
        const bool branch_taken_0x1c66c8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1c66c8) {
            ctx->pc = 0x1C66CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C66C8u;
            // 0x1c66cc: 0x31940  sll         $v1, $v1, 5 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C66E8u;
            goto label_1c66e8;
        }
    }
    ctx->pc = 0x1C66D0u;
    // 0x1c66d0: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x1c66d0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x1c66d4: 0xc071ac8  jal         func_1C6B20
    ctx->pc = 0x1C66D4u;
    SET_GPR_U32(ctx, 31, 0x1C66DCu);
    ctx->pc = 0x1C66D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C66D4u;
    // 0x1c66d8: 0x2484a840  addiu       $a0, $a0, -0x57C0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294944832));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C6B20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C6B20u, 0x1C66D4u, 0x1C66DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C66DCu;
label_1c66dc:
    // 0x1c66dc: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1C66DCu;
    {
        const bool branch_taken_0x1c66dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C66E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C66DCu;
        // 0x1c66e0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c66dc) {
            ctx->pc = 0x1C66F0u;
            goto label_1c66f0;
        }
    }
    ctx->pc = 0x1C66E4u;
    // 0x1c66e4: 0x0  nop
    ctx->pc = 0x1c66e4u;
    // NOP
label_1c66e8:
    // 0x1c66e8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1c66e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1c66ec: 0x8c62003c  lw          $v0, 0x3C($v1)
    ctx->pc = 0x1c66ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 60)));
label_1c66f0:
    // 0x1c66f0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c66f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c66f4: 0x3e00008  jr          $ra
    ctx->pc = 0x1C66F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C66F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C66F4u;
        // 0x1c66f8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C66F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C66FCu;
    // 0x1c66fc: 0x0  nop
    ctx->pc = 0x1c66fcu;
    // NOP
label_1c6700:
    // 0x1c6700: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1c6700u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1c6704: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c6704u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c6708: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1c6708u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c670c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1c670cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1c6710: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1c6710u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1c6714: 0xc071aae  jal         func_1C6AB8
    ctx->pc = 0x1C6714u;
    SET_GPR_U32(ctx, 31, 0x1C671Cu);
    ctx->pc = 0x1C6718u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C6714u;
    // 0x1c6718: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C6AB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C6AB8u, 0x1C6714u, 0x1C671Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C671Cu;
label_1c671c:
    // 0x1c671c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c671cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6720: 0xc0719d2  jal         func_1C6748
    ctx->pc = 0x1C6720u;
    SET_GPR_U32(ctx, 31, 0x1C6728u);
    ctx->pc = 0x1C6724u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C6720u;
    // 0x1c6724: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C6748u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C6748u, 0x1C6720u, 0x1C6728u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6728u;
label_1c6728:
    // 0x1c6728: 0xc071ab0  jal         func_1C6AC0
    ctx->pc = 0x1C6728u;
    SET_GPR_U32(ctx, 31, 0x1C6730u);
    ctx->pc = 0x1C672Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C6728u;
    // 0x1c672c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C6AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C6AC0u, 0x1C6728u, 0x1C6730u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6730u;
label_1c6730:
    // 0x1c6730: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1c6730u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c6734: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1c6734u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6738: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1c6738u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c673c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c673cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c6740: 0x3e00008  jr          $ra
    ctx->pc = 0x1C6740u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C6744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6740u;
        // 0x1c6744: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C6740u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C6748u;
}
