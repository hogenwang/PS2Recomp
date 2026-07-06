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

// Function: sub_0013EB50
// Address: 0x13eb50 - 0x13f450
void sub_0013EB50_0x13eb50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013EB50_0x13eb50");
#endif

    switch (ctx->pc) {
        case 0x13eb70u: goto label_13eb70;
        case 0x13edccu: goto label_13edcc;
        case 0x13eee0u: goto label_13eee0;
        case 0x13ef94u: goto label_13ef94;
        case 0x13efb0u: goto label_13efb0;
        case 0x13efc0u: goto label_13efc0;
        case 0x13f140u: goto label_13f140;
        case 0x13f250u: goto label_13f250;
        case 0x13f278u: goto label_13f278;
        case 0x13f2a0u: goto label_13f2a0;
        case 0x13f2c8u: goto label_13f2c8;
        case 0x13f2f0u: goto label_13f2f0;
        case 0x13f318u: goto label_13f318;
        default: break;
    }

    ctx->pc = 0x13eb50u;

    // 0x13eb50: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x13eb50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x13eb54: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x13eb54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x13eb58: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x13eb58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x13eb5c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x13eb5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x13eb60: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x13eb60u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13eb64: 0x8ca400dc  lw          $a0, 0xDC($a1)
    ctx->pc = 0x13eb64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 220)));
    // 0x13eb68: 0xc062804  jal         func_18A010
    ctx->pc = 0x13EB68u;
    SET_GPR_U32(ctx, 31, 0x13EB70u);
    ctx->pc = 0x13EB6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13EB68u;
    // 0x13eb6c: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18A010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18A010u, 0x13EB68u, 0x13EB70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13EB70u;
label_13eb70:
    // 0x13eb70: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x13EB70u;
    {
        const bool branch_taken_0x13eb70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x13eb70) {
            ctx->pc = 0x13EB74u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13EB70u;
            // 0x13eb74: 0x2e210008  sltiu       $at, $s1, 0x8 (Delay Slot)
            SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
            ctx->in_delay_slot = false;
            ctx->pc = 0x13EB80u;
            goto label_13eb80;
        }
    }
    ctx->pc = 0x13EB78u;
    // 0x13eb78: 0x1000005d  b           . + 4 + (0x5D << 2)
    ctx->pc = 0x13EB78u;
    {
        const bool branch_taken_0x13eb78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13EB7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13EB78u;
        // 0x13eb7c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13eb78) {
            ctx->pc = 0x13ECF0u;
            goto label_13ecf0;
        }
    }
    ctx->pc = 0x13EB80u;
label_13eb80:
    // 0x13eb80: 0x50200051  beql        $at, $zero, . + 4 + (0x51 << 2)
    ctx->pc = 0x13EB80u;
    {
        const bool branch_taken_0x13eb80 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x13eb80) {
            ctx->pc = 0x13EB84u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13EB80u;
            // 0x13eb84: 0x2a210004  slti        $at, $s1, 0x4 (Delay Slot)
            SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)4) ? 1 : 0);
            ctx->in_delay_slot = false;
            ctx->pc = 0x13ECC8u;
            goto label_13ecc8;
        }
    }
    ctx->pc = 0x13EB88u;
    // 0x13eb88: 0x3c03003e  lui         $v1, 0x3E
    ctx->pc = 0x13eb88u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)62 << 16));
    // 0x13eb8c: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x13eb8cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x13eb90: 0x2463cbe0  addiu       $v1, $v1, -0x3420
    ctx->pc = 0x13eb90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294953952));
    // 0x13eb94: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x13eb94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x13eb98: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x13eb98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x13eb9c: 0x400008  jr          $v0
    ctx->pc = 0x13EB9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x13EBA4u: goto label_13eba4;
            case 0x13EBC8u: goto label_13ebc8;
            case 0x13EBECu: goto label_13ebec;
            case 0x13EC10u: goto label_13ec10;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13EB9Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x13EBA4u;
label_13eba4:
    // 0x13eba4: 0x8e020238  lw          $v0, 0x238($s0)
    ctx->pc = 0x13eba4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 568)));
    // 0x13eba8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x13eba8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x13ebac: 0x10400045  beqz        $v0, . + 4 + (0x45 << 2)
    ctx->pc = 0x13EBACu;
    {
        const bool branch_taken_0x13ebac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x13ebac) {
            ctx->pc = 0x13ECC4u;
            goto label_13ecc4;
        }
    }
    ctx->pc = 0x13EBB4u;
    // 0x13ebb4: 0x96030234  lhu         $v1, 0x234($s0)
    ctx->pc = 0x13ebb4u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 564)));
    // 0x13ebb8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x13ebb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13ebbc: 0x3063fffe  andi        $v1, $v1, 0xFFFE
    ctx->pc = 0x13ebbcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65534);
    // 0x13ebc0: 0x1000004b  b           . + 4 + (0x4B << 2)
    ctx->pc = 0x13EBC0u;
    {
        const bool branch_taken_0x13ebc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13EBC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13EBC0u;
        // 0x13ebc4: 0xa6030234  sh          $v1, 0x234($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 564), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13ebc0) {
            ctx->pc = 0x13ECF0u;
            goto label_13ecf0;
        }
    }
    ctx->pc = 0x13EBC8u;
label_13ebc8:
    // 0x13ebc8: 0x8e020238  lw          $v0, 0x238($s0)
    ctx->pc = 0x13ebc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 568)));
    // 0x13ebcc: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x13ebccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x13ebd0: 0x1040003c  beqz        $v0, . + 4 + (0x3C << 2)
    ctx->pc = 0x13EBD0u;
    {
        const bool branch_taken_0x13ebd0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x13ebd0) {
            ctx->pc = 0x13ECC4u;
            goto label_13ecc4;
        }
    }
    ctx->pc = 0x13EBD8u;
    // 0x13ebd8: 0x96030234  lhu         $v1, 0x234($s0)
    ctx->pc = 0x13ebd8u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 564)));
    // 0x13ebdc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x13ebdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13ebe0: 0x3063fffe  andi        $v1, $v1, 0xFFFE
    ctx->pc = 0x13ebe0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65534);
    // 0x13ebe4: 0x10000042  b           . + 4 + (0x42 << 2)
    ctx->pc = 0x13EBE4u;
    {
        const bool branch_taken_0x13ebe4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13EBE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13EBE4u;
        // 0x13ebe8: 0xa6030234  sh          $v1, 0x234($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 564), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13ebe4) {
            ctx->pc = 0x13ECF0u;
            goto label_13ecf0;
        }
    }
    ctx->pc = 0x13EBECu;
label_13ebec:
    // 0x13ebec: 0x8e020238  lw          $v0, 0x238($s0)
    ctx->pc = 0x13ebecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 568)));
    // 0x13ebf0: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x13ebf0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x13ebf4: 0x10400033  beqz        $v0, . + 4 + (0x33 << 2)
    ctx->pc = 0x13EBF4u;
    {
        const bool branch_taken_0x13ebf4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x13ebf4) {
            ctx->pc = 0x13ECC4u;
            goto label_13ecc4;
        }
    }
    ctx->pc = 0x13EBFCu;
    // 0x13ebfc: 0x96030234  lhu         $v1, 0x234($s0)
    ctx->pc = 0x13ebfcu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 564)));
    // 0x13ec00: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x13ec00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13ec04: 0x3063fffe  andi        $v1, $v1, 0xFFFE
    ctx->pc = 0x13ec04u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65534);
    // 0x13ec08: 0x10000039  b           . + 4 + (0x39 << 2)
    ctx->pc = 0x13EC08u;
    {
        const bool branch_taken_0x13ec08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13EC0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13EC08u;
        // 0x13ec0c: 0xa6030234  sh          $v1, 0x234($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 564), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13ec08) {
            ctx->pc = 0x13ECF0u;
            goto label_13ecf0;
        }
    }
    ctx->pc = 0x13EC10u;
label_13ec10:
    // 0x13ec10: 0x8e020238  lw          $v0, 0x238($s0)
    ctx->pc = 0x13ec10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 568)));
    // 0x13ec14: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x13ec14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x13ec18: 0x1040002a  beqz        $v0, . + 4 + (0x2A << 2)
    ctx->pc = 0x13EC18u;
    {
        const bool branch_taken_0x13ec18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x13ec18) {
            ctx->pc = 0x13ECC4u;
            goto label_13ecc4;
        }
    }
    ctx->pc = 0x13EC20u;
    // 0x13ec20: 0x96030234  lhu         $v1, 0x234($s0)
    ctx->pc = 0x13ec20u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 564)));
    // 0x13ec24: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x13ec24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13ec28: 0x3063fffe  andi        $v1, $v1, 0xFFFE
    ctx->pc = 0x13ec28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65534);
    // 0x13ec2c: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x13EC2Cu;
    {
        const bool branch_taken_0x13ec2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13EC30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13EC2Cu;
        // 0x13ec30: 0xa6030234  sh          $v1, 0x234($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 564), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13ec2c) {
            ctx->pc = 0x13ECF0u;
            goto label_13ecf0;
        }
    }
    ctx->pc = 0x13EC34u;
    // 0x13ec34: 0x8e020238  lw          $v0, 0x238($s0)
    ctx->pc = 0x13ec34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 568)));
    // 0x13ec38: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x13ec38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x13ec3c: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x13EC3Cu;
    {
        const bool branch_taken_0x13ec3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x13ec3c) {
            ctx->pc = 0x13ECC4u;
            goto label_13ecc4;
        }
    }
    ctx->pc = 0x13EC44u;
    // 0x13ec44: 0x96030234  lhu         $v1, 0x234($s0)
    ctx->pc = 0x13ec44u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 564)));
    // 0x13ec48: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x13ec48u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13ec4c: 0x34630001  ori         $v1, $v1, 0x1
    ctx->pc = 0x13ec4cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
    // 0x13ec50: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x13EC50u;
    {
        const bool branch_taken_0x13ec50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13EC54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13EC50u;
        // 0x13ec54: 0xa6030234  sh          $v1, 0x234($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 564), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13ec50) {
            ctx->pc = 0x13ECF0u;
            goto label_13ecf0;
        }
    }
    ctx->pc = 0x13EC58u;
    // 0x13ec58: 0x8e020238  lw          $v0, 0x238($s0)
    ctx->pc = 0x13ec58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 568)));
    // 0x13ec5c: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x13ec5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x13ec60: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x13EC60u;
    {
        const bool branch_taken_0x13ec60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x13ec60) {
            ctx->pc = 0x13ECC4u;
            goto label_13ecc4;
        }
    }
    ctx->pc = 0x13EC68u;
    // 0x13ec68: 0x96030234  lhu         $v1, 0x234($s0)
    ctx->pc = 0x13ec68u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 564)));
    // 0x13ec6c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x13ec6cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13ec70: 0x34630001  ori         $v1, $v1, 0x1
    ctx->pc = 0x13ec70u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
    // 0x13ec74: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x13EC74u;
    {
        const bool branch_taken_0x13ec74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13EC78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13EC74u;
        // 0x13ec78: 0xa6030234  sh          $v1, 0x234($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 564), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13ec74) {
            ctx->pc = 0x13ECF0u;
            goto label_13ecf0;
        }
    }
    ctx->pc = 0x13EC7Cu;
    // 0x13ec7c: 0x8e020238  lw          $v0, 0x238($s0)
    ctx->pc = 0x13ec7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 568)));
    // 0x13ec80: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x13ec80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x13ec84: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x13EC84u;
    {
        const bool branch_taken_0x13ec84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x13ec84) {
            ctx->pc = 0x13ECC4u;
            goto label_13ecc4;
        }
    }
    ctx->pc = 0x13EC8Cu;
    // 0x13ec8c: 0x96030234  lhu         $v1, 0x234($s0)
    ctx->pc = 0x13ec8cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 564)));
    // 0x13ec90: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x13ec90u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13ec94: 0x34630001  ori         $v1, $v1, 0x1
    ctx->pc = 0x13ec94u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
    // 0x13ec98: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x13EC98u;
    {
        const bool branch_taken_0x13ec98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13EC9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13EC98u;
        // 0x13ec9c: 0xa6030234  sh          $v1, 0x234($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 564), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13ec98) {
            ctx->pc = 0x13ECF0u;
            goto label_13ecf0;
        }
    }
    ctx->pc = 0x13ECA0u;
    // 0x13eca0: 0x8e020238  lw          $v0, 0x238($s0)
    ctx->pc = 0x13eca0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 568)));
    // 0x13eca4: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x13eca4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x13eca8: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x13ECA8u;
    {
        const bool branch_taken_0x13eca8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x13eca8) {
            ctx->pc = 0x13ECC4u;
            goto label_13ecc4;
        }
    }
    ctx->pc = 0x13ECB0u;
    // 0x13ecb0: 0x96030234  lhu         $v1, 0x234($s0)
    ctx->pc = 0x13ecb0u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 564)));
    // 0x13ecb4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x13ecb4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13ecb8: 0x34630001  ori         $v1, $v1, 0x1
    ctx->pc = 0x13ecb8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
    // 0x13ecbc: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x13ECBCu;
    {
        const bool branch_taken_0x13ecbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13ECC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13ECBCu;
        // 0x13ecc0: 0xa6030234  sh          $v1, 0x234($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 564), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13ecbc) {
            ctx->pc = 0x13ECF0u;
            goto label_13ecf0;
        }
    }
    ctx->pc = 0x13ECC4u;
label_13ecc4:
    // 0x13ecc4: 0x2a210004  slti        $at, $s1, 0x4
    ctx->pc = 0x13ecc4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)4) ? 1 : 0);
label_13ecc8:
    // 0x13ecc8: 0x50200006  beql        $at, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x13ECC8u;
    {
        const bool branch_taken_0x13ecc8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x13ecc8) {
            ctx->pc = 0x13ECCCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13ECC8u;
            // 0x13eccc: 0x96030234  lhu         $v1, 0x234($s0) (Delay Slot)
            SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 564)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13ECE4u;
            goto label_13ece4;
        }
    }
    ctx->pc = 0x13ECD0u;
    // 0x13ecd0: 0x96030234  lhu         $v1, 0x234($s0)
    ctx->pc = 0x13ecd0u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 564)));
    // 0x13ecd4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x13ecd4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13ecd8: 0x34630001  ori         $v1, $v1, 0x1
    ctx->pc = 0x13ecd8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
    // 0x13ecdc: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x13ECDCu;
    {
        const bool branch_taken_0x13ecdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13ECE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13ECDCu;
        // 0x13ece0: 0xa6030234  sh          $v1, 0x234($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 564), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13ecdc) {
            ctx->pc = 0x13ECF0u;
            goto label_13ecf0;
        }
    }
    ctx->pc = 0x13ECE4u;
label_13ece4:
    // 0x13ece4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x13ece4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13ece8: 0x3063fffe  andi        $v1, $v1, 0xFFFE
    ctx->pc = 0x13ece8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65534);
    // 0x13ecec: 0xa6030234  sh          $v1, 0x234($s0)
    ctx->pc = 0x13ececu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 564), (uint16_t)GPR_U32(ctx, 3));
label_13ecf0:
    // 0x13ecf0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x13ecf0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x13ecf4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x13ecf4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13ecf8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x13ecf8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13ecfc: 0x3e00008  jr          $ra
    ctx->pc = 0x13ECFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13ED00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13ECFCu;
        // 0x13ed00: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13ECFCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13ED04u;
    // 0x13ed04: 0x0  nop
    ctx->pc = 0x13ed04u;
    // NOP
    // 0x13ed08: 0x0  nop
    ctx->pc = 0x13ed08u;
    // NOP
    // 0x13ed0c: 0x0  nop
    ctx->pc = 0x13ed0cu;
    // NOP
    // 0x13ed10: 0x28810005  slti        $at, $a0, 0x5
    ctx->pc = 0x13ed10u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x13ed14: 0x50200007  beql        $at, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x13ED14u;
    {
        const bool branch_taken_0x13ed14 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x13ed14) {
            ctx->pc = 0x13ED18u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13ED14u;
            // 0x13ed18: 0x2483fffc  addiu       $v1, $a0, -0x4 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967292));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13ED34u;
            goto label_13ed34;
        }
    }
    ctx->pc = 0x13ED1Cu;
    // 0x13ed1c: 0x24830001  addiu       $v1, $a0, 0x1
    ctx->pc = 0x13ed1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x13ed20: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x13ed20u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x13ed24: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x13ed24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13ed28: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x13ed28u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x13ed2c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x13ED2Cu;
    {
        const bool branch_taken_0x13ed2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13ED30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13ED2Cu;
        // 0x13ed30: 0x23900  sll         $a3, $v0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13ed2c) {
            ctx->pc = 0x13ED44u;
            goto label_13ed44;
        }
    }
    ctx->pc = 0x13ED34u;
label_13ed34:
    // 0x13ed34: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x13ed34u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x13ed38: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x13ed38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13ed3c: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x13ed3cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x13ed40: 0x23900  sll         $a3, $v0, 4
    ctx->pc = 0x13ed40u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_13ed44:
    // 0x13ed44: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x13ed44u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x13ed48: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x13ed48u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x13ed4c: 0x8ca400dc  lw          $a0, 0xDC($a1)
    ctx->pc = 0x13ed4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 220)));
    // 0x13ed50: 0x2463db88  addiu       $v1, $v1, -0x2478
    ctx->pc = 0x13ed50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294957960));
    // 0x13ed54: 0x3084000c  andi        $a0, $a0, 0xC
    ctx->pc = 0x13ed54u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)12);
    // 0x13ed58: 0x43082  srl         $a2, $a0, 2
    ctx->pc = 0x13ed58u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 4), 2));
    // 0x13ed5c: 0x620c0  sll         $a0, $a2, 3
    ctx->pc = 0x13ed5cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x13ed60: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x13ed60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x13ed64: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x13ed64u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x13ed68: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x13ed68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x13ed6c: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x13ed6cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x13ed70: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x13ed70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x13ed74: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x13ed74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x13ed78: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x13ed78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x13ed7c: 0x47102a  slt         $v0, $v0, $a3
    ctx->pc = 0x13ed7cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x13ed80: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x13ED80u;
    {
        const bool branch_taken_0x13ed80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x13ed80) {
            ctx->pc = 0x13ED84u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13ED80u;
            // 0x13ed84: 0x94a30234  lhu         $v1, 0x234($a1) (Delay Slot)
            SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 564)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13ED9Cu;
            goto label_13ed9c;
        }
    }
    ctx->pc = 0x13ED88u;
    // 0x13ed88: 0x94a30234  lhu         $v1, 0x234($a1)
    ctx->pc = 0x13ed88u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 564)));
    // 0x13ed8c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x13ed8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13ed90: 0x3063fffd  andi        $v1, $v1, 0xFFFD
    ctx->pc = 0x13ed90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65533);
    // 0x13ed94: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x13ED94u;
    {
        const bool branch_taken_0x13ed94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13ED98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13ED94u;
        // 0x13ed98: 0xa4a30234  sh          $v1, 0x234($a1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 5), 564), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13ed94) {
            ctx->pc = 0x13EDA8u;
            goto label_13eda8;
        }
    }
    ctx->pc = 0x13ED9Cu;
label_13ed9c:
    // 0x13ed9c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x13ed9cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13eda0: 0x34630002  ori         $v1, $v1, 0x2
    ctx->pc = 0x13eda0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
    // 0x13eda4: 0xa4a30234  sh          $v1, 0x234($a1)
    ctx->pc = 0x13eda4u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 564), (uint16_t)GPR_U32(ctx, 3));
label_13eda8:
    // 0x13eda8: 0x3e00008  jr          $ra
    ctx->pc = 0x13EDA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13EDA8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13EDB0u;
    // 0x13edb0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x13edb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x13edb4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x13edb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x13edb8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x13edb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x13edbc: 0x1480000a  bnez        $a0, . + 4 + (0xA << 2)
    ctx->pc = 0x13EDBCu;
    {
        const bool branch_taken_0x13edbc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x13EDC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13EDBCu;
        // 0x13edc0: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13edbc) {
            ctx->pc = 0x13EDE8u;
            goto label_13ede8;
        }
    }
    ctx->pc = 0x13EDC4u;
    // 0x13edc4: 0xc062d08  jal         func_18B420
    ctx->pc = 0x13EDC4u;
    SET_GPR_U32(ctx, 31, 0x13EDCCu);
    ctx->pc = 0x13EDC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13EDC4u;
    // 0x13edc8: 0x8e0400dc  lw          $a0, 0xDC($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 220)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18B420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18B420u, 0x13EDC4u, 0x13EDCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13EDCCu;
label_13edcc:
    // 0x13edcc: 0x54400020  bnel        $v0, $zero, . + 4 + (0x20 << 2)
    ctx->pc = 0x13EDCCu;
    {
        const bool branch_taken_0x13edcc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x13edcc) {
            ctx->pc = 0x13EDD0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13EDCCu;
            // 0x13edd0: 0x96030234  lhu         $v1, 0x234($s0) (Delay Slot)
            SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 564)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13EE50u;
            goto label_13ee50;
        }
    }
    ctx->pc = 0x13EDD4u;
    // 0x13edd4: 0x96030234  lhu         $v1, 0x234($s0)
    ctx->pc = 0x13edd4u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 564)));
    // 0x13edd8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x13edd8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13eddc: 0x34630080  ori         $v1, $v1, 0x80
    ctx->pc = 0x13eddcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)128);
    // 0x13ede0: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x13EDE0u;
    {
        const bool branch_taken_0x13ede0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13EDE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13EDE0u;
        // 0x13ede4: 0xa6030234  sh          $v1, 0x234($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 564), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13ede0) {
            ctx->pc = 0x13EE5Cu;
            goto label_13ee5c;
        }
    }
    ctx->pc = 0x13EDE8u;
label_13ede8:
    // 0x13ede8: 0x8e0400dc  lw          $a0, 0xDC($s0)
    ctx->pc = 0x13ede8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 220)));
    // 0x13edec: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x13edecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x13edf0: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x13edf0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x13edf4: 0x2463db53  addiu       $v1, $v1, -0x24AD
    ctx->pc = 0x13edf4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294957907));
    // 0x13edf8: 0x2442db80  addiu       $v0, $v0, -0x2480
    ctx->pc = 0x13edf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957952));
    // 0x13edfc: 0x3084000c  andi        $a0, $a0, 0xC
    ctx->pc = 0x13edfcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)12);
    // 0x13ee00: 0x42882  srl         $a1, $a0, 2
    ctx->pc = 0x13ee00u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 4), 2));
    // 0x13ee04: 0x520c0  sll         $a0, $a1, 3
    ctx->pc = 0x13ee04u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x13ee08: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x13ee08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x13ee0c: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x13ee0cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x13ee10: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x13ee10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x13ee14: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x13ee14u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x13ee18: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x13ee18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x13ee1c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x13ee1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x13ee20: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x13ee20u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x13ee24: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x13ee24u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x13ee28: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x13ee28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x13ee2c: 0x84420000  lh          $v0, 0x0($v0)
    ctx->pc = 0x13ee2cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x13ee30: 0x18400006  blez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x13EE30u;
    {
        const bool branch_taken_0x13ee30 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x13ee30) {
            ctx->pc = 0x13EE4Cu;
            goto label_13ee4c;
        }
    }
    ctx->pc = 0x13EE38u;
    // 0x13ee38: 0x96030234  lhu         $v1, 0x234($s0)
    ctx->pc = 0x13ee38u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 564)));
    // 0x13ee3c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x13ee3cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13ee40: 0x34630080  ori         $v1, $v1, 0x80
    ctx->pc = 0x13ee40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)128);
    // 0x13ee44: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x13EE44u;
    {
        const bool branch_taken_0x13ee44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13EE48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13EE44u;
        // 0x13ee48: 0xa6030234  sh          $v1, 0x234($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 564), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13ee44) {
            ctx->pc = 0x13EE5Cu;
            goto label_13ee5c;
        }
    }
    ctx->pc = 0x13EE4Cu;
label_13ee4c:
    // 0x13ee4c: 0x96030234  lhu         $v1, 0x234($s0)
    ctx->pc = 0x13ee4cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 564)));
label_13ee50:
    // 0x13ee50: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x13ee50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13ee54: 0x3063ff7f  andi        $v1, $v1, 0xFF7F
    ctx->pc = 0x13ee54u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65407);
    // 0x13ee58: 0xa6030234  sh          $v1, 0x234($s0)
    ctx->pc = 0x13ee58u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 564), (uint16_t)GPR_U32(ctx, 3));
label_13ee5c:
    // 0x13ee5c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x13ee5cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13ee60: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x13ee60u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13ee64: 0x3e00008  jr          $ra
    ctx->pc = 0x13EE64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13EE68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13EE64u;
        // 0x13ee68: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13EE64u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13EE6Cu;
    // 0x13ee6c: 0x0  nop
    ctx->pc = 0x13ee6cu;
    // NOP
    // 0x13ee70: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x13ee70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x13ee74: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x13ee74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x13ee78: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x13ee78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x13ee7c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x13ee7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x13ee80: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x13ee80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x13ee84: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x13ee84u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13ee88: 0x8ca30238  lw          $v1, 0x238($a1)
    ctx->pc = 0x13ee88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 568)));
    // 0x13ee8c: 0x30620008  andi        $v0, $v1, 0x8
    ctx->pc = 0x13ee8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
    // 0x13ee90: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x13EE90u;
    {
        const bool branch_taken_0x13ee90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x13EE94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13EE90u;
        // 0x13ee94: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13ee90) {
            ctx->pc = 0x13EEACu;
            goto label_13eeac;
        }
    }
    ctx->pc = 0x13EE98u;
    // 0x13ee98: 0x96020234  lhu         $v0, 0x234($s0)
    ctx->pc = 0x13ee98u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 564)));
    // 0x13ee9c: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x13ee9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x13eea0: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x13eea0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x13eea4: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x13EEA4u;
    {
        const bool branch_taken_0x13eea4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13EEA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13EEA4u;
        // 0x13eea8: 0x38420001  xori        $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x13eea4) {
            ctx->pc = 0x13EF54u;
            goto label_13ef54;
        }
    }
    ctx->pc = 0x13EEACu;
label_13eeac:
    // 0x13eeac: 0x34620008  ori         $v0, $v1, 0x8
    ctx->pc = 0x13eeacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8);
    // 0x13eeb0: 0x2a210004  slti        $at, $s1, 0x4
    ctx->pc = 0x13eeb0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x13eeb4: 0x10200005  beqz        $at, . + 4 + (0x5 << 2)
    ctx->pc = 0x13EEB4u;
    {
        const bool branch_taken_0x13eeb4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x13EEB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13EEB4u;
        // 0x13eeb8: 0xae020238  sw          $v0, 0x238($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 568), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13eeb4) {
            ctx->pc = 0x13EECCu;
            goto label_13eecc;
        }
    }
    ctx->pc = 0x13EEBCu;
    // 0x13eebc: 0x26230001  addiu       $v1, $s1, 0x1
    ctx->pc = 0x13eebcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x13eec0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x13eec0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13eec4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x13EEC4u;
    {
        const bool branch_taken_0x13eec4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13EEC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13EEC4u;
        // 0x13eec8: 0x629004  sllv        $s2, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 3) & 0x1F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13eec4) {
            ctx->pc = 0x13EED8u;
            goto label_13eed8;
        }
    }
    ctx->pc = 0x13EECCu;
label_13eecc:
    // 0x13eecc: 0x2623fffe  addiu       $v1, $s1, -0x2
    ctx->pc = 0x13eeccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967294));
    // 0x13eed0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x13eed0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13eed4: 0x629004  sllv        $s2, $v0, $v1
    ctx->pc = 0x13eed4u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 3) & 0x1F));
label_13eed8:
    // 0x13eed8: 0xc067c48  jal         func_19F120
    ctx->pc = 0x13EED8u;
    SET_GPR_U32(ctx, 31, 0x13EEE0u);
    ctx->pc = 0x19F120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19F120u, 0x13EED8u, 0x13EEE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13EEE0u;
label_13eee0:
    // 0x13eee0: 0x44920800  mtc1        $s2, $f1
    ctx->pc = 0x13eee0u;
    { uint32_t bits = GPR_U32(ctx, 18); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x13eee4: 0x2a210004  slti        $at, $s1, 0x4
    ctx->pc = 0x13eee4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x13eee8: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x13eee8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x13eeec: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x13eeecu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x13eef0: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x13eef0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x13eef4: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x13eef4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x13eef8: 0x1020000c  beqz        $at, . + 4 + (0xC << 2)
    ctx->pc = 0x13EEF8u;
    {
        const bool branch_taken_0x13eef8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x13eef8) {
            ctx->pc = 0x13EF2Cu;
            goto label_13ef2c;
        }
    }
    ctx->pc = 0x13EF00u;
    // 0x13ef00: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x13EF00u;
    {
        const bool branch_taken_0x13ef00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x13ef00) {
            ctx->pc = 0x13EF04u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13EF00u;
            // 0x13ef04: 0x96030234  lhu         $v1, 0x234($s0) (Delay Slot)
            SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 564)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13EF1Cu;
            goto label_13ef1c;
        }
    }
    ctx->pc = 0x13EF08u;
    // 0x13ef08: 0x96030234  lhu         $v1, 0x234($s0)
    ctx->pc = 0x13ef08u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 564)));
    // 0x13ef0c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x13ef0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13ef10: 0x3063fffb  andi        $v1, $v1, 0xFFFB
    ctx->pc = 0x13ef10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65531);
    // 0x13ef14: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x13EF14u;
    {
        const bool branch_taken_0x13ef14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13EF18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13EF14u;
        // 0x13ef18: 0xa6030234  sh          $v1, 0x234($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 564), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13ef14) {
            ctx->pc = 0x13EF54u;
            goto label_13ef54;
        }
    }
    ctx->pc = 0x13EF1Cu;
label_13ef1c:
    // 0x13ef1c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x13ef1cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13ef20: 0x34630004  ori         $v1, $v1, 0x4
    ctx->pc = 0x13ef20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4);
    // 0x13ef24: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x13EF24u;
    {
        const bool branch_taken_0x13ef24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13EF28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13EF24u;
        // 0x13ef28: 0xa6030234  sh          $v1, 0x234($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 564), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13ef24) {
            ctx->pc = 0x13EF54u;
            goto label_13ef54;
        }
    }
    ctx->pc = 0x13EF2Cu;
label_13ef2c:
    // 0x13ef2c: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x13EF2Cu;
    {
        const bool branch_taken_0x13ef2c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x13ef2c) {
            ctx->pc = 0x13EF30u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13EF2Cu;
            // 0x13ef30: 0x96030234  lhu         $v1, 0x234($s0) (Delay Slot)
            SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 564)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13EF48u;
            goto label_13ef48;
        }
    }
    ctx->pc = 0x13EF34u;
    // 0x13ef34: 0x96030234  lhu         $v1, 0x234($s0)
    ctx->pc = 0x13ef34u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 564)));
    // 0x13ef38: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x13ef38u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13ef3c: 0x34630004  ori         $v1, $v1, 0x4
    ctx->pc = 0x13ef3cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4);
    // 0x13ef40: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x13EF40u;
    {
        const bool branch_taken_0x13ef40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13EF44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13EF40u;
        // 0x13ef44: 0xa6030234  sh          $v1, 0x234($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 564), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13ef40) {
            ctx->pc = 0x13EF54u;
            goto label_13ef54;
        }
    }
    ctx->pc = 0x13EF48u;
label_13ef48:
    // 0x13ef48: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x13ef48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13ef4c: 0x3063fffb  andi        $v1, $v1, 0xFFFB
    ctx->pc = 0x13ef4cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65531);
    // 0x13ef50: 0xa6030234  sh          $v1, 0x234($s0)
    ctx->pc = 0x13ef50u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 564), (uint16_t)GPR_U32(ctx, 3));
label_13ef54:
    // 0x13ef54: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x13ef54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x13ef58: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x13ef58u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x13ef5c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x13ef5cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13ef60: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x13ef60u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13ef64: 0x3e00008  jr          $ra
    ctx->pc = 0x13EF64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13EF68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13EF64u;
        // 0x13ef68: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13EF64u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13EF6Cu;
    // 0x13ef6c: 0x0  nop
    ctx->pc = 0x13ef6cu;
    // NOP
    // 0x13ef70: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x13ef70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x13ef74: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x13ef74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x13ef78: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x13ef78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x13ef7c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x13ef7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x13ef80: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x13ef80u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13ef84: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x13ef84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x13ef88: 0x8ca400dc  lw          $a0, 0xDC($a1)
    ctx->pc = 0x13ef88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 220)));
    // 0x13ef8c: 0xc062804  jal         func_18A010
    ctx->pc = 0x13EF8Cu;
    SET_GPR_U32(ctx, 31, 0x13EF94u);
    ctx->pc = 0x13EF90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13EF8Cu;
    // 0x13ef90: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18A010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18A010u, 0x13EF8Cu, 0x13EF94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13EF94u;
label_13ef94:
    // 0x13ef94: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x13ef94u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13ef98: 0x56000003  bnel        $s0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x13EF98u;
    {
        const bool branch_taken_0x13ef98 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x13ef98) {
            ctx->pc = 0x13EF9Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13EF98u;
            // 0x13ef9c: 0x8e2400dc  lw          $a0, 0xDC($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 220)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13EFA8u;
            goto label_13efa8;
        }
    }
    ctx->pc = 0x13EFA0u;
    // 0x13efa0: 0x10000056  b           . + 4 + (0x56 << 2)
    ctx->pc = 0x13EFA0u;
    {
        const bool branch_taken_0x13efa0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13EFA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13EFA0u;
        // 0x13efa4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13efa0) {
            ctx->pc = 0x13F0FCu;
            goto label_13f0fc;
        }
    }
    ctx->pc = 0x13EFA8u;
label_13efa8:
    // 0x13efa8: 0xc062884  jal         func_18A210
    ctx->pc = 0x13EFA8u;
    SET_GPR_U32(ctx, 31, 0x13EFB0u);
    ctx->pc = 0x18A210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18A210u, 0x13EFA8u, 0x13EFB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13EFB0u;
label_13efb0:
    // 0x13efb0: 0x8e0400dc  lw          $a0, 0xDC($s0)
    ctx->pc = 0x13efb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 220)));
    // 0x13efb4: 0x2843c  dsll32      $s0, $v0, 16
    ctx->pc = 0x13efb4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) << (32 + 16));
    // 0x13efb8: 0xc062884  jal         func_18A210
    ctx->pc = 0x13EFB8u;
    SET_GPR_U32(ctx, 31, 0x13EFC0u);
    ctx->pc = 0x13EFBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13EFB8u;
    // 0x13efbc: 0x10843f  dsra32      $s0, $s0, 16 (Delay Slot)
    SET_GPR_S64(ctx, 16, GPR_S64(ctx, 16) >> (32 + 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18A210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18A210u, 0x13EFB8u, 0x13EFC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13EFC0u;
label_13efc0:
    // 0x13efc0: 0x2243c  dsll32      $a0, $v0, 16
    ctx->pc = 0x13efc0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 16));
    // 0x13efc4: 0x2e410008  sltiu       $at, $s2, 0x8
    ctx->pc = 0x13efc4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x13efc8: 0x10200048  beqz        $at, . + 4 + (0x48 << 2)
    ctx->pc = 0x13EFC8u;
    {
        const bool branch_taken_0x13efc8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x13EFCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13EFC8u;
        // 0x13efcc: 0x4243f  dsra32      $a0, $a0, 16 (Delay Slot)
        SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13efc8) {
            ctx->pc = 0x13F0ECu;
            goto label_13f0ec;
        }
    }
    ctx->pc = 0x13EFD0u;
    // 0x13efd0: 0x3c03003e  lui         $v1, 0x3E
    ctx->pc = 0x13efd0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)62 << 16));
    // 0x13efd4: 0x121080  sll         $v0, $s2, 2
    ctx->pc = 0x13efd4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x13efd8: 0x2463cc00  addiu       $v1, $v1, -0x3400
    ctx->pc = 0x13efd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294953984));
    // 0x13efdc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x13efdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x13efe0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x13efe0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x13efe4: 0x400008  jr          $v0
    ctx->pc = 0x13EFE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x13EFECu: goto label_13efec;
            case 0x13F00Cu: goto label_13f00c;
            case 0x13F02Cu: goto label_13f02c;
            case 0x13F04Cu: goto label_13f04c;
            case 0x13F06Cu: goto label_13f06c;
            case 0x13F08Cu: goto label_13f08c;
            case 0x13F0ACu: goto label_13f0ac;
            case 0x13F0CCu: goto label_13f0cc;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13EFE4u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x13EFECu;
label_13efec:
    // 0x13efec: 0x90082a  slt         $at, $a0, $s0
    ctx->pc = 0x13efecu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x13eff0: 0x5020003f  beql        $at, $zero, . + 4 + (0x3F << 2)
    ctx->pc = 0x13EFF0u;
    {
        const bool branch_taken_0x13eff0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x13eff0) {
            ctx->pc = 0x13EFF4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13EFF0u;
            // 0x13eff4: 0x96230234  lhu         $v1, 0x234($s1) (Delay Slot)
            SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 564)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13F0F0u;
            goto label_13f0f0;
        }
    }
    ctx->pc = 0x13EFF8u;
    // 0x13eff8: 0x96230234  lhu         $v1, 0x234($s1)
    ctx->pc = 0x13eff8u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 564)));
    // 0x13effc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x13effcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13f000: 0x34630008  ori         $v1, $v1, 0x8
    ctx->pc = 0x13f000u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8);
    // 0x13f004: 0x1000003d  b           . + 4 + (0x3D << 2)
    ctx->pc = 0x13F004u;
    {
        const bool branch_taken_0x13f004 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13F008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13F004u;
        // 0x13f008: 0xa6230234  sh          $v1, 0x234($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 564), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13f004) {
            ctx->pc = 0x13F0FCu;
            goto label_13f0fc;
        }
    }
    ctx->pc = 0x13F00Cu;
label_13f00c:
    // 0x13f00c: 0x204082a  slt         $at, $s0, $a0
    ctx->pc = 0x13f00cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x13f010: 0x10200036  beqz        $at, . + 4 + (0x36 << 2)
    ctx->pc = 0x13F010u;
    {
        const bool branch_taken_0x13f010 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x13f010) {
            ctx->pc = 0x13F0ECu;
            goto label_13f0ec;
        }
    }
    ctx->pc = 0x13F018u;
    // 0x13f018: 0x96230234  lhu         $v1, 0x234($s1)
    ctx->pc = 0x13f018u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 564)));
    // 0x13f01c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x13f01cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13f020: 0x34630008  ori         $v1, $v1, 0x8
    ctx->pc = 0x13f020u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8);
    // 0x13f024: 0x10000035  b           . + 4 + (0x35 << 2)
    ctx->pc = 0x13F024u;
    {
        const bool branch_taken_0x13f024 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13F028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13F024u;
        // 0x13f028: 0xa6230234  sh          $v1, 0x234($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 564), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13f024) {
            ctx->pc = 0x13F0FCu;
            goto label_13f0fc;
        }
    }
    ctx->pc = 0x13F02Cu;
label_13f02c:
    // 0x13f02c: 0x2a010054  slti        $at, $s0, 0x54
    ctx->pc = 0x13f02cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)84) ? 1 : 0);
    // 0x13f030: 0x1020002e  beqz        $at, . + 4 + (0x2E << 2)
    ctx->pc = 0x13F030u;
    {
        const bool branch_taken_0x13f030 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x13f030) {
            ctx->pc = 0x13F0ECu;
            goto label_13f0ec;
        }
    }
    ctx->pc = 0x13F038u;
    // 0x13f038: 0x96230234  lhu         $v1, 0x234($s1)
    ctx->pc = 0x13f038u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 564)));
    // 0x13f03c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x13f03cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13f040: 0x34630008  ori         $v1, $v1, 0x8
    ctx->pc = 0x13f040u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8);
    // 0x13f044: 0x1000002d  b           . + 4 + (0x2D << 2)
    ctx->pc = 0x13F044u;
    {
        const bool branch_taken_0x13f044 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13F048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13F044u;
        // 0x13f048: 0xa6230234  sh          $v1, 0x234($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 564), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13f044) {
            ctx->pc = 0x13F0FCu;
            goto label_13f0fc;
        }
    }
    ctx->pc = 0x13F04Cu;
label_13f04c:
    // 0x13f04c: 0x2a010038  slti        $at, $s0, 0x38
    ctx->pc = 0x13f04cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)56) ? 1 : 0);
    // 0x13f050: 0x10200026  beqz        $at, . + 4 + (0x26 << 2)
    ctx->pc = 0x13F050u;
    {
        const bool branch_taken_0x13f050 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x13f050) {
            ctx->pc = 0x13F0ECu;
            goto label_13f0ec;
        }
    }
    ctx->pc = 0x13F058u;
    // 0x13f058: 0x96230234  lhu         $v1, 0x234($s1)
    ctx->pc = 0x13f058u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 564)));
    // 0x13f05c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x13f05cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13f060: 0x34630008  ori         $v1, $v1, 0x8
    ctx->pc = 0x13f060u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8);
    // 0x13f064: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x13F064u;
    {
        const bool branch_taken_0x13f064 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13F068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13F064u;
        // 0x13f068: 0xa6230234  sh          $v1, 0x234($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 564), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13f064) {
            ctx->pc = 0x13F0FCu;
            goto label_13f0fc;
        }
    }
    ctx->pc = 0x13F06Cu;
label_13f06c:
    // 0x13f06c: 0x2a01001c  slti        $at, $s0, 0x1C
    ctx->pc = 0x13f06cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)28) ? 1 : 0);
    // 0x13f070: 0x1020001e  beqz        $at, . + 4 + (0x1E << 2)
    ctx->pc = 0x13F070u;
    {
        const bool branch_taken_0x13f070 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x13f070) {
            ctx->pc = 0x13F0ECu;
            goto label_13f0ec;
        }
    }
    ctx->pc = 0x13F078u;
    // 0x13f078: 0x96230234  lhu         $v1, 0x234($s1)
    ctx->pc = 0x13f078u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 564)));
    // 0x13f07c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x13f07cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13f080: 0x34630008  ori         $v1, $v1, 0x8
    ctx->pc = 0x13f080u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8);
    // 0x13f084: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x13F084u;
    {
        const bool branch_taken_0x13f084 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13F088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13F084u;
        // 0x13f088: 0xa6230234  sh          $v1, 0x234($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 564), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13f084) {
            ctx->pc = 0x13F0FCu;
            goto label_13f0fc;
        }
    }
    ctx->pc = 0x13F08Cu;
label_13f08c:
    // 0x13f08c: 0x2a020054  slti        $v0, $s0, 0x54
    ctx->pc = 0x13f08cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)84) ? 1 : 0);
    // 0x13f090: 0x14400016  bnez        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x13F090u;
    {
        const bool branch_taken_0x13f090 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x13f090) {
            ctx->pc = 0x13F0ECu;
            goto label_13f0ec;
        }
    }
    ctx->pc = 0x13F098u;
    // 0x13f098: 0x96230234  lhu         $v1, 0x234($s1)
    ctx->pc = 0x13f098u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 564)));
    // 0x13f09c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x13f09cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13f0a0: 0x34630008  ori         $v1, $v1, 0x8
    ctx->pc = 0x13f0a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8);
    // 0x13f0a4: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x13F0A4u;
    {
        const bool branch_taken_0x13f0a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13F0A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13F0A4u;
        // 0x13f0a8: 0xa6230234  sh          $v1, 0x234($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 564), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13f0a4) {
            ctx->pc = 0x13F0FCu;
            goto label_13f0fc;
        }
    }
    ctx->pc = 0x13F0ACu;
label_13f0ac:
    // 0x13f0ac: 0x2a020038  slti        $v0, $s0, 0x38
    ctx->pc = 0x13f0acu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)56) ? 1 : 0);
    // 0x13f0b0: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x13F0B0u;
    {
        const bool branch_taken_0x13f0b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x13f0b0) {
            ctx->pc = 0x13F0ECu;
            goto label_13f0ec;
        }
    }
    ctx->pc = 0x13F0B8u;
    // 0x13f0b8: 0x96230234  lhu         $v1, 0x234($s1)
    ctx->pc = 0x13f0b8u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 564)));
    // 0x13f0bc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x13f0bcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13f0c0: 0x34630008  ori         $v1, $v1, 0x8
    ctx->pc = 0x13f0c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8);
    // 0x13f0c4: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x13F0C4u;
    {
        const bool branch_taken_0x13f0c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13F0C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13F0C4u;
        // 0x13f0c8: 0xa6230234  sh          $v1, 0x234($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 564), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13f0c4) {
            ctx->pc = 0x13F0FCu;
            goto label_13f0fc;
        }
    }
    ctx->pc = 0x13F0CCu;
label_13f0cc:
    // 0x13f0cc: 0x2a02001c  slti        $v0, $s0, 0x1C
    ctx->pc = 0x13f0ccu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)28) ? 1 : 0);
    // 0x13f0d0: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x13F0D0u;
    {
        const bool branch_taken_0x13f0d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x13f0d0) {
            ctx->pc = 0x13F0ECu;
            goto label_13f0ec;
        }
    }
    ctx->pc = 0x13F0D8u;
    // 0x13f0d8: 0x96230234  lhu         $v1, 0x234($s1)
    ctx->pc = 0x13f0d8u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 564)));
    // 0x13f0dc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x13f0dcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13f0e0: 0x34630008  ori         $v1, $v1, 0x8
    ctx->pc = 0x13f0e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8);
    // 0x13f0e4: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x13F0E4u;
    {
        const bool branch_taken_0x13f0e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13F0E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13F0E4u;
        // 0x13f0e8: 0xa6230234  sh          $v1, 0x234($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 564), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13f0e4) {
            ctx->pc = 0x13F0FCu;
            goto label_13f0fc;
        }
    }
    ctx->pc = 0x13F0ECu;
label_13f0ec:
    // 0x13f0ec: 0x96230234  lhu         $v1, 0x234($s1)
    ctx->pc = 0x13f0ecu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 564)));
label_13f0f0:
    // 0x13f0f0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x13f0f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13f0f4: 0x3063fff7  andi        $v1, $v1, 0xFFF7
    ctx->pc = 0x13f0f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65527);
    // 0x13f0f8: 0xa6230234  sh          $v1, 0x234($s1)
    ctx->pc = 0x13f0f8u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 564), (uint16_t)GPR_U32(ctx, 3));
label_13f0fc:
    // 0x13f0fc: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x13f0fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x13f100: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x13f100u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x13f104: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x13f104u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13f108: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x13f108u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13f10c: 0x3e00008  jr          $ra
    ctx->pc = 0x13F10Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13F110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13F10Cu;
        // 0x13f110: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13F10Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13F114u;
    // 0x13f114: 0x0  nop
    ctx->pc = 0x13f114u;
    // NOP
    // 0x13f118: 0x0  nop
    ctx->pc = 0x13f118u;
    // NOP
    // 0x13f11c: 0x0  nop
    ctx->pc = 0x13f11cu;
    // NOP
    // 0x13f120: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x13f120u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x13f124: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x13f124u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x13f128: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x13f128u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x13f12c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x13f12cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x13f130: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x13f130u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13f134: 0x8ca400dc  lw          $a0, 0xDC($a1)
    ctx->pc = 0x13f134u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 220)));
    // 0x13f138: 0xc062804  jal         func_18A010
    ctx->pc = 0x13F138u;
    SET_GPR_U32(ctx, 31, 0x13F140u);
    ctx->pc = 0x13F13Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13F138u;
    // 0x13f13c: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18A010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18A010u, 0x13F138u, 0x13F140u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13F140u;
label_13f140:
    // 0x13f140: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x13F140u;
    {
        const bool branch_taken_0x13f140 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x13f140) {
            ctx->pc = 0x13F144u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13F140u;
            // 0x13f144: 0x2a210002  slti        $at, $s1, 0x2 (Delay Slot)
            SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)2) ? 1 : 0);
            ctx->in_delay_slot = false;
            ctx->pc = 0x13F150u;
            goto label_13f150;
        }
    }
    ctx->pc = 0x13F148u;
    // 0x13f148: 0x1000007f  b           . + 4 + (0x7F << 2)
    ctx->pc = 0x13F148u;
    {
        const bool branch_taken_0x13f148 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13F14Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13F148u;
        // 0x13f14c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13f148) {
            ctx->pc = 0x13F348u;
            goto label_13f348;
        }
    }
    ctx->pc = 0x13F150u;
label_13f150:
    // 0x13f150: 0x50200029  beql        $at, $zero, . + 4 + (0x29 << 2)
    ctx->pc = 0x13F150u;
    {
        const bool branch_taken_0x13f150 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x13f150) {
            ctx->pc = 0x13F154u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13F150u;
            // 0x13f154: 0x2a210008  slti        $at, $s1, 0x8 (Delay Slot)
            SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)8) ? 1 : 0);
            ctx->in_delay_slot = false;
            ctx->pc = 0x13F1F8u;
            goto label_13f1f8;
        }
    }
    ctx->pc = 0x13F158u;
    // 0x13f158: 0x52200005  beql        $s1, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x13F158u;
    {
        const bool branch_taken_0x13f158 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x13f158) {
            ctx->pc = 0x13F15Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13F158u;
            // 0x13f15c: 0x8e0200dc  lw          $v0, 0xDC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 220)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13F170u;
            goto label_13f170;
        }
    }
    ctx->pc = 0x13F160u;
    // 0x13f160: 0x8c4200dc  lw          $v0, 0xDC($v0)
    ctx->pc = 0x13f160u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 220)));
    // 0x13f164: 0x3042000c  andi        $v0, $v0, 0xC
    ctx->pc = 0x13f164u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)12);
    // 0x13f168: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x13F168u;
    {
        const bool branch_taken_0x13f168 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13F16Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13F168u;
        // 0x13f16c: 0x22882  srl         $a1, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13f168) {
            ctx->pc = 0x13F178u;
            goto label_13f178;
        }
    }
    ctx->pc = 0x13F170u;
label_13f170:
    // 0x13f170: 0x3042000c  andi        $v0, $v0, 0xC
    ctx->pc = 0x13f170u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)12);
    // 0x13f174: 0x22882  srl         $a1, $v0, 2
    ctx->pc = 0x13f174u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 2), 2));
label_13f178:
    // 0x13f178: 0x3c020093  lui         $v0, 0x93
    ctx->pc = 0x13f178u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)147 << 16));
    // 0x13f17c: 0x9042f35a  lbu         $v0, -0xCA6($v0)
    ctx->pc = 0x13f17cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294964058)));
    // 0x13f180: 0x54400019  bnel        $v0, $zero, . + 4 + (0x19 << 2)
    ctx->pc = 0x13F180u;
    {
        const bool branch_taken_0x13f180 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x13f180) {
            ctx->pc = 0x13F184u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13F180u;
            // 0x13f184: 0x96030234  lhu         $v1, 0x234($s0) (Delay Slot)
            SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 564)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13F1E8u;
            goto label_13f1e8;
        }
    }
    ctx->pc = 0x13F188u;
    // 0x13f188: 0x510c0  sll         $v0, $a1, 3
    ctx->pc = 0x13f188u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x13f18c: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x13f18cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x13f190: 0x452021  addu        $a0, $v0, $a1
    ctx->pc = 0x13f190u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x13f194: 0x2463db51  addiu       $v1, $v1, -0x24AF
    ctx->pc = 0x13f194u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294957905));
    // 0x13f198: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x13f198u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x13f19c: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x13f19cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x13f1a0: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x13f1a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x13f1a4: 0x2442db53  addiu       $v0, $v0, -0x24AD
    ctx->pc = 0x13f1a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957907));
    // 0x13f1a8: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x13f1a8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x13f1ac: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x13f1acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x13f1b0: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x13f1b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x13f1b4: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x13f1b4u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x13f1b8: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x13f1b8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x13f1bc: 0x50620006  beql        $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x13F1BCu;
    {
        const bool branch_taken_0x13f1bc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x13f1bc) {
            ctx->pc = 0x13F1C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13F1BCu;
            // 0x13f1c0: 0x96030234  lhu         $v1, 0x234($s0) (Delay Slot)
            SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 564)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13F1D8u;
            goto label_13f1d8;
        }
    }
    ctx->pc = 0x13F1C4u;
    // 0x13f1c4: 0x96030234  lhu         $v1, 0x234($s0)
    ctx->pc = 0x13f1c4u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 564)));
    // 0x13f1c8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x13f1c8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13f1cc: 0x34630010  ori         $v1, $v1, 0x10
    ctx->pc = 0x13f1ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16);
    // 0x13f1d0: 0x1000005d  b           . + 4 + (0x5D << 2)
    ctx->pc = 0x13F1D0u;
    {
        const bool branch_taken_0x13f1d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13F1D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13F1D0u;
        // 0x13f1d4: 0xa6030234  sh          $v1, 0x234($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 564), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13f1d0) {
            ctx->pc = 0x13F348u;
            goto label_13f348;
        }
    }
    ctx->pc = 0x13F1D8u;
label_13f1d8:
    // 0x13f1d8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x13f1d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13f1dc: 0x3063ffef  andi        $v1, $v1, 0xFFEF
    ctx->pc = 0x13f1dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65519);
    // 0x13f1e0: 0x10000059  b           . + 4 + (0x59 << 2)
    ctx->pc = 0x13F1E0u;
    {
        const bool branch_taken_0x13f1e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13F1E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13F1E0u;
        // 0x13f1e4: 0xa6030234  sh          $v1, 0x234($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 564), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13f1e0) {
            ctx->pc = 0x13F348u;
            goto label_13f348;
        }
    }
    ctx->pc = 0x13F1E8u;
label_13f1e8:
    // 0x13f1e8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x13f1e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13f1ec: 0x3063ffef  andi        $v1, $v1, 0xFFEF
    ctx->pc = 0x13f1ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65519);
    // 0x13f1f0: 0x10000055  b           . + 4 + (0x55 << 2)
    ctx->pc = 0x13F1F0u;
    {
        const bool branch_taken_0x13f1f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13F1F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13F1F0u;
        // 0x13f1f4: 0xa6030234  sh          $v1, 0x234($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 564), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13f1f0) {
            ctx->pc = 0x13F348u;
            goto label_13f348;
        }
    }
    ctx->pc = 0x13F1F8u;
label_13f1f8:
    // 0x13f1f8: 0x50200006  beql        $at, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x13F1F8u;
    {
        const bool branch_taken_0x13f1f8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x13f1f8) {
            ctx->pc = 0x13F1FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13F1F8u;
            // 0x13f1fc: 0x8c4200dc  lw          $v0, 0xDC($v0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 220)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13F214u;
            goto label_13f214;
        }
    }
    ctx->pc = 0x13F200u;
    // 0x13f200: 0x8e0200dc  lw          $v0, 0xDC($s0)
    ctx->pc = 0x13f200u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 220)));
    // 0x13f204: 0x2623fffe  addiu       $v1, $s1, -0x2
    ctx->pc = 0x13f204u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967294));
    // 0x13f208: 0x3042000c  andi        $v0, $v0, 0xC
    ctx->pc = 0x13f208u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)12);
    // 0x13f20c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x13F20Cu;
    {
        const bool branch_taken_0x13f20c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13F210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13F20Cu;
        // 0x13f210: 0x22082  srl         $a0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13f20c) {
            ctx->pc = 0x13F220u;
            goto label_13f220;
        }
    }
    ctx->pc = 0x13F214u;
label_13f214:
    // 0x13f214: 0x2623fff8  addiu       $v1, $s1, -0x8
    ctx->pc = 0x13f214u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967288));
    // 0x13f218: 0x3042000c  andi        $v0, $v0, 0xC
    ctx->pc = 0x13f218u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)12);
    // 0x13f21c: 0x22082  srl         $a0, $v0, 2
    ctx->pc = 0x13f21cu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 2), 2));
label_13f220:
    // 0x13f220: 0x2c610006  sltiu       $at, $v1, 0x6
    ctx->pc = 0x13f220u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x13f224: 0x50200045  beql        $at, $zero, . + 4 + (0x45 << 2)
    ctx->pc = 0x13F224u;
    {
        const bool branch_taken_0x13f224 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x13f224) {
            ctx->pc = 0x13F228u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13F224u;
            // 0x13f228: 0x96030234  lhu         $v1, 0x234($s0) (Delay Slot)
            SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 564)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13F33Cu;
            goto label_13f33c;
        }
    }
    ctx->pc = 0x13F22Cu;
    // 0x13f22c: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x13f22cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x13f230: 0x3c03003e  lui         $v1, 0x3E
    ctx->pc = 0x13f230u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)62 << 16));
    // 0x13f234: 0x2463cc20  addiu       $v1, $v1, -0x33E0
    ctx->pc = 0x13f234u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954016));
    // 0x13f238: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x13f238u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x13f23c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x13f23cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x13f240: 0x400008  jr          $v0
    ctx->pc = 0x13F240u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x13F248u: goto label_13f248;
            case 0x13F270u: goto label_13f270;
            case 0x13F298u: goto label_13f298;
            case 0x13F2C0u: goto label_13f2c0;
            case 0x13F2E8u: goto label_13f2e8;
            case 0x13F310u: goto label_13f310;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13F240u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x13F248u;
label_13f248:
    // 0x13f248: 0xc062948  jal         func_18A520
    ctx->pc = 0x13F248u;
    SET_GPR_U32(ctx, 31, 0x13F250u);
    ctx->pc = 0x13F24Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13F248u;
    // 0x13f24c: 0x308400ff  andi        $a0, $a0, 0xFF (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    ctx->in_delay_slot = false;
    ctx->pc = 0x18A520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18A520u, 0x13F248u, 0x13F250u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13F250u;
label_13f250:
    // 0x13f250: 0x28410003  slti        $at, $v0, 0x3
    ctx->pc = 0x13f250u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x13f254: 0x10200038  beqz        $at, . + 4 + (0x38 << 2)
    ctx->pc = 0x13F254u;
    {
        const bool branch_taken_0x13f254 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x13f254) {
            ctx->pc = 0x13F338u;
            goto label_13f338;
        }
    }
    ctx->pc = 0x13F25Cu;
    // 0x13f25c: 0x96030234  lhu         $v1, 0x234($s0)
    ctx->pc = 0x13f25cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 564)));
    // 0x13f260: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x13f260u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13f264: 0x34630020  ori         $v1, $v1, 0x20
    ctx->pc = 0x13f264u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32);
    // 0x13f268: 0x10000037  b           . + 4 + (0x37 << 2)
    ctx->pc = 0x13F268u;
    {
        const bool branch_taken_0x13f268 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13F26Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13F268u;
        // 0x13f26c: 0xa6030234  sh          $v1, 0x234($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 564), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13f268) {
            ctx->pc = 0x13F348u;
            goto label_13f348;
        }
    }
    ctx->pc = 0x13F270u;
label_13f270:
    // 0x13f270: 0xc062948  jal         func_18A520
    ctx->pc = 0x13F270u;
    SET_GPR_U32(ctx, 31, 0x13F278u);
    ctx->pc = 0x13F274u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13F270u;
    // 0x13f274: 0x308400ff  andi        $a0, $a0, 0xFF (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    ctx->in_delay_slot = false;
    ctx->pc = 0x18A520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18A520u, 0x13F270u, 0x13F278u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13F278u;
label_13f278:
    // 0x13f278: 0x28410002  slti        $at, $v0, 0x2
    ctx->pc = 0x13f278u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x13f27c: 0x1020002e  beqz        $at, . + 4 + (0x2E << 2)
    ctx->pc = 0x13F27Cu;
    {
        const bool branch_taken_0x13f27c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x13f27c) {
            ctx->pc = 0x13F338u;
            goto label_13f338;
        }
    }
    ctx->pc = 0x13F284u;
    // 0x13f284: 0x96030234  lhu         $v1, 0x234($s0)
    ctx->pc = 0x13f284u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 564)));
    // 0x13f288: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x13f288u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13f28c: 0x34630020  ori         $v1, $v1, 0x20
    ctx->pc = 0x13f28cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32);
    // 0x13f290: 0x1000002d  b           . + 4 + (0x2D << 2)
    ctx->pc = 0x13F290u;
    {
        const bool branch_taken_0x13f290 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13F294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13F290u;
        // 0x13f294: 0xa6030234  sh          $v1, 0x234($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 564), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13f290) {
            ctx->pc = 0x13F348u;
            goto label_13f348;
        }
    }
    ctx->pc = 0x13F298u;
label_13f298:
    // 0x13f298: 0xc062948  jal         func_18A520
    ctx->pc = 0x13F298u;
    SET_GPR_U32(ctx, 31, 0x13F2A0u);
    ctx->pc = 0x13F29Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13F298u;
    // 0x13f29c: 0x308400ff  andi        $a0, $a0, 0xFF (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    ctx->in_delay_slot = false;
    ctx->pc = 0x18A520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18A520u, 0x13F298u, 0x13F2A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13F2A0u;
label_13f2a0:
    // 0x13f2a0: 0x28410002  slti        $at, $v0, 0x2
    ctx->pc = 0x13f2a0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x13f2a4: 0x10200024  beqz        $at, . + 4 + (0x24 << 2)
    ctx->pc = 0x13F2A4u;
    {
        const bool branch_taken_0x13f2a4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x13f2a4) {
            ctx->pc = 0x13F338u;
            goto label_13f338;
        }
    }
    ctx->pc = 0x13F2ACu;
    // 0x13f2ac: 0x96030234  lhu         $v1, 0x234($s0)
    ctx->pc = 0x13f2acu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 564)));
    // 0x13f2b0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x13f2b0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13f2b4: 0x34630020  ori         $v1, $v1, 0x20
    ctx->pc = 0x13f2b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32);
    // 0x13f2b8: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x13F2B8u;
    {
        const bool branch_taken_0x13f2b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13F2BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13F2B8u;
        // 0x13f2bc: 0xa6030234  sh          $v1, 0x234($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 564), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13f2b8) {
            ctx->pc = 0x13F348u;
            goto label_13f348;
        }
    }
    ctx->pc = 0x13F2C0u;
label_13f2c0:
    // 0x13f2c0: 0xc062948  jal         func_18A520
    ctx->pc = 0x13F2C0u;
    SET_GPR_U32(ctx, 31, 0x13F2C8u);
    ctx->pc = 0x13F2C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13F2C0u;
    // 0x13f2c4: 0x308400ff  andi        $a0, $a0, 0xFF (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    ctx->in_delay_slot = false;
    ctx->pc = 0x18A520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18A520u, 0x13F2C0u, 0x13F2C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13F2C8u;
label_13f2c8:
    // 0x13f2c8: 0x28420003  slti        $v0, $v0, 0x3
    ctx->pc = 0x13f2c8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x13f2cc: 0x1440001a  bnez        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x13F2CCu;
    {
        const bool branch_taken_0x13f2cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x13f2cc) {
            ctx->pc = 0x13F338u;
            goto label_13f338;
        }
    }
    ctx->pc = 0x13F2D4u;
    // 0x13f2d4: 0x96030234  lhu         $v1, 0x234($s0)
    ctx->pc = 0x13f2d4u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 564)));
    // 0x13f2d8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x13f2d8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13f2dc: 0x34630020  ori         $v1, $v1, 0x20
    ctx->pc = 0x13f2dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32);
    // 0x13f2e0: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x13F2E0u;
    {
        const bool branch_taken_0x13f2e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13F2E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13F2E0u;
        // 0x13f2e4: 0xa6030234  sh          $v1, 0x234($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 564), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13f2e0) {
            ctx->pc = 0x13F348u;
            goto label_13f348;
        }
    }
    ctx->pc = 0x13F2E8u;
label_13f2e8:
    // 0x13f2e8: 0xc062948  jal         func_18A520
    ctx->pc = 0x13F2E8u;
    SET_GPR_U32(ctx, 31, 0x13F2F0u);
    ctx->pc = 0x13F2ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13F2E8u;
    // 0x13f2ec: 0x308400ff  andi        $a0, $a0, 0xFF (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    ctx->in_delay_slot = false;
    ctx->pc = 0x18A520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18A520u, 0x13F2E8u, 0x13F2F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13F2F0u;
label_13f2f0:
    // 0x13f2f0: 0x28420002  slti        $v0, $v0, 0x2
    ctx->pc = 0x13f2f0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x13f2f4: 0x14400010  bnez        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x13F2F4u;
    {
        const bool branch_taken_0x13f2f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x13f2f4) {
            ctx->pc = 0x13F338u;
            goto label_13f338;
        }
    }
    ctx->pc = 0x13F2FCu;
    // 0x13f2fc: 0x96030234  lhu         $v1, 0x234($s0)
    ctx->pc = 0x13f2fcu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 564)));
    // 0x13f300: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x13f300u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13f304: 0x34630020  ori         $v1, $v1, 0x20
    ctx->pc = 0x13f304u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32);
    // 0x13f308: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x13F308u;
    {
        const bool branch_taken_0x13f308 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13F30Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13F308u;
        // 0x13f30c: 0xa6030234  sh          $v1, 0x234($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 564), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13f308) {
            ctx->pc = 0x13F348u;
            goto label_13f348;
        }
    }
    ctx->pc = 0x13F310u;
label_13f310:
    // 0x13f310: 0xc062948  jal         func_18A520
    ctx->pc = 0x13F310u;
    SET_GPR_U32(ctx, 31, 0x13F318u);
    ctx->pc = 0x13F314u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13F310u;
    // 0x13f314: 0x308400ff  andi        $a0, $a0, 0xFF (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    ctx->in_delay_slot = false;
    ctx->pc = 0x18A520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18A520u, 0x13F310u, 0x13F318u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13F318u;
label_13f318:
    // 0x13f318: 0x28420002  slti        $v0, $v0, 0x2
    ctx->pc = 0x13f318u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x13f31c: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x13F31Cu;
    {
        const bool branch_taken_0x13f31c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x13f31c) {
            ctx->pc = 0x13F338u;
            goto label_13f338;
        }
    }
    ctx->pc = 0x13F324u;
    // 0x13f324: 0x96030234  lhu         $v1, 0x234($s0)
    ctx->pc = 0x13f324u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 564)));
    // 0x13f328: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x13f328u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13f32c: 0x34630020  ori         $v1, $v1, 0x20
    ctx->pc = 0x13f32cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32);
    // 0x13f330: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x13F330u;
    {
        const bool branch_taken_0x13f330 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13F334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13F330u;
        // 0x13f334: 0xa6030234  sh          $v1, 0x234($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 564), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13f330) {
            ctx->pc = 0x13F348u;
            goto label_13f348;
        }
    }
    ctx->pc = 0x13F338u;
label_13f338:
    // 0x13f338: 0x96030234  lhu         $v1, 0x234($s0)
    ctx->pc = 0x13f338u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 564)));
label_13f33c:
    // 0x13f33c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x13f33cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13f340: 0x3063ffdf  andi        $v1, $v1, 0xFFDF
    ctx->pc = 0x13f340u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65503);
    // 0x13f344: 0xa6030234  sh          $v1, 0x234($s0)
    ctx->pc = 0x13f344u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 564), (uint16_t)GPR_U32(ctx, 3));
label_13f348:
    // 0x13f348: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x13f348u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x13f34c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x13f34cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13f350: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x13f350u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13f354: 0x3e00008  jr          $ra
    ctx->pc = 0x13F354u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13F358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13F354u;
        // 0x13f358: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13F354u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13F35Cu;
    // 0x13f35c: 0x0  nop
    ctx->pc = 0x13f35cu;
    // NOP
    // 0x13f360: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x13f360u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x13f364: 0x94435c60  lhu         $v1, 0x5C60($v0)
    ctx->pc = 0x13f364u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 23648)));
    // 0x13f368: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x13f368u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x13f36c: 0x5082002a  beql        $a0, $v0, . + 4 + (0x2A << 2)
    ctx->pc = 0x13F36Cu;
    {
        const bool branch_taken_0x13f36c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x13f36c) {
            ctx->pc = 0x13F370u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13F36Cu;
            // 0x13f370: 0x2861000b  slti        $at, $v1, 0xB (Delay Slot)
            SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)11) ? 1 : 0);
            ctx->in_delay_slot = false;
            ctx->pc = 0x13F418u;
            goto label_13f418;
        }
    }
    ctx->pc = 0x13F374u;
    // 0x13f374: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x13f374u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x13f378: 0x50820020  beql        $a0, $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x13F378u;
    {
        const bool branch_taken_0x13f378 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x13f378) {
            ctx->pc = 0x13F37Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13F378u;
            // 0x13f37c: 0x28610015  slti        $at, $v1, 0x15 (Delay Slot)
            SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)21) ? 1 : 0);
            ctx->in_delay_slot = false;
            ctx->pc = 0x13F3FCu;
            goto label_13f3fc;
        }
    }
    ctx->pc = 0x13F380u;
    // 0x13f380: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x13f380u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x13f384: 0x50820016  beql        $a0, $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x13F384u;
    {
        const bool branch_taken_0x13f384 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x13f384) {
            ctx->pc = 0x13F388u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13F384u;
            // 0x13f388: 0x2861001f  slti        $at, $v1, 0x1F (Delay Slot)
            SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)31) ? 1 : 0);
            ctx->in_delay_slot = false;
            ctx->pc = 0x13F3E0u;
            goto label_13f3e0;
        }
    }
    ctx->pc = 0x13F38Cu;
    // 0x13f38c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x13f38cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13f390: 0x5082000c  beql        $a0, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x13F390u;
    {
        const bool branch_taken_0x13f390 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x13f390) {
            ctx->pc = 0x13F394u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13F390u;
            // 0x13f394: 0x28610029  slti        $at, $v1, 0x29 (Delay Slot)
            SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)41) ? 1 : 0);
            ctx->in_delay_slot = false;
            ctx->pc = 0x13F3C4u;
            goto label_13f3c4;
        }
    }
    ctx->pc = 0x13F398u;
    // 0x13f398: 0x50800003  beql        $a0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x13F398u;
    {
        const bool branch_taken_0x13f398 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x13f398) {
            ctx->pc = 0x13F39Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13F398u;
            // 0x13f39c: 0x28610033  slti        $at, $v1, 0x33 (Delay Slot)
            SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)51) ? 1 : 0);
            ctx->in_delay_slot = false;
            ctx->pc = 0x13F3A8u;
            goto label_13f3a8;
        }
    }
    ctx->pc = 0x13F3A0u;
    // 0x13f3a0: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x13F3A0u;
    {
        const bool branch_taken_0x13f3a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13F3A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13F3A0u;
        // 0x13f3a4: 0x94a30234  lhu         $v1, 0x234($a1) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 564)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13f3a0) {
            ctx->pc = 0x13F438u;
            goto label_13f438;
        }
    }
    ctx->pc = 0x13F3A8u;
label_13f3a8:
    // 0x13f3a8: 0x14200022  bnez        $at, . + 4 + (0x22 << 2)
    ctx->pc = 0x13F3A8u;
    {
        const bool branch_taken_0x13f3a8 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x13f3a8) {
            ctx->pc = 0x13F434u;
            goto label_13f434;
        }
    }
    ctx->pc = 0x13F3B0u;
    // 0x13f3b0: 0x94a30234  lhu         $v1, 0x234($a1)
    ctx->pc = 0x13f3b0u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 564)));
    // 0x13f3b4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x13f3b4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13f3b8: 0x34630040  ori         $v1, $v1, 0x40
    ctx->pc = 0x13f3b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64);
    // 0x13f3bc: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x13F3BCu;
    {
        const bool branch_taken_0x13f3bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13F3C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13F3BCu;
        // 0x13f3c0: 0xa4a30234  sh          $v1, 0x234($a1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 5), 564), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13f3bc) {
            ctx->pc = 0x13F444u;
            goto label_13f444;
        }
    }
    ctx->pc = 0x13F3C4u;
label_13f3c4:
    // 0x13f3c4: 0x1420001b  bnez        $at, . + 4 + (0x1B << 2)
    ctx->pc = 0x13F3C4u;
    {
        const bool branch_taken_0x13f3c4 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x13f3c4) {
            ctx->pc = 0x13F434u;
            goto label_13f434;
        }
    }
    ctx->pc = 0x13F3CCu;
    // 0x13f3cc: 0x94a30234  lhu         $v1, 0x234($a1)
    ctx->pc = 0x13f3ccu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 564)));
    // 0x13f3d0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x13f3d0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13f3d4: 0x34630040  ori         $v1, $v1, 0x40
    ctx->pc = 0x13f3d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64);
    // 0x13f3d8: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x13F3D8u;
    {
        const bool branch_taken_0x13f3d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13F3DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13F3D8u;
        // 0x13f3dc: 0xa4a30234  sh          $v1, 0x234($a1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 5), 564), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13f3d8) {
            ctx->pc = 0x13F444u;
            goto label_13f444;
        }
    }
    ctx->pc = 0x13F3E0u;
label_13f3e0:
    // 0x13f3e0: 0x14200014  bnez        $at, . + 4 + (0x14 << 2)
    ctx->pc = 0x13F3E0u;
    {
        const bool branch_taken_0x13f3e0 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x13f3e0) {
            ctx->pc = 0x13F434u;
            goto label_13f434;
        }
    }
    ctx->pc = 0x13F3E8u;
    // 0x13f3e8: 0x94a30234  lhu         $v1, 0x234($a1)
    ctx->pc = 0x13f3e8u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 564)));
    // 0x13f3ec: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x13f3ecu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13f3f0: 0x34630040  ori         $v1, $v1, 0x40
    ctx->pc = 0x13f3f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64);
    // 0x13f3f4: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x13F3F4u;
    {
        const bool branch_taken_0x13f3f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13F3F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13F3F4u;
        // 0x13f3f8: 0xa4a30234  sh          $v1, 0x234($a1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 5), 564), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13f3f4) {
            ctx->pc = 0x13F444u;
            goto label_13f444;
        }
    }
    ctx->pc = 0x13F3FCu;
label_13f3fc:
    // 0x13f3fc: 0x1420000d  bnez        $at, . + 4 + (0xD << 2)
    ctx->pc = 0x13F3FCu;
    {
        const bool branch_taken_0x13f3fc = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x13f3fc) {
            ctx->pc = 0x13F434u;
            goto label_13f434;
        }
    }
    ctx->pc = 0x13F404u;
    // 0x13f404: 0x94a30234  lhu         $v1, 0x234($a1)
    ctx->pc = 0x13f404u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 564)));
    // 0x13f408: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x13f408u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13f40c: 0x34630040  ori         $v1, $v1, 0x40
    ctx->pc = 0x13f40cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64);
    // 0x13f410: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x13F410u;
    {
        const bool branch_taken_0x13f410 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13F414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13F410u;
        // 0x13f414: 0xa4a30234  sh          $v1, 0x234($a1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 5), 564), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13f410) {
            ctx->pc = 0x13F444u;
            goto label_13f444;
        }
    }
    ctx->pc = 0x13F418u;
label_13f418:
    // 0x13f418: 0x14200006  bnez        $at, . + 4 + (0x6 << 2)
    ctx->pc = 0x13F418u;
    {
        const bool branch_taken_0x13f418 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x13f418) {
            ctx->pc = 0x13F434u;
            goto label_13f434;
        }
    }
    ctx->pc = 0x13F420u;
    // 0x13f420: 0x94a30234  lhu         $v1, 0x234($a1)
    ctx->pc = 0x13f420u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 564)));
    // 0x13f424: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x13f424u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13f428: 0x34630040  ori         $v1, $v1, 0x40
    ctx->pc = 0x13f428u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64);
    // 0x13f42c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x13F42Cu;
    {
        const bool branch_taken_0x13f42c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13F430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13F42Cu;
        // 0x13f430: 0xa4a30234  sh          $v1, 0x234($a1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 5), 564), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13f42c) {
            ctx->pc = 0x13F444u;
            goto label_13f444;
        }
    }
    ctx->pc = 0x13F434u;
label_13f434:
    // 0x13f434: 0x94a30234  lhu         $v1, 0x234($a1)
    ctx->pc = 0x13f434u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 564)));
label_13f438:
    // 0x13f438: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x13f438u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13f43c: 0x3063ffbf  andi        $v1, $v1, 0xFFBF
    ctx->pc = 0x13f43cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65471);
    // 0x13f440: 0xa4a30234  sh          $v1, 0x234($a1)
    ctx->pc = 0x13f440u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 564), (uint16_t)GPR_U32(ctx, 3));
label_13f444:
    // 0x13f444: 0x3e00008  jr          $ra
    ctx->pc = 0x13F444u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13F444u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13F44Cu;
    // 0x13f44c: 0x0  nop
    ctx->pc = 0x13f44cu;
    // NOP
}
