#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0028F570
// Address: 0x28f570 - 0x28f740
void sub_0028F570_0x28f570(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028F570_0x28f570");
#endif

    switch (ctx->pc) {
        case 0x28f57cu: goto label_28f57c;
        case 0x28f584u: goto label_28f584;
        case 0x28f5c4u: goto label_28f5c4;
        case 0x28f5dcu: goto label_28f5dc;
        case 0x28f5e4u: goto label_28f5e4;
        case 0x28f5f8u: goto label_28f5f8;
        case 0x28f600u: goto label_28f600;
        case 0x28f614u: goto label_28f614;
        case 0x28f618u: goto label_28f618;
        case 0x28f61cu: goto label_28f61c;
        case 0x28f630u: goto label_28f630;
        case 0x28f638u: goto label_28f638;
        case 0x28f64cu: goto label_28f64c;
        case 0x28f654u: goto label_28f654;
        case 0x28f668u: goto label_28f668;
        case 0x28f670u: goto label_28f670;
        case 0x28f684u: goto label_28f684;
        case 0x28f68cu: goto label_28f68c;
        case 0x28f6a0u: goto label_28f6a0;
        case 0x28f6a8u: goto label_28f6a8;
        case 0x28f6bcu: goto label_28f6bc;
        case 0x28f6c4u: goto label_28f6c4;
        case 0x28f6d8u: goto label_28f6d8;
        case 0x28f6e0u: goto label_28f6e0;
        case 0x28f6f4u: goto label_28f6f4;
        case 0x28f6fcu: goto label_28f6fc;
        case 0x28f704u: goto label_28f704;
        case 0x28f710u: goto label_28f710;
        case 0x28f718u: goto label_28f718;
        case 0x28f72cu: goto label_28f72c;
        case 0x28f734u: goto label_28f734;
        default: break;
    }

    ctx->pc = 0x28f570u;

    // 0x28f570: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x28f570u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x28f574: 0x50a20003  beql        $a1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x28F574u;
    {
        const bool branch_taken_0x28f574 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x28f574) {
            ctx->pc = 0x28F578u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x28F574u;
            // 0x28f578: 0x90830000  lbu         $v1, 0x0($a0) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x28F584u;
            goto label_28f584;
        }
    }
    ctx->pc = 0x28F57Cu;
label_28f57c:
    // 0x28f57c: 0x3e00008  jr          $ra
    ctx->pc = 0x28F57Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28F580u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28F57Cu;
            // 0x28f580: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x28F584u;
label_28f584:
    // 0x28f584: 0x24020055  addiu       $v0, $zero, 0x55
    ctx->pc = 0x28f584u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 85));
    // 0x28f588: 0x1462fffc  bne         $v1, $v0, . + 4 + (-0x4 << 2)
    ctx->pc = 0x28F588u;
    {
        const bool branch_taken_0x28f588 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x28F58Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28F588u;
            // 0x28f58c: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28f588) {
            ctx->pc = 0x28F57Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_28f57c;
        }
    }
    ctx->pc = 0x28F590u;
    // 0x28f590: 0x90830001  lbu         $v1, 0x1($a0)
    ctx->pc = 0x28f590u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
    // 0x28f594: 0x1462fff9  bne         $v1, $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x28F594u;
    {
        const bool branch_taken_0x28f594 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x28f594) {
            ctx->pc = 0x28F57Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_28f57c;
        }
    }
    ctx->pc = 0x28F59Cu;
    // 0x28f59c: 0x90820002  lbu         $v0, 0x2($a0)
    ctx->pc = 0x28f59cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x28f5a0: 0x2444fffd  addiu       $a0, $v0, -0x3
    ctx->pc = 0x28f5a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967293));
    // 0x28f5a4: 0x2c83002b  sltiu       $v1, $a0, 0x2B
    ctx->pc = 0x28f5a4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)43) ? 1 : 0);
    // 0x28f5a8: 0x10600062  beqz        $v1, . + 4 + (0x62 << 2)
    ctx->pc = 0x28F5A8u;
    {
        const bool branch_taken_0x28f5a8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x28F5ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28F5A8u;
            // 0x28f5ac: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28f5a8) {
            ctx->pc = 0x28F734u;
            goto label_28f734;
        }
    }
    ctx->pc = 0x28F5B0u;
    // 0x28f5b0: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x28f5b0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x28f5b4: 0x2442b220  addiu       $v0, $v0, -0x4DE0
    ctx->pc = 0x28f5b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947360));
    // 0x28f5b8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x28f5b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x28f5bc: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x28f5bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x28f5c0: 0x800008  jr          $a0
label_28f5c4:
    if (ctx->pc == 0x28F5C4u) {
        ctx->pc = 0x28F5C8u;
        goto label_28f5c8;
    }
    ctx->pc = 0x28F5C0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x28F5C8u: goto label_28f5c8;
            case 0x28F5E4u: goto label_28f5e4;
            case 0x28F600u: goto label_28f600;
            case 0x28F61Cu: goto label_28f61c;
            case 0x28F638u: goto label_28f638;
            case 0x28F654u: goto label_28f654;
            case 0x28F670u: goto label_28f670;
            case 0x28F68Cu: goto label_28f68c;
            case 0x28F6A8u: goto label_28f6a8;
            case 0x28F6C4u: goto label_28f6c4;
            case 0x28F6E0u: goto label_28f6e0;
            case 0x28F6FCu: goto label_28f6fc;
            case 0x28F718u: goto label_28f718;
            case 0x28F734u: goto label_28f734;
            default: break;
        }
        return;
    }
    ctx->pc = 0x28F5C8u;
label_28f5c8:
    // 0x28f5c8: 0x54c00004  bnel        $a2, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x28F5C8u;
    {
        const bool branch_taken_0x28f5c8 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x28f5c8) {
            ctx->pc = 0x28F5CCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x28F5C8u;
            // 0x28f5cc: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x28F5DCu;
            goto label_28f5dc;
        }
    }
    ctx->pc = 0x28F5D0u;
    // 0x28f5d0: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x28f5d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x28f5d4: 0x3e00008  jr          $ra
    ctx->pc = 0x28F5D4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28F5D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28F5D4u;
            // 0x28f5d8: 0x2442b0d0  addiu       $v0, $v0, -0x4F30 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947024));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x28F5DCu;
label_28f5dc:
    // 0x28f5dc: 0x3e00008  jr          $ra
    ctx->pc = 0x28F5DCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28F5E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28F5DCu;
            // 0x28f5e0: 0x2442b0e0  addiu       $v0, $v0, -0x4F20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947040));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x28F5E4u;
label_28f5e4:
    // 0x28f5e4: 0x54c00004  bnel        $a2, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x28F5E4u;
    {
        const bool branch_taken_0x28f5e4 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x28f5e4) {
            ctx->pc = 0x28F5E8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x28F5E4u;
            // 0x28f5e8: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x28F5F8u;
            goto label_28f5f8;
        }
    }
    ctx->pc = 0x28F5ECu;
    // 0x28f5ec: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x28f5ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x28f5f0: 0x3e00008  jr          $ra
    ctx->pc = 0x28F5F0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28F5F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28F5F0u;
            // 0x28f5f4: 0x2442b0e8  addiu       $v0, $v0, -0x4F18 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947048));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x28F5F8u;
label_28f5f8:
    // 0x28f5f8: 0x3e00008  jr          $ra
    ctx->pc = 0x28F5F8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28F5FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28F5F8u;
            // 0x28f5fc: 0x2442b0f0  addiu       $v0, $v0, -0x4F10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947056));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x28F600u;
label_28f600:
    // 0x28f600: 0x54c00004  bnel        $a2, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x28F600u;
    {
        const bool branch_taken_0x28f600 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x28f600) {
            ctx->pc = 0x28F604u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x28F600u;
            // 0x28f604: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x28F614u;
            goto label_28f614;
        }
    }
    ctx->pc = 0x28F608u;
    // 0x28f608: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x28f608u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x28f60c: 0x3e00008  jr          $ra
    ctx->pc = 0x28F60Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28F610u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28F60Cu;
            // 0x28f610: 0x2442b0f8  addiu       $v0, $v0, -0x4F08 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947064));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x28F614u;
label_28f614:
    // 0x28f614: 0x3e00008  jr          $ra
label_28f618:
    if (ctx->pc == 0x28F618u) {
        ctx->pc = 0x28F618u;
            // 0x28f618: 0x2442b108  addiu       $v0, $v0, -0x4EF8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947080));
        ctx->pc = 0x28F61Cu;
        goto label_28f61c;
    }
    ctx->pc = 0x28F614u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28F618u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28F614u;
            // 0x28f618: 0x2442b108  addiu       $v0, $v0, -0x4EF8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947080));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x28F61Cu;
label_28f61c:
    // 0x28f61c: 0x54c00004  bnel        $a2, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x28F61Cu;
    {
        const bool branch_taken_0x28f61c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x28f61c) {
            ctx->pc = 0x28F620u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x28F61Cu;
            // 0x28f620: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x28F630u;
            goto label_28f630;
        }
    }
    ctx->pc = 0x28F624u;
    // 0x28f624: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x28f624u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x28f628: 0x3e00008  jr          $ra
    ctx->pc = 0x28F628u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28F62Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28F628u;
            // 0x28f62c: 0x2442b110  addiu       $v0, $v0, -0x4EF0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947088));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x28F630u;
label_28f630:
    // 0x28f630: 0x3e00008  jr          $ra
    ctx->pc = 0x28F630u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28F634u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28F630u;
            // 0x28f634: 0x2442b120  addiu       $v0, $v0, -0x4EE0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947104));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x28F638u;
label_28f638:
    // 0x28f638: 0x54c00004  bnel        $a2, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x28F638u;
    {
        const bool branch_taken_0x28f638 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x28f638) {
            ctx->pc = 0x28F63Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x28F638u;
            // 0x28f63c: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x28F64Cu;
            goto label_28f64c;
        }
    }
    ctx->pc = 0x28F640u;
    // 0x28f640: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x28f640u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x28f644: 0x3e00008  jr          $ra
    ctx->pc = 0x28F644u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28F648u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28F644u;
            // 0x28f648: 0x2442b128  addiu       $v0, $v0, -0x4ED8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x28F64Cu;
label_28f64c:
    // 0x28f64c: 0x3e00008  jr          $ra
    ctx->pc = 0x28F64Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28F650u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28F64Cu;
            // 0x28f650: 0x2442b138  addiu       $v0, $v0, -0x4EC8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x28F654u;
label_28f654:
    // 0x28f654: 0x54c00004  bnel        $a2, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x28F654u;
    {
        const bool branch_taken_0x28f654 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x28f654) {
            ctx->pc = 0x28F658u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x28F654u;
            // 0x28f658: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x28F668u;
            goto label_28f668;
        }
    }
    ctx->pc = 0x28F65Cu;
    // 0x28f65c: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x28f65cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x28f660: 0x3e00008  jr          $ra
    ctx->pc = 0x28F660u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28F664u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28F660u;
            // 0x28f664: 0x2442b140  addiu       $v0, $v0, -0x4EC0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947136));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x28F668u;
label_28f668:
    // 0x28f668: 0x3e00008  jr          $ra
    ctx->pc = 0x28F668u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28F66Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28F668u;
            // 0x28f66c: 0x2442b158  addiu       $v0, $v0, -0x4EA8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x28F670u;
label_28f670:
    // 0x28f670: 0x54c00004  bnel        $a2, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x28F670u;
    {
        const bool branch_taken_0x28f670 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x28f670) {
            ctx->pc = 0x28F674u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x28F670u;
            // 0x28f674: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x28F684u;
            goto label_28f684;
        }
    }
    ctx->pc = 0x28F678u;
    // 0x28f678: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x28f678u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x28f67c: 0x3e00008  jr          $ra
    ctx->pc = 0x28F67Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28F680u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28F67Cu;
            // 0x28f680: 0x2442b160  addiu       $v0, $v0, -0x4EA0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947168));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x28F684u;
label_28f684:
    // 0x28f684: 0x3e00008  jr          $ra
    ctx->pc = 0x28F684u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28F688u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28F684u;
            // 0x28f688: 0x2442b178  addiu       $v0, $v0, -0x4E88 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x28F68Cu;
label_28f68c:
    // 0x28f68c: 0x54c00004  bnel        $a2, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x28F68Cu;
    {
        const bool branch_taken_0x28f68c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x28f68c) {
            ctx->pc = 0x28F690u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x28F68Cu;
            // 0x28f690: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x28F6A0u;
            goto label_28f6a0;
        }
    }
    ctx->pc = 0x28F694u;
    // 0x28f694: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x28f694u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x28f698: 0x3e00008  jr          $ra
    ctx->pc = 0x28F698u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28F69Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28F698u;
            // 0x28f69c: 0x2442b180  addiu       $v0, $v0, -0x4E80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947200));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x28F6A0u;
label_28f6a0:
    // 0x28f6a0: 0x3e00008  jr          $ra
    ctx->pc = 0x28F6A0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28F6A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28F6A0u;
            // 0x28f6a4: 0x2442b198  addiu       $v0, $v0, -0x4E68 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x28F6A8u;
label_28f6a8:
    // 0x28f6a8: 0x54c00004  bnel        $a2, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x28F6A8u;
    {
        const bool branch_taken_0x28f6a8 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x28f6a8) {
            ctx->pc = 0x28F6ACu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x28F6A8u;
            // 0x28f6ac: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x28F6BCu;
            goto label_28f6bc;
        }
    }
    ctx->pc = 0x28F6B0u;
    // 0x28f6b0: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x28f6b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x28f6b4: 0x3e00008  jr          $ra
    ctx->pc = 0x28F6B4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28F6B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28F6B4u;
            // 0x28f6b8: 0x2442b1a0  addiu       $v0, $v0, -0x4E60 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947232));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x28F6BCu;
label_28f6bc:
    // 0x28f6bc: 0x3e00008  jr          $ra
    ctx->pc = 0x28F6BCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28F6C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28F6BCu;
            // 0x28f6c0: 0x2442b1a8  addiu       $v0, $v0, -0x4E58 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947240));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x28F6C4u;
label_28f6c4:
    // 0x28f6c4: 0x54c00004  bnel        $a2, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x28F6C4u;
    {
        const bool branch_taken_0x28f6c4 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x28f6c4) {
            ctx->pc = 0x28F6C8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x28F6C4u;
            // 0x28f6c8: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x28F6D8u;
            goto label_28f6d8;
        }
    }
    ctx->pc = 0x28F6CCu;
    // 0x28f6cc: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x28f6ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x28f6d0: 0x3e00008  jr          $ra
    ctx->pc = 0x28F6D0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28F6D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28F6D0u;
            // 0x28f6d4: 0x2442b1b0  addiu       $v0, $v0, -0x4E50 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947248));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x28F6D8u;
label_28f6d8:
    // 0x28f6d8: 0x3e00008  jr          $ra
    ctx->pc = 0x28F6D8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28F6DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28F6D8u;
            // 0x28f6dc: 0x2442b1c0  addiu       $v0, $v0, -0x4E40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947264));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x28F6E0u;
label_28f6e0:
    // 0x28f6e0: 0x54c00004  bnel        $a2, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x28F6E0u;
    {
        const bool branch_taken_0x28f6e0 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x28f6e0) {
            ctx->pc = 0x28F6E4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x28F6E0u;
            // 0x28f6e4: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x28F6F4u;
            goto label_28f6f4;
        }
    }
    ctx->pc = 0x28F6E8u;
    // 0x28f6e8: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x28f6e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x28f6ec: 0x3e00008  jr          $ra
    ctx->pc = 0x28F6ECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28F6F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28F6ECu;
            // 0x28f6f0: 0x2442b1c8  addiu       $v0, $v0, -0x4E38 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947272));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x28F6F4u;
label_28f6f4:
    // 0x28f6f4: 0x3e00008  jr          $ra
    ctx->pc = 0x28F6F4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28F6F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28F6F4u;
            // 0x28f6f8: 0x2442b1d8  addiu       $v0, $v0, -0x4E28 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947288));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x28F6FCu;
label_28f6fc:
    // 0x28f6fc: 0x54c00004  bnel        $a2, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x28F6FCu;
    {
        const bool branch_taken_0x28f6fc = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x28f6fc) {
            ctx->pc = 0x28F700u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x28F6FCu;
            // 0x28f700: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x28F710u;
            goto label_28f710;
        }
    }
    ctx->pc = 0x28F704u;
label_28f704:
    // 0x28f704: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x28f704u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x28f708: 0x3e00008  jr          $ra
    ctx->pc = 0x28F708u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28F70Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28F708u;
            // 0x28f70c: 0x2442b1e0  addiu       $v0, $v0, -0x4E20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947296));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x28F710u;
label_28f710:
    // 0x28f710: 0x3e00008  jr          $ra
    ctx->pc = 0x28F710u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28F714u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28F710u;
            // 0x28f714: 0x2442b1f0  addiu       $v0, $v0, -0x4E10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947312));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x28F718u;
label_28f718:
    // 0x28f718: 0x54c00004  bnel        $a2, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x28F718u;
    {
        const bool branch_taken_0x28f718 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x28f718) {
            ctx->pc = 0x28F71Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x28F718u;
            // 0x28f71c: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x28F72Cu;
            goto label_28f72c;
        }
    }
    ctx->pc = 0x28F720u;
    // 0x28f720: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x28f720u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x28f724: 0x3e00008  jr          $ra
    ctx->pc = 0x28F724u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28F728u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28F724u;
            // 0x28f728: 0x2442b1f8  addiu       $v0, $v0, -0x4E08 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947320));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x28F72Cu;
label_28f72c:
    // 0x28f72c: 0x3e00008  jr          $ra
    ctx->pc = 0x28F72Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28F730u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28F72Cu;
            // 0x28f730: 0x2442b210  addiu       $v0, $v0, -0x4DF0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947344));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x28F734u;
label_28f734:
    // 0x28f734: 0x3e00008  jr          $ra
    ctx->pc = 0x28F734u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28F738u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28F734u;
            // 0x28f738: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x28F73Cu;
    // 0x28f73c: 0x0  nop
    ctx->pc = 0x28f73cu;
    // NOP
    ctx->pc = 0x28f740u;
}
