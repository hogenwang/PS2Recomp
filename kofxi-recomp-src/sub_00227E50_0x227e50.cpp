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

// Function: sub_00227E50
// Address: 0x227e50 - 0x227ec0
void sub_00227E50_0x227e50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00227E50_0x227e50");
#endif

    switch (ctx->pc) {
        case 0x227e50u: goto label_227e50;
        case 0x227e54u: goto label_227e54;
        case 0x227e58u: goto label_227e58;
        case 0x227e5cu: goto label_227e5c;
        case 0x227e60u: goto label_227e60;
        case 0x227e64u: goto label_227e64;
        case 0x227e68u: goto label_227e68;
        case 0x227e6cu: goto label_227e6c;
        case 0x227e70u: goto label_227e70;
        case 0x227e74u: goto label_227e74;
        case 0x227e78u: goto label_227e78;
        case 0x227e7cu: goto label_227e7c;
        case 0x227e80u: goto label_227e80;
        case 0x227e84u: goto label_227e84;
        case 0x227e88u: goto label_227e88;
        case 0x227e8cu: goto label_227e8c;
        case 0x227e90u: goto label_227e90;
        case 0x227e94u: goto label_227e94;
        case 0x227e98u: goto label_227e98;
        case 0x227e9cu: goto label_227e9c;
        case 0x227ea0u: goto label_227ea0;
        case 0x227ea4u: goto label_227ea4;
        case 0x227ea8u: goto label_227ea8;
        case 0x227eacu: goto label_227eac;
        case 0x227eb0u: goto label_227eb0;
        case 0x227eb4u: goto label_227eb4;
        case 0x227eb8u: goto label_227eb8;
        case 0x227ebcu: goto label_227ebc;
        default: break;
    }

    ctx->pc = 0x227e50u;

label_227e50:
    // 0x227e50: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x227e50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_227e54:
    // 0x227e54: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x227e54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_227e58:
    // 0x227e58: 0xc089f4c  jal         func_227D30
label_227e5c:
    if (ctx->pc == 0x227E5Cu) {
        ctx->pc = 0x227E60u;
        goto label_227e60;
    }
    ctx->pc = 0x227E58u;
    SET_GPR_U32(ctx, 31, 0x227E60u);
    ctx->pc = 0x227D30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227D30u, 0x227E58u, 0x227E60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x227E60u;
label_227e60:
    // 0x227e60: 0x14400012  bnez        $v0, . + 4 + (0x12 << 2)
label_227e64:
    if (ctx->pc == 0x227E64u) {
        ctx->pc = 0x227E64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227E60u;
        // 0x227e64: 0x782d  daddu       $t7, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x227E68u;
        goto label_227e68;
    }
    ctx->pc = 0x227E60u;
    {
        const bool branch_taken_0x227e60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x227E64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227E60u;
        // 0x227e64: 0x782d  daddu       $t7, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x227e60) {
            ctx->pc = 0x227EACu;
            goto label_227eac;
        }
    }
    ctx->pc = 0x227E68u;
label_227e68:
    // 0x227e68: 0xc089f76  jal         func_227DD8
label_227e6c:
    if (ctx->pc == 0x227E6Cu) {
        ctx->pc = 0x227E70u;
        goto label_227e70;
    }
    ctx->pc = 0x227E68u;
    SET_GPR_U32(ctx, 31, 0x227E70u);
    ctx->pc = 0x227DD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227DD8u, 0x227E68u, 0x227E70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x227E70u;
label_227e70:
    // 0x227e70: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x227e70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_227e74:
    // 0x227e74: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
label_227e78:
    if (ctx->pc == 0x227E78u) {
        ctx->pc = 0x227E78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227E74u;
        // 0x227e78: 0x782d  daddu       $t7, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x227E7Cu;
        goto label_227e7c;
    }
    ctx->pc = 0x227E74u;
    {
        const bool branch_taken_0x227e74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x227E78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227E74u;
        // 0x227e78: 0x782d  daddu       $t7, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x227e74) {
            ctx->pc = 0x227EACu;
            goto label_227eac;
        }
    }
    ctx->pc = 0x227E7Cu;
label_227e7c:
    // 0x227e7c: 0xc089f40  jal         func_227D00
label_227e80:
    if (ctx->pc == 0x227E80u) {
        ctx->pc = 0x227E84u;
        goto label_227e84;
    }
    ctx->pc = 0x227E7Cu;
    SET_GPR_U32(ctx, 31, 0x227E84u);
    ctx->pc = 0x227D00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227D00u, 0x227E7Cu, 0x227E84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x227E84u;
label_227e84:
    // 0x227e84: 0xc089ef0  jal         func_227BC0
label_227e88:
    if (ctx->pc == 0x227E88u) {
        ctx->pc = 0x227E8Cu;
        goto label_227e8c;
    }
    ctx->pc = 0x227E84u;
    SET_GPR_U32(ctx, 31, 0x227E8Cu);
    ctx->pc = 0x227BC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227BC0u, 0x227E84u, 0x227E8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x227E8Cu;
label_227e8c:
    // 0x227e8c: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_227e90:
    if (ctx->pc == 0x227E90u) {
        ctx->pc = 0x227E90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227E8Cu;
        // 0x227e90: 0x240f0001  addiu       $t7, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x227E94u;
        goto label_227e94;
    }
    ctx->pc = 0x227E8Cu;
    {
        const bool branch_taken_0x227e8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x227E90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227E8Cu;
        // 0x227e90: 0x240f0001  addiu       $t7, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x227e8c) {
            ctx->pc = 0x227EACu;
            goto label_227eac;
        }
    }
    ctx->pc = 0x227E94u;
label_227e94:
    // 0x227e94: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x227e94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_227e98:
    // 0x227e98: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_227e9c:
    if (ctx->pc == 0x227E9Cu) {
        ctx->pc = 0x227E9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227E98u;
        // 0x227e9c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x227EA0u;
        goto label_227ea0;
    }
    ctx->pc = 0x227E98u;
    {
        const bool branch_taken_0x227e98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x227E9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227E98u;
        // 0x227e9c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x227e98) {
            ctx->pc = 0x227EB0u;
            goto label_227eb0;
        }
    }
    ctx->pc = 0x227EA0u;
label_227ea0:
    // 0x227ea0: 0x40f809  jalr        $v0
label_227ea4:
    if (ctx->pc == 0x227EA4u) {
        ctx->pc = 0x227EA8u;
        goto label_227ea8;
    }
    ctx->pc = 0x227EA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x227EA8u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x227EA0u, 0x227EA8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x227EA8u;
label_227ea8:
    // 0x227ea8: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x227ea8u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_227eac:
    // 0x227eac: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x227eacu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_227eb0:
    // 0x227eb0: 0x1e0102d  daddu       $v0, $t7, $zero
    ctx->pc = 0x227eb0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
label_227eb4:
    // 0x227eb4: 0x3e00008  jr          $ra
label_227eb8:
    if (ctx->pc == 0x227EB8u) {
        ctx->pc = 0x227EB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227EB4u;
        // 0x227eb8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x227EBCu;
        goto label_227ebc;
    }
    ctx->pc = 0x227EB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x227EB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227EB4u;
        // 0x227eb8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x227EB4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x227EBCu;
label_227ebc:
    // 0x227ebc: 0x0  nop
    ctx->pc = 0x227ebcu;
    // NOP
    if (ctx->pc == 0x227ebcu) { ctx->pc = 0x227ec0u; }
}
