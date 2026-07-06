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

// Function: sub_0020CD00
// Address: 0x20cd00 - 0x20cde0
void sub_0020CD00_0x20cd00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020CD00_0x20cd00");
#endif

    switch (ctx->pc) {
        case 0x20cd10u: goto label_20cd10;
        case 0x20cd34u: goto label_20cd34;
        case 0x20cd48u: goto label_20cd48;
        case 0x20cd5cu: goto label_20cd5c;
        case 0x20cd70u: goto label_20cd70;
        case 0x20cd8cu: goto label_20cd8c;
        case 0x20cda0u: goto label_20cda0;
        case 0x20cdb4u: goto label_20cdb4;
        case 0x20cdc8u: goto label_20cdc8;
        default: break;
    }

    ctx->pc = 0x20cd00u;

    // 0x20cd00: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x20cd00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x20cd04: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x20cd04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x20cd08: 0xc083310  jal         func_20CC40
    ctx->pc = 0x20CD08u;
    SET_GPR_U32(ctx, 31, 0x20CD10u);
    ctx->pc = 0x20CC40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20CC40u, 0x20CD08u, 0x20CD10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20CD10u;
label_20cd10:
    // 0x20cd10: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x20cd10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
    // 0x20cd14: 0x90429490  lbu         $v0, -0x6B70($v0)
    ctx->pc = 0x20cd14u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294939792)));
    // 0x20cd18: 0x14400017  bnez        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x20CD18u;
    {
        const bool branch_taken_0x20cd18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x20cd18) {
            ctx->pc = 0x20CD78u;
            goto label_20cd78;
        }
    }
    ctx->pc = 0x20CD20u;
    // 0x20cd20: 0x3c06009f  lui         $a2, 0x9F
    ctx->pc = 0x20cd20u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)159 << 16));
    // 0x20cd24: 0x24040050  addiu       $a0, $zero, 0x50
    ctx->pc = 0x20cd24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x20cd28: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x20cd28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x20cd2c: 0xc0832d4  jal         func_20CB50
    ctx->pc = 0x20CD2Cu;
    SET_GPR_U32(ctx, 31, 0x20CD34u);
    ctx->pc = 0x20CD30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20CD2Cu;
    // 0x20cd30: 0x24c69510  addiu       $a2, $a2, -0x6AF0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294939920));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20CB50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20CB50u, 0x20CD2Cu, 0x20CD34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20CD34u;
label_20cd34:
    // 0x20cd34: 0x3c06009f  lui         $a2, 0x9F
    ctx->pc = 0x20cd34u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)159 << 16));
    // 0x20cd38: 0x240400e0  addiu       $a0, $zero, 0xE0
    ctx->pc = 0x20cd38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 224));
    // 0x20cd3c: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x20cd3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x20cd40: 0xc0832d4  jal         func_20CB50
    ctx->pc = 0x20CD40u;
    SET_GPR_U32(ctx, 31, 0x20CD48u);
    ctx->pc = 0x20CD44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20CD40u;
    // 0x20cd44: 0x24c694d0  addiu       $a2, $a2, -0x6B30 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294939856));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20CB50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20CB50u, 0x20CD40u, 0x20CD48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20CD48u;
label_20cd48:
    // 0x20cd48: 0x3c06009f  lui         $a2, 0x9F
    ctx->pc = 0x20cd48u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)159 << 16));
    // 0x20cd4c: 0x24040176  addiu       $a0, $zero, 0x176
    ctx->pc = 0x20cd4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 374));
    // 0x20cd50: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x20cd50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x20cd54: 0xc0832d4  jal         func_20CB50
    ctx->pc = 0x20CD54u;
    SET_GPR_U32(ctx, 31, 0x20CD5Cu);
    ctx->pc = 0x20CD58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20CD54u;
    // 0x20cd58: 0x24c69530  addiu       $a2, $a2, -0x6AD0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294939952));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20CB50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20CB50u, 0x20CD54u, 0x20CD5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20CD5Cu;
label_20cd5c:
    // 0x20cd5c: 0x3c06009f  lui         $a2, 0x9F
    ctx->pc = 0x20cd5cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)159 << 16));
    // 0x20cd60: 0x24040206  addiu       $a0, $zero, 0x206
    ctx->pc = 0x20cd60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 518));
    // 0x20cd64: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x20cd64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x20cd68: 0xc0832d4  jal         func_20CB50
    ctx->pc = 0x20CD68u;
    SET_GPR_U32(ctx, 31, 0x20CD70u);
    ctx->pc = 0x20CD6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20CD68u;
    // 0x20cd6c: 0x24c694b0  addiu       $a2, $a2, -0x6B50 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294939824));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20CB50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20CB50u, 0x20CD68u, 0x20CD70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20CD70u;
label_20cd70:
    // 0x20cd70: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x20CD70u;
    {
        const bool branch_taken_0x20cd70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20CD74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20CD70u;
        // 0x20cd74: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20cd70) {
            ctx->pc = 0x20CDCCu;
            goto label_20cdcc;
        }
    }
    ctx->pc = 0x20CD78u;
label_20cd78:
    // 0x20cd78: 0x3c06009f  lui         $a2, 0x9F
    ctx->pc = 0x20cd78u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)159 << 16));
    // 0x20cd7c: 0x24040176  addiu       $a0, $zero, 0x176
    ctx->pc = 0x20cd7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 374));
    // 0x20cd80: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x20cd80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x20cd84: 0xc0832d4  jal         func_20CB50
    ctx->pc = 0x20CD84u;
    SET_GPR_U32(ctx, 31, 0x20CD8Cu);
    ctx->pc = 0x20CD88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20CD84u;
    // 0x20cd88: 0x24c69510  addiu       $a2, $a2, -0x6AF0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294939920));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20CB50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20CB50u, 0x20CD84u, 0x20CD8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20CD8Cu;
label_20cd8c:
    // 0x20cd8c: 0x3c06009f  lui         $a2, 0x9F
    ctx->pc = 0x20cd8cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)159 << 16));
    // 0x20cd90: 0x24040206  addiu       $a0, $zero, 0x206
    ctx->pc = 0x20cd90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 518));
    // 0x20cd94: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x20cd94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x20cd98: 0xc0832d4  jal         func_20CB50
    ctx->pc = 0x20CD98u;
    SET_GPR_U32(ctx, 31, 0x20CDA0u);
    ctx->pc = 0x20CD9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20CD98u;
    // 0x20cd9c: 0x24c694d0  addiu       $a2, $a2, -0x6B30 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294939856));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20CB50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20CB50u, 0x20CD98u, 0x20CDA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20CDA0u;
label_20cda0:
    // 0x20cda0: 0x3c06009f  lui         $a2, 0x9F
    ctx->pc = 0x20cda0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)159 << 16));
    // 0x20cda4: 0x24040050  addiu       $a0, $zero, 0x50
    ctx->pc = 0x20cda4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x20cda8: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x20cda8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x20cdac: 0xc0832d4  jal         func_20CB50
    ctx->pc = 0x20CDACu;
    SET_GPR_U32(ctx, 31, 0x20CDB4u);
    ctx->pc = 0x20CDB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20CDACu;
    // 0x20cdb0: 0x24c69530  addiu       $a2, $a2, -0x6AD0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294939952));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20CB50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20CB50u, 0x20CDACu, 0x20CDB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20CDB4u;
label_20cdb4:
    // 0x20cdb4: 0x3c06009f  lui         $a2, 0x9F
    ctx->pc = 0x20cdb4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)159 << 16));
    // 0x20cdb8: 0x240400e0  addiu       $a0, $zero, 0xE0
    ctx->pc = 0x20cdb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 224));
    // 0x20cdbc: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x20cdbcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x20cdc0: 0xc0832d4  jal         func_20CB50
    ctx->pc = 0x20CDC0u;
    SET_GPR_U32(ctx, 31, 0x20CDC8u);
    ctx->pc = 0x20CDC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20CDC0u;
    // 0x20cdc4: 0x24c694b0  addiu       $a2, $a2, -0x6B50 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294939824));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20CB50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20CB50u, 0x20CDC0u, 0x20CDC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20CDC8u;
label_20cdc8:
    // 0x20cdc8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x20cdc8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_20cdcc:
    // 0x20cdcc: 0x3e00008  jr          $ra
    ctx->pc = 0x20CDCCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20CDD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20CDCCu;
        // 0x20cdd0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20CDCCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20CDD4u;
    // 0x20cdd4: 0x0  nop
    ctx->pc = 0x20cdd4u;
    // NOP
    // 0x20cdd8: 0x0  nop
    ctx->pc = 0x20cdd8u;
    // NOP
    // 0x20cddc: 0x0  nop
    ctx->pc = 0x20cddcu;
    // NOP
}
