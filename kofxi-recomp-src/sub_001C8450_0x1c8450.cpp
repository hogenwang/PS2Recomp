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

// Function: sub_001C8450
// Address: 0x1c8450 - 0x1c86d0
void sub_001C8450_0x1c8450(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C8450_0x1c8450");
#endif

    switch (ctx->pc) {
        case 0x1c8450u: goto label_1c8450;
        case 0x1c8454u: goto label_1c8454;
        case 0x1c8458u: goto label_1c8458;
        case 0x1c845cu: goto label_1c845c;
        case 0x1c8460u: goto label_1c8460;
        case 0x1c8464u: goto label_1c8464;
        case 0x1c8468u: goto label_1c8468;
        case 0x1c846cu: goto label_1c846c;
        case 0x1c8470u: goto label_1c8470;
        case 0x1c8474u: goto label_1c8474;
        case 0x1c8478u: goto label_1c8478;
        case 0x1c847cu: goto label_1c847c;
        case 0x1c8480u: goto label_1c8480;
        case 0x1c8484u: goto label_1c8484;
        case 0x1c8488u: goto label_1c8488;
        case 0x1c848cu: goto label_1c848c;
        case 0x1c8490u: goto label_1c8490;
        case 0x1c8494u: goto label_1c8494;
        case 0x1c8498u: goto label_1c8498;
        case 0x1c849cu: goto label_1c849c;
        case 0x1c84a0u: goto label_1c84a0;
        case 0x1c84a4u: goto label_1c84a4;
        case 0x1c84a8u: goto label_1c84a8;
        case 0x1c84acu: goto label_1c84ac;
        case 0x1c84b0u: goto label_1c84b0;
        case 0x1c84b4u: goto label_1c84b4;
        case 0x1c84b8u: goto label_1c84b8;
        case 0x1c84bcu: goto label_1c84bc;
        case 0x1c84c0u: goto label_1c84c0;
        case 0x1c84c4u: goto label_1c84c4;
        case 0x1c84c8u: goto label_1c84c8;
        case 0x1c84ccu: goto label_1c84cc;
        case 0x1c84d0u: goto label_1c84d0;
        case 0x1c84d4u: goto label_1c84d4;
        case 0x1c84d8u: goto label_1c84d8;
        case 0x1c84dcu: goto label_1c84dc;
        case 0x1c84e0u: goto label_1c84e0;
        case 0x1c84e4u: goto label_1c84e4;
        case 0x1c84e8u: goto label_1c84e8;
        case 0x1c84ecu: goto label_1c84ec;
        case 0x1c84f0u: goto label_1c84f0;
        case 0x1c84f4u: goto label_1c84f4;
        case 0x1c84f8u: goto label_1c84f8;
        case 0x1c84fcu: goto label_1c84fc;
        case 0x1c8500u: goto label_1c8500;
        case 0x1c8504u: goto label_1c8504;
        case 0x1c8508u: goto label_1c8508;
        case 0x1c850cu: goto label_1c850c;
        case 0x1c8510u: goto label_1c8510;
        case 0x1c8514u: goto label_1c8514;
        case 0x1c8518u: goto label_1c8518;
        case 0x1c851cu: goto label_1c851c;
        case 0x1c8520u: goto label_1c8520;
        case 0x1c8524u: goto label_1c8524;
        case 0x1c8528u: goto label_1c8528;
        case 0x1c852cu: goto label_1c852c;
        case 0x1c8530u: goto label_1c8530;
        case 0x1c8534u: goto label_1c8534;
        case 0x1c8538u: goto label_1c8538;
        case 0x1c853cu: goto label_1c853c;
        case 0x1c8540u: goto label_1c8540;
        case 0x1c8544u: goto label_1c8544;
        case 0x1c8548u: goto label_1c8548;
        case 0x1c854cu: goto label_1c854c;
        case 0x1c8550u: goto label_1c8550;
        case 0x1c8554u: goto label_1c8554;
        case 0x1c8558u: goto label_1c8558;
        case 0x1c855cu: goto label_1c855c;
        case 0x1c8560u: goto label_1c8560;
        case 0x1c8564u: goto label_1c8564;
        case 0x1c8568u: goto label_1c8568;
        case 0x1c856cu: goto label_1c856c;
        case 0x1c8570u: goto label_1c8570;
        case 0x1c8574u: goto label_1c8574;
        case 0x1c8578u: goto label_1c8578;
        case 0x1c857cu: goto label_1c857c;
        case 0x1c8580u: goto label_1c8580;
        case 0x1c8584u: goto label_1c8584;
        case 0x1c8588u: goto label_1c8588;
        case 0x1c858cu: goto label_1c858c;
        case 0x1c8590u: goto label_1c8590;
        case 0x1c8594u: goto label_1c8594;
        case 0x1c8598u: goto label_1c8598;
        case 0x1c859cu: goto label_1c859c;
        case 0x1c85a0u: goto label_1c85a0;
        case 0x1c85a4u: goto label_1c85a4;
        case 0x1c85a8u: goto label_1c85a8;
        case 0x1c85acu: goto label_1c85ac;
        case 0x1c85b0u: goto label_1c85b0;
        case 0x1c85b4u: goto label_1c85b4;
        case 0x1c85b8u: goto label_1c85b8;
        case 0x1c85bcu: goto label_1c85bc;
        case 0x1c85c0u: goto label_1c85c0;
        case 0x1c85c4u: goto label_1c85c4;
        case 0x1c85c8u: goto label_1c85c8;
        case 0x1c85ccu: goto label_1c85cc;
        case 0x1c85d0u: goto label_1c85d0;
        case 0x1c85d4u: goto label_1c85d4;
        case 0x1c85d8u: goto label_1c85d8;
        case 0x1c85dcu: goto label_1c85dc;
        case 0x1c85e0u: goto label_1c85e0;
        case 0x1c85e4u: goto label_1c85e4;
        case 0x1c85e8u: goto label_1c85e8;
        case 0x1c85ecu: goto label_1c85ec;
        case 0x1c85f0u: goto label_1c85f0;
        case 0x1c85f4u: goto label_1c85f4;
        case 0x1c85f8u: goto label_1c85f8;
        case 0x1c85fcu: goto label_1c85fc;
        case 0x1c8600u: goto label_1c8600;
        case 0x1c8604u: goto label_1c8604;
        case 0x1c8608u: goto label_1c8608;
        case 0x1c860cu: goto label_1c860c;
        case 0x1c8610u: goto label_1c8610;
        case 0x1c8614u: goto label_1c8614;
        case 0x1c8618u: goto label_1c8618;
        case 0x1c861cu: goto label_1c861c;
        case 0x1c8620u: goto label_1c8620;
        case 0x1c8624u: goto label_1c8624;
        case 0x1c8628u: goto label_1c8628;
        case 0x1c862cu: goto label_1c862c;
        case 0x1c8630u: goto label_1c8630;
        case 0x1c8634u: goto label_1c8634;
        case 0x1c8638u: goto label_1c8638;
        case 0x1c863cu: goto label_1c863c;
        case 0x1c8640u: goto label_1c8640;
        case 0x1c8644u: goto label_1c8644;
        case 0x1c8648u: goto label_1c8648;
        case 0x1c864cu: goto label_1c864c;
        case 0x1c8650u: goto label_1c8650;
        case 0x1c8654u: goto label_1c8654;
        case 0x1c8658u: goto label_1c8658;
        case 0x1c865cu: goto label_1c865c;
        case 0x1c8660u: goto label_1c8660;
        case 0x1c8664u: goto label_1c8664;
        case 0x1c8668u: goto label_1c8668;
        case 0x1c866cu: goto label_1c866c;
        case 0x1c8670u: goto label_1c8670;
        case 0x1c8674u: goto label_1c8674;
        case 0x1c8678u: goto label_1c8678;
        case 0x1c867cu: goto label_1c867c;
        case 0x1c8680u: goto label_1c8680;
        case 0x1c8684u: goto label_1c8684;
        case 0x1c8688u: goto label_1c8688;
        case 0x1c868cu: goto label_1c868c;
        case 0x1c8690u: goto label_1c8690;
        case 0x1c8694u: goto label_1c8694;
        case 0x1c8698u: goto label_1c8698;
        case 0x1c869cu: goto label_1c869c;
        case 0x1c86a0u: goto label_1c86a0;
        case 0x1c86a4u: goto label_1c86a4;
        case 0x1c86a8u: goto label_1c86a8;
        case 0x1c86acu: goto label_1c86ac;
        case 0x1c86b0u: goto label_1c86b0;
        case 0x1c86b4u: goto label_1c86b4;
        case 0x1c86b8u: goto label_1c86b8;
        case 0x1c86bcu: goto label_1c86bc;
        case 0x1c86c0u: goto label_1c86c0;
        case 0x1c86c4u: goto label_1c86c4;
        case 0x1c86c8u: goto label_1c86c8;
        case 0x1c86ccu: goto label_1c86cc;
        default: break;
    }

    ctx->pc = 0x1c8450u;

label_1c8450:
    // 0x1c8450: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x1c8450u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
label_1c8454:
    // 0x1c8454: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c8454u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1c8458:
    // 0x1c8458: 0x8c42c380  lw          $v0, -0x3C80($v0)
    ctx->pc = 0x1c8458u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294951808)));
label_1c845c:
    // 0x1c845c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_1c8460:
    if (ctx->pc == 0x1C8460u) {
        ctx->pc = 0x1C8460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C845Cu;
        // 0x1c8460: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C8464u;
        goto label_1c8464;
    }
    ctx->pc = 0x1C845Cu;
    {
        const bool branch_taken_0x1c845c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C8460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C845Cu;
        // 0x1c8460: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c845c) {
            ctx->pc = 0x1C846Cu;
            goto label_1c846c;
        }
    }
    ctx->pc = 0x1C8464u;
label_1c8464:
    // 0x1c8464: 0x40f809  jalr        $v0
label_1c8468:
    if (ctx->pc == 0x1C8468u) {
        ctx->pc = 0x1C846Cu;
        goto label_1c846c;
    }
    ctx->pc = 0x1C8464u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1C846Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C8464u, 0x1C846Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1C846Cu;
label_1c846c:
    // 0x1c846c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c846cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1c8470:
    // 0x1c8470: 0x3e00008  jr          $ra
label_1c8474:
    if (ctx->pc == 0x1C8474u) {
        ctx->pc = 0x1C8474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8470u;
        // 0x1c8474: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C8478u;
        goto label_1c8478;
    }
    ctx->pc = 0x1C8470u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C8474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8470u;
        // 0x1c8474: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C8470u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C8478u;
label_1c8478:
    // 0x1c8478: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1c8478u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1c847c:
    // 0x1c847c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1c847cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_1c8480:
    // 0x1c8480: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x1c8480u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1c8484:
    // 0x1c8484: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1c8484u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_1c8488:
    // 0x1c8488: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1c8488u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1c848c:
    // 0x1c848c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c848cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1c8490:
    // 0x1c8490: 0x14800009  bnez        $a0, . + 4 + (0x9 << 2)
label_1c8494:
    if (ctx->pc == 0x1C8494u) {
        ctx->pc = 0x1C8494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8490u;
        // 0x1c8494: 0xffbf0018  sd          $ra, 0x18($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C8498u;
        goto label_1c8498;
    }
    ctx->pc = 0x1C8490u;
    {
        const bool branch_taken_0x1c8490 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C8494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8490u;
        // 0x1c8494: 0xffbf0018  sd          $ra, 0x18($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c8490) {
            ctx->pc = 0x1C84B8u;
            goto label_1c84b8;
        }
    }
    ctx->pc = 0x1C8498u;
label_1c8498:
    // 0x1c8498: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x1c8498u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
label_1c849c:
    // 0x1c849c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c849cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1c84a0:
    // 0x1c84a0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1c84a0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1c84a4:
    // 0x1c84a4: 0x2484b250  addiu       $a0, $a0, -0x4DB0
    ctx->pc = 0x1c84a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294947408));
label_1c84a8:
    // 0x1c84a8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1c84a8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1c84ac:
    // 0x1c84ac: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1c84acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_1c84b0:
    // 0x1c84b0: 0x806ba0a  j           func_1AE828
label_1c84b4:
    if (ctx->pc == 0x1C84B4u) {
        ctx->pc = 0x1C84B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C84B0u;
        // 0x1c84b4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C84B8u;
        goto label_1c84b8;
    }
    ctx->pc = 0x1C84B0u;
    ctx->pc = 0x1C84B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C84B0u;
    // 0x1c84b4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AE828u;
    sub_001AE828_0x1ae828(rdram, ctx, runtime); return;
    ctx->pc = 0x1C84B8u;
label_1c84b8:
    // 0x1c84b8: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x1c84b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_1c84bc:
    // 0x1c84bc: 0x80820003  lb          $v0, 0x3($a0)
    ctx->pc = 0x1c84bcu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 3)));
label_1c84c0:
    // 0x1c84c0: 0x8c700004  lw          $s0, 0x4($v1)
    ctx->pc = 0x1c84c0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_1c84c4:
    // 0x1c84c4: 0x28420002  slti        $v0, $v0, 0x2
    ctx->pc = 0x1c84c4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
label_1c84c8:
    // 0x1c84c8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_1c84cc:
    if (ctx->pc == 0x1C84CCu) {
        ctx->pc = 0x1C84CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C84C8u;
        // 0x1c84cc: 0x8e0400e8  lw          $a0, 0xE8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 232)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C84D0u;
        goto label_1c84d0;
    }
    ctx->pc = 0x1C84C8u;
    {
        const bool branch_taken_0x1c84c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C84CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C84C8u;
        // 0x1c84cc: 0x8e0400e8  lw          $a0, 0xE8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 232)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c84c8) {
            ctx->pc = 0x1C84D8u;
            goto label_1c84d8;
        }
    }
    ctx->pc = 0x1C84D0u;
label_1c84d0:
    // 0x1c84d0: 0x14800009  bnez        $a0, . + 4 + (0x9 << 2)
label_1c84d4:
    if (ctx->pc == 0x1C84D4u) {
        ctx->pc = 0x1C84D8u;
        goto label_1c84d8;
    }
    ctx->pc = 0x1C84D0u;
    {
        const bool branch_taken_0x1c84d0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c84d0) {
            ctx->pc = 0x1C84F8u;
            goto label_1c84f8;
        }
    }
    ctx->pc = 0x1C84D8u;
label_1c84d8:
    // 0x1c84d8: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x1c84d8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
label_1c84dc:
    // 0x1c84dc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c84dcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1c84e0:
    // 0x1c84e0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1c84e0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1c84e4:
    // 0x1c84e4: 0x2484b278  addiu       $a0, $a0, -0x4D88
    ctx->pc = 0x1c84e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294947448));
label_1c84e8:
    // 0x1c84e8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1c84e8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1c84ec:
    // 0x1c84ec: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1c84ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_1c84f0:
    // 0x1c84f0: 0x806ba0a  j           func_1AE828
label_1c84f4:
    if (ctx->pc == 0x1C84F4u) {
        ctx->pc = 0x1C84F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C84F0u;
        // 0x1c84f4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C84F8u;
        goto label_1c84f8;
    }
    ctx->pc = 0x1C84F0u;
    ctx->pc = 0x1C84F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C84F0u;
    // 0x1c84f4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AE828u;
    sub_001AE828_0x1ae828(rdram, ctx, runtime); return;
    ctx->pc = 0x1C84F8u;
label_1c84f8:
    // 0x1c84f8: 0xc072054  jal         func_1C8150
label_1c84fc:
    if (ctx->pc == 0x1C84FCu) {
        ctx->pc = 0x1C8500u;
        goto label_1c8500;
    }
    ctx->pc = 0x1C84F8u;
    SET_GPR_U32(ctx, 31, 0x1C8500u);
    ctx->pc = 0x1C8150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C8150u, 0x1C84F8u, 0x1C8500u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C8500u;
label_1c8500:
    // 0x1c8500: 0xae1100f0  sw          $s1, 0xF0($s0)
    ctx->pc = 0x1c8500u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 240), GPR_U32(ctx, 17));
label_1c8504:
    // 0x1c8504: 0xae1200ec  sw          $s2, 0xEC($s0)
    ctx->pc = 0x1c8504u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 236), GPR_U32(ctx, 18));
label_1c8508:
    // 0x1c8508: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1c8508u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1c850c:
    // 0x1c850c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c850cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1c8510:
    // 0x1c8510: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1c8510u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1c8514:
    // 0x1c8514: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1c8514u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_1c8518:
    // 0x1c8518: 0x3e00008  jr          $ra
label_1c851c:
    if (ctx->pc == 0x1C851Cu) {
        ctx->pc = 0x1C851Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8518u;
        // 0x1c851c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C8520u;
        goto label_1c8520;
    }
    ctx->pc = 0x1C8518u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C851Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8518u;
        // 0x1c851c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C8518u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C8520u;
label_1c8520:
    // 0x1c8520: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1c8520u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1c8524:
    // 0x1c8524: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c8524u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1c8528:
    // 0x1c8528: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1c8528u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_1c852c:
    // 0x1c852c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1c852cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1c8530:
    // 0x1c8530: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x1c8530u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_1c8534:
    // 0x1c8534: 0x8c510004  lw          $s1, 0x4($v0)
    ctx->pc = 0x1c8534u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1c8538:
    // 0x1c8538: 0x8e3000e8  lw          $s0, 0xE8($s1)
    ctx->pc = 0x1c8538u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 232)));
label_1c853c:
    // 0x1c853c: 0x52000010  beql        $s0, $zero, . + 4 + (0x10 << 2)
label_1c8540:
    if (ctx->pc == 0x1C8540u) {
        ctx->pc = 0x1C8540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C853Cu;
        // 0x1c8540: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C8544u;
        goto label_1c8544;
    }
    ctx->pc = 0x1C853Cu;
    {
        const bool branch_taken_0x1c853c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c853c) {
            ctx->pc = 0x1C8540u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C853Cu;
            // 0x1c8540: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C8580u;
            goto label_1c8580;
        }
    }
    ctx->pc = 0x1C8544u;
label_1c8544:
    // 0x1c8544: 0xc06e4a0  jal         func_1B9280
label_1c8548:
    if (ctx->pc == 0x1C8548u) {
        ctx->pc = 0x1C854Cu;
        goto label_1c854c;
    }
    ctx->pc = 0x1C8544u;
    SET_GPR_U32(ctx, 31, 0x1C854Cu);
    ctx->pc = 0x1B9280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B9280u, 0x1C8544u, 0x1C854Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C854Cu;
label_1c854c:
    // 0x1c854c: 0xc06cf8a  jal         func_1B3E28
label_1c8550:
    if (ctx->pc == 0x1C8550u) {
        ctx->pc = 0x1C8554u;
        goto label_1c8554;
    }
    ctx->pc = 0x1C854Cu;
    SET_GPR_U32(ctx, 31, 0x1C8554u);
    ctx->pc = 0x1B3E28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B3E28u, 0x1C854Cu, 0x1C8554u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C8554u;
label_1c8554:
    // 0x1c8554: 0xc071f30  jal         func_1C7CC0
label_1c8558:
    if (ctx->pc == 0x1C8558u) {
        ctx->pc = 0x1C8558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8554u;
        // 0x1c8558: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C855Cu;
        goto label_1c855c;
    }
    ctx->pc = 0x1C8554u;
    SET_GPR_U32(ctx, 31, 0x1C855Cu);
    ctx->pc = 0x1C8558u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C8554u;
    // 0x1c8558: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C7CC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C7CC0u, 0x1C8554u, 0x1C855Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C855Cu;
label_1c855c:
    // 0x1c855c: 0xae2000e8  sw          $zero, 0xE8($s1)
    ctx->pc = 0x1c855cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 232), GPR_U32(ctx, 0));
label_1c8560:
    // 0x1c8560: 0xc071ecc  jal         func_1C7B30
label_1c8564:
    if (ctx->pc == 0x1C8564u) {
        ctx->pc = 0x1C8564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8560u;
        // 0x1c8564: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C8568u;
        goto label_1c8568;
    }
    ctx->pc = 0x1C8560u;
    SET_GPR_U32(ctx, 31, 0x1C8568u);
    ctx->pc = 0x1C8564u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C8560u;
    // 0x1c8564: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C7B30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C7B30u, 0x1C8560u, 0x1C8568u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C8568u;
label_1c8568:
    // 0x1c8568: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c8568u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1c856c:
    // 0x1c856c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1c856cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1c8570:
    // 0x1c8570: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1c8570u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1c8574:
    // 0x1c8574: 0x806cf90  j           func_1B3E40
label_1c8578:
    if (ctx->pc == 0x1C8578u) {
        ctx->pc = 0x1C8578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8574u;
        // 0x1c8578: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C857Cu;
        goto label_1c857c;
    }
    ctx->pc = 0x1C8574u;
    ctx->pc = 0x1C8578u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C8574u;
    // 0x1c8578: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B3E40u;
    kofxiVblankSchedulerDispatch_0x1b3e40(rdram, ctx, runtime); return;
    ctx->pc = 0x1C857Cu;
label_1c857c:
    // 0x1c857c: 0x0  nop
    ctx->pc = 0x1c857cu;
    // NOP
label_1c8580:
    // 0x1c8580: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1c8580u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1c8584:
    // 0x1c8584: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1c8584u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1c8588:
    // 0x1c8588: 0x3e00008  jr          $ra
label_1c858c:
    if (ctx->pc == 0x1C858Cu) {
        ctx->pc = 0x1C858Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8588u;
        // 0x1c858c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C8590u;
        goto label_1c8590;
    }
    ctx->pc = 0x1C8588u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C858Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8588u;
        // 0x1c858c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C8588u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C8590u;
label_1c8590:
    // 0x1c8590: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c8590u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1c8594:
    // 0x1c8594: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1c8594u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1c8598:
    // 0x1c8598: 0x8c8400e8  lw          $a0, 0xE8($a0)
    ctx->pc = 0x1c8598u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 232)));
label_1c859c:
    // 0x1c859c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c859cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1c85a0:
    // 0x1c85a0: 0x8071f44  j           func_1C7D10
label_1c85a4:
    if (ctx->pc == 0x1C85A4u) {
        ctx->pc = 0x1C85A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C85A0u;
        // 0x1c85a4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C85A8u;
        goto label_1c85a8;
    }
    ctx->pc = 0x1C85A0u;
    ctx->pc = 0x1C85A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C85A0u;
    // 0x1c85a4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C7D10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C7D10u, 0x1C85A0u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1C85A8u;
label_1c85a8:
    // 0x1c85a8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c85a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1c85ac:
    // 0x1c85ac: 0x52c00  sll         $a1, $a1, 16
    ctx->pc = 0x1c85acu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
label_1c85b0:
    // 0x1c85b0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1c85b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1c85b4:
    // 0x1c85b4: 0x52c03  sra         $a1, $a1, 16
    ctx->pc = 0x1c85b4u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 16));
label_1c85b8:
    // 0x1c85b8: 0x8c8400e8  lw          $a0, 0xE8($a0)
    ctx->pc = 0x1c85b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 232)));
label_1c85bc:
    // 0x1c85bc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c85bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1c85c0:
    // 0x1c85c0: 0x8071f60  j           func_1C7D80
label_1c85c4:
    if (ctx->pc == 0x1C85C4u) {
        ctx->pc = 0x1C85C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C85C0u;
        // 0x1c85c4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C85C8u;
        goto label_1c85c8;
    }
    ctx->pc = 0x1C85C0u;
    ctx->pc = 0x1C85C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C85C0u;
    // 0x1c85c4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C7D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C7D80u, 0x1C85C0u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1C85C8u;
label_1c85c8:
    // 0x1c85c8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c85c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1c85cc:
    // 0x1c85cc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1c85ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1c85d0:
    // 0x1c85d0: 0x8c8400e8  lw          $a0, 0xE8($a0)
    ctx->pc = 0x1c85d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 232)));
label_1c85d4:
    // 0x1c85d4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c85d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1c85d8:
    // 0x1c85d8: 0x8072054  j           func_1C8150
label_1c85dc:
    if (ctx->pc == 0x1C85DCu) {
        ctx->pc = 0x1C85DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C85D8u;
        // 0x1c85dc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C85E0u;
        goto label_1c85e0;
    }
    ctx->pc = 0x1C85D8u;
    ctx->pc = 0x1C85DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C85D8u;
    // 0x1c85dc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C8150u;
    sub_001C8150_0x1c8150(rdram, ctx, runtime); return;
    ctx->pc = 0x1C85E0u;
label_1c85e0:
    // 0x1c85e0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c85e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1c85e4:
    // 0x1c85e4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1c85e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1c85e8:
    // 0x1c85e8: 0x8c8400e8  lw          $a0, 0xE8($a0)
    ctx->pc = 0x1c85e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 232)));
label_1c85ec:
    // 0x1c85ec: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c85ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1c85f0:
    // 0x1c85f0: 0x8072094  j           func_1C8250
label_1c85f4:
    if (ctx->pc == 0x1C85F4u) {
        ctx->pc = 0x1C85F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C85F0u;
        // 0x1c85f4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C85F8u;
        goto label_1c85f8;
    }
    ctx->pc = 0x1C85F0u;
    ctx->pc = 0x1C85F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C85F0u;
    // 0x1c85f4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C8250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C8250u, 0x1C85F0u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1C85F8u;
label_1c85f8:
    // 0x1c85f8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c85f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1c85fc:
    // 0x1c85fc: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1c85fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1c8600:
    // 0x1c8600: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1c8600u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1c8604:
    // 0x1c8604: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c8604u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1c8608:
    // 0x1c8608: 0x806ba0a  j           func_1AE828
label_1c860c:
    if (ctx->pc == 0x1C860Cu) {
        ctx->pc = 0x1C860Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8608u;
        // 0x1c860c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C8610u;
        goto label_1c8610;
    }
    ctx->pc = 0x1C8608u;
    ctx->pc = 0x1C860Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C8608u;
    // 0x1c860c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AE828u;
    sub_001AE828_0x1ae828(rdram, ctx, runtime); return;
    ctx->pc = 0x1C8610u;
label_1c8610:
    // 0x1c8610: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c8610u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1c8614:
    // 0x1c8614: 0x80502d  daddu       $t2, $a0, $zero
    ctx->pc = 0x1c8614u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1c8618:
    // 0x1c8618: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1c8618u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1c861c:
    // 0x1c861c: 0x5410008  bgez        $t2, . + 4 + (0x8 << 2)
label_1c8620:
    if (ctx->pc == 0x1C8620u) {
        ctx->pc = 0x1C8620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C861Cu;
        // 0x1c8620: 0xa0582d  daddu       $t3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C8624u;
        goto label_1c8624;
    }
    ctx->pc = 0x1C861Cu;
    {
        const bool branch_taken_0x1c861c = (GPR_S32(ctx, 10) >= 0);
        ctx->pc = 0x1C8620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C861Cu;
        // 0x1c8620: 0xa0582d  daddu       $t3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c861c) {
            ctx->pc = 0x1C8640u;
            goto label_1c8640;
        }
    }
    ctx->pc = 0x1C8624u;
label_1c8624:
    // 0x1c8624: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x1c8624u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
label_1c8628:
    // 0x1c8628: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c8628u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1c862c:
    // 0x1c862c: 0x140282d  daddu       $a1, $t2, $zero
    ctx->pc = 0x1c862cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
label_1c8630:
    // 0x1c8630: 0x2484b2e0  addiu       $a0, $a0, -0x4D20
    ctx->pc = 0x1c8630u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294947552));
label_1c8634:
    // 0x1c8634: 0x806d212  j           func_1B4848
label_1c8638:
    if (ctx->pc == 0x1C8638u) {
        ctx->pc = 0x1C8638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8634u;
        // 0x1c8638: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C863Cu;
        goto label_1c863c;
    }
    ctx->pc = 0x1C8634u;
    ctx->pc = 0x1C8638u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C8634u;
    // 0x1c8638: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B4848u;
    sub_001B4848_0x1b4848(rdram, ctx, runtime); return;
    ctx->pc = 0x1C863Cu;
label_1c863c:
    // 0x1c863c: 0x0  nop
    ctx->pc = 0x1c863cu;
    // NOP
label_1c8640:
    // 0x1c8640: 0x5610007  bgez        $t3, . + 4 + (0x7 << 2)
label_1c8644:
    if (ctx->pc == 0x1C8644u) {
        ctx->pc = 0x1C8644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8640u;
        // 0x1c8644: 0xa1040  sll         $v0, $t2, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 10), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C8648u;
        goto label_1c8648;
    }
    ctx->pc = 0x1C8640u;
    {
        const bool branch_taken_0x1c8640 = (GPR_S32(ctx, 11) >= 0);
        ctx->pc = 0x1C8644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8640u;
        // 0x1c8644: 0xa1040  sll         $v0, $t2, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 10), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c8640) {
            ctx->pc = 0x1C8660u;
            goto label_1c8660;
        }
    }
    ctx->pc = 0x1C8648u;
label_1c8648:
    // 0x1c8648: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x1c8648u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
label_1c864c:
    // 0x1c864c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c864cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1c8650:
    // 0x1c8650: 0x2484b310  addiu       $a0, $a0, -0x4CF0
    ctx->pc = 0x1c8650u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294947600));
label_1c8654:
    // 0x1c8654: 0x806d212  j           func_1B4848
label_1c8658:
    if (ctx->pc == 0x1C8658u) {
        ctx->pc = 0x1C8658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8654u;
        // 0x1c8658: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C865Cu;
        goto label_1c865c;
    }
    ctx->pc = 0x1C8654u;
    ctx->pc = 0x1C8658u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C8654u;
    // 0x1c8658: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B4848u;
    sub_001B4848_0x1b4848(rdram, ctx, runtime); return;
    ctx->pc = 0x1C865Cu;
label_1c865c:
    // 0x1c865c: 0x0  nop
    ctx->pc = 0x1c865cu;
    // NOP
label_1c8660:
    // 0x1c8660: 0x4b4821  addu        $t1, $v0, $t3
    ctx->pc = 0x1c8660u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 11)));
label_1c8664:
    // 0x1c8664: 0x91980  sll         $v1, $t1, 6
    ctx->pc = 0x1c8664u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 9), 6));
label_1c8668:
    // 0x1c8668: 0x29220021  slti        $v0, $t1, 0x21
    ctx->pc = 0x1c8668u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 9) < (int64_t)(int32_t)33) ? 1 : 0);
label_1c866c:
    // 0x1c866c: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
label_1c8670:
    if (ctx->pc == 0x1C8670u) {
        ctx->pc = 0x1C8670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C866Cu;
        // 0x1c8670: 0x691821  addu        $v1, $v1, $t1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C8674u;
        goto label_1c8674;
    }
    ctx->pc = 0x1C866Cu;
    {
        const bool branch_taken_0x1c866c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C8670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C866Cu;
        // 0x1c8670: 0x691821  addu        $v1, $v1, $t1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c866c) {
            ctx->pc = 0x1C8690u;
            goto label_1c8690;
        }
    }
    ctx->pc = 0x1C8674u;
label_1c8674:
    // 0x1c8674: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x1c8674u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
label_1c8678:
    // 0x1c8678: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c8678u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1c867c:
    // 0x1c867c: 0x24050020  addiu       $a1, $zero, 0x20
    ctx->pc = 0x1c867cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_1c8680:
    // 0x1c8680: 0x2484b340  addiu       $a0, $a0, -0x4CC0
    ctx->pc = 0x1c8680u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294947648));
label_1c8684:
    // 0x1c8684: 0x806d212  j           func_1B4848
label_1c8688:
    if (ctx->pc == 0x1C8688u) {
        ctx->pc = 0x1C8688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8684u;
        // 0x1c8688: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C868Cu;
        goto label_1c868c;
    }
    ctx->pc = 0x1C8684u;
    ctx->pc = 0x1C8688u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C8684u;
    // 0x1c8688: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B4848u;
    sub_001B4848_0x1b4848(rdram, ctx, runtime); return;
    ctx->pc = 0x1C868Cu;
label_1c868c:
    // 0x1c868c: 0x0  nop
    ctx->pc = 0x1c868cu;
    // NOP
label_1c8690:
    // 0x1c8690: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c8690u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1c8694:
    // 0x1c8694: 0x33a00  sll         $a3, $v1, 8
    ctx->pc = 0x1c8694u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
label_1c8698:
    // 0x1c8698: 0x3c080038  lui         $t0, 0x38
    ctx->pc = 0x1c8698u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)56 << 16));
label_1c869c:
    // 0x1c869c: 0x3c040038  lui         $a0, 0x38
    ctx->pc = 0x1c869cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)56 << 16));
label_1c86a0:
    // 0x1c86a0: 0x3c030038  lui         $v1, 0x38
    ctx->pc = 0x1c86a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)56 << 16));
label_1c86a4:
    // 0x1c86a4: 0x3c050038  lui         $a1, 0x38
    ctx->pc = 0x1c86a4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)56 << 16));
label_1c86a8:
    // 0x1c86a8: 0x3c060038  lui         $a2, 0x38
    ctx->pc = 0x1c86a8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)56 << 16));
label_1c86ac:
    // 0x1c86ac: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1c86acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1c86b0:
    // 0x1c86b0: 0xac6a5348  sw          $t2, 0x5348($v1)
    ctx->pc = 0x1c86b0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 21320), GPR_U32(ctx, 10));
label_1c86b4:
    // 0x1c86b4: 0xac8b534c  sw          $t3, 0x534C($a0)
    ctx->pc = 0x1c86b4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 21324), GPR_U32(ctx, 11));
label_1c86b8:
    // 0x1c86b8: 0xaca75324  sw          $a3, 0x5324($a1)
    ctx->pc = 0x1c86b8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 21284), GPR_U32(ctx, 7));
label_1c86bc:
    // 0x1c86bc: 0xacc25328  sw          $v0, 0x5328($a2)
    ctx->pc = 0x1c86bcu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 21288), GPR_U32(ctx, 2));
label_1c86c0:
    // 0x1c86c0: 0xad095320  sw          $t1, 0x5320($t0)
    ctx->pc = 0x1c86c0u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 21280), GPR_U32(ctx, 9));
label_1c86c4:
    // 0x1c86c4: 0x3e00008  jr          $ra
label_1c86c8:
    if (ctx->pc == 0x1C86C8u) {
        ctx->pc = 0x1C86C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C86C4u;
        // 0x1c86c8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C86CCu;
        goto label_1c86cc;
    }
    ctx->pc = 0x1C86C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C86C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C86C4u;
        // 0x1c86c8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C86C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C86CCu;
label_1c86cc:
    // 0x1c86cc: 0x0  nop
    ctx->pc = 0x1c86ccu;
    // NOP
    if (ctx->pc == 0x1c86ccu) { ctx->pc = 0x1c86d0u; }
}
