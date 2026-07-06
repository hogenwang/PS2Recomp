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

// Function: sub_001FD698
// Address: 0x1fd698 - 0x1fd738
void sub_001FD698_0x1fd698(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FD698_0x1fd698");
#endif

    switch (ctx->pc) {
        case 0x1fd6bcu: goto label_1fd6bc;
        case 0x1fd6ccu: goto label_1fd6cc;
        case 0x1fd6e8u: goto label_1fd6e8;
        case 0x1fd6f8u: goto label_1fd6f8;
        default: break;
    }

    ctx->pc = 0x1fd698u;

    // 0x1fd698: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1fd698u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1fd69c: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x1fd69cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1fd6a0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1fd6a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1fd6a4: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1fd6a4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fd6a8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1fd6a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1fd6ac: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1fd6acu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fd6b0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1fd6b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1fd6b4: 0xc07f62e  jal         func_1FD8B8
    ctx->pc = 0x1FD6B4u;
    SET_GPR_U32(ctx, 31, 0x1FD6BCu);
    ctx->pc = 0x1FD6B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FD6B4u;
    // 0x1fd6b8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD8B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD8B8u, 0x1FD6B4u, 0x1FD6BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FD6BCu;
label_1fd6bc:
    // 0x1fd6bc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1fd6bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fd6c0: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1fd6c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1fd6c4: 0xc07f5fe  jal         func_1FD7F8
    ctx->pc = 0x1FD6C4u;
    SET_GPR_U32(ctx, 31, 0x1FD6CCu);
    ctx->pc = 0x1FD6C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FD6C4u;
    // 0x1fd6c8: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD7F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD7F8u, 0x1FD6C4u, 0x1FD6CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FD6CCu;
label_1fd6cc:
    // 0x1fd6cc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1fd6ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fd6d0: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x1fd6d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1fd6d4: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1fd6d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1fd6d8: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x1FD6D8u;
    {
        const bool branch_taken_0x1fd6d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FD6DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD6D8u;
        // 0x1fd6dc: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fd6d8) {
            ctx->pc = 0x1FD718u;
            goto label_1fd718;
        }
    }
    ctx->pc = 0x1FD6E0u;
    // 0x1fd6e0: 0xc07f62e  jal         func_1FD8B8
    ctx->pc = 0x1FD6E0u;
    SET_GPR_U32(ctx, 31, 0x1FD6E8u);
    ctx->pc = 0x1FD8B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD8B8u, 0x1FD6E0u, 0x1FD6E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FD6E8u;
label_1fd6e8:
    // 0x1fd6e8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1fd6e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fd6ec: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x1fd6ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1fd6f0: 0xc07f5fe  jal         func_1FD7F8
    ctx->pc = 0x1FD6F0u;
    SET_GPR_U32(ctx, 31, 0x1FD6F8u);
    ctx->pc = 0x1FD6F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FD6F0u;
    // 0x1fd6f4: 0x24060005  addiu       $a2, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD7F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD7F8u, 0x1FD6F0u, 0x1FD6F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FD6F8u;
label_1fd6f8:
    // 0x1fd6f8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1fd6f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fd6fc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1fd6fcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1fd700: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x1fd700u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1fd704: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1fd704u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1fd708: 0x24060006  addiu       $a2, $zero, 0x6
    ctx->pc = 0x1fd708u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1fd70c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1fd70cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1fd710: 0x807f62e  j           func_1FD8B8
    ctx->pc = 0x1FD710u;
    ctx->pc = 0x1FD714u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FD710u;
    // 0x1fd714: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD8B8u;
    sub_001FD8B8_0x1fd8b8(rdram, ctx, runtime); return;
    ctx->pc = 0x1FD718u;
label_1fd718:
    // 0x1fd718: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1fd718u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1fd71c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1fd71cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1fd720: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1fd720u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1fd724: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1fd724u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1fd728: 0x24060006  addiu       $a2, $zero, 0x6
    ctx->pc = 0x1fd728u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1fd72c: 0x807f62e  j           func_1FD8B8
    ctx->pc = 0x1FD72Cu;
    ctx->pc = 0x1FD730u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FD72Cu;
    // 0x1fd730: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD8B8u;
    sub_001FD8B8_0x1fd8b8(rdram, ctx, runtime); return;
    ctx->pc = 0x1FD734u;
    // 0x1fd734: 0x0  nop
    ctx->pc = 0x1fd734u;
    // NOP
    if (ctx->pc == 0x1fd734u) { ctx->pc = 0x1fd738u; }
}
