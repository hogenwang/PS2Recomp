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

// Function: sub_00168E60
// Address: 0x168e60 - 0x168f40
void sub_00168E60_0x168e60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00168E60_0x168e60");
#endif

    switch (ctx->pc) {
        case 0x168e80u: goto label_168e80;
        case 0x168e9cu: goto label_168e9c;
        case 0x168eb4u: goto label_168eb4;
        case 0x168eccu: goto label_168ecc;
        case 0x168ee4u: goto label_168ee4;
        case 0x168efcu: goto label_168efc;
        case 0x168f18u: goto label_168f18;
        case 0x168f28u: goto label_168f28;
        default: break;
    }

    ctx->pc = 0x168e60u;

    // 0x168e60: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x168e60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x168e64: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x168e64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x168e68: 0x8c820490  lw          $v0, 0x490($a0)
    ctx->pc = 0x168e68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1168)));
    // 0x168e6c: 0x30422000  andi        $v0, $v0, 0x2000
    ctx->pc = 0x168e6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8192);
    // 0x168e70: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x168E70u;
    {
        const bool branch_taken_0x168e70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x168e70) {
            ctx->pc = 0x168E74u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x168E70u;
            // 0x168e74: 0x8c83048c  lw          $v1, 0x48C($a0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1164)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x168E88u;
            goto label_168e88;
        }
    }
    ctx->pc = 0x168E78u;
    // 0x168e78: 0xc05a3d0  jal         func_168F40
    ctx->pc = 0x168E78u;
    SET_GPR_U32(ctx, 31, 0x168E80u);
    ctx->pc = 0x168F40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x168F40u, 0x168E78u, 0x168E80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x168E80u;
label_168e80:
    // 0x168e80: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x168E80u;
    {
        const bool branch_taken_0x168e80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x168E84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168E80u;
        // 0x168e84: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x168e80) {
            ctx->pc = 0x168F2Cu;
            goto label_168f2c;
        }
    }
    ctx->pc = 0x168E88u;
label_168e88:
    // 0x168e88: 0x30620020  andi        $v0, $v1, 0x20
    ctx->pc = 0x168e88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32);
    // 0x168e8c: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x168E8Cu;
    {
        const bool branch_taken_0x168e8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x168e8c) {
            ctx->pc = 0x168E90u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x168E8Cu;
            // 0x168e90: 0x30621000  andi        $v0, $v1, 0x1000 (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4096);
            ctx->in_delay_slot = false;
            ctx->pc = 0x168EA4u;
            goto label_168ea4;
        }
    }
    ctx->pc = 0x168E94u;
    // 0x168e94: 0xc05a428  jal         func_1690A0
    ctx->pc = 0x168E94u;
    SET_GPR_U32(ctx, 31, 0x168E9Cu);
    ctx->pc = 0x1690A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1690A0u, 0x168E94u, 0x168E9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x168E9Cu;
label_168e9c:
    // 0x168e9c: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x168E9Cu;
    {
        const bool branch_taken_0x168e9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x168e9c) {
            ctx->pc = 0x168F28u;
            goto label_168f28;
        }
    }
    ctx->pc = 0x168EA4u;
label_168ea4:
    // 0x168ea4: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x168EA4u;
    {
        const bool branch_taken_0x168ea4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x168ea4) {
            ctx->pc = 0x168EA8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x168EA4u;
            // 0x168ea8: 0x30620010  andi        $v0, $v1, 0x10 (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16);
            ctx->in_delay_slot = false;
            ctx->pc = 0x168EBCu;
            goto label_168ebc;
        }
    }
    ctx->pc = 0x168EACu;
    // 0x168eac: 0xc05a484  jal         func_169210
    ctx->pc = 0x168EACu;
    SET_GPR_U32(ctx, 31, 0x168EB4u);
    ctx->pc = 0x169210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x169210u, 0x168EACu, 0x168EB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x168EB4u;
label_168eb4:
    // 0x168eb4: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x168EB4u;
    {
        const bool branch_taken_0x168eb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x168eb4) {
            ctx->pc = 0x168F28u;
            goto label_168f28;
        }
    }
    ctx->pc = 0x168EBCu;
label_168ebc:
    // 0x168ebc: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x168EBCu;
    {
        const bool branch_taken_0x168ebc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x168ebc) {
            ctx->pc = 0x168EC0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x168EBCu;
            // 0x168ec0: 0x30620008  andi        $v0, $v1, 0x8 (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
            ctx->in_delay_slot = false;
            ctx->pc = 0x168ED4u;
            goto label_168ed4;
        }
    }
    ctx->pc = 0x168EC4u;
    // 0x168ec4: 0xc05a4bc  jal         func_1692F0
    ctx->pc = 0x168EC4u;
    SET_GPR_U32(ctx, 31, 0x168ECCu);
    ctx->pc = 0x1692F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1692F0u, 0x168EC4u, 0x168ECCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x168ECCu;
label_168ecc:
    // 0x168ecc: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x168ECCu;
    {
        const bool branch_taken_0x168ecc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x168ecc) {
            ctx->pc = 0x168F28u;
            goto label_168f28;
        }
    }
    ctx->pc = 0x168ED4u;
label_168ed4:
    // 0x168ed4: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x168ED4u;
    {
        const bool branch_taken_0x168ed4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x168ed4) {
            ctx->pc = 0x168ED8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x168ED4u;
            // 0x168ed8: 0x30620004  andi        $v0, $v1, 0x4 (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
            ctx->in_delay_slot = false;
            ctx->pc = 0x168EECu;
            goto label_168eec;
        }
    }
    ctx->pc = 0x168EDCu;
    // 0x168edc: 0xc05a510  jal         func_169440
    ctx->pc = 0x168EDCu;
    SET_GPR_U32(ctx, 31, 0x168EE4u);
    ctx->pc = 0x169440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x169440u, 0x168EDCu, 0x168EE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x168EE4u;
label_168ee4:
    // 0x168ee4: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x168EE4u;
    {
        const bool branch_taken_0x168ee4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x168ee4) {
            ctx->pc = 0x168F28u;
            goto label_168f28;
        }
    }
    ctx->pc = 0x168EECu;
label_168eec:
    // 0x168eec: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x168EECu;
    {
        const bool branch_taken_0x168eec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x168eec) {
            ctx->pc = 0x168EF0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x168EECu;
            // 0x168ef0: 0x3c020038  lui         $v0, 0x38 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x168F04u;
            goto label_168f04;
        }
    }
    ctx->pc = 0x168EF4u;
    // 0x168ef4: 0xc05a564  jal         func_169590
    ctx->pc = 0x168EF4u;
    SET_GPR_U32(ctx, 31, 0x168EFCu);
    ctx->pc = 0x169590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x169590u, 0x168EF4u, 0x168EFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x168EFCu;
label_168efc:
    // 0x168efc: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x168EFCu;
    {
        const bool branch_taken_0x168efc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x168efc) {
            ctx->pc = 0x168F28u;
            goto label_168f28;
        }
    }
    ctx->pc = 0x168F04u;
label_168f04:
    // 0x168f04: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x168f04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x168f08: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x168F08u;
    {
        const bool branch_taken_0x168f08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x168f08) {
            ctx->pc = 0x168F20u;
            goto label_168f20;
        }
    }
    ctx->pc = 0x168F10u;
    // 0x168f10: 0xc05a5b8  jal         func_1696E0
    ctx->pc = 0x168F10u;
    SET_GPR_U32(ctx, 31, 0x168F18u);
    ctx->pc = 0x1696E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1696E0u, 0x168F10u, 0x168F18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x168F18u;
label_168f18:
    // 0x168f18: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x168F18u;
    {
        const bool branch_taken_0x168f18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x168f18) {
            ctx->pc = 0x168F28u;
            goto label_168f28;
        }
    }
    ctx->pc = 0x168F20u;
label_168f20:
    // 0x168f20: 0xc05a614  jal         func_169850
    ctx->pc = 0x168F20u;
    SET_GPR_U32(ctx, 31, 0x168F28u);
    ctx->pc = 0x169850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x169850u, 0x168F20u, 0x168F28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x168F28u;
label_168f28:
    // 0x168f28: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x168f28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_168f2c:
    // 0x168f2c: 0x3e00008  jr          $ra
    ctx->pc = 0x168F2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x168F30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168F2Cu;
        // 0x168f30: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x168F2Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x168F34u;
    // 0x168f34: 0x0  nop
    ctx->pc = 0x168f34u;
    // NOP
    // 0x168f38: 0x0  nop
    ctx->pc = 0x168f38u;
    // NOP
    // 0x168f3c: 0x0  nop
    ctx->pc = 0x168f3cu;
    // NOP
}
