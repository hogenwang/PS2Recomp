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

// Function: sub_002B03A8
// Address: 0x2b03a8 - 0x2b04e8
void sub_002B03A8_0x2b03a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B03A8_0x2b03a8");
#endif

    switch (ctx->pc) {
        case 0x2b03a8u: goto label_2b03a8;
        case 0x2b03acu: goto label_2b03ac;
        case 0x2b03b0u: goto label_2b03b0;
        case 0x2b03b4u: goto label_2b03b4;
        case 0x2b03b8u: goto label_2b03b8;
        case 0x2b03bcu: goto label_2b03bc;
        case 0x2b03c0u: goto label_2b03c0;
        case 0x2b03c4u: goto label_2b03c4;
        case 0x2b03c8u: goto label_2b03c8;
        case 0x2b03ccu: goto label_2b03cc;
        case 0x2b03d0u: goto label_2b03d0;
        case 0x2b03d4u: goto label_2b03d4;
        case 0x2b03d8u: goto label_2b03d8;
        case 0x2b03dcu: goto label_2b03dc;
        case 0x2b03e0u: goto label_2b03e0;
        case 0x2b03e4u: goto label_2b03e4;
        case 0x2b03e8u: goto label_2b03e8;
        case 0x2b03ecu: goto label_2b03ec;
        case 0x2b03f0u: goto label_2b03f0;
        case 0x2b03f4u: goto label_2b03f4;
        case 0x2b03f8u: goto label_2b03f8;
        case 0x2b03fcu: goto label_2b03fc;
        case 0x2b0400u: goto label_2b0400;
        case 0x2b0404u: goto label_2b0404;
        case 0x2b0408u: goto label_2b0408;
        case 0x2b040cu: goto label_2b040c;
        case 0x2b0410u: goto label_2b0410;
        case 0x2b0414u: goto label_2b0414;
        case 0x2b0418u: goto label_2b0418;
        case 0x2b041cu: goto label_2b041c;
        case 0x2b0420u: goto label_2b0420;
        case 0x2b0424u: goto label_2b0424;
        case 0x2b0428u: goto label_2b0428;
        case 0x2b042cu: goto label_2b042c;
        case 0x2b0430u: goto label_2b0430;
        case 0x2b0434u: goto label_2b0434;
        case 0x2b0438u: goto label_2b0438;
        case 0x2b043cu: goto label_2b043c;
        case 0x2b0440u: goto label_2b0440;
        case 0x2b0444u: goto label_2b0444;
        case 0x2b0448u: goto label_2b0448;
        case 0x2b044cu: goto label_2b044c;
        case 0x2b0450u: goto label_2b0450;
        case 0x2b0454u: goto label_2b0454;
        case 0x2b0458u: goto label_2b0458;
        case 0x2b045cu: goto label_2b045c;
        case 0x2b0460u: goto label_2b0460;
        case 0x2b0464u: goto label_2b0464;
        case 0x2b0468u: goto label_2b0468;
        case 0x2b046cu: goto label_2b046c;
        case 0x2b0470u: goto label_2b0470;
        case 0x2b0474u: goto label_2b0474;
        case 0x2b0478u: goto label_2b0478;
        case 0x2b047cu: goto label_2b047c;
        case 0x2b0480u: goto label_2b0480;
        case 0x2b0484u: goto label_2b0484;
        case 0x2b0488u: goto label_2b0488;
        case 0x2b048cu: goto label_2b048c;
        case 0x2b0490u: goto label_2b0490;
        case 0x2b0494u: goto label_2b0494;
        case 0x2b0498u: goto label_2b0498;
        case 0x2b049cu: goto label_2b049c;
        case 0x2b04a0u: goto label_2b04a0;
        case 0x2b04a4u: goto label_2b04a4;
        case 0x2b04a8u: goto label_2b04a8;
        case 0x2b04acu: goto label_2b04ac;
        case 0x2b04b0u: goto label_2b04b0;
        case 0x2b04b4u: goto label_2b04b4;
        case 0x2b04b8u: goto label_2b04b8;
        case 0x2b04bcu: goto label_2b04bc;
        case 0x2b04c0u: goto label_2b04c0;
        case 0x2b04c4u: goto label_2b04c4;
        case 0x2b04c8u: goto label_2b04c8;
        case 0x2b04ccu: goto label_2b04cc;
        case 0x2b04d0u: goto label_2b04d0;
        case 0x2b04d4u: goto label_2b04d4;
        case 0x2b04d8u: goto label_2b04d8;
        case 0x2b04dcu: goto label_2b04dc;
        case 0x2b04e0u: goto label_2b04e0;
        case 0x2b04e4u: goto label_2b04e4;
        default: break;
    }

    ctx->pc = 0x2b03a8u;

label_2b03a8:
    // 0x2b03a8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2b03a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_2b03ac:
    // 0x2b03ac: 0x24a3ffe0  addiu       $v1, $a1, -0x20
    ctx->pc = 0x2b03acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967264));
label_2b03b0:
    // 0x2b03b0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2b03b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2b03b4:
    // 0x2b03b4: 0x2c620018  sltiu       $v0, $v1, 0x18
    ctx->pc = 0x2b03b4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)24) ? 1 : 0);
label_2b03b8:
    // 0x2b03b8: 0x10400044  beqz        $v0, . + 4 + (0x44 << 2)
label_2b03bc:
    if (ctx->pc == 0x2B03BCu) {
        ctx->pc = 0x2B03BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B03B8u;
        // 0x2b03bc: 0x80402d  daddu       $t0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B03C0u;
        goto label_2b03c0;
    }
    ctx->pc = 0x2B03B8u;
    {
        const bool branch_taken_0x2b03b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B03BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B03B8u;
        // 0x2b03bc: 0x80402d  daddu       $t0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b03b8) {
            ctx->pc = 0x2B04CCu;
            goto label_2b04cc;
        }
    }
    ctx->pc = 0x2B03C0u;
label_2b03c0:
    // 0x2b03c0: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x2b03c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
label_2b03c4:
    // 0x2b03c4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2b03c4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_2b03c8:
    // 0x2b03c8: 0x2442d270  addiu       $v0, $v0, -0x2D90
    ctx->pc = 0x2b03c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294955632));
label_2b03cc:
    // 0x2b03cc: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2b03ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_2b03d0:
    // 0x2b03d0: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2b03d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2b03d4:
    // 0x2b03d4: 0x800008  jr          $a0
label_2b03d8:
    if (ctx->pc == 0x2B03D8u) {
        ctx->pc = 0x2B03DCu;
        goto label_2b03dc;
    }
    ctx->pc = 0x2B03D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2B03DCu: goto label_2b03dc;
            case 0x2B03E4u: goto label_2b03e4;
            case 0x2B03FCu: goto label_2b03fc;
            case 0x2B0434u: goto label_2b0434;
            case 0x2B0468u: goto label_2b0468;
            case 0x2B0478u: goto label_2b0478;
            case 0x2B0480u: goto label_2b0480;
            case 0x2B0494u: goto label_2b0494;
            case 0x2B049Cu: goto label_2b049c;
            case 0x2B04B0u: goto label_2b04b0;
            case 0x2B04C4u: goto label_2b04c4;
            case 0x2B04CCu: goto label_2b04cc;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B03D4u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2B03DCu;
label_2b03dc:
    // 0x2b03dc: 0x1000003f  b           . + 4 + (0x3F << 2)
label_2b03e0:
    if (ctx->pc == 0x2B03E0u) {
        ctx->pc = 0x2B03E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B03DCu;
        // 0x2b03e0: 0x8d020058  lw          $v0, 0x58($t0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 88)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B03E4u;
        goto label_2b03e4;
    }
    ctx->pc = 0x2B03DCu;
    {
        const bool branch_taken_0x2b03dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B03E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B03DCu;
        // 0x2b03e0: 0x8d020058  lw          $v0, 0x58($t0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 88)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b03dc) {
            ctx->pc = 0x2B04DCu;
            goto label_2b04dc;
        }
    }
    ctx->pc = 0x2B03E4u;
label_2b03e4:
    // 0x2b03e4: 0x8d030058  lw          $v1, 0x58($t0)
    ctx->pc = 0x2b03e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 88)));
label_2b03e8:
    // 0x2b03e8: 0x6103c  dsll32      $v0, $a2, 0
    ctx->pc = 0x2b03e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) << (32 + 0));
label_2b03ec:
    // 0x2b03ec: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x2b03ecu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_2b03f0:
    // 0x2b03f0: 0xad020058  sw          $v0, 0x58($t0)
    ctx->pc = 0x2b03f0u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 88), GPR_U32(ctx, 2));
label_2b03f4:
    // 0x2b03f4: 0x10000039  b           . + 4 + (0x39 << 2)
label_2b03f8:
    if (ctx->pc == 0x2B03F8u) {
        ctx->pc = 0x2B03F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B03F4u;
        // 0x2b03f8: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B03FCu;
        goto label_2b03fc;
    }
    ctx->pc = 0x2B03F4u;
    {
        const bool branch_taken_0x2b03f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B03F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B03F4u;
        // 0x2b03f8: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b03f4) {
            ctx->pc = 0x2B04DCu;
            goto label_2b04dc;
        }
    }
    ctx->pc = 0x2B03FCu;
label_2b03fc:
    // 0x2b03fc: 0x24e2ff9c  addiu       $v0, $a3, -0x64
    ctx->pc = 0x2b03fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967196));
label_2b0400:
    // 0x2b0400: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x2b0400u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_2b0404:
    // 0x2b0404: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_2b0408:
    if (ctx->pc == 0x2B0408u) {
        ctx->pc = 0x2B0408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B0404u;
        // 0x2b0408: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B040Cu;
        goto label_2b040c;
    }
    ctx->pc = 0x2B0404u;
    {
        const bool branch_taken_0x2b0404 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B0408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B0404u;
        // 0x2b0408: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b0404) {
            ctx->pc = 0x2B0414u;
            goto label_2b0414;
        }
    }
    ctx->pc = 0x2B040Cu;
label_2b040c:
    // 0x2b040c: 0xfd060118  sd          $a2, 0x118($t0)
    ctx->pc = 0x2b040cu;
    WRITE64(ADD32(GPR_U32(ctx, 8), 280), GPR_U64(ctx, 6));
label_2b0410:
    // 0x2b0410: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2b0410u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2b0414:
    // 0x2b0414: 0x24020066  addiu       $v0, $zero, 0x66
    ctx->pc = 0x2b0414u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 102));
label_2b0418:
    // 0x2b0418: 0x10e20003  beq         $a3, $v0, . + 4 + (0x3 << 2)
label_2b041c:
    if (ctx->pc == 0x2B041Cu) {
        ctx->pc = 0x2B041Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B0418u;
        // 0x2b041c: 0x24020064  addiu       $v0, $zero, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B0420u;
        goto label_2b0420;
    }
    ctx->pc = 0x2B0418u;
    {
        const bool branch_taken_0x2b0418 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 2));
        ctx->pc = 0x2B041Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B0418u;
        // 0x2b041c: 0x24020064  addiu       $v0, $zero, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b0418) {
            ctx->pc = 0x2B0428u;
            goto label_2b0428;
        }
    }
    ctx->pc = 0x2B0420u;
label_2b0420:
    // 0x2b0420: 0x14e2002e  bne         $a3, $v0, . + 4 + (0x2E << 2)
label_2b0424:
    if (ctx->pc == 0x2B0424u) {
        ctx->pc = 0x2B0424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B0420u;
        // 0x2b0424: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B0428u;
        goto label_2b0428;
    }
    ctx->pc = 0x2B0420u;
    {
        const bool branch_taken_0x2b0420 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 2));
        ctx->pc = 0x2B0424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B0420u;
        // 0x2b0424: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b0420) {
            ctx->pc = 0x2B04DCu;
            goto label_2b04dc;
        }
    }
    ctx->pc = 0x2B0428u;
label_2b0428:
    // 0x2b0428: 0xfd060120  sd          $a2, 0x120($t0)
    ctx->pc = 0x2b0428u;
    WRITE64(ADD32(GPR_U32(ctx, 8), 288), GPR_U64(ctx, 6));
label_2b042c:
    // 0x2b042c: 0x1000fff1  b           . + 4 + (-0xF << 2)
label_2b0430:
    if (ctx->pc == 0x2B0430u) {
        ctx->pc = 0x2B0430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B042Cu;
        // 0x2b0430: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B0434u;
        goto label_2b0434;
    }
    ctx->pc = 0x2B042Cu;
    {
        const bool branch_taken_0x2b042c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B0430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B042Cu;
        // 0x2b0430: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b042c) {
            ctx->pc = 0x2B03F4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2b03f4;
        }
    }
    ctx->pc = 0x2B0434u;
label_2b0434:
    // 0x2b0434: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x2b0434u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
label_2b0438:
    // 0x2b0438: 0x34639000  ori         $v1, $v1, 0x9000
    ctx->pc = 0x2b0438u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)36864);
label_2b043c:
    // 0x2b043c: 0x24020065  addiu       $v0, $zero, 0x65
    ctx->pc = 0x2b043cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 101));
label_2b0440:
    // 0x2b0440: 0x14e20004  bne         $a3, $v0, . + 4 + (0x4 << 2)
label_2b0444:
    if (ctx->pc == 0x2B0444u) {
        ctx->pc = 0x2B0444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B0440u;
        // 0x2b0444: 0x24020066  addiu       $v0, $zero, 0x66 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 102));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B0448u;
        goto label_2b0448;
    }
    ctx->pc = 0x2B0440u;
    {
        const bool branch_taken_0x2b0440 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 2));
        ctx->pc = 0x2B0444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B0440u;
        // 0x2b0444: 0x24020066  addiu       $v0, $zero, 0x66 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 102));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b0440) {
            ctx->pc = 0x2B0454u;
            goto label_2b0454;
        }
    }
    ctx->pc = 0x2B0448u;
label_2b0448:
    // 0x2b0448: 0xdd020118  ld          $v0, 0x118($t0)
    ctx->pc = 0x2b0448u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 8), 280)));
label_2b044c:
    // 0x2b044c: 0x1000ffe9  b           . + 4 + (-0x17 << 2)
label_2b0450:
    if (ctx->pc == 0x2B0450u) {
        ctx->pc = 0x2B0450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B044Cu;
        // 0x2b0450: 0x42180b  movn        $v1, $v0, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B0454u;
        goto label_2b0454;
    }
    ctx->pc = 0x2B044Cu;
    {
        const bool branch_taken_0x2b044c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B0450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B044Cu;
        // 0x2b0450: 0x42180b  movn        $v1, $v0, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b044c) {
            ctx->pc = 0x2B03F4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2b03f4;
        }
    }
    ctx->pc = 0x2B0454u;
label_2b0454:
    // 0x2b0454: 0x54e2ffe7  bnel        $a3, $v0, . + 4 + (-0x19 << 2)
label_2b0458:
    if (ctx->pc == 0x2B0458u) {
        ctx->pc = 0x2B0458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B0454u;
        // 0x2b0458: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B045Cu;
        goto label_2b045c;
    }
    ctx->pc = 0x2B0454u;
    {
        const bool branch_taken_0x2b0454 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 2));
        if (branch_taken_0x2b0454) {
            ctx->pc = 0x2B0458u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B0454u;
            // 0x2b0458: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B03F4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2b03f4;
        }
    }
    ctx->pc = 0x2B045Cu;
label_2b045c:
    // 0x2b045c: 0xdd020120  ld          $v0, 0x120($t0)
    ctx->pc = 0x2b045cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 8), 288)));
label_2b0460:
    // 0x2b0460: 0x1000ffe4  b           . + 4 + (-0x1C << 2)
label_2b0464:
    if (ctx->pc == 0x2B0464u) {
        ctx->pc = 0x2B0464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B0460u;
        // 0x2b0464: 0x42180b  movn        $v1, $v0, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B0468u;
        goto label_2b0468;
    }
    ctx->pc = 0x2B0460u;
    {
        const bool branch_taken_0x2b0460 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B0464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B0460u;
        // 0x2b0464: 0x42180b  movn        $v1, $v0, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b0460) {
            ctx->pc = 0x2B03F4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2b03f4;
        }
    }
    ctx->pc = 0x2B0468u;
label_2b0468:
    // 0x2b0468: 0xdd020100  ld          $v0, 0x100($t0)
    ctx->pc = 0x2b0468u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 8), 256)));
label_2b046c:
    // 0x2b046c: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x2b046cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
label_2b0470:
    // 0x2b0470: 0x1000001a  b           . + 4 + (0x1A << 2)
label_2b0474:
    if (ctx->pc == 0x2B0474u) {
        ctx->pc = 0x2B0474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B0470u;
        // 0x2b0474: 0xfd020100  sd          $v0, 0x100($t0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 8), 256), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B0478u;
        goto label_2b0478;
    }
    ctx->pc = 0x2B0470u;
    {
        const bool branch_taken_0x2b0470 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B0474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B0470u;
        // 0x2b0474: 0xfd020100  sd          $v0, 0x100($t0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 8), 256), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b0470) {
            ctx->pc = 0x2B04DCu;
            goto label_2b04dc;
        }
    }
    ctx->pc = 0x2B0478u;
label_2b0478:
    // 0x2b0478: 0x10000018  b           . + 4 + (0x18 << 2)
label_2b047c:
    if (ctx->pc == 0x2B047Cu) {
        ctx->pc = 0x2B047Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B0478u;
        // 0x2b047c: 0x8d020110  lw          $v0, 0x110($t0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 272)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B0480u;
        goto label_2b0480;
    }
    ctx->pc = 0x2B0478u;
    {
        const bool branch_taken_0x2b0478 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B047Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B0478u;
        // 0x2b047c: 0x8d020110  lw          $v0, 0x110($t0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 272)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b0478) {
            ctx->pc = 0x2B04DCu;
            goto label_2b04dc;
        }
    }
    ctx->pc = 0x2B0480u;
label_2b0480:
    // 0x2b0480: 0x8d030110  lw          $v1, 0x110($t0)
    ctx->pc = 0x2b0480u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 272)));
label_2b0484:
    // 0x2b0484: 0x6103c  dsll32      $v0, $a2, 0
    ctx->pc = 0x2b0484u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) << (32 + 0));
label_2b0488:
    // 0x2b0488: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x2b0488u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_2b048c:
    // 0x2b048c: 0x1000ffd9  b           . + 4 + (-0x27 << 2)
label_2b0490:
    if (ctx->pc == 0x2B0490u) {
        ctx->pc = 0x2B0490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B048Cu;
        // 0x2b0490: 0xad020110  sw          $v0, 0x110($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 272), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B0494u;
        goto label_2b0494;
    }
    ctx->pc = 0x2B048Cu;
    {
        const bool branch_taken_0x2b048c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B0490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B048Cu;
        // 0x2b0490: 0xad020110  sw          $v0, 0x110($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 272), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b048c) {
            ctx->pc = 0x2B03F4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2b03f4;
        }
    }
    ctx->pc = 0x2B0494u;
label_2b0494:
    // 0x2b0494: 0x10000011  b           . + 4 + (0x11 << 2)
label_2b0498:
    if (ctx->pc == 0x2B0498u) {
        ctx->pc = 0x2B0498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B0494u;
        // 0x2b0498: 0x8d020114  lw          $v0, 0x114($t0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 276)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B049Cu;
        goto label_2b049c;
    }
    ctx->pc = 0x2B0494u;
    {
        const bool branch_taken_0x2b0494 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B0498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B0494u;
        // 0x2b0498: 0x8d020114  lw          $v0, 0x114($t0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 276)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b0494) {
            ctx->pc = 0x2B04DCu;
            goto label_2b04dc;
        }
    }
    ctx->pc = 0x2B049Cu;
label_2b049c:
    // 0x2b049c: 0x8d030114  lw          $v1, 0x114($t0)
    ctx->pc = 0x2b049cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 276)));
label_2b04a0:
    // 0x2b04a0: 0x6103c  dsll32      $v0, $a2, 0
    ctx->pc = 0x2b04a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) << (32 + 0));
label_2b04a4:
    // 0x2b04a4: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x2b04a4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_2b04a8:
    // 0x2b04a8: 0x1000ffd2  b           . + 4 + (-0x2E << 2)
label_2b04ac:
    if (ctx->pc == 0x2B04ACu) {
        ctx->pc = 0x2B04ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B04A8u;
        // 0x2b04ac: 0xad020114  sw          $v0, 0x114($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 276), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B04B0u;
        goto label_2b04b0;
    }
    ctx->pc = 0x2B04A8u;
    {
        const bool branch_taken_0x2b04a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B04ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B04A8u;
        // 0x2b04ac: 0xad020114  sw          $v0, 0x114($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 276), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b04a8) {
            ctx->pc = 0x2B03F4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2b03f4;
        }
    }
    ctx->pc = 0x2B04B0u;
label_2b04b0:
    // 0x2b04b0: 0x8d0300e0  lw          $v1, 0xE0($t0)
    ctx->pc = 0x2b04b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 224)));
label_2b04b4:
    // 0x2b04b4: 0x6103c  dsll32      $v0, $a2, 0
    ctx->pc = 0x2b04b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) << (32 + 0));
label_2b04b8:
    // 0x2b04b8: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x2b04b8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_2b04bc:
    // 0x2b04bc: 0x1000ffcd  b           . + 4 + (-0x33 << 2)
label_2b04c0:
    if (ctx->pc == 0x2B04C0u) {
        ctx->pc = 0x2B04C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B04BCu;
        // 0x2b04c0: 0xad0200e0  sw          $v0, 0xE0($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 224), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B04C4u;
        goto label_2b04c4;
    }
    ctx->pc = 0x2B04BCu;
    {
        const bool branch_taken_0x2b04bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B04C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B04BCu;
        // 0x2b04c0: 0xad0200e0  sw          $v0, 0xE0($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 224), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b04bc) {
            ctx->pc = 0x2B03F4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2b03f4;
        }
    }
    ctx->pc = 0x2B04C4u;
label_2b04c4:
    // 0x2b04c4: 0x10000005  b           . + 4 + (0x5 << 2)
label_2b04c8:
    if (ctx->pc == 0x2B04C8u) {
        ctx->pc = 0x2B04C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B04C4u;
        // 0x2b04c8: 0x8d0200fc  lw          $v0, 0xFC($t0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 252)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B04CCu;
        goto label_2b04cc;
    }
    ctx->pc = 0x2B04C4u;
    {
        const bool branch_taken_0x2b04c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B04C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B04C4u;
        // 0x2b04c8: 0x8d0200fc  lw          $v0, 0xFC($t0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 252)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b04c4) {
            ctx->pc = 0x2B04DCu;
            goto label_2b04dc;
        }
    }
    ctx->pc = 0x2B04CCu;
label_2b04cc:
    // 0x2b04cc: 0x8d030008  lw          $v1, 0x8($t0)
    ctx->pc = 0x2b04ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 8)));
label_2b04d0:
    // 0x2b04d0: 0x8c620030  lw          $v0, 0x30($v1)
    ctx->pc = 0x2b04d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 48)));
label_2b04d4:
    // 0x2b04d4: 0x40f809  jalr        $v0
label_2b04d8:
    if (ctx->pc == 0x2B04D8u) {
        ctx->pc = 0x2B04D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B04D4u;
        // 0x2b04d8: 0x100202d  daddu       $a0, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B04DCu;
        goto label_2b04dc;
    }
    ctx->pc = 0x2B04D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2B04DCu);
        ctx->pc = 0x2B04D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B04D4u;
        // 0x2b04d8: 0x100202d  daddu       $a0, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B04D4u, 0x2B04DCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2B04DCu;
label_2b04dc:
    // 0x2b04dc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2b04dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2b04e0:
    // 0x2b04e0: 0x3e00008  jr          $ra
label_2b04e4:
    if (ctx->pc == 0x2B04E4u) {
        ctx->pc = 0x2B04E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B04E0u;
        // 0x2b04e4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B04E8u;
        goto label_fallthrough_0x2b04e0;
    }
    ctx->pc = 0x2B04E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B04E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B04E0u;
        // 0x2b04e4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B04E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2b04e0:
    ctx->pc = 0x2B04E8u;
}
