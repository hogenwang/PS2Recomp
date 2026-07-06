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

// Function: sub_002F82D8
// Address: 0x2f82d8 - 0x2f84d0
void sub_002F82D8_0x2f82d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F82D8_0x2f82d8");
#endif

    ctx->pc = 0x2f82d8u;

    // 0x2f82d8: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x2f82d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f82dc: 0x90a20000  lbu         $v0, 0x0($a1)
    ctx->pc = 0x2f82dcu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2f82e0: 0x2442ffbf  addiu       $v0, $v0, -0x41
    ctx->pc = 0x2f82e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967231));
    // 0x2f82e4: 0x21600  sll         $v0, $v0, 24
    ctx->pc = 0x2f82e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x2f82e8: 0x22603  sra         $a0, $v0, 24
    ctx->pc = 0x2f82e8u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 2), 24));
    // 0x2f82ec: 0x2c830013  sltiu       $v1, $a0, 0x13
    ctx->pc = 0x2f82ecu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)19) ? 1 : 0);
    // 0x2f82f0: 0x10600073  beqz        $v1, . + 4 + (0x73 << 2)
    ctx->pc = 0x2F82F0u;
    {
        const bool branch_taken_0x2f82f0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F82F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F82F0u;
        // 0x2f82f4: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f82f0) {
            ctx->pc = 0x2F84C0u;
            goto label_2f84c0;
        }
    }
    ctx->pc = 0x2F82F8u;
    // 0x2f82f8: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x2f82f8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2f82fc: 0x24422650  addiu       $v0, $v0, 0x2650
    ctx->pc = 0x2f82fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9808));
    // 0x2f8300: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2f8300u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2f8304: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2f8304u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2f8308: 0x800008  jr          $a0
    ctx->pc = 0x2F8308u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2F8310u: goto label_2f8310;
            case 0x2F8374u: goto label_2f8374;
            case 0x2F839Cu: goto label_2f839c;
            case 0x2F83D4u: goto label_2f83d4;
            case 0x2F8428u: goto label_2f8428;
            case 0x2F8450u: goto label_2f8450;
            case 0x2F8478u: goto label_2f8478;
            case 0x2F84A0u: goto label_2f84a0;
            case 0x2F84C0u: goto label_2f84c0;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F8308u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2F8310u;
label_2f8310:
    // 0x2f8310: 0x80a30001  lb          $v1, 0x1($a1)
    ctx->pc = 0x2f8310u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 1)));
    // 0x2f8314: 0x24020061  addiu       $v0, $zero, 0x61
    ctx->pc = 0x2f8314u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 97));
    // 0x2f8318: 0x14620007  bne         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2F8318u;
    {
        const bool branch_taken_0x2f8318 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2F831Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F8318u;
        // 0x2f831c: 0x90a40001  lbu         $a0, 0x1($a1) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 1)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f8318) {
            ctx->pc = 0x2F8338u;
            goto label_2f8338;
        }
    }
    ctx->pc = 0x2F8320u;
    // 0x2f8320: 0x80a30002  lb          $v1, 0x2($a1)
    ctx->pc = 0x2f8320u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 2)));
    // 0x2f8324: 0x2402006e  addiu       $v0, $zero, 0x6E
    ctx->pc = 0x2f8324u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 110));
    // 0x2f8328: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2F8328u;
    {
        const bool branch_taken_0x2f8328 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2F832Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F8328u;
        // 0x2f832c: 0x41600  sll         $v0, $a0, 24 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f8328) {
            ctx->pc = 0x2F833Cu;
            goto label_2f833c;
        }
    }
    ctx->pc = 0x2F8330u;
    // 0x2f8330: 0x3e00008  jr          $ra
    ctx->pc = 0x2F8330u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F8334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F8330u;
        // 0x2f8334: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F8330u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F8338u;
label_2f8338:
    // 0x2f8338: 0x41600  sll         $v0, $a0, 24
    ctx->pc = 0x2f8338u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 24));
label_2f833c:
    // 0x2f833c: 0x24030075  addiu       $v1, $zero, 0x75
    ctx->pc = 0x2f833cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 117));
    // 0x2f8340: 0x21603  sra         $v0, $v0, 24
    ctx->pc = 0x2f8340u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 24));
    // 0x2f8344: 0x1443005f  bne         $v0, $v1, . + 4 + (0x5F << 2)
    ctx->pc = 0x2F8344u;
    {
        const bool branch_taken_0x2f8344 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x2F8348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F8344u;
        // 0x2f8348: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f8344) {
            ctx->pc = 0x2F84C4u;
            goto label_2f84c4;
        }
    }
    ctx->pc = 0x2F834Cu;
    // 0x2f834c: 0x80a40002  lb          $a0, 0x2($a1)
    ctx->pc = 0x2f834cu;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 2)));
    // 0x2f8350: 0x2402006e  addiu       $v0, $zero, 0x6E
    ctx->pc = 0x2f8350u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 110));
    // 0x2f8354: 0x14820003  bne         $a0, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2F8354u;
    {
        const bool branch_taken_0x2f8354 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x2F8358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F8354u;
        // 0x2f8358: 0x2402006c  addiu       $v0, $zero, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 108));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f8354) {
            ctx->pc = 0x2F8364u;
            goto label_2f8364;
        }
    }
    ctx->pc = 0x2F835Cu;
    // 0x2f835c: 0x3e00008  jr          $ra
    ctx->pc = 0x2F835Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F8360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F835Cu;
        // 0x2f8360: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F835Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F8364u;
label_2f8364:
    // 0x2f8364: 0x14820057  bne         $a0, $v0, . + 4 + (0x57 << 2)
    ctx->pc = 0x2F8364u;
    {
        const bool branch_taken_0x2f8364 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x2F8368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F8364u;
        // 0x2f8368: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f8364) {
            ctx->pc = 0x2F84C4u;
            goto label_2f84c4;
        }
    }
    ctx->pc = 0x2F836Cu;
    // 0x2f836c: 0x3e00008  jr          $ra
    ctx->pc = 0x2F836Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F8370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F836Cu;
        // 0x2f8370: 0x24020007  addiu       $v0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F836Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F8374u;
label_2f8374:
    // 0x2f8374: 0x80a30001  lb          $v1, 0x1($a1)
    ctx->pc = 0x2f8374u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 1)));
    // 0x2f8378: 0x24020065  addiu       $v0, $zero, 0x65
    ctx->pc = 0x2f8378u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 101));
    // 0x2f837c: 0x14620051  bne         $v1, $v0, . + 4 + (0x51 << 2)
    ctx->pc = 0x2F837Cu;
    {
        const bool branch_taken_0x2f837c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2F8380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F837Cu;
        // 0x2f8380: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f837c) {
            ctx->pc = 0x2F84C4u;
            goto label_2f84c4;
        }
    }
    ctx->pc = 0x2F8384u;
    // 0x2f8384: 0x80a30002  lb          $v1, 0x2($a1)
    ctx->pc = 0x2f8384u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 2)));
    // 0x2f8388: 0x24020062  addiu       $v0, $zero, 0x62
    ctx->pc = 0x2f8388u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 98));
    // 0x2f838c: 0x1462004d  bne         $v1, $v0, . + 4 + (0x4D << 2)
    ctx->pc = 0x2F838Cu;
    {
        const bool branch_taken_0x2f838c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2F8390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F838Cu;
        // 0x2f8390: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f838c) {
            ctx->pc = 0x2F84C4u;
            goto label_2f84c4;
        }
    }
    ctx->pc = 0x2F8394u;
    // 0x2f8394: 0x3e00008  jr          $ra
    ctx->pc = 0x2F8394u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F8398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F8394u;
        // 0x2f8398: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F8394u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F839Cu;
label_2f839c:
    // 0x2f839c: 0x80a30001  lb          $v1, 0x1($a1)
    ctx->pc = 0x2f839cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 1)));
    // 0x2f83a0: 0x24020061  addiu       $v0, $zero, 0x61
    ctx->pc = 0x2f83a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 97));
    // 0x2f83a4: 0x14620047  bne         $v1, $v0, . + 4 + (0x47 << 2)
    ctx->pc = 0x2F83A4u;
    {
        const bool branch_taken_0x2f83a4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2F83A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F83A4u;
        // 0x2f83a8: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f83a4) {
            ctx->pc = 0x2F84C4u;
            goto label_2f84c4;
        }
    }
    ctx->pc = 0x2F83ACu;
    // 0x2f83ac: 0x80a40002  lb          $a0, 0x2($a1)
    ctx->pc = 0x2f83acu;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 2)));
    // 0x2f83b0: 0x24020072  addiu       $v0, $zero, 0x72
    ctx->pc = 0x2f83b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 114));
    // 0x2f83b4: 0x14820003  bne         $a0, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2F83B4u;
    {
        const bool branch_taken_0x2f83b4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x2F83B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F83B4u;
        // 0x2f83b8: 0x24020079  addiu       $v0, $zero, 0x79 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 121));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f83b4) {
            ctx->pc = 0x2F83C4u;
            goto label_2f83c4;
        }
    }
    ctx->pc = 0x2F83BCu;
    // 0x2f83bc: 0x3e00008  jr          $ra
    ctx->pc = 0x2F83BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F83C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F83BCu;
        // 0x2f83c0: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F83BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F83C4u;
label_2f83c4:
    // 0x2f83c4: 0x1482003f  bne         $a0, $v0, . + 4 + (0x3F << 2)
    ctx->pc = 0x2F83C4u;
    {
        const bool branch_taken_0x2f83c4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x2F83C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F83C4u;
        // 0x2f83c8: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f83c4) {
            ctx->pc = 0x2F84C4u;
            goto label_2f84c4;
        }
    }
    ctx->pc = 0x2F83CCu;
    // 0x2f83cc: 0x3e00008  jr          $ra
    ctx->pc = 0x2F83CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F83D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F83CCu;
        // 0x2f83d0: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F83CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F83D4u;
label_2f83d4:
    // 0x2f83d4: 0x80a30001  lb          $v1, 0x1($a1)
    ctx->pc = 0x2f83d4u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 1)));
    // 0x2f83d8: 0x24020070  addiu       $v0, $zero, 0x70
    ctx->pc = 0x2f83d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
    // 0x2f83dc: 0x14620007  bne         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2F83DCu;
    {
        const bool branch_taken_0x2f83dc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2F83E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F83DCu;
        // 0x2f83e0: 0x90a40001  lbu         $a0, 0x1($a1) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 1)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f83dc) {
            ctx->pc = 0x2F83FCu;
            goto label_2f83fc;
        }
    }
    ctx->pc = 0x2F83E4u;
    // 0x2f83e4: 0x80a30002  lb          $v1, 0x2($a1)
    ctx->pc = 0x2f83e4u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 2)));
    // 0x2f83e8: 0x24020072  addiu       $v0, $zero, 0x72
    ctx->pc = 0x2f83e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 114));
    // 0x2f83ec: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2F83ECu;
    {
        const bool branch_taken_0x2f83ec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2F83F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F83ECu;
        // 0x2f83f0: 0x41600  sll         $v0, $a0, 24 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f83ec) {
            ctx->pc = 0x2F8400u;
            goto label_2f8400;
        }
    }
    ctx->pc = 0x2F83F4u;
    // 0x2f83f4: 0x3e00008  jr          $ra
    ctx->pc = 0x2F83F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F83F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F83F4u;
        // 0x2f83f8: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F83F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F83FCu;
label_2f83fc:
    // 0x2f83fc: 0x41600  sll         $v0, $a0, 24
    ctx->pc = 0x2f83fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 24));
label_2f8400:
    // 0x2f8400: 0x24030075  addiu       $v1, $zero, 0x75
    ctx->pc = 0x2f8400u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 117));
    // 0x2f8404: 0x21603  sra         $v0, $v0, 24
    ctx->pc = 0x2f8404u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 24));
    // 0x2f8408: 0x1443002e  bne         $v0, $v1, . + 4 + (0x2E << 2)
    ctx->pc = 0x2F8408u;
    {
        const bool branch_taken_0x2f8408 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x2F840Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F8408u;
        // 0x2f840c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f8408) {
            ctx->pc = 0x2F84C4u;
            goto label_2f84c4;
        }
    }
    ctx->pc = 0x2F8410u;
    // 0x2f8410: 0x80a30002  lb          $v1, 0x2($a1)
    ctx->pc = 0x2f8410u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 2)));
    // 0x2f8414: 0x24020067  addiu       $v0, $zero, 0x67
    ctx->pc = 0x2f8414u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 103));
    // 0x2f8418: 0x1462002a  bne         $v1, $v0, . + 4 + (0x2A << 2)
    ctx->pc = 0x2F8418u;
    {
        const bool branch_taken_0x2f8418 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2F841Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F8418u;
        // 0x2f841c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f8418) {
            ctx->pc = 0x2F84C4u;
            goto label_2f84c4;
        }
    }
    ctx->pc = 0x2F8420u;
    // 0x2f8420: 0x3e00008  jr          $ra
    ctx->pc = 0x2F8420u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F8424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F8420u;
        // 0x2f8424: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F8420u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F8428u;
label_2f8428:
    // 0x2f8428: 0x80a30001  lb          $v1, 0x1($a1)
    ctx->pc = 0x2f8428u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 1)));
    // 0x2f842c: 0x24020065  addiu       $v0, $zero, 0x65
    ctx->pc = 0x2f842cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 101));
    // 0x2f8430: 0x14620024  bne         $v1, $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x2F8430u;
    {
        const bool branch_taken_0x2f8430 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2F8434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F8430u;
        // 0x2f8434: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f8430) {
            ctx->pc = 0x2F84C4u;
            goto label_2f84c4;
        }
    }
    ctx->pc = 0x2F8438u;
    // 0x2f8438: 0x80a30002  lb          $v1, 0x2($a1)
    ctx->pc = 0x2f8438u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 2)));
    // 0x2f843c: 0x24020070  addiu       $v0, $zero, 0x70
    ctx->pc = 0x2f843cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
    // 0x2f8440: 0x14620020  bne         $v1, $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x2F8440u;
    {
        const bool branch_taken_0x2f8440 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2F8444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F8440u;
        // 0x2f8444: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f8440) {
            ctx->pc = 0x2F84C4u;
            goto label_2f84c4;
        }
    }
    ctx->pc = 0x2F8448u;
    // 0x2f8448: 0x3e00008  jr          $ra
    ctx->pc = 0x2F8448u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F844Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F8448u;
        // 0x2f844c: 0x24020009  addiu       $v0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F8448u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F8450u;
label_2f8450:
    // 0x2f8450: 0x80a30001  lb          $v1, 0x1($a1)
    ctx->pc = 0x2f8450u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 1)));
    // 0x2f8454: 0x24020063  addiu       $v0, $zero, 0x63
    ctx->pc = 0x2f8454u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 99));
    // 0x2f8458: 0x1462001a  bne         $v1, $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x2F8458u;
    {
        const bool branch_taken_0x2f8458 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2F845Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F8458u;
        // 0x2f845c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f8458) {
            ctx->pc = 0x2F84C4u;
            goto label_2f84c4;
        }
    }
    ctx->pc = 0x2F8460u;
    // 0x2f8460: 0x80a30002  lb          $v1, 0x2($a1)
    ctx->pc = 0x2f8460u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 2)));
    // 0x2f8464: 0x24020074  addiu       $v0, $zero, 0x74
    ctx->pc = 0x2f8464u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 116));
    // 0x2f8468: 0x14620016  bne         $v1, $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x2F8468u;
    {
        const bool branch_taken_0x2f8468 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2F846Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F8468u;
        // 0x2f846c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f8468) {
            ctx->pc = 0x2F84C4u;
            goto label_2f84c4;
        }
    }
    ctx->pc = 0x2F8470u;
    // 0x2f8470: 0x3e00008  jr          $ra
    ctx->pc = 0x2F8470u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F8474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F8470u;
        // 0x2f8474: 0x2402000a  addiu       $v0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F8470u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F8478u;
label_2f8478:
    // 0x2f8478: 0x80a30001  lb          $v1, 0x1($a1)
    ctx->pc = 0x2f8478u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 1)));
    // 0x2f847c: 0x2402006f  addiu       $v0, $zero, 0x6F
    ctx->pc = 0x2f847cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 111));
    // 0x2f8480: 0x14620010  bne         $v1, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x2F8480u;
    {
        const bool branch_taken_0x2f8480 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2F8484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F8480u;
        // 0x2f8484: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f8480) {
            ctx->pc = 0x2F84C4u;
            goto label_2f84c4;
        }
    }
    ctx->pc = 0x2F8488u;
    // 0x2f8488: 0x80a30002  lb          $v1, 0x2($a1)
    ctx->pc = 0x2f8488u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 2)));
    // 0x2f848c: 0x24020076  addiu       $v0, $zero, 0x76
    ctx->pc = 0x2f848cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 118));
    // 0x2f8490: 0x1462000c  bne         $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x2F8490u;
    {
        const bool branch_taken_0x2f8490 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2F8494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F8490u;
        // 0x2f8494: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f8490) {
            ctx->pc = 0x2F84C4u;
            goto label_2f84c4;
        }
    }
    ctx->pc = 0x2F8498u;
    // 0x2f8498: 0x3e00008  jr          $ra
    ctx->pc = 0x2F8498u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F849Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F8498u;
        // 0x2f849c: 0x2402000b  addiu       $v0, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F8498u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F84A0u;
label_2f84a0:
    // 0x2f84a0: 0x80a30001  lb          $v1, 0x1($a1)
    ctx->pc = 0x2f84a0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 1)));
    // 0x2f84a4: 0x24020065  addiu       $v0, $zero, 0x65
    ctx->pc = 0x2f84a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 101));
    // 0x2f84a8: 0x14620006  bne         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2F84A8u;
    {
        const bool branch_taken_0x2f84a8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2F84ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F84A8u;
        // 0x2f84ac: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f84a8) {
            ctx->pc = 0x2F84C4u;
            goto label_2f84c4;
        }
    }
    ctx->pc = 0x2F84B0u;
    // 0x2f84b0: 0x80a40002  lb          $a0, 0x2($a1)
    ctx->pc = 0x2f84b0u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 2)));
    // 0x2f84b4: 0x24030063  addiu       $v1, $zero, 0x63
    ctx->pc = 0x2f84b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 99));
    // 0x2f84b8: 0x10830002  beq         $a0, $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x2F84B8u;
    {
        const bool branch_taken_0x2f84b8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x2F84BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F84B8u;
        // 0x2f84bc: 0x2402000c  addiu       $v0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f84b8) {
            ctx->pc = 0x2F84C4u;
            goto label_2f84c4;
        }
    }
    ctx->pc = 0x2F84C0u;
label_2f84c0:
    // 0x2f84c0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2f84c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2f84c4:
    // 0x2f84c4: 0x3e00008  jr          $ra
    ctx->pc = 0x2F84C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F84C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F84CCu;
    // 0x2f84cc: 0x0  nop
    ctx->pc = 0x2f84ccu;
    // NOP
    if (ctx->pc == 0x2f84ccu) { ctx->pc = 0x2f84d0u; }
}
