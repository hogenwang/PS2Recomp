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

// Function: sub_002B0E18
// Address: 0x2b0e18 - 0x2b10d8
void sub_002B0E18_0x2b0e18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B0E18_0x2b0e18");
#endif

    switch (ctx->pc) {
        case 0x2b0e7cu: goto label_2b0e7c;
        case 0x2b0ef4u: goto label_2b0ef4;
        case 0x2b0f10u: goto label_2b0f10;
        case 0x2b0f78u: goto label_2b0f78;
        case 0x2b0fa8u: goto label_2b0fa8;
        case 0x2b1088u: goto label_2b1088;
        default: break;
    }

    ctx->pc = 0x2b0e18u;

    // 0x2b0e18: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x2b0e18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x2b0e1c: 0xffb10030  sd          $s1, 0x30($sp)
    ctx->pc = 0x2b0e1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 17));
    // 0x2b0e20: 0xffbf00b0  sd          $ra, 0xB0($sp)
    ctx->pc = 0x2b0e20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 31));
    // 0x2b0e24: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2b0e24u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b0e28: 0xffbe00a0  sd          $fp, 0xA0($sp)
    ctx->pc = 0x2b0e28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 30));
    // 0x2b0e2c: 0xffb70090  sd          $s7, 0x90($sp)
    ctx->pc = 0x2b0e2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 23));
    // 0x2b0e30: 0xffb60080  sd          $s6, 0x80($sp)
    ctx->pc = 0x2b0e30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 22));
    // 0x2b0e34: 0xffb50070  sd          $s5, 0x70($sp)
    ctx->pc = 0x2b0e34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 21));
    // 0x2b0e38: 0xffb40060  sd          $s4, 0x60($sp)
    ctx->pc = 0x2b0e38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 20));
    // 0x2b0e3c: 0xffb30050  sd          $s3, 0x50($sp)
    ctx->pc = 0x2b0e3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 19));
    // 0x2b0e40: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x2b0e40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
    // 0x2b0e44: 0x12200098  beqz        $s1, . + 4 + (0x98 << 2)
    ctx->pc = 0x2B0E44u;
    {
        const bool branch_taken_0x2b0e44 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B0E48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B0E44u;
        // 0x2b0e48: 0xffb00020  sd          $s0, 0x20($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b0e44) {
            ctx->pc = 0x2B10A8u;
            goto label_2b10a8;
        }
    }
    ctx->pc = 0x2B0E4Cu;
    // 0x2b0e4c: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x2b0e4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x2b0e50: 0x14400096  bnez        $v0, . + 4 + (0x96 << 2)
    ctx->pc = 0x2B0E50u;
    {
        const bool branch_taken_0x2b0e50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B0E54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B0E50u;
        // 0x2b0e54: 0xdfbf00b0  ld          $ra, 0xB0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b0e50) {
            ctx->pc = 0x2B10ACu;
            goto label_2b10ac;
        }
    }
    ctx->pc = 0x2B0E58u;
    // 0x2b0e58: 0x8e220020  lw          $v0, 0x20($s1)
    ctx->pc = 0x2b0e58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x2b0e5c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2B0E5Cu;
    {
        const bool branch_taken_0x2b0e5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B0E60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B0E5Cu;
        // 0x2b0e60: 0xb82d  daddu       $s7, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b0e5c) {
            ctx->pc = 0x2B0E70u;
            goto label_2b0e70;
        }
    }
    ctx->pc = 0x2B0E64u;
    // 0x2b0e64: 0x8e220038  lw          $v0, 0x38($s1)
    ctx->pc = 0x2b0e64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 56)));
    // 0x2b0e68: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2B0E68u;
    {
        const bool branch_taken_0x2b0e68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b0e68) {
            ctx->pc = 0x2B0E74u;
            goto label_2b0e74;
        }
    }
    ctx->pc = 0x2B0E70u;
label_2b0e70:
    // 0x2b0e70: 0x24170001  addiu       $s7, $zero, 0x1
    ctx->pc = 0x2b0e70u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2b0e74:
    // 0x2b0e74: 0xc0ac626  jal         func_2B1898
    ctx->pc = 0x2B0E74u;
    SET_GPR_U32(ctx, 31, 0x2B0E7Cu);
    ctx->pc = 0x2B0E78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B0E74u;
    // 0x2b0e78: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B1898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B1898u, 0x2B0E74u, 0x2B0E7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B0E7Cu;
label_2b0e7c:
    // 0x2b0e7c: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2B0E7Cu;
    {
        const bool branch_taken_0x2b0e7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b0e7c) {
            ctx->pc = 0x2B0E80u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B0E7Cu;
            // 0x2b0e80: 0x8e22002c  lw          $v0, 0x2C($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B0E90u;
            goto label_2b0e90;
        }
    }
    ctx->pc = 0x2B0E84u;
    // 0x2b0e84: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x2b0e84u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    // 0x2b0e88: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x2B0E88u;
    {
        const bool branch_taken_0x2b0e88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B0E8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B0E88u;
        // 0x2b0e8c: 0xafa00000  sw          $zero, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b0e88) {
            ctx->pc = 0x2B0ECCu;
            goto label_2b0ecc;
        }
    }
    ctx->pc = 0x2B0E90u;
label_2b0e90:
    // 0x2b0e90: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2B0E90u;
    {
        const bool branch_taken_0x2b0e90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B0E94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B0E90u;
        // 0x2b0e94: 0xafa00000  sw          $zero, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b0e90) {
            ctx->pc = 0x2B0EA4u;
            goto label_2b0ea4;
        }
    }
    ctx->pc = 0x2B0E98u;
    // 0x2b0e98: 0x8e22003c  lw          $v0, 0x3C($s1)
    ctx->pc = 0x2b0e98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 60)));
    // 0x2b0e9c: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2B0E9Cu;
    {
        const bool branch_taken_0x2b0e9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b0e9c) {
            ctx->pc = 0x2B0EA0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B0E9Cu;
            // 0x2b0ea0: 0x8e220030  lw          $v0, 0x30($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B0EB0u;
            goto label_2b0eb0;
        }
    }
    ctx->pc = 0x2B0EA4u;
label_2b0ea4:
    // 0x2b0ea4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2b0ea4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b0ea8: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x2b0ea8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x2b0eac: 0x8e220030  lw          $v0, 0x30($s1)
    ctx->pc = 0x2b0eacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
label_2b0eb0:
    // 0x2b0eb0: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2B0EB0u;
    {
        const bool branch_taken_0x2b0eb0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B0EB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B0EB0u;
        // 0x2b0eb4: 0xafa00010  sw          $zero, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b0eb0) {
            ctx->pc = 0x2B0EC4u;
            goto label_2b0ec4;
        }
    }
    ctx->pc = 0x2B0EB8u;
    // 0x2b0eb8: 0x8e22003c  lw          $v0, 0x3C($s1)
    ctx->pc = 0x2b0eb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 60)));
    // 0x2b0ebc: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2B0EBCu;
    {
        const bool branch_taken_0x2b0ebc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b0ebc) {
            ctx->pc = 0x2B0EC0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B0EBCu;
            // 0x2b0ec0: 0x8e220040  lw          $v0, 0x40($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B0ED0u;
            goto label_2b0ed0;
        }
    }
    ctx->pc = 0x2B0EC4u;
label_2b0ec4:
    // 0x2b0ec4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2b0ec4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b0ec8: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x2b0ec8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
label_2b0ecc:
    // 0x2b0ecc: 0x8e220040  lw          $v0, 0x40($s1)
    ctx->pc = 0x2b0eccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
label_2b0ed0:
    // 0x2b0ed0: 0x26300040  addiu       $s0, $s1, 0x40
    ctx->pc = 0x2b0ed0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
    // 0x2b0ed4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2B0ED4u;
    {
        const bool branch_taken_0x2b0ed4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B0ED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B0ED4u;
        // 0x2b0ed8: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b0ed4) {
            ctx->pc = 0x2B0EE4u;
            goto label_2b0ee4;
        }
    }
    ctx->pc = 0x2B0EDCu;
    // 0x2b0edc: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x2b0edcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2b0ee0: 0x2a82b  sltu        $s5, $zero, $v0
    ctx->pc = 0x2b0ee0u;
    SET_GPR_U64(ctx, 21, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_2b0ee4:
    // 0x2b0ee4: 0x12a00006  beqz        $s5, . + 4 + (0x6 << 2)
    ctx->pc = 0x2B0EE4u;
    {
        const bool branch_taken_0x2b0ee4 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B0EE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B0EE4u;
        // 0x2b0ee8: 0xafa00008  sw          $zero, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b0ee4) {
            ctx->pc = 0x2B0F00u;
            goto label_2b0f00;
        }
    }
    ctx->pc = 0x2B0EECu;
    // 0x2b0eec: 0xc0aef0e  jal         func_2BBC38
    ctx->pc = 0x2B0EECu;
    SET_GPR_U32(ctx, 31, 0x2B0EF4u);
    ctx->pc = 0x2B0EF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B0EECu;
    // 0x2b0ef0: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BBC38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BBC38u, 0x2B0EECu, 0x2B0EF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B0EF4u;
label_2b0ef4:
    // 0x2b0ef4: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x2b0ef4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x2b0ef8: 0x28420201  slti        $v0, $v0, 0x201
    ctx->pc = 0x2b0ef8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)513) ? 1 : 0);
    // 0x2b0efc: 0xafa20008  sw          $v0, 0x8($sp)
    ctx->pc = 0x2b0efcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
label_2b0f00:
    // 0x2b0f00: 0x12a00006  beqz        $s5, . + 4 + (0x6 << 2)
    ctx->pc = 0x2B0F00u;
    {
        const bool branch_taken_0x2b0f00 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B0F04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B0F00u;
        // 0x2b0f04: 0xafa0000c  sw          $zero, 0xC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b0f00) {
            ctx->pc = 0x2B0F1Cu;
            goto label_2b0f1c;
        }
    }
    ctx->pc = 0x2B0F08u;
    // 0x2b0f08: 0xc0aef0e  jal         func_2BBC38
    ctx->pc = 0x2B0F08u;
    SET_GPR_U32(ctx, 31, 0x2B0F10u);
    ctx->pc = 0x2B0F0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B0F08u;
    // 0x2b0f0c: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BBC38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BBC38u, 0x2B0F08u, 0x2B0F10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B0F10u;
label_2b0f10:
    // 0x2b0f10: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x2b0f10u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x2b0f14: 0x28420401  slti        $v0, $v0, 0x401
    ctx->pc = 0x2b0f14u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)1025) ? 1 : 0);
    // 0x2b0f18: 0xafa2000c  sw          $v0, 0xC($sp)
    ctx->pc = 0x2b0f18u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 2));
label_2b0f1c:
    // 0x2b0f1c: 0x8e220048  lw          $v0, 0x48($s1)
    ctx->pc = 0x2b0f1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 72)));
    // 0x2b0f20: 0x26300048  addiu       $s0, $s1, 0x48
    ctx->pc = 0x2b0f20u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 72));
    // 0x2b0f24: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2B0F24u;
    {
        const bool branch_taken_0x2b0f24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B0F28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B0F24u;
        // 0x2b0f28: 0xb02d  daddu       $s6, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b0f24) {
            ctx->pc = 0x2B0F34u;
            goto label_2b0f34;
        }
    }
    ctx->pc = 0x2B0F2Cu;
    // 0x2b0f2c: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x2b0f2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2b0f30: 0x2b02b  sltu        $s6, $zero, $v0
    ctx->pc = 0x2b0f30u;
    SET_GPR_U64(ctx, 22, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_2b0f34:
    // 0x2b0f34: 0x8e220050  lw          $v0, 0x50($s1)
    ctx->pc = 0x2b0f34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
    // 0x2b0f38: 0x26300050  addiu       $s0, $s1, 0x50
    ctx->pc = 0x2b0f38u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
    // 0x2b0f3c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2B0F3Cu;
    {
        const bool branch_taken_0x2b0f3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B0F40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B0F3Cu;
        // 0x2b0f40: 0xafa00004  sw          $zero, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b0f3c) {
            ctx->pc = 0x2B0F50u;
            goto label_2b0f50;
        }
    }
    ctx->pc = 0x2B0F44u;
    // 0x2b0f44: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x2b0f44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2b0f48: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x2b0f48u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2b0f4c: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x2b0f4cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
label_2b0f50:
    // 0x2b0f50: 0x8e220058  lw          $v0, 0x58($s1)
    ctx->pc = 0x2b0f50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 88)));
    // 0x2b0f54: 0x26300058  addiu       $s0, $s1, 0x58
    ctx->pc = 0x2b0f54u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 88));
    // 0x2b0f58: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2B0F58u;
    {
        const bool branch_taken_0x2b0f58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B0F5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B0F58u;
        // 0x2b0f5c: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b0f58) {
            ctx->pc = 0x2B0F68u;
            goto label_2b0f68;
        }
    }
    ctx->pc = 0x2B0F60u;
    // 0x2b0f60: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x2b0f60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2b0f64: 0x2a02b  sltu        $s4, $zero, $v0
    ctx->pc = 0x2b0f64u;
    SET_GPR_U64(ctx, 20, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_2b0f68:
    // 0x2b0f68: 0x12800005  beqz        $s4, . + 4 + (0x5 << 2)
    ctx->pc = 0x2B0F68u;
    {
        const bool branch_taken_0x2b0f68 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B0F6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B0F68u;
        // 0x2b0f6c: 0xf02d  daddu       $fp, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b0f68) {
            ctx->pc = 0x2B0F80u;
            goto label_2b0f80;
        }
    }
    ctx->pc = 0x2B0F70u;
    // 0x2b0f70: 0xc0aef0e  jal         func_2BBC38
    ctx->pc = 0x2B0F70u;
    SET_GPR_U32(ctx, 31, 0x2B0F78u);
    ctx->pc = 0x2B0F74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B0F70u;
    // 0x2b0f74: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BBC38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BBC38u, 0x2B0F70u, 0x2B0F78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B0F78u;
label_2b0f78:
    // 0x2b0f78: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x2b0f78u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x2b0f7c: 0x285e0201  slti        $fp, $v0, 0x201
    ctx->pc = 0x2b0f7cu;
    SET_GPR_U64(ctx, 30, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)513) ? 1 : 0);
label_2b0f80:
    // 0x2b0f80: 0x8e220060  lw          $v0, 0x60($s1)
    ctx->pc = 0x2b0f80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
    // 0x2b0f84: 0x26300060  addiu       $s0, $s1, 0x60
    ctx->pc = 0x2b0f84u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 96));
    // 0x2b0f88: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2B0F88u;
    {
        const bool branch_taken_0x2b0f88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B0F8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B0F88u;
        // 0x2b0f8c: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b0f88) {
            ctx->pc = 0x2B0F98u;
            goto label_2b0f98;
        }
    }
    ctx->pc = 0x2B0F90u;
    // 0x2b0f90: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x2b0f90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2b0f94: 0x2982b  sltu        $s3, $zero, $v0
    ctx->pc = 0x2b0f94u;
    SET_GPR_U64(ctx, 19, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_2b0f98:
    // 0x2b0f98: 0x12600005  beqz        $s3, . + 4 + (0x5 << 2)
    ctx->pc = 0x2B0F98u;
    {
        const bool branch_taken_0x2b0f98 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B0F9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B0F98u;
        // 0x2b0f9c: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b0f98) {
            ctx->pc = 0x2B0FB0u;
            goto label_2b0fb0;
        }
    }
    ctx->pc = 0x2B0FA0u;
    // 0x2b0fa0: 0xc0aef0e  jal         func_2BBC38
    ctx->pc = 0x2B0FA0u;
    SET_GPR_U32(ctx, 31, 0x2B0FA8u);
    ctx->pc = 0x2B0FA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B0FA0u;
    // 0x2b0fa4: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BBC38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BBC38u, 0x2B0FA0u, 0x2B0FA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B0FA8u;
label_2b0fa8:
    // 0x2b0fa8: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x2b0fa8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x2b0fac: 0x28430201  slti        $v1, $v0, 0x201
    ctx->pc = 0x2b0facu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)513) ? 1 : 0);
label_2b0fb0:
    // 0x2b0fb0: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x2b0fb0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b0fb4: 0x16a00005  bnez        $s5, . + 4 + (0x5 << 2)
    ctx->pc = 0x2B0FB4u;
    {
        const bool branch_taken_0x2b0fb4 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B0FB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B0FB4u;
        // 0x2b0fb8: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b0fb4) {
            ctx->pc = 0x2B0FCCu;
            goto label_2b0fcc;
        }
    }
    ctx->pc = 0x2B0FBCu;
    // 0x2b0fbc: 0x12e00005  beqz        $s7, . + 4 + (0x5 << 2)
    ctx->pc = 0x2B0FBCu;
    {
        const bool branch_taken_0x2b0fbc = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B0FC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B0FBCu;
        // 0x2b0fc0: 0x8fa20008  lw          $v0, 0x8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b0fbc) {
            ctx->pc = 0x2B0FD4u;
            goto label_2b0fd4;
        }
    }
    ctx->pc = 0x2B0FC4u;
    // 0x2b0fc4: 0x12c00003  beqz        $s6, . + 4 + (0x3 << 2)
    ctx->pc = 0x2B0FC4u;
    {
        const bool branch_taken_0x2b0fc4 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b0fc4) {
            ctx->pc = 0x2B0FD4u;
            goto label_2b0fd4;
        }
    }
    ctx->pc = 0x2B0FCCu;
label_2b0fcc:
    // 0x2b0fcc: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x2b0fccu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b0fd0: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x2b0fd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
label_2b0fd4:
    // 0x2b0fd4: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2B0FD4u;
    {
        const bool branch_taken_0x2b0fd4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B0FD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B0FD4u;
        // 0x2b0fd8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b0fd4) {
            ctx->pc = 0x2B1000u;
            goto label_2b1000;
        }
    }
    ctx->pc = 0x2B0FDCu;
    // 0x2b0fdc: 0x8fa2000c  lw          $v0, 0xC($sp)
    ctx->pc = 0x2b0fdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x2b0fe0: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x2B0FE0u;
    {
        const bool branch_taken_0x2b0fe0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b0fe0) {
            ctx->pc = 0x2B0FE4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B0FE0u;
            // 0x2b0fe4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B1000u;
            goto label_2b1000;
        }
    }
    ctx->pc = 0x2B0FE8u;
    // 0x2b0fe8: 0x52e00007  beql        $s7, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x2B0FE8u;
    {
        const bool branch_taken_0x2b0fe8 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b0fe8) {
            ctx->pc = 0x2B0FECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B0FE8u;
            // 0x2b0fec: 0x8fa20010  lw          $v0, 0x10($sp) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B1008u;
            goto label_2b1008;
        }
    }
    ctx->pc = 0x2B0FF0u;
    // 0x2b0ff0: 0x16c00003  bnez        $s6, . + 4 + (0x3 << 2)
    ctx->pc = 0x2B0FF0u;
    {
        const bool branch_taken_0x2b0ff0 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B0FF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B0FF0u;
        // 0x2b0ff4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b0ff0) {
            ctx->pc = 0x2B1000u;
            goto label_2b1000;
        }
    }
    ctx->pc = 0x2B0FF8u;
    // 0x2b0ff8: 0x52a00003  beql        $s5, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x2B0FF8u;
    {
        const bool branch_taken_0x2b0ff8 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b0ff8) {
            ctx->pc = 0x2B0FFCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B0FF8u;
            // 0x2b0ffc: 0x8fa20010  lw          $v0, 0x10($sp) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B1008u;
            goto label_2b1008;
        }
    }
    ctx->pc = 0x2B1000u;
label_2b1000:
    // 0x2b1000: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x2b1000u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x2b1004: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2b1004u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_2b1008:
    // 0x2b1008: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2B1008u;
    {
        const bool branch_taken_0x2b1008 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B100Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1008u;
        // 0x2b100c: 0x24020010  addiu       $v0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b1008) {
            ctx->pc = 0x2B1014u;
            goto label_2b1014;
        }
    }
    ctx->pc = 0x2B1010u;
    // 0x2b1010: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x2b1010u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
label_2b1014:
    // 0x2b1014: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x2b1014u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b1018: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2B1018u;
    {
        const bool branch_taken_0x2b1018 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B101Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1018u;
        // 0x2b101c: 0x24020010  addiu       $v0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b1018) {
            ctx->pc = 0x2B1024u;
            goto label_2b1024;
        }
    }
    ctx->pc = 0x2B1020u;
    // 0x2b1020: 0x2429025  or          $s2, $s2, $v0
    ctx->pc = 0x2b1020u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | GPR_U64(ctx, 2));
label_2b1024:
    // 0x2b1024: 0x12800002  beqz        $s4, . + 4 + (0x2 << 2)
    ctx->pc = 0x2B1024u;
    {
        const bool branch_taken_0x2b1024 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B1028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1024u;
        // 0x2b1028: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b1024) {
            ctx->pc = 0x2B1030u;
            goto label_2b1030;
        }
    }
    ctx->pc = 0x2B102Cu;
    // 0x2b102c: 0x2429025  or          $s2, $s2, $v0
    ctx->pc = 0x2b102cu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | GPR_U64(ctx, 2));
label_2b1030:
    // 0x2b1030: 0x13c00002  beqz        $fp, . + 4 + (0x2 << 2)
    ctx->pc = 0x2B1030u;
    {
        const bool branch_taken_0x2b1030 = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B1034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1030u;
        // 0x2b1034: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b1030) {
            ctx->pc = 0x2B103Cu;
            goto label_2b103c;
        }
    }
    ctx->pc = 0x2B1038u;
    // 0x2b1038: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x2b1038u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
label_2b103c:
    // 0x2b103c: 0x12600002  beqz        $s3, . + 4 + (0x2 << 2)
    ctx->pc = 0x2B103Cu;
    {
        const bool branch_taken_0x2b103c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B1040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B103Cu;
        // 0x2b1040: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b103c) {
            ctx->pc = 0x2B1048u;
            goto label_2b1048;
        }
    }
    ctx->pc = 0x2B1044u;
    // 0x2b1044: 0x2429025  or          $s2, $s2, $v0
    ctx->pc = 0x2b1044u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | GPR_U64(ctx, 2));
label_2b1048:
    // 0x2b1048: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x2B1048u;
    {
        const bool branch_taken_0x2b1048 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B104Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1048u;
        // 0x2b104c: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b1048) {
            ctx->pc = 0x2B1054u;
            goto label_2b1054;
        }
    }
    ctx->pc = 0x2B1050u;
    // 0x2b1050: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x2b1050u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
label_2b1054:
    // 0x2b1054: 0x16a00003  bnez        $s5, . + 4 + (0x3 << 2)
    ctx->pc = 0x2B1054u;
    {
        const bool branch_taken_0x2b1054 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B1058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1054u;
        // 0x2b1058: 0x24020020  addiu       $v0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b1054) {
            ctx->pc = 0x2B1064u;
            goto label_2b1064;
        }
    }
    ctx->pc = 0x2B105Cu;
    // 0x2b105c: 0x52c00004  beql        $s6, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2B105Cu;
    {
        const bool branch_taken_0x2b105c = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b105c) {
            ctx->pc = 0x2B1060u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B105Cu;
            // 0x2b1060: 0x8fa20004  lw          $v0, 0x4($sp) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B1070u;
            goto label_2b1070;
        }
    }
    ctx->pc = 0x2B1064u;
label_2b1064:
    // 0x2b1064: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x2b1064u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x2b1068: 0x2429025  or          $s2, $s2, $v0
    ctx->pc = 0x2b1068u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | GPR_U64(ctx, 2));
    // 0x2b106c: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x2b106cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_2b1070:
    // 0x2b1070: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2B1070u;
    {
        const bool branch_taken_0x2b1070 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B1074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1070u;
        // 0x2b1074: 0x24020040  addiu       $v0, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b1070) {
            ctx->pc = 0x2B1080u;
            goto label_2b1080;
        }
    }
    ctx->pc = 0x2B1078u;
    // 0x2b1078: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x2b1078u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x2b107c: 0x2429025  or          $s2, $s2, $v0
    ctx->pc = 0x2b107cu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | GPR_U64(ctx, 2));
label_2b1080:
    // 0x2b1080: 0xc0ac626  jal         func_2B1898
    ctx->pc = 0x2B1080u;
    SET_GPR_U32(ctx, 31, 0x2B1088u);
    ctx->pc = 0x2B1084u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B1080u;
    // 0x2b1084: 0x24040008  addiu       $a0, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B1898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B1898u, 0x2B1080u, 0x2B1088u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B1088u;
label_2b1088:
    // 0x2b1088: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2B1088u;
    {
        const bool branch_taken_0x2b1088 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B108Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1088u;
        // 0x2b108c: 0x24020100  addiu       $v0, $zero, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b1088) {
            ctx->pc = 0x2B1098u;
            goto label_2b1098;
        }
    }
    ctx->pc = 0x2B1090u;
    // 0x2b1090: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x2b1090u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x2b1094: 0x2429025  or          $s2, $s2, $v0
    ctx->pc = 0x2b1094u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | GPR_U64(ctx, 2));
label_2b1098:
    // 0x2b1098: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2b1098u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b109c: 0xfe320010  sd          $s2, 0x10($s1)
    ctx->pc = 0x2b109cu;
    WRITE64(ADD32(GPR_U32(ctx, 17), 16), GPR_U64(ctx, 18));
    // 0x2b10a0: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x2b10a0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
    // 0x2b10a4: 0xfe300018  sd          $s0, 0x18($s1)
    ctx->pc = 0x2b10a4u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 24), GPR_U64(ctx, 16));
label_2b10a8:
    // 0x2b10a8: 0xdfbf00b0  ld          $ra, 0xB0($sp)
    ctx->pc = 0x2b10a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 176)));
label_2b10ac:
    // 0x2b10ac: 0xdfbe00a0  ld          $fp, 0xA0($sp)
    ctx->pc = 0x2b10acu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2b10b0: 0xdfb70090  ld          $s7, 0x90($sp)
    ctx->pc = 0x2b10b0u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2b10b4: 0xdfb60080  ld          $s6, 0x80($sp)
    ctx->pc = 0x2b10b4u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2b10b8: 0xdfb50070  ld          $s5, 0x70($sp)
    ctx->pc = 0x2b10b8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2b10bc: 0xdfb40060  ld          $s4, 0x60($sp)
    ctx->pc = 0x2b10bcu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2b10c0: 0xdfb30050  ld          $s3, 0x50($sp)
    ctx->pc = 0x2b10c0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2b10c4: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x2b10c4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2b10c8: 0xdfb10030  ld          $s1, 0x30($sp)
    ctx->pc = 0x2b10c8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2b10cc: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x2b10ccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2b10d0: 0x3e00008  jr          $ra
    ctx->pc = 0x2B10D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B10D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B10D0u;
        // 0x2b10d4: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B10D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B10D8u;
}
