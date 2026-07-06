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

// Function: sub_0013E9A0
// Address: 0x13e9a0 - 0x13eb50
void sub_0013E9A0_0x13e9a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013E9A0_0x13e9a0");
#endif

    switch (ctx->pc) {
        case 0x13e9b8u: goto label_13e9b8;
        default: break;
    }

    ctx->pc = 0x13e9a0u;

    // 0x13e9a0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x13e9a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x13e9a4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x13e9a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x13e9a8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x13e9a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x13e9ac: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x13e9acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13e9b0: 0xc062804  jal         func_18A010
    ctx->pc = 0x13E9B0u;
    SET_GPR_U32(ctx, 31, 0x13E9B8u);
    ctx->pc = 0x13E9B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13E9B0u;
    // 0x13e9b4: 0x8c8400dc  lw          $a0, 0xDC($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 220)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18A010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18A010u, 0x13E9B0u, 0x13E9B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13E9B8u;
label_13e9b8:
    // 0x13e9b8: 0x50400061  beql        $v0, $zero, . + 4 + (0x61 << 2)
    ctx->pc = 0x13E9B8u;
    {
        const bool branch_taken_0x13e9b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x13e9b8) {
            ctx->pc = 0x13E9BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13E9B8u;
            // 0x13e9bc: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
            SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13EB40u;
            goto label_13eb40;
        }
    }
    ctx->pc = 0x13E9C0u;
    // 0x13e9c0: 0x8e040494  lw          $a0, 0x494($s0)
    ctx->pc = 0x13e9c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1172)));
    // 0x13e9c4: 0x3c030008  lui         $v1, 0x8
    ctx->pc = 0x13e9c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8 << 16));
    // 0x13e9c8: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x13e9c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x13e9cc: 0x50600005  beql        $v1, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x13E9CCu;
    {
        const bool branch_taken_0x13e9cc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x13e9cc) {
            ctx->pc = 0x13E9D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13E9CCu;
            // 0x13e9d0: 0x8e040494  lw          $a0, 0x494($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1172)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13E9E4u;
            goto label_13e9e4;
        }
    }
    ctx->pc = 0x13E9D4u;
    // 0x13e9d4: 0x8e030238  lw          $v1, 0x238($s0)
    ctx->pc = 0x13e9d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 568)));
    // 0x13e9d8: 0x34630001  ori         $v1, $v1, 0x1
    ctx->pc = 0x13e9d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
    // 0x13e9dc: 0xae030238  sw          $v1, 0x238($s0)
    ctx->pc = 0x13e9dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 568), GPR_U32(ctx, 3));
    // 0x13e9e0: 0x8e040494  lw          $a0, 0x494($s0)
    ctx->pc = 0x13e9e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1172)));
label_13e9e4:
    // 0x13e9e4: 0x3c030100  lui         $v1, 0x100
    ctx->pc = 0x13e9e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)256 << 16));
    // 0x13e9e8: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x13e9e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x13e9ec: 0x50600006  beql        $v1, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x13E9ECu;
    {
        const bool branch_taken_0x13e9ec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x13e9ec) {
            ctx->pc = 0x13E9F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13E9ECu;
            // 0x13e9f0: 0x8c430494  lw          $v1, 0x494($v0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1172)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13EA08u;
            goto label_13ea08;
        }
    }
    ctx->pc = 0x13E9F4u;
    // 0x13e9f4: 0x8e040238  lw          $a0, 0x238($s0)
    ctx->pc = 0x13e9f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 568)));
    // 0x13e9f8: 0x3c030002  lui         $v1, 0x2
    ctx->pc = 0x13e9f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2 << 16));
    // 0x13e9fc: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x13e9fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x13ea00: 0xae030238  sw          $v1, 0x238($s0)
    ctx->pc = 0x13ea00u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 568), GPR_U32(ctx, 3));
    // 0x13ea04: 0x8c430494  lw          $v1, 0x494($v0)
    ctx->pc = 0x13ea04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1172)));
label_13ea08:
    // 0x13ea08: 0x30630200  andi        $v1, $v1, 0x200
    ctx->pc = 0x13ea08u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)512);
    // 0x13ea0c: 0x50600005  beql        $v1, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x13EA0Cu;
    {
        const bool branch_taken_0x13ea0c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x13ea0c) {
            ctx->pc = 0x13EA10u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13EA0Cu;
            // 0x13ea10: 0x8e040494  lw          $a0, 0x494($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1172)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13EA24u;
            goto label_13ea24;
        }
    }
    ctx->pc = 0x13EA14u;
    // 0x13ea14: 0x8e030238  lw          $v1, 0x238($s0)
    ctx->pc = 0x13ea14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 568)));
    // 0x13ea18: 0x34630002  ori         $v1, $v1, 0x2
    ctx->pc = 0x13ea18u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
    // 0x13ea1c: 0xae030238  sw          $v1, 0x238($s0)
    ctx->pc = 0x13ea1cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 568), GPR_U32(ctx, 3));
    // 0x13ea20: 0x8e040494  lw          $a0, 0x494($s0)
    ctx->pc = 0x13ea20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1172)));
label_13ea24:
    // 0x13ea24: 0x3c030002  lui         $v1, 0x2
    ctx->pc = 0x13ea24u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2 << 16));
    // 0x13ea28: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x13ea28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x13ea2c: 0x50600005  beql        $v1, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x13EA2Cu;
    {
        const bool branch_taken_0x13ea2c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x13ea2c) {
            ctx->pc = 0x13EA30u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13EA2Cu;
            // 0x13ea30: 0x8c440530  lw          $a0, 0x530($v0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1328)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13EA44u;
            goto label_13ea44;
        }
    }
    ctx->pc = 0x13EA34u;
    // 0x13ea34: 0x8e030238  lw          $v1, 0x238($s0)
    ctx->pc = 0x13ea34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 568)));
    // 0x13ea38: 0x34630004  ori         $v1, $v1, 0x4
    ctx->pc = 0x13ea38u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4);
    // 0x13ea3c: 0xae030238  sw          $v1, 0x238($s0)
    ctx->pc = 0x13ea3cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 568), GPR_U32(ctx, 3));
    // 0x13ea40: 0x8c440530  lw          $a0, 0x530($v0)
    ctx->pc = 0x13ea40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1328)));
label_13ea44:
    // 0x13ea44: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x13ea44u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x13ea48: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x13ea48u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x13ea4c: 0x50600005  beql        $v1, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x13EA4Cu;
    {
        const bool branch_taken_0x13ea4c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x13ea4c) {
            ctx->pc = 0x13EA50u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13EA4Cu;
            // 0x13ea50: 0x8e030498  lw          $v1, 0x498($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1176)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13EA64u;
            goto label_13ea64;
        }
    }
    ctx->pc = 0x13EA54u;
    // 0x13ea54: 0x8e030238  lw          $v1, 0x238($s0)
    ctx->pc = 0x13ea54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 568)));
    // 0x13ea58: 0x34630010  ori         $v1, $v1, 0x10
    ctx->pc = 0x13ea58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16);
    // 0x13ea5c: 0xae030238  sw          $v1, 0x238($s0)
    ctx->pc = 0x13ea5cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 568), GPR_U32(ctx, 3));
    // 0x13ea60: 0x8e030498  lw          $v1, 0x498($s0)
    ctx->pc = 0x13ea60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1176)));
label_13ea64:
    // 0x13ea64: 0x30630020  andi        $v1, $v1, 0x20
    ctx->pc = 0x13ea64u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32);
    // 0x13ea68: 0x50600031  beql        $v1, $zero, . + 4 + (0x31 << 2)
    ctx->pc = 0x13EA68u;
    {
        const bool branch_taken_0x13ea68 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x13ea68) {
            ctx->pc = 0x13EA6Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13EA68u;
            // 0x13ea6c: 0x8e04023c  lw          $a0, 0x23C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 572)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13EB30u;
            goto label_13eb30;
        }
    }
    ctx->pc = 0x13EA70u;
    // 0x13ea70: 0x96040224  lhu         $a0, 0x224($s0)
    ctx->pc = 0x13ea70u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 548)));
    // 0x13ea74: 0x960300ec  lhu         $v1, 0xEC($s0)
    ctx->pc = 0x13ea74u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 236)));
    // 0x13ea78: 0x50830006  beql        $a0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x13EA78u;
    {
        const bool branch_taken_0x13ea78 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x13ea78) {
            ctx->pc = 0x13EA7Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13EA78u;
            // 0x13ea7c: 0x8e05023c  lw          $a1, 0x23C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 572)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13EA94u;
            goto label_13ea94;
        }
    }
    ctx->pc = 0x13EA80u;
    // 0x13ea80: 0x8e04023c  lw          $a0, 0x23C($s0)
    ctx->pc = 0x13ea80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 572)));
    // 0x13ea84: 0x2403efff  addiu       $v1, $zero, -0x1001
    ctx->pc = 0x13ea84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
    // 0x13ea88: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x13ea88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x13ea8c: 0xae03023c  sw          $v1, 0x23C($s0)
    ctx->pc = 0x13ea8cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 572), GPR_U32(ctx, 3));
    // 0x13ea90: 0x8e05023c  lw          $a1, 0x23C($s0)
    ctx->pc = 0x13ea90u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 572)));
label_13ea94:
    // 0x13ea94: 0x3c030002  lui         $v1, 0x2
    ctx->pc = 0x13ea94u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2 << 16));
    // 0x13ea98: 0xa31824  and         $v1, $a1, $v1
    ctx->pc = 0x13ea98u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x13ea9c: 0x50600021  beql        $v1, $zero, . + 4 + (0x21 << 2)
    ctx->pc = 0x13EA9Cu;
    {
        const bool branch_taken_0x13ea9c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x13ea9c) {
            ctx->pc = 0x13EAA0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13EA9Cu;
            // 0x13eaa0: 0x8e03023c  lw          $v1, 0x23C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 572)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13EB24u;
            goto label_13eb24;
        }
    }
    ctx->pc = 0x13EAA4u;
    // 0x13eaa4: 0x9604024c  lhu         $a0, 0x24C($s0)
    ctx->pc = 0x13eaa4u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 588)));
    // 0x13eaa8: 0x960300ec  lhu         $v1, 0xEC($s0)
    ctx->pc = 0x13eaa8u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 236)));
    // 0x13eaac: 0x50640004  beql        $v1, $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x13EAACu;
    {
        const bool branch_taken_0x13eaac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x13eaac) {
            ctx->pc = 0x13EAB0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13EAACu;
            // 0x13eab0: 0x30a31000  andi        $v1, $a1, 0x1000 (Delay Slot)
            SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)4096);
            ctx->in_delay_slot = false;
            ctx->pc = 0x13EAC0u;
            goto label_13eac0;
        }
    }
    ctx->pc = 0x13EAB4u;
    // 0x13eab4: 0x14800010  bnez        $a0, . + 4 + (0x10 << 2)
    ctx->pc = 0x13EAB4u;
    {
        const bool branch_taken_0x13eab4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x13eab4) {
            ctx->pc = 0x13EAF8u;
            goto label_13eaf8;
        }
    }
    ctx->pc = 0x13EABCu;
    // 0x13eabc: 0x30a31000  andi        $v1, $a1, 0x1000
    ctx->pc = 0x13eabcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)4096);
label_13eac0:
    // 0x13eac0: 0x14600017  bnez        $v1, . + 4 + (0x17 << 2)
    ctx->pc = 0x13EAC0u;
    {
        const bool branch_taken_0x13eac0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x13eac0) {
            ctx->pc = 0x13EB20u;
            goto label_13eb20;
        }
    }
    ctx->pc = 0x13EAC8u;
    // 0x13eac8: 0x8e040238  lw          $a0, 0x238($s0)
    ctx->pc = 0x13eac8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 568)));
    // 0x13eacc: 0x3c03fffd  lui         $v1, 0xFFFD
    ctx->pc = 0x13eaccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65533 << 16));
    // 0x13ead0: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x13ead0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x13ead4: 0x34844000  ori         $a0, $a0, 0x4000
    ctx->pc = 0x13ead4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)16384);
    // 0x13ead8: 0xae040238  sw          $a0, 0x238($s0)
    ctx->pc = 0x13ead8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 568), GPR_U32(ctx, 4));
    // 0x13eadc: 0x960400ec  lhu         $a0, 0xEC($s0)
    ctx->pc = 0x13eadcu;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 236)));
    // 0x13eae0: 0xa6040224  sh          $a0, 0x224($s0)
    ctx->pc = 0x13eae0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 548), (uint16_t)GPR_U32(ctx, 4));
    // 0x13eae4: 0xa600024c  sh          $zero, 0x24C($s0)
    ctx->pc = 0x13eae4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 588), (uint16_t)GPR_U32(ctx, 0));
    // 0x13eae8: 0x8e04023c  lw          $a0, 0x23C($s0)
    ctx->pc = 0x13eae8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 572)));
    // 0x13eaec: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x13eaecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x13eaf0: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x13EAF0u;
    {
        const bool branch_taken_0x13eaf0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13EAF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13EAF0u;
        // 0x13eaf4: 0xae03023c  sw          $v1, 0x23C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 572), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13eaf0) {
            ctx->pc = 0x13EB20u;
            goto label_13eb20;
        }
    }
    ctx->pc = 0x13EAF8u;
label_13eaf8:
    // 0x13eaf8: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x13EAF8u;
    {
        const bool branch_taken_0x13eaf8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x13eaf8) {
            ctx->pc = 0x13EB20u;
            goto label_13eb20;
        }
    }
    ctx->pc = 0x13EB00u;
    // 0x13eb00: 0x9203025f  lbu         $v1, 0x25F($s0)
    ctx->pc = 0x13eb00u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 607)));
    // 0x13eb04: 0x2861000b  slti        $at, $v1, 0xB
    ctx->pc = 0x13eb04u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)11) ? 1 : 0);
    // 0x13eb08: 0x54200003  bnel        $at, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x13EB08u;
    {
        const bool branch_taken_0x13eb08 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x13eb08) {
            ctx->pc = 0x13EB0Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13EB08u;
            // 0x13eb0c: 0x9203025f  lbu         $v1, 0x25F($s0) (Delay Slot)
            SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 607)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13EB18u;
            goto label_13eb18;
        }
    }
    ctx->pc = 0x13EB10u;
    // 0x13eb10: 0xae000208  sw          $zero, 0x208($s0)
    ctx->pc = 0x13eb10u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 520), GPR_U32(ctx, 0));
    // 0x13eb14: 0x9203025f  lbu         $v1, 0x25F($s0)
    ctx->pc = 0x13eb14u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 607)));
label_13eb18:
    // 0x13eb18: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x13eb18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x13eb1c: 0xa203025f  sb          $v1, 0x25F($s0)
    ctx->pc = 0x13eb1cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 607), (uint8_t)GPR_U32(ctx, 3));
label_13eb20:
    // 0x13eb20: 0x8e03023c  lw          $v1, 0x23C($s0)
    ctx->pc = 0x13eb20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 572)));
label_13eb24:
    // 0x13eb24: 0x34631000  ori         $v1, $v1, 0x1000
    ctx->pc = 0x13eb24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4096);
    // 0x13eb28: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x13EB28u;
    {
        const bool branch_taken_0x13eb28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13EB2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13EB28u;
        // 0x13eb2c: 0xae03023c  sw          $v1, 0x23C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 572), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13eb28) {
            ctx->pc = 0x13EB3Cu;
            goto label_13eb3c;
        }
    }
    ctx->pc = 0x13EB30u;
label_13eb30:
    // 0x13eb30: 0x2403efff  addiu       $v1, $zero, -0x1001
    ctx->pc = 0x13eb30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
    // 0x13eb34: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x13eb34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x13eb38: 0xae03023c  sw          $v1, 0x23C($s0)
    ctx->pc = 0x13eb38u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 572), GPR_U32(ctx, 3));
label_13eb3c:
    // 0x13eb3c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x13eb3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_13eb40:
    // 0x13eb40: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x13eb40u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13eb44: 0x3e00008  jr          $ra
    ctx->pc = 0x13EB44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13EB48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13EB44u;
        // 0x13eb48: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13EB44u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13EB4Cu;
    // 0x13eb4c: 0x0  nop
    ctx->pc = 0x13eb4cu;
    // NOP
}
