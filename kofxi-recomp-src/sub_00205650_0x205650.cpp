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

// Function: sub_00205650
// Address: 0x205650 - 0x205750
void sub_00205650_0x205650(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00205650_0x205650");
#endif

    switch (ctx->pc) {
        case 0x20567cu: goto label_20567c;
        case 0x2056acu: goto label_2056ac;
        case 0x2056e0u: goto label_2056e0;
        case 0x205714u: goto label_205714;
        case 0x20573cu: goto label_20573c;
        case 0x205744u: goto label_205744;
        default: break;
    }

    ctx->pc = 0x205650u;

    // 0x205650: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x205650u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x205654: 0x3c0201c1  lui         $v0, 0x1C1
    ctx->pc = 0x205654u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)449 << 16));
    // 0x205658: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x205658u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x20565c: 0x27a4001f  addiu       $a0, $sp, 0x1F
    ctx->pc = 0x20565cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 31));
    // 0x205660: 0x8c429bf8  lw          $v0, -0x6408($v0)
    ctx->pc = 0x205660u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294941688)));
    // 0x205664: 0x27a5001e  addiu       $a1, $sp, 0x1E
    ctx->pc = 0x205664u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 30));
    // 0x205668: 0x27a6001d  addiu       $a2, $sp, 0x1D
    ctx->pc = 0x205668u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 29));
    // 0x20566c: 0x90470065  lbu         $a3, 0x65($v0)
    ctx->pc = 0x20566cu;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 101)));
    // 0x205670: 0x90420064  lbu         $v0, 0x64($v0)
    ctx->pc = 0x205670u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 100)));
    // 0x205674: 0xc080e58  jal         func_203960
    ctx->pc = 0x205674u;
    SET_GPR_U32(ctx, 31, 0x20567Cu);
    ctx->pc = 0x205678u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x205674u;
    // 0x205678: 0x24480001  addiu       $t0, $v0, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x203960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x203960u, 0x205674u, 0x20567Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20567Cu;
label_20567c:
    // 0x20567c: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x20567cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
    // 0x205680: 0x93a5001f  lbu         $a1, 0x1F($sp)
    ctx->pc = 0x205680u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 31)));
    // 0x205684: 0x90469480  lbu         $a2, -0x6B80($v0)
    ctx->pc = 0x205684u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294939776)));
    // 0x205688: 0x61840  sll         $v1, $a2, 1
    ctx->pc = 0x205688u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x20568c: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x20568cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x205690: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x205690u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x205694: 0x2442ea26  addiu       $v0, $v0, -0x15DA
    ctx->pc = 0x205694u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961702));
    // 0x205698: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x205698u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x20569c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x20569cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2056a0: 0x94460000  lhu         $a2, 0x0($v0)
    ctx->pc = 0x2056a0u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2056a4: 0xc0d0b04  jal         func_342C10
    ctx->pc = 0x2056A4u;
    SET_GPR_U32(ctx, 31, 0x2056ACu);
    ctx->pc = 0x2056A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2056A4u;
    // 0x2056a8: 0x24040020  addiu       $a0, $zero, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x342C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x342C10u, 0x2056A4u, 0x2056ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2056ACu;
label_2056ac:
    // 0x2056ac: 0xa3a2001f  sb          $v0, 0x1F($sp)
    ctx->pc = 0x2056acu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 31), (uint8_t)GPR_U32(ctx, 2));
    // 0x2056b0: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x2056b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
    // 0x2056b4: 0x93a5001e  lbu         $a1, 0x1E($sp)
    ctx->pc = 0x2056b4u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 30)));
    // 0x2056b8: 0x90469480  lbu         $a2, -0x6B80($v0)
    ctx->pc = 0x2056b8u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294939776)));
    // 0x2056bc: 0x61840  sll         $v1, $a2, 1
    ctx->pc = 0x2056bcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x2056c0: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x2056c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x2056c4: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x2056c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x2056c8: 0x2442ea26  addiu       $v0, $v0, -0x15DA
    ctx->pc = 0x2056c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961702));
    // 0x2056cc: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2056ccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2056d0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2056d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2056d4: 0x94460000  lhu         $a2, 0x0($v0)
    ctx->pc = 0x2056d4u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2056d8: 0xc0d0b28  jal         func_342CA0
    ctx->pc = 0x2056D8u;
    SET_GPR_U32(ctx, 31, 0x2056E0u);
    ctx->pc = 0x2056DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2056D8u;
    // 0x2056dc: 0x24040020  addiu       $a0, $zero, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x342CA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x342CA0u, 0x2056D8u, 0x2056E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2056E0u;
label_2056e0:
    // 0x2056e0: 0xa3a2001e  sb          $v0, 0x1E($sp)
    ctx->pc = 0x2056e0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 30), (uint8_t)GPR_U32(ctx, 2));
    // 0x2056e4: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x2056e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
    // 0x2056e8: 0x93a5001d  lbu         $a1, 0x1D($sp)
    ctx->pc = 0x2056e8u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 29)));
    // 0x2056ec: 0x90469480  lbu         $a2, -0x6B80($v0)
    ctx->pc = 0x2056ecu;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294939776)));
    // 0x2056f0: 0x61840  sll         $v1, $a2, 1
    ctx->pc = 0x2056f0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x2056f4: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x2056f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x2056f8: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x2056f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x2056fc: 0x2442ea26  addiu       $v0, $v0, -0x15DA
    ctx->pc = 0x2056fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961702));
    // 0x205700: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x205700u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x205704: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x205704u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x205708: 0x94460000  lhu         $a2, 0x0($v0)
    ctx->pc = 0x205708u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x20570c: 0xc0d0b28  jal         func_342CA0
    ctx->pc = 0x20570Cu;
    SET_GPR_U32(ctx, 31, 0x205714u);
    ctx->pc = 0x205710u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20570Cu;
    // 0x205710: 0x24040020  addiu       $a0, $zero, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x342CA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x342CA0u, 0x20570Cu, 0x205714u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x205714u;
label_205714:
    // 0x205714: 0xa3a2001d  sb          $v0, 0x1D($sp)
    ctx->pc = 0x205714u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 29), (uint8_t)GPR_U32(ctx, 2));
    // 0x205718: 0x3c0201c1  lui         $v0, 0x1C1
    ctx->pc = 0x205718u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)449 << 16));
    // 0x20571c: 0x93a4001f  lbu         $a0, 0x1F($sp)
    ctx->pc = 0x20571cu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 31)));
    // 0x205720: 0x8c429bf8  lw          $v0, -0x6408($v0)
    ctx->pc = 0x205720u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294941688)));
    // 0x205724: 0x93a5001e  lbu         $a1, 0x1E($sp)
    ctx->pc = 0x205724u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 30)));
    // 0x205728: 0x93a6001d  lbu         $a2, 0x1D($sp)
    ctx->pc = 0x205728u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 29)));
    // 0x20572c: 0x90470065  lbu         $a3, 0x65($v0)
    ctx->pc = 0x20572cu;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 101)));
    // 0x205730: 0x90420064  lbu         $v0, 0x64($v0)
    ctx->pc = 0x205730u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 100)));
    // 0x205734: 0xc080ee8  jal         func_203BA0
    ctx->pc = 0x205734u;
    SET_GPR_U32(ctx, 31, 0x20573Cu);
    ctx->pc = 0x205738u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x205734u;
    // 0x205738: 0x24480001  addiu       $t0, $v0, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x203BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x203BA0u, 0x205734u, 0x20573Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20573Cu;
label_20573c:
    // 0x20573c: 0xc081494  jal         func_205250
    ctx->pc = 0x20573Cu;
    SET_GPR_U32(ctx, 31, 0x205744u);
    ctx->pc = 0x205250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x205250u, 0x20573Cu, 0x205744u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x205744u;
label_205744:
    // 0x205744: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x205744u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x205748: 0x3e00008  jr          $ra
    ctx->pc = 0x205748u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20574Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205748u;
        // 0x20574c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x205748u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x205750u;
}
