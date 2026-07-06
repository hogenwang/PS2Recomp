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

// Function: sub_002A8BA8
// Address: 0x2a8ba8 - 0x2a8cd0
void sub_002A8BA8_0x2a8ba8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A8BA8_0x2a8ba8");
#endif

    switch (ctx->pc) {
        case 0x2a8be4u: goto label_2a8be4;
        case 0x2a8c08u: goto label_2a8c08;
        case 0x2a8c20u: goto label_2a8c20;
        case 0x2a8c34u: goto label_2a8c34;
        case 0x2a8c48u: goto label_2a8c48;
        case 0x2a8c68u: goto label_2a8c68;
        case 0x2a8c8cu: goto label_2a8c8c;
        case 0x2a8ca8u: goto label_2a8ca8;
        case 0x2a8cb0u: goto label_2a8cb0;
        default: break;
    }

    ctx->pc = 0x2a8ba8u;

    // 0x2a8ba8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2a8ba8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2a8bac: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x2a8bacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x2a8bb0: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2a8bb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2a8bb4: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x2a8bb4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a8bb8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2a8bb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x2a8bbc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2a8bbcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a8bc0: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2a8bc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2a8bc4: 0x16200005  bnez        $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2A8BC4u;
    {
        const bool branch_taken_0x2a8bc4 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A8BC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A8BC4u;
        // 0x2a8bc8: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a8bc4) {
            ctx->pc = 0x2A8BDCu;
            goto label_2a8bdc;
        }
    }
    ctx->pc = 0x2A8BCCu;
    // 0x2a8bcc: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x2a8bccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2a8bd0: 0x2405006b  addiu       $a1, $zero, 0x6B
    ctx->pc = 0x2a8bd0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 107));
    // 0x2a8bd4: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x2A8BD4u;
    {
        const bool branch_taken_0x2a8bd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A8BD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A8BD4u;
        // 0x2a8bd8: 0x2406000e  addiu       $a2, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a8bd4) {
            ctx->pc = 0x2A8BFCu;
            goto label_2a8bfc;
        }
    }
    ctx->pc = 0x2A8BDCu;
label_2a8bdc:
    // 0x2a8bdc: 0xc0a8bf6  jal         func_2A2FD8
    ctx->pc = 0x2A8BDCu;
    SET_GPR_U32(ctx, 31, 0x2A8BE4u);
    ctx->pc = 0x2A8BE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A8BDCu;
    // 0x2a8be0: 0x2404001c  addiu       $a0, $zero, 0x1C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A2FD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A2FD8u, 0x2A8BDCu, 0x2A8BE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A8BE4u;
label_2a8be4:
    // 0x2a8be4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2a8be4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a8be8: 0x16000009  bnez        $s0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2A8BE8u;
    {
        const bool branch_taken_0x2a8be8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A8BECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A8BE8u;
        // 0x2a8bec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a8be8) {
            ctx->pc = 0x2A8C10u;
            goto label_2a8c10;
        }
    }
    ctx->pc = 0x2A8BF0u;
    // 0x2a8bf0: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x2a8bf0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2a8bf4: 0x2405006b  addiu       $a1, $zero, 0x6B
    ctx->pc = 0x2a8bf4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 107));
    // 0x2a8bf8: 0x24060021  addiu       $a2, $zero, 0x21
    ctx->pc = 0x2a8bf8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
label_2a8bfc:
    // 0x2a8bfc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2a8bfcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a8c00: 0xc0a5648  jal         func_295920
    ctx->pc = 0x2A8C00u;
    SET_GPR_U32(ctx, 31, 0x2A8C08u);
    ctx->pc = 0x2A8C04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A8C00u;
    // 0x2a8c04: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295920u, 0x2A8C00u, 0x2A8C08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A8C08u;
label_2a8c08:
    // 0x2a8c08: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x2A8C08u;
    {
        const bool branch_taken_0x2a8c08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A8C0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A8C08u;
        // 0x2a8c0c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a8c08) {
            ctx->pc = 0x2A8CB4u;
            goto label_2a8cb4;
        }
    }
    ctx->pc = 0x2A8C10u;
label_2a8c10:
    // 0x2a8c10: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2a8c10u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a8c14: 0x2406001c  addiu       $a2, $zero, 0x1C
    ctx->pc = 0x2a8c14u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x2a8c18: 0xc049cb6  jal         func_1272D8
    ctx->pc = 0x2A8C18u;
    SET_GPR_U32(ctx, 31, 0x2A8C20u);
    ctx->pc = 0x2A8C1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A8C18u;
    // 0x2a8c1c: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1272D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1272D8u, 0x2A8C18u, 0x2A8C20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A8C20u;
label_2a8c20:
    // 0x2a8c20: 0xae110008  sw          $s1, 0x8($s0)
    ctx->pc = 0x2a8c20u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 17));
    // 0x2a8c24: 0xae120010  sw          $s2, 0x10($s0)
    ctx->pc = 0x2a8c24u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 18));
    // 0x2a8c28: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x2a8c28u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x2a8c2c: 0xc0a88bc  jal         func_2A22F0
    ctx->pc = 0x2A8C2Cu;
    SET_GPR_U32(ctx, 31, 0x2A8C34u);
    ctx->pc = 0x2A8C30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A8C2Cu;
    // 0x2a8c30: 0xae000018  sw          $zero, 0x18($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A22F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A22F0u, 0x2A8C2Cu, 0x2A8C34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A8C34u;
label_2a8c34:
    // 0x2a8c34: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x2A8C34u;
    {
        const bool branch_taken_0x2a8c34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A8C38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A8C34u;
        // 0x2a8c38: 0xae020004  sw          $v0, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a8c34) {
            ctx->pc = 0x2A8C8Cu;
            goto label_2a8c8c;
        }
    }
    ctx->pc = 0x2A8C3Cu;
    // 0x2a8c3c: 0xae120010  sw          $s2, 0x10($s0)
    ctx->pc = 0x2a8c3cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 18));
    // 0x2a8c40: 0xc0a8d8a  jal         func_2A3628
    ctx->pc = 0x2A8C40u;
    SET_GPR_U32(ctx, 31, 0x2A8C48u);
    ctx->pc = 0x2A8C44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A8C40u;
    // 0x2a8c44: 0x200982d  daddu       $s3, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A3628u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A3628u, 0x2A8C40u, 0x2A8C48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A8C48u;
label_2a8c48:
    // 0x2a8c48: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x2a8c48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2a8c4c: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x2a8c4cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a8c50: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2a8c50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a8c54: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x2a8c54u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2a8c58: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2a8c58u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a8c5c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2a8c5cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a8c60: 0xc0a88fc  jal         func_2A23F0
    ctx->pc = 0x2A8C60u;
    SET_GPR_U32(ctx, 31, 0x2A8C68u);
    ctx->pc = 0x2A8C64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A8C60u;
    // 0x2a8c64: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A23F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A23F0u, 0x2A8C60u, 0x2A8C68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A8C68u;
label_2a8c68:
    // 0x2a8c68: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x2a8c68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2a8c6c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2a8c6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a8c70: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x2a8c70u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2a8c74: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2a8c74u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a8c78: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2a8c78u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a8c7c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2a8c7cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a8c80: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x2a8c80u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a8c84: 0xc0a88fc  jal         func_2A23F0
    ctx->pc = 0x2A8C84u;
    SET_GPR_U32(ctx, 31, 0x2A8C8Cu);
    ctx->pc = 0x2A8C88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A8C84u;
    // 0x2a8c88: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A23F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A23F0u, 0x2A8C84u, 0x2A8C8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A8C8Cu;
label_2a8c8c:
    // 0x2a8c8c: 0x12000009  beqz        $s0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2A8C8Cu;
    {
        const bool branch_taken_0x2a8c8c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A8C90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A8C8Cu;
        // 0x2a8c90: 0x260102d  daddu       $v0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a8c8c) {
            ctx->pc = 0x2A8CB4u;
            goto label_2a8cb4;
        }
    }
    ctx->pc = 0x2A8C94u;
    // 0x2a8c94: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x2a8c94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2a8c98: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2A8C98u;
    {
        const bool branch_taken_0x2a8c98 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a8c98) {
            ctx->pc = 0x2A8CA8u;
            goto label_2a8ca8;
        }
    }
    ctx->pc = 0x2A8CA0u;
    // 0x2a8ca0: 0xc0a88d0  jal         func_2A2340
    ctx->pc = 0x2A8CA0u;
    SET_GPR_U32(ctx, 31, 0x2A8CA8u);
    ctx->pc = 0x2A2340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A2340u, 0x2A8CA0u, 0x2A8CA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A8CA8u;
label_2a8ca8:
    // 0x2a8ca8: 0xc0a8c0a  jal         func_2A3028
    ctx->pc = 0x2A8CA8u;
    SET_GPR_U32(ctx, 31, 0x2A8CB0u);
    ctx->pc = 0x2A8CACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A8CA8u;
    // 0x2a8cac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A3028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A3028u, 0x2A8CA8u, 0x2A8CB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A8CB0u;
label_2a8cb0:
    // 0x2a8cb0: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x2a8cb0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2a8cb4:
    // 0x2a8cb4: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2a8cb4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2a8cb8: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x2a8cb8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2a8cbc: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2a8cbcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2a8cc0: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2a8cc0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a8cc4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2a8cc4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2a8cc8: 0x3e00008  jr          $ra
    ctx->pc = 0x2A8CC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A8CCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A8CC8u;
        // 0x2a8ccc: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A8CC8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A8CD0u;
}
