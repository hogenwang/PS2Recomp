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

// Function: sub_00293E70
// Address: 0x293e70 - 0x293f88
void sub_00293E70_0x293e70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00293E70_0x293e70");
#endif

    switch (ctx->pc) {
        case 0x293ea8u: goto label_293ea8;
        case 0x293eccu: goto label_293ecc;
        case 0x293ee0u: goto label_293ee0;
        case 0x293ee8u: goto label_293ee8;
        case 0x293ef8u: goto label_293ef8;
        case 0x293f10u: goto label_293f10;
        case 0x293f34u: goto label_293f34;
        case 0x293f50u: goto label_293f50;
        case 0x293f64u: goto label_293f64;
        case 0x293f6cu: goto label_293f6c;
        default: break;
    }

    ctx->pc = 0x293e70u;

    // 0x293e70: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x293e70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x293e74: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x293e74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x293e78: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x293e78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x293e7c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x293e7cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x293e80: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x293e80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x293e84: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x293e84u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x293e88: 0x16200005  bnez        $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x293E88u;
    {
        const bool branch_taken_0x293e88 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x293E8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x293E88u;
        // 0x293e8c: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x293e88) {
            ctx->pc = 0x293EA0u;
            goto label_293ea0;
        }
    }
    ctx->pc = 0x293E90u;
    // 0x293e90: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x293e90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x293e94: 0x24050069  addiu       $a1, $zero, 0x69
    ctx->pc = 0x293e94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 105));
    // 0x293e98: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x293E98u;
    {
        const bool branch_taken_0x293e98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x293E9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x293E98u;
        // 0x293e9c: 0x2406000e  addiu       $a2, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x293e98) {
            ctx->pc = 0x293EC0u;
            goto label_293ec0;
        }
    }
    ctx->pc = 0x293EA0u;
label_293ea0:
    // 0x293ea0: 0xc0a8bf6  jal         func_2A2FD8
    ctx->pc = 0x293EA0u;
    SET_GPR_U32(ctx, 31, 0x293EA8u);
    ctx->pc = 0x293EA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x293EA0u;
    // 0x293ea4: 0x24040018  addiu       $a0, $zero, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A2FD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A2FD8u, 0x293EA0u, 0x293EA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x293EA8u;
label_293ea8:
    // 0x293ea8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x293ea8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x293eac: 0x16000009  bnez        $s0, . + 4 + (0x9 << 2)
    ctx->pc = 0x293EACu;
    {
        const bool branch_taken_0x293eac = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x293EB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x293EACu;
        // 0x293eb0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x293eac) {
            ctx->pc = 0x293ED4u;
            goto label_293ed4;
        }
    }
    ctx->pc = 0x293EB4u;
    // 0x293eb4: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x293eb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x293eb8: 0x24050069  addiu       $a1, $zero, 0x69
    ctx->pc = 0x293eb8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 105));
    // 0x293ebc: 0x24060021  addiu       $a2, $zero, 0x21
    ctx->pc = 0x293ebcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
label_293ec0:
    // 0x293ec0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x293ec0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x293ec4: 0xc0a5648  jal         func_295920
    ctx->pc = 0x293EC4u;
    SET_GPR_U32(ctx, 31, 0x293ECCu);
    ctx->pc = 0x293EC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x293EC4u;
    // 0x293ec8: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295920u, 0x293EC4u, 0x293ECCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x293ECCu;
label_293ecc:
    // 0x293ecc: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x293ECCu;
    {
        const bool branch_taken_0x293ecc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x293ED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x293ECCu;
        // 0x293ed0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x293ecc) {
            ctx->pc = 0x293F70u;
            goto label_293f70;
        }
    }
    ctx->pc = 0x293ED4u;
label_293ed4:
    // 0x293ed4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x293ed4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x293ed8: 0xc049cb6  jal         func_1272D8
    ctx->pc = 0x293ED8u;
    SET_GPR_U32(ctx, 31, 0x293EE0u);
    ctx->pc = 0x293EDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x293ED8u;
    // 0x293edc: 0x24060018  addiu       $a2, $zero, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1272D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1272D8u, 0x293ED8u, 0x293EE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x293EE0u;
label_293ee0:
    // 0x293ee0: 0xc0a80b0  jal         func_2A02C0
    ctx->pc = 0x293EE0u;
    SET_GPR_U32(ctx, 31, 0x293EE8u);
    ctx->pc = 0x293EE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x293EE0u;
    // 0x293ee4: 0xae110008  sw          $s1, 0x8($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A02C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A02C0u, 0x293EE0u, 0x293EE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x293EE8u;
label_293ee8:
    // 0x293ee8: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x293EE8u;
    {
        const bool branch_taken_0x293ee8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x293EECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x293EE8u;
        // 0x293eec: 0xae02000c  sw          $v0, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x293ee8) {
            ctx->pc = 0x293F34u;
            goto label_293f34;
        }
    }
    ctx->pc = 0x293EF0u;
    // 0x293ef0: 0xc0a88bc  jal         func_2A22F0
    ctx->pc = 0x293EF0u;
    SET_GPR_U32(ctx, 31, 0x293EF8u);
    ctx->pc = 0x2A22F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A22F0u, 0x293EF0u, 0x293EF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x293EF8u;
label_293ef8:
    // 0x293ef8: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x293EF8u;
    {
        const bool branch_taken_0x293ef8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x293EFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x293EF8u;
        // 0x293efc: 0xae020004  sw          $v0, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x293ef8) {
            ctx->pc = 0x293F34u;
            goto label_293f34;
        }
    }
    ctx->pc = 0x293F00u;
    // 0x293f00: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x293f00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x293f04: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x293f04u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x293f08: 0xc0a8d8a  jal         func_2A3628
    ctx->pc = 0x293F08u;
    SET_GPR_U32(ctx, 31, 0x293F10u);
    ctx->pc = 0x293F0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x293F08u;
    // 0x293f0c: 0xae020010  sw          $v0, 0x10($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A3628u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A3628u, 0x293F08u, 0x293F10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x293F10u;
label_293f10:
    // 0x293f10: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x293f10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x293f14: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x293f14u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x293f18: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x293f18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x293f1c: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x293f1cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x293f20: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x293f20u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x293f24: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x293f24u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x293f28: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x293f28u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x293f2c: 0xc0a88fc  jal         func_2A23F0
    ctx->pc = 0x293F2Cu;
    SET_GPR_U32(ctx, 31, 0x293F34u);
    ctx->pc = 0x293F30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x293F2Cu;
    // 0x293f30: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A23F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A23F0u, 0x293F2Cu, 0x293F34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x293F34u;
label_293f34:
    // 0x293f34: 0x1200000e  beqz        $s0, . + 4 + (0xE << 2)
    ctx->pc = 0x293F34u;
    {
        const bool branch_taken_0x293f34 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x293F38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x293F34u;
        // 0x293f38: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x293f34) {
            ctx->pc = 0x293F70u;
            goto label_293f70;
        }
    }
    ctx->pc = 0x293F3Cu;
    // 0x293f3c: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x293f3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x293f40: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x293F40u;
    {
        const bool branch_taken_0x293f40 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x293f40) {
            ctx->pc = 0x293F44u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x293F40u;
            // 0x293f44: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x293F54u;
            goto label_293f54;
        }
    }
    ctx->pc = 0x293F48u;
    // 0x293f48: 0xc0a80c2  jal         func_2A0308
    ctx->pc = 0x293F48u;
    SET_GPR_U32(ctx, 31, 0x293F50u);
    ctx->pc = 0x2A0308u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A0308u, 0x293F48u, 0x293F50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x293F50u;
label_293f50:
    // 0x293f50: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x293f50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_293f54:
    // 0x293f54: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x293F54u;
    {
        const bool branch_taken_0x293f54 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x293f54) {
            ctx->pc = 0x293F64u;
            goto label_293f64;
        }
    }
    ctx->pc = 0x293F5Cu;
    // 0x293f5c: 0xc0a88d0  jal         func_2A2340
    ctx->pc = 0x293F5Cu;
    SET_GPR_U32(ctx, 31, 0x293F64u);
    ctx->pc = 0x2A2340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A2340u, 0x293F5Cu, 0x293F64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x293F64u;
label_293f64:
    // 0x293f64: 0xc0a8c0a  jal         func_2A3028
    ctx->pc = 0x293F64u;
    SET_GPR_U32(ctx, 31, 0x293F6Cu);
    ctx->pc = 0x293F68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x293F64u;
    // 0x293f68: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A3028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A3028u, 0x293F64u, 0x293F6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x293F6Cu;
label_293f6c:
    // 0x293f6c: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x293f6cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_293f70:
    // 0x293f70: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x293f70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x293f74: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x293f74u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x293f78: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x293f78u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x293f7c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x293f7cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x293f80: 0x3e00008  jr          $ra
    ctx->pc = 0x293F80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x293F84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x293F80u;
        // 0x293f84: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x293F80u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x293F88u;
}
