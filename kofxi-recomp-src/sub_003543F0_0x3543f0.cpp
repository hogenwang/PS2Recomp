#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003543F0
// Address: 0x3543f0 - 0x357ec0
void sub_003543F0_0x3543f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003543F0_0x3543f0");
#endif

    switch (ctx->pc) {
        case 0x354424u: goto label_354424;
        case 0x354498u: goto label_354498;
        case 0x3544d8u: goto label_3544d8;
        case 0x3544fcu: goto label_3544fc;
        case 0x354544u: goto label_354544;
        case 0x35454cu: goto label_35454c;
        case 0x354554u: goto label_354554;
        case 0x354564u: goto label_354564;
        case 0x354574u: goto label_354574;
        case 0x35457cu: goto label_35457c;
        case 0x354598u: goto label_354598;
        case 0x3545b0u: goto label_3545b0;
        case 0x3545d8u: goto label_3545d8;
        case 0x354608u: goto label_354608;
        case 0x35461cu: goto label_35461c;
        case 0x354624u: goto label_354624;
        case 0x35462cu: goto label_35462c;
        case 0x35463cu: goto label_35463c;
        case 0x35464cu: goto label_35464c;
        case 0x354654u: goto label_354654;
        case 0x354694u: goto label_354694;
        case 0x3546a8u: goto label_3546a8;
        case 0x3546c0u: goto label_3546c0;
        case 0x3546d8u: goto label_3546d8;
        case 0x3546ecu: goto label_3546ec;
        case 0x354700u: goto label_354700;
        case 0x35473cu: goto label_35473c;
        case 0x35479cu: goto label_35479c;
        case 0x3547fcu: goto label_3547fc;
        case 0x354804u: goto label_354804;
        case 0x354814u: goto label_354814;
        case 0x354824u: goto label_354824;
        case 0x35482cu: goto label_35482c;
        case 0x35485cu: goto label_35485c;
        case 0x3548f4u: goto label_3548f4;
        case 0x354928u: goto label_354928;
        case 0x354960u: goto label_354960;
        case 0x354968u: goto label_354968;
        case 0x354978u: goto label_354978;
        case 0x354988u: goto label_354988;
        case 0x354990u: goto label_354990;
        case 0x3549a0u: goto label_3549a0;
        case 0x3549a8u: goto label_3549a8;
        case 0x3549b8u: goto label_3549b8;
        case 0x3549c8u: goto label_3549c8;
        case 0x3549d0u: goto label_3549d0;
        case 0x354a00u: goto label_354a00;
        case 0x354a10u: goto label_354a10;
        case 0x354a18u: goto label_354a18;
        case 0x354a28u: goto label_354a28;
        case 0x354a38u: goto label_354a38;
        case 0x354a40u: goto label_354a40;
        case 0x354a70u: goto label_354a70;
        case 0x354aacu: goto label_354aac;
        case 0x354accu: goto label_354acc;
        case 0x354ae8u: goto label_354ae8;
        case 0x354af8u: goto label_354af8;
        case 0x354b18u: goto label_354b18;
        case 0x354b34u: goto label_354b34;
        case 0x354b64u: goto label_354b64;
        case 0x354ba0u: goto label_354ba0;
        case 0x354bf0u: goto label_354bf0;
        case 0x354c40u: goto label_354c40;
        case 0x354d30u: goto label_354d30;
        case 0x354e20u: goto label_354e20;
        case 0x354e88u: goto label_354e88;
        case 0x354ed0u: goto label_354ed0;
        case 0x354f38u: goto label_354f38;
        case 0x354f80u: goto label_354f80;
        case 0x3550b0u: goto label_3550b0;
        case 0x3551e0u: goto label_3551e0;
        case 0x35526cu: goto label_35526c;
        case 0x3552c0u: goto label_3552c0;
        case 0x3553f0u: goto label_3553f0;
        case 0x355484u: goto label_355484;
        case 0x3555c0u: goto label_3555c0;
        case 0x355740u: goto label_355740;
        case 0x3558b0u: goto label_3558b0;
        case 0x355a20u: goto label_355a20;
        case 0x355b40u: goto label_355b40;
        case 0x355c00u: goto label_355c00;
        case 0x355c40u: goto label_355c40;
        case 0x355ca4u: goto label_355ca4;
        case 0x355d50u: goto label_355d50;
        case 0x355de4u: goto label_355de4;
        case 0x355ed0u: goto label_355ed0;
        case 0x355fc4u: goto label_355fc4;
        case 0x356000u: goto label_356000;
        case 0x356144u: goto label_356144;
        case 0x3561a0u: goto label_3561a0;
        case 0x356460u: goto label_356460;
        case 0x3565a4u: goto label_3565a4;
        case 0x3565f0u: goto label_3565f0;
        case 0x3566a8u: goto label_3566a8;
        case 0x3566c8u: goto label_3566c8;
        case 0x356800u: goto label_356800;
        case 0x356884u: goto label_356884;
        case 0x3568c0u: goto label_3568c0;
        case 0x356960u: goto label_356960;
        case 0x356a50u: goto label_356a50;
        case 0x356b3cu: goto label_356b3c;
        case 0x356b80u: goto label_356b80;
        case 0x356c20u: goto label_356c20;
        case 0x356e10u: goto label_356e10;
        case 0x356e80u: goto label_356e80;
        case 0x356ea8u: goto label_356ea8;
        case 0x356eb0u: goto label_356eb0;
        case 0x356ec0u: goto label_356ec0;
        case 0x356fa0u: goto label_356fa0;
        case 0x356fc4u: goto label_356fc4;
        case 0x356fe4u: goto label_356fe4;
        case 0x357030u: goto label_357030;
        case 0x3570f8u: goto label_3570f8;
        case 0x3571f0u: goto label_3571f0;
        case 0x357268u: goto label_357268;
        case 0x3572d4u: goto label_3572d4;
        case 0x357310u: goto label_357310;
        case 0x357328u: goto label_357328;
        case 0x357380u: goto label_357380;
        case 0x357390u: goto label_357390;
        case 0x3573e8u: goto label_3573e8;
        case 0x357420u: goto label_357420;
        case 0x3574dcu: goto label_3574dc;
        case 0x3575d0u: goto label_3575d0;
        case 0x357650u: goto label_357650;
        case 0x357690u: goto label_357690;
        case 0x3577b0u: goto label_3577b0;
        case 0x357868u: goto label_357868;
        case 0x357888u: goto label_357888;
        case 0x3579c0u: goto label_3579c0;
        case 0x357a3cu: goto label_357a3c;
        case 0x357a54u: goto label_357a54;
        case 0x357accu: goto label_357acc;
        case 0x357ae0u: goto label_357ae0;
        case 0x357dc0u: goto label_357dc0;
        case 0x357e70u: goto label_357e70;
        default: break;
    }

    ctx->pc = 0x3543f0u;

    // 0x3543f0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3543f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3543f4: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x3543f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
    // 0x3543f8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3543f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x3543fc: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x3543fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x354400: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x354400u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x354404: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x354404u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x354408: 0x90429780  lbu         $v0, -0x6880($v0)
    ctx->pc = 0x354408u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294940544)));
    // 0x35440c: 0x10430003  beq         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x35440Cu;
    {
        const bool branch_taken_0x35440c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x354410u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x35440Cu;
            // 0x354410: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35440c) {
            ctx->pc = 0x35441Cu;
            goto label_35441c;
        }
    }
    ctx->pc = 0x354414u;
    // 0x354414: 0x100001dd  b           . + 4 + (0x1DD << 2)
    ctx->pc = 0x354414u;
    {
        const bool branch_taken_0x354414 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x354418u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x354414u;
            // 0x354418: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x354414) {
            ctx->pc = 0x354B8Cu;
            goto label_354b8c;
        }
    }
    ctx->pc = 0x35441Cu;
label_35441c:
    // 0x35441c: 0xc05c6ac  jal         func_171AB0
    ctx->pc = 0x35441Cu;
    SET_GPR_U32(ctx, 31, 0x354424u);
    ctx->pc = 0x354420u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x35441Cu;
            // 0x354420: 0x8e2400dc  lw          $a0, 0xDC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 220)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x171AB0u;
    if (runtime->hasFunction(0x171AB0u)) {
        auto targetFn = runtime->lookupFunction(0x171AB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x354424u; }
        if (ctx->pc != 0x354424u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00171AB0_0x171ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x354424u; }
        if (ctx->pc != 0x354424u) { return; }
    }
    ctx->pc = 0x354424u;
label_354424:
    // 0x354424: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x354424u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x354428: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x354428u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
    // 0x35442c: 0x8c42bee8  lw          $v0, -0x4118($v0)
    ctx->pc = 0x35442cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950632)));
    // 0x354430: 0x2c41000e  sltiu       $at, $v0, 0xE
    ctx->pc = 0x354430u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)14) ? 1 : 0);
    // 0x354434: 0x502001d5  beql        $at, $zero, . + 4 + (0x1D5 << 2)
    ctx->pc = 0x354434u;
    {
        const bool branch_taken_0x354434 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x354434) {
            ctx->pc = 0x354438u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x354434u;
            // 0x354438: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x354B8Cu;
            goto label_354b8c;
        }
    }
    ctx->pc = 0x35443Cu;
    // 0x35443c: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x35443cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x354440: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x354440u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x354444: 0x24635600  addiu       $v1, $v1, 0x5600
    ctx->pc = 0x354444u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 22016));
    // 0x354448: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x354448u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x35444c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x35444cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x354450: 0x400008  jr          $v0
    ctx->pc = 0x354450u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x354458u: goto label_354458;
            case 0x354460u: goto label_354460;
            case 0x3544CCu: goto label_3544cc;
            case 0x3545BCu: goto label_3545bc;
            case 0x3546E4u: goto label_3546e4;
            case 0x3546F8u: goto label_3546f8;
            case 0x354774u: goto label_354774;
            case 0x354868u: goto label_354868;
            case 0x354900u: goto label_354900;
            case 0x354934u: goto label_354934;
            case 0x35493Cu: goto label_35493c;
            case 0x354A7Cu: goto label_354a7c;
            case 0x354B40u: goto label_354b40;
            case 0x354B88u: goto label_354b88;
            default: break;
        }
        return;
    }
    ctx->pc = 0x354458u;
label_354458:
    // 0x354458: 0x100001cc  b           . + 4 + (0x1CC << 2)
    ctx->pc = 0x354458u;
    {
        const bool branch_taken_0x354458 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x35445Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x354458u;
            // 0x35445c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x354458) {
            ctx->pc = 0x354B8Cu;
            goto label_354b8c;
        }
    }
    ctx->pc = 0x354460u;
label_354460:
    // 0x354460: 0x8e23023c  lw          $v1, 0x23C($s1)
    ctx->pc = 0x354460u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 572)));
    // 0x354464: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x354464u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x354468: 0x5440000c  bnel        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x354468u;
    {
        const bool branch_taken_0x354468 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x354468) {
            ctx->pc = 0x35446Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x354468u;
            // 0x35446c: 0xae200208  sw          $zero, 0x208($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 520), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x35449Cu;
            goto label_35449c;
        }
    }
    ctx->pc = 0x354470u;
    // 0x354470: 0x8e22001c  lw          $v0, 0x1C($s1)
    ctx->pc = 0x354470u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x354474: 0x4410008  bgez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x354474u;
    {
        const bool branch_taken_0x354474 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x354474) {
            ctx->pc = 0x354498u;
            goto label_354498;
        }
    }
    ctx->pc = 0x35447Cu;
    // 0x35447c: 0x34620001  ori         $v0, $v1, 0x1
    ctx->pc = 0x35447cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
    // 0x354480: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x354480u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x354484: 0xae22023c  sw          $v0, 0x23C($s1)
    ctx->pc = 0x354484u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 572), GPR_U32(ctx, 2));
    // 0x354488: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x354488u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35448c: 0x24060300  addiu       $a2, $zero, 0x300
    ctx->pc = 0x35448cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 768));
    // 0x354490: 0xc05a888  jal         func_16A220
    ctx->pc = 0x354490u;
    SET_GPR_U32(ctx, 31, 0x354498u);
    ctx->pc = 0x354494u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x354490u;
            // 0x354494: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16A220u;
    if (runtime->hasFunction(0x16A220u)) {
        auto targetFn = runtime->lookupFunction(0x16A220u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x354498u; }
        if (ctx->pc != 0x354498u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016A220_0x16a220(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x354498u; }
        if (ctx->pc != 0x354498u) { return; }
    }
    ctx->pc = 0x354498u;
label_354498:
    // 0x354498: 0xae200208  sw          $zero, 0x208($s1)
    ctx->pc = 0x354498u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 520), GPR_U32(ctx, 0));
label_35449c:
    // 0x35449c: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x35449cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x3544a0: 0x8c42da70  lw          $v0, -0x2590($v0)
    ctx->pc = 0x3544a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294957680)));
    // 0x3544a4: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x3544a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x3544a8: 0x544001b8  bnel        $v0, $zero, . + 4 + (0x1B8 << 2)
    ctx->pc = 0x3544A8u;
    {
        const bool branch_taken_0x3544a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3544a8) {
            ctx->pc = 0x3544ACu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3544A8u;
            // 0x3544ac: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x354B8Cu;
            goto label_354b8c;
        }
    }
    ctx->pc = 0x3544B0u;
    // 0x3544b0: 0x8e23023c  lw          $v1, 0x23C($s1)
    ctx->pc = 0x3544b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 572)));
    // 0x3544b4: 0x2402fffe  addiu       $v0, $zero, -0x2
    ctx->pc = 0x3544b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x3544b8: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x3544b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x3544bc: 0xae22023c  sw          $v0, 0x23C($s1)
    ctx->pc = 0x3544bcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 572), GPR_U32(ctx, 2));
    // 0x3544c0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3544c0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3544c4: 0x100001b1  b           . + 4 + (0x1B1 << 2)
    ctx->pc = 0x3544C4u;
    {
        const bool branch_taken_0x3544c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3544c4) {
            ctx->pc = 0x354B8Cu;
            goto label_354b8c;
        }
    }
    ctx->pc = 0x3544CCu;
label_3544cc:
    // 0x3544cc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3544ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3544d0: 0xc050d88  jal         func_143620
    ctx->pc = 0x3544D0u;
    SET_GPR_U32(ctx, 31, 0x3544D8u);
    ctx->pc = 0x3544D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3544D0u;
            // 0x3544d4: 0x24050028  addiu       $a1, $zero, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
        ctx->in_delay_slot = false;
    ctx->pc = 0x143620u;
    if (runtime->hasFunction(0x143620u)) {
        auto targetFn = runtime->lookupFunction(0x143620u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3544D8u; }
        if (ctx->pc != 0x3544D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00143620_0x143620(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3544D8u; }
        if (ctx->pc != 0x3544D8u) { return; }
    }
    ctx->pc = 0x3544D8u;
label_3544d8:
    // 0x3544d8: 0x504001ac  beql        $v0, $zero, . + 4 + (0x1AC << 2)
    ctx->pc = 0x3544D8u;
    {
        const bool branch_taken_0x3544d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3544d8) {
            ctx->pc = 0x3544DCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3544D8u;
            // 0x3544dc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x354B8Cu;
            goto label_354b8c;
        }
    }
    ctx->pc = 0x3544E0u;
    // 0x3544e0: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x3544e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x3544e4: 0x8c42da70  lw          $v0, -0x2590($v0)
    ctx->pc = 0x3544e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294957680)));
    // 0x3544e8: 0x3042007f  andi        $v0, $v0, 0x7F
    ctx->pc = 0x3544e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)127);
    // 0x3544ec: 0x10400030  beqz        $v0, . + 4 + (0x30 << 2)
    ctx->pc = 0x3544ECu;
    {
        const bool branch_taken_0x3544ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3544ec) {
            ctx->pc = 0x3545B0u;
            goto label_3545b0;
        }
    }
    ctx->pc = 0x3544F4u;
    // 0x3544f4: 0xc04a3be  jal         func_128EF8
    ctx->pc = 0x3544F4u;
    SET_GPR_U32(ctx, 31, 0x3544FCu);
    ctx->pc = 0x128EF8u;
    if (runtime->hasFunction(0x128EF8u)) {
        auto targetFn = runtime->lookupFunction(0x128EF8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3544FCu; }
        if (ctx->pc != 0x3544FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00128EF8_0x128ef8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3544FCu; }
        if (ctx->pc != 0x3544FCu) { return; }
    }
    ctx->pc = 0x3544FCu;
label_3544fc:
    // 0x3544fc: 0x4410004  bgez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3544FCu;
    {
        const bool branch_taken_0x3544fc = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x354500u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3544FCu;
            // 0x354500: 0x3043000f  andi        $v1, $v0, 0xF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3544fc) {
            ctx->pc = 0x354510u;
            goto label_354510;
        }
    }
    ctx->pc = 0x354504u;
    // 0x354504: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x354504u;
    {
        const bool branch_taken_0x354504 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x354504) {
            ctx->pc = 0x354510u;
            goto label_354510;
        }
    }
    ctx->pc = 0x35450Cu;
    // 0x35450c: 0x2463fff0  addiu       $v1, $v1, -0x10
    ctx->pc = 0x35450cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967280));
label_354510:
    // 0x354510: 0x14600027  bnez        $v1, . + 4 + (0x27 << 2)
    ctx->pc = 0x354510u;
    {
        const bool branch_taken_0x354510 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x354510) {
            ctx->pc = 0x3545B0u;
            goto label_3545b0;
        }
    }
    ctx->pc = 0x354518u;
    // 0x354518: 0x8e23023c  lw          $v1, 0x23C($s1)
    ctx->pc = 0x354518u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 572)));
    // 0x35451c: 0x3c020002  lui         $v0, 0x2
    ctx->pc = 0x35451cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
    // 0x354520: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x354520u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x354524: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x354524u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x354528: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x354528u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35452c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x35452cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x354530: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x354530u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x354534: 0xae22023c  sw          $v0, 0x23C($s1)
    ctx->pc = 0x354534u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 572), GPR_U32(ctx, 2));
    // 0x354538: 0xa620024c  sh          $zero, 0x24C($s1)
    ctx->pc = 0x354538u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 588), (uint16_t)GPR_U32(ctx, 0));
    // 0x35453c: 0xc05a888  jal         func_16A220
    ctx->pc = 0x35453Cu;
    SET_GPR_U32(ctx, 31, 0x354544u);
    ctx->pc = 0x354540u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x35453Cu;
            // 0x354540: 0xa6200228  sh          $zero, 0x228($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 552), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16A220u;
    if (runtime->hasFunction(0x16A220u)) {
        auto targetFn = runtime->lookupFunction(0x16A220u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x354544u; }
        if (ctx->pc != 0x354544u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016A220_0x16a220(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x354544u; }
        if (ctx->pc != 0x354544u) { return; }
    }
    ctx->pc = 0x354544u;
label_354544:
    // 0x354544: 0xc04a3be  jal         func_128EF8
    ctx->pc = 0x354544u;
    SET_GPR_U32(ctx, 31, 0x35454Cu);
    ctx->pc = 0x128EF8u;
    if (runtime->hasFunction(0x128EF8u)) {
        auto targetFn = runtime->lookupFunction(0x128EF8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35454Cu; }
        if (ctx->pc != 0x35454Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00128EF8_0x128ef8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35454Cu; }
        if (ctx->pc != 0x35454Cu) { return; }
    }
    ctx->pc = 0x35454Cu;
label_35454c:
    // 0x35454c: 0xc048bb2  jal         func_122EC8
    ctx->pc = 0x35454Cu;
    SET_GPR_U32(ctx, 31, 0x354554u);
    ctx->pc = 0x354550u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x35454Cu;
            // 0x354550: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x122EC8u;
    if (runtime->hasFunction(0x122EC8u)) {
        auto targetFn = runtime->lookupFunction(0x122EC8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x354554u; }
        if (ctx->pc != 0x354554u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00122EC8_0x122ec8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x354554u; }
        if (ctx->pc != 0x354554u) { return; }
    }
    ctx->pc = 0x354554u;
label_354554:
    // 0x354554: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x354554u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x354558: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x354558u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35455c: 0xc048a76  jal         func_1229D8
    ctx->pc = 0x35455Cu;
    SET_GPR_U32(ctx, 31, 0x354564u);
    ctx->pc = 0x354560u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x35455Cu;
            // 0x354560: 0x3203c  dsll32      $a0, $v1, 0 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1229D8u;
    if (runtime->hasFunction(0x1229D8u)) {
        auto targetFn = runtime->lookupFunction(0x1229D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x354564u; }
        if (ctx->pc != 0x354564u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001229D8_0x1229d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x354564u; }
        if (ctx->pc != 0x354564u) { return; }
    }
    ctx->pc = 0x354564u;
label_354564:
    // 0x354564: 0x3c0341e0  lui         $v1, 0x41E0
    ctx->pc = 0x354564u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16864 << 16));
    // 0x354568: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x354568u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35456c: 0xc048b0a  jal         func_122C28
    ctx->pc = 0x35456Cu;
    SET_GPR_U32(ctx, 31, 0x354574u);
    ctx->pc = 0x354570u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x35456Cu;
            // 0x354570: 0x3283c  dsll32      $a1, $v1, 0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) << (32 + 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x122C28u;
    if (runtime->hasFunction(0x122C28u)) {
        auto targetFn = runtime->lookupFunction(0x122C28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x354574u; }
        if (ctx->pc != 0x354574u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00122C28_0x122c28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x354574u; }
        if (ctx->pc != 0x354574u) { return; }
    }
    ctx->pc = 0x354574u;
label_354574:
    // 0x354574: 0xc048bde  jal         func_122F78
    ctx->pc = 0x354574u;
    SET_GPR_U32(ctx, 31, 0x35457Cu);
    ctx->pc = 0x354578u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x354574u;
            // 0x354578: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x122F78u;
    if (runtime->hasFunction(0x122F78u)) {
        auto targetFn = runtime->lookupFunction(0x122F78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35457Cu; }
        if (ctx->pc != 0x35457Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00122F78_0x122f78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35457Cu; }
        if (ctx->pc != 0x35457Cu) { return; }
    }
    ctx->pc = 0x35457Cu;
label_35457c:
    // 0x35457c: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x35457Cu;
    {
        const bool branch_taken_0x35457c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x35457c) {
            ctx->pc = 0x354580u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x35457Cu;
            // 0x354580: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3545A0u;
            goto label_3545a0;
        }
    }
    ctx->pc = 0x354584u;
    // 0x354584: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x354584u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x354588: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x354588u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x35458c: 0x24060400  addiu       $a2, $zero, 0x400
    ctx->pc = 0x35458cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x354590: 0xc05a888  jal         func_16A220
    ctx->pc = 0x354590u;
    SET_GPR_U32(ctx, 31, 0x354598u);
    ctx->pc = 0x354594u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x354590u;
            // 0x354594: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16A220u;
    if (runtime->hasFunction(0x16A220u)) {
        auto targetFn = runtime->lookupFunction(0x16A220u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x354598u; }
        if (ctx->pc != 0x354598u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016A220_0x16a220(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x354598u; }
        if (ctx->pc != 0x354598u) { return; }
    }
    ctx->pc = 0x354598u;
label_354598:
    // 0x354598: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x354598u;
    {
        const bool branch_taken_0x354598 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x354598) {
            ctx->pc = 0x3545B0u;
            goto label_3545b0;
        }
    }
    ctx->pc = 0x3545A0u;
label_3545a0:
    // 0x3545a0: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x3545a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3545a4: 0x24060800  addiu       $a2, $zero, 0x800
    ctx->pc = 0x3545a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x3545a8: 0xc05a888  jal         func_16A220
    ctx->pc = 0x3545A8u;
    SET_GPR_U32(ctx, 31, 0x3545B0u);
    ctx->pc = 0x3545ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3545A8u;
            // 0x3545ac: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16A220u;
    if (runtime->hasFunction(0x16A220u)) {
        auto targetFn = runtime->lookupFunction(0x16A220u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3545B0u; }
        if (ctx->pc != 0x3545B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016A220_0x16a220(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3545B0u; }
        if (ctx->pc != 0x3545B0u) { return; }
    }
    ctx->pc = 0x3545B0u;
label_3545b0:
    // 0x3545b0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3545b0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3545b4: 0x10000175  b           . + 4 + (0x175 << 2)
    ctx->pc = 0x3545B4u;
    {
        const bool branch_taken_0x3545b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3545b4) {
            ctx->pc = 0x354B8Cu;
            goto label_354b8c;
        }
    }
    ctx->pc = 0x3545BCu;
label_3545bc:
    // 0x3545bc: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x3545bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x3545c0: 0x8c42da70  lw          $v0, -0x2590($v0)
    ctx->pc = 0x3545c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294957680)));
    // 0x3545c4: 0x3042001f  andi        $v0, $v0, 0x1F
    ctx->pc = 0x3545c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
    // 0x3545c8: 0x1040016f  beqz        $v0, . + 4 + (0x16F << 2)
    ctx->pc = 0x3545C8u;
    {
        const bool branch_taken_0x3545c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3545c8) {
            ctx->pc = 0x354B88u;
            goto label_354b88;
        }
    }
    ctx->pc = 0x3545D0u;
    // 0x3545d0: 0xc04a3be  jal         func_128EF8
    ctx->pc = 0x3545D0u;
    SET_GPR_U32(ctx, 31, 0x3545D8u);
    ctx->pc = 0x128EF8u;
    if (runtime->hasFunction(0x128EF8u)) {
        auto targetFn = runtime->lookupFunction(0x128EF8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3545D8u; }
        if (ctx->pc != 0x3545D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00128EF8_0x128ef8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3545D8u; }
        if (ctx->pc != 0x3545D8u) { return; }
    }
    ctx->pc = 0x3545D8u;
label_3545d8:
    // 0x3545d8: 0x4410004  bgez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3545D8u;
    {
        const bool branch_taken_0x3545d8 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x3545DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3545D8u;
            // 0x3545dc: 0x3043000f  andi        $v1, $v0, 0xF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3545d8) {
            ctx->pc = 0x3545ECu;
            goto label_3545ec;
        }
    }
    ctx->pc = 0x3545E0u;
    // 0x3545e0: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x3545E0u;
    {
        const bool branch_taken_0x3545e0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3545e0) {
            ctx->pc = 0x3545ECu;
            goto label_3545ec;
        }
    }
    ctx->pc = 0x3545E8u;
    // 0x3545e8: 0x2463fff0  addiu       $v1, $v1, -0x10
    ctx->pc = 0x3545e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967280));
label_3545ec:
    // 0x3545ec: 0x14600166  bnez        $v1, . + 4 + (0x166 << 2)
    ctx->pc = 0x3545ECu;
    {
        const bool branch_taken_0x3545ec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3545ec) {
            ctx->pc = 0x354B88u;
            goto label_354b88;
        }
    }
    ctx->pc = 0x3545F4u;
    // 0x3545f4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3545f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3545f8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3545f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3545fc: 0x24060100  addiu       $a2, $zero, 0x100
    ctx->pc = 0x3545fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x354600: 0xc05a888  jal         func_16A220
    ctx->pc = 0x354600u;
    SET_GPR_U32(ctx, 31, 0x354608u);
    ctx->pc = 0x354604u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x354600u;
            // 0x354604: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16A220u;
    if (runtime->hasFunction(0x16A220u)) {
        auto targetFn = runtime->lookupFunction(0x16A220u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x354608u; }
        if (ctx->pc != 0x354608u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016A220_0x16a220(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x354608u; }
        if (ctx->pc != 0x354608u) { return; }
    }
    ctx->pc = 0x354608u;
label_354608:
    // 0x354608: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x354608u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x35460c: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x35460cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x354610: 0xae220214  sw          $v0, 0x214($s1)
    ctx->pc = 0x354610u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 532), GPR_U32(ctx, 2));
    // 0x354614: 0xc0cdf2c  jal         func_337CB0
    ctx->pc = 0x354614u;
    SET_GPR_U32(ctx, 31, 0x35461Cu);
    ctx->pc = 0x354618u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x354614u;
            // 0x354618: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x337CB0u;
    if (runtime->hasFunction(0x337CB0u)) {
        auto targetFn = runtime->lookupFunction(0x337CB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35461Cu; }
        if (ctx->pc != 0x35461Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00337CB0_0x337cb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35461Cu; }
        if (ctx->pc != 0x35461Cu) { return; }
    }
    ctx->pc = 0x35461Cu;
label_35461c:
    // 0x35461c: 0xc04a3be  jal         func_128EF8
    ctx->pc = 0x35461Cu;
    SET_GPR_U32(ctx, 31, 0x354624u);
    ctx->pc = 0x128EF8u;
    if (runtime->hasFunction(0x128EF8u)) {
        auto targetFn = runtime->lookupFunction(0x128EF8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x354624u; }
        if (ctx->pc != 0x354624u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00128EF8_0x128ef8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x354624u; }
        if (ctx->pc != 0x354624u) { return; }
    }
    ctx->pc = 0x354624u;
label_354624:
    // 0x354624: 0xc048bb2  jal         func_122EC8
    ctx->pc = 0x354624u;
    SET_GPR_U32(ctx, 31, 0x35462Cu);
    ctx->pc = 0x354628u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x354624u;
            // 0x354628: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x122EC8u;
    if (runtime->hasFunction(0x122EC8u)) {
        auto targetFn = runtime->lookupFunction(0x122EC8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35462Cu; }
        if (ctx->pc != 0x35462Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00122EC8_0x122ec8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35462Cu; }
        if (ctx->pc != 0x35462Cu) { return; }
    }
    ctx->pc = 0x35462Cu;
label_35462c:
    // 0x35462c: 0x3c034010  lui         $v1, 0x4010
    ctx->pc = 0x35462cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16400 << 16));
    // 0x354630: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x354630u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x354634: 0xc048a76  jal         func_1229D8
    ctx->pc = 0x354634u;
    SET_GPR_U32(ctx, 31, 0x35463Cu);
    ctx->pc = 0x354638u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x354634u;
            // 0x354638: 0x3203c  dsll32      $a0, $v1, 0 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1229D8u;
    if (runtime->hasFunction(0x1229D8u)) {
        auto targetFn = runtime->lookupFunction(0x1229D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35463Cu; }
        if (ctx->pc != 0x35463Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001229D8_0x1229d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35463Cu; }
        if (ctx->pc != 0x35463Cu) { return; }
    }
    ctx->pc = 0x35463Cu;
label_35463c:
    // 0x35463c: 0x3c0341e0  lui         $v1, 0x41E0
    ctx->pc = 0x35463cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16864 << 16));
    // 0x354640: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x354640u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x354644: 0xc048b0a  jal         func_122C28
    ctx->pc = 0x354644u;
    SET_GPR_U32(ctx, 31, 0x35464Cu);
    ctx->pc = 0x354648u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x354644u;
            // 0x354648: 0x3283c  dsll32      $a1, $v1, 0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) << (32 + 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x122C28u;
    if (runtime->hasFunction(0x122C28u)) {
        auto targetFn = runtime->lookupFunction(0x122C28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35464Cu; }
        if (ctx->pc != 0x35464Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00122C28_0x122c28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35464Cu; }
        if (ctx->pc != 0x35464Cu) { return; }
    }
    ctx->pc = 0x35464Cu;
label_35464c:
    // 0x35464c: 0xc048bde  jal         func_122F78
    ctx->pc = 0x35464Cu;
    SET_GPR_U32(ctx, 31, 0x354654u);
    ctx->pc = 0x354650u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x35464Cu;
            // 0x354650: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x122F78u;
    if (runtime->hasFunction(0x122F78u)) {
        auto targetFn = runtime->lookupFunction(0x122F78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x354654u; }
        if (ctx->pc != 0x354654u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00122F78_0x122f78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x354654u; }
        if (ctx->pc != 0x354654u) { return; }
    }
    ctx->pc = 0x354654u;
label_354654:
    // 0x354654: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x354654u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x354658: 0x5043001b  beql        $v0, $v1, . + 4 + (0x1B << 2)
    ctx->pc = 0x354658u;
    {
        const bool branch_taken_0x354658 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x354658) {
            ctx->pc = 0x35465Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x354658u;
            // 0x35465c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3546C8u;
            goto label_3546c8;
        }
    }
    ctx->pc = 0x354660u;
    // 0x354660: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x354660u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x354664: 0x50430012  beql        $v0, $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x354664u;
    {
        const bool branch_taken_0x354664 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x354664) {
            ctx->pc = 0x354668u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x354664u;
            // 0x354668: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3546B0u;
            goto label_3546b0;
        }
    }
    ctx->pc = 0x35466Cu;
    // 0x35466c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x35466cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x354670: 0x5047000a  beql        $v0, $a3, . + 4 + (0xA << 2)
    ctx->pc = 0x354670u;
    {
        const bool branch_taken_0x354670 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 7));
        if (branch_taken_0x354670) {
            ctx->pc = 0x354674u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x354670u;
            // 0x354674: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x35469Cu;
            goto label_35469c;
        }
    }
    ctx->pc = 0x354678u;
    // 0x354678: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x354678u;
    {
        const bool branch_taken_0x354678 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x354678) {
            ctx->pc = 0x35467Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x354678u;
            // 0x35467c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x354688u;
            goto label_354688;
        }
    }
    ctx->pc = 0x354680u;
    // 0x354680: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x354680u;
    {
        const bool branch_taken_0x354680 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x354684u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x354680u;
            // 0x354684: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x354680) {
            ctx->pc = 0x3546DCu;
            goto label_3546dc;
        }
    }
    ctx->pc = 0x354688u;
label_354688:
    // 0x354688: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x354688u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35468c: 0xc05a888  jal         func_16A220
    ctx->pc = 0x35468Cu;
    SET_GPR_U32(ctx, 31, 0x354694u);
    ctx->pc = 0x354690u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x35468Cu;
            // 0x354690: 0x24060100  addiu       $a2, $zero, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16A220u;
    if (runtime->hasFunction(0x16A220u)) {
        auto targetFn = runtime->lookupFunction(0x16A220u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x354694u; }
        if (ctx->pc != 0x354694u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016A220_0x16a220(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x354694u; }
        if (ctx->pc != 0x354694u) { return; }
    }
    ctx->pc = 0x354694u;
label_354694:
    // 0x354694: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x354694u;
    {
        const bool branch_taken_0x354694 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x354694) {
            ctx->pc = 0x3546D8u;
            goto label_3546d8;
        }
    }
    ctx->pc = 0x35469Cu;
label_35469c:
    // 0x35469c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x35469cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3546a0: 0xc05a888  jal         func_16A220
    ctx->pc = 0x3546A0u;
    SET_GPR_U32(ctx, 31, 0x3546A8u);
    ctx->pc = 0x3546A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3546A0u;
            // 0x3546a4: 0x24060400  addiu       $a2, $zero, 0x400 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16A220u;
    if (runtime->hasFunction(0x16A220u)) {
        auto targetFn = runtime->lookupFunction(0x16A220u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3546A8u; }
        if (ctx->pc != 0x3546A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016A220_0x16a220(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3546A8u; }
        if (ctx->pc != 0x3546A8u) { return; }
    }
    ctx->pc = 0x3546A8u;
label_3546a8:
    // 0x3546a8: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x3546A8u;
    {
        const bool branch_taken_0x3546a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3546a8) {
            ctx->pc = 0x3546D8u;
            goto label_3546d8;
        }
    }
    ctx->pc = 0x3546B0u;
label_3546b0:
    // 0x3546b0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3546b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3546b4: 0x24060200  addiu       $a2, $zero, 0x200
    ctx->pc = 0x3546b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x3546b8: 0xc05a888  jal         func_16A220
    ctx->pc = 0x3546B8u;
    SET_GPR_U32(ctx, 31, 0x3546C0u);
    ctx->pc = 0x3546BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3546B8u;
            // 0x3546bc: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16A220u;
    if (runtime->hasFunction(0x16A220u)) {
        auto targetFn = runtime->lookupFunction(0x16A220u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3546C0u; }
        if (ctx->pc != 0x3546C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016A220_0x16a220(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3546C0u; }
        if (ctx->pc != 0x3546C0u) { return; }
    }
    ctx->pc = 0x3546C0u;
label_3546c0:
    // 0x3546c0: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x3546C0u;
    {
        const bool branch_taken_0x3546c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3546c0) {
            ctx->pc = 0x3546D8u;
            goto label_3546d8;
        }
    }
    ctx->pc = 0x3546C8u;
label_3546c8:
    // 0x3546c8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3546c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3546cc: 0x24060800  addiu       $a2, $zero, 0x800
    ctx->pc = 0x3546ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x3546d0: 0xc05a888  jal         func_16A220
    ctx->pc = 0x3546D0u;
    SET_GPR_U32(ctx, 31, 0x3546D8u);
    ctx->pc = 0x3546D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3546D0u;
            // 0x3546d4: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16A220u;
    if (runtime->hasFunction(0x16A220u)) {
        auto targetFn = runtime->lookupFunction(0x16A220u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3546D8u; }
        if (ctx->pc != 0x3546D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016A220_0x16a220(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3546D8u; }
        if (ctx->pc != 0x3546D8u) { return; }
    }
    ctx->pc = 0x3546D8u;
label_3546d8:
    // 0x3546d8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3546d8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3546dc:
    // 0x3546dc: 0x1000012b  b           . + 4 + (0x12B << 2)
    ctx->pc = 0x3546DCu;
    {
        const bool branch_taken_0x3546dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3546dc) {
            ctx->pc = 0x354B8Cu;
            goto label_354b8c;
        }
    }
    ctx->pc = 0x3546E4u;
label_3546e4:
    // 0x3546e4: 0xc04f0fc  jal         func_13C3F0
    ctx->pc = 0x3546E4u;
    SET_GPR_U32(ctx, 31, 0x3546ECu);
    ctx->pc = 0x3546E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3546E4u;
            // 0x3546e8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C3F0u;
    if (runtime->hasFunction(0x13C3F0u)) {
        auto targetFn = runtime->lookupFunction(0x13C3F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3546ECu; }
        if (ctx->pc != 0x3546ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C3F0_0x13c3f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3546ECu; }
        if (ctx->pc != 0x3546ECu) { return; }
    }
    ctx->pc = 0x3546ECu;
label_3546ec:
    // 0x3546ec: 0xae200208  sw          $zero, 0x208($s1)
    ctx->pc = 0x3546ecu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 520), GPR_U32(ctx, 0));
    // 0x3546f0: 0x10000126  b           . + 4 + (0x126 << 2)
    ctx->pc = 0x3546F0u;
    {
        const bool branch_taken_0x3546f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3546F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3546F0u;
            // 0x3546f4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3546f0) {
            ctx->pc = 0x354B8Cu;
            goto label_354b8c;
        }
    }
    ctx->pc = 0x3546F8u;
label_3546f8:
    // 0x3546f8: 0xc04f0fc  jal         func_13C3F0
    ctx->pc = 0x3546F8u;
    SET_GPR_U32(ctx, 31, 0x354700u);
    ctx->pc = 0x3546FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3546F8u;
            // 0x3546fc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C3F0u;
    if (runtime->hasFunction(0x13C3F0u)) {
        auto targetFn = runtime->lookupFunction(0x13C3F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x354700u; }
        if (ctx->pc != 0x354700u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C3F0_0x13c3f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x354700u; }
        if (ctx->pc != 0x354700u) { return; }
    }
    ctx->pc = 0x354700u;
label_354700:
    // 0x354700: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x354700u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
    // 0x354704: 0x3c030004  lui         $v1, 0x4
    ctx->pc = 0x354704u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4 << 16));
    // 0x354708: 0x8c44bee4  lw          $a0, -0x411C($v0)
    ctx->pc = 0x354708u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950628)));
    // 0x35470c: 0x831024  and         $v0, $a0, $v1
    ctx->pc = 0x35470cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x354710: 0x5440000d  bnel        $v0, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x354710u;
    {
        const bool branch_taken_0x354710 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x354710) {
            ctx->pc = 0x354714u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x354710u;
            // 0x354714: 0x8e220494  lw          $v0, 0x494($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1172)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x354748u;
            goto label_354748;
        }
    }
    ctx->pc = 0x354718u;
    // 0x354718: 0x8e220494  lw          $v0, 0x494($s1)
    ctx->pc = 0x354718u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1172)));
    // 0x35471c: 0x30420400  andi        $v0, $v0, 0x400
    ctx->pc = 0x35471cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1024);
    // 0x354720: 0x50400011  beql        $v0, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x354720u;
    {
        const bool branch_taken_0x354720 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x354720) {
            ctx->pc = 0x354724u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x354720u;
            // 0x354724: 0xae200208  sw          $zero, 0x208($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 520), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x354768u;
            goto label_354768;
        }
    }
    ctx->pc = 0x354728u;
    // 0x354728: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x354728u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x35472c: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x35472cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x354730: 0xae220214  sw          $v0, 0x214($s1)
    ctx->pc = 0x354730u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 532), GPR_U32(ctx, 2));
    // 0x354734: 0xc0501d0  jal         func_140740
    ctx->pc = 0x354734u;
    SET_GPR_U32(ctx, 31, 0x35473Cu);
    ctx->pc = 0x354738u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x354734u;
            // 0x354738: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x140740u;
    if (runtime->hasFunction(0x140740u)) {
        auto targetFn = runtime->lookupFunction(0x140740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35473Cu; }
        if (ctx->pc != 0x35473Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00140740_0x140740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35473Cu; }
        if (ctx->pc != 0x35473Cu) { return; }
    }
    ctx->pc = 0x35473Cu;
label_35473c:
    // 0x35473c: 0xae200208  sw          $zero, 0x208($s1)
    ctx->pc = 0x35473cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 520), GPR_U32(ctx, 0));
    // 0x354740: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x354740u;
    {
        const bool branch_taken_0x354740 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x354740) {
            ctx->pc = 0x354768u;
            goto label_354768;
        }
    }
    ctx->pc = 0x354748u;
label_354748:
    // 0x354748: 0x30420400  andi        $v0, $v0, 0x400
    ctx->pc = 0x354748u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1024);
    // 0x35474c: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x35474Cu;
    {
        const bool branch_taken_0x35474c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x35474c) {
            ctx->pc = 0x354768u;
            goto label_354768;
        }
    }
    ctx->pc = 0x354754u;
    // 0x354754: 0x3c03fffb  lui         $v1, 0xFFFB
    ctx->pc = 0x354754u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65531 << 16));
    // 0x354758: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x354758u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
    // 0x35475c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x35475cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x354760: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x354760u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x354764: 0xac43bee4  sw          $v1, -0x411C($v0)
    ctx->pc = 0x354764u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294950628), GPR_U32(ctx, 3));
label_354768:
    // 0x354768: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x354768u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35476c: 0x10000107  b           . + 4 + (0x107 << 2)
    ctx->pc = 0x35476Cu;
    {
        const bool branch_taken_0x35476c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x35476c) {
            ctx->pc = 0x354B8Cu;
            goto label_354b8c;
        }
    }
    ctx->pc = 0x354774u;
label_354774:
    // 0x354774: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x354774u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x354778: 0x8c42da70  lw          $v0, -0x2590($v0)
    ctx->pc = 0x354778u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294957680)));
    // 0x35477c: 0x3042001f  andi        $v0, $v0, 0x1F
    ctx->pc = 0x35477cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
    // 0x354780: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x354780u;
    {
        const bool branch_taken_0x354780 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x354780) {
            ctx->pc = 0x3547A4u;
            goto label_3547a4;
        }
    }
    ctx->pc = 0x354788u;
    // 0x354788: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x354788u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35478c: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x35478cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x354790: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x354790u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x354794: 0xc05a888  jal         func_16A220
    ctx->pc = 0x354794u;
    SET_GPR_U32(ctx, 31, 0x35479Cu);
    ctx->pc = 0x354798u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x354794u;
            // 0x354798: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16A220u;
    if (runtime->hasFunction(0x16A220u)) {
        auto targetFn = runtime->lookupFunction(0x16A220u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35479Cu; }
        if (ctx->pc != 0x35479Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016A220_0x16a220(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35479Cu; }
        if (ctx->pc != 0x35479Cu) { return; }
    }
    ctx->pc = 0x35479Cu;
label_35479c:
    // 0x35479c: 0x100000fb  b           . + 4 + (0xFB << 2)
    ctx->pc = 0x35479Cu;
    {
        const bool branch_taken_0x35479c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3547A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x35479Cu;
            // 0x3547a0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35479c) {
            ctx->pc = 0x354B8Cu;
            goto label_354b8c;
        }
    }
    ctx->pc = 0x3547A4u;
label_3547a4:
    // 0x3547a4: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x3547a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
    // 0x3547a8: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x3547a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x3547ac: 0x90429720  lbu         $v0, -0x68E0($v0)
    ctx->pc = 0x3547acu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294940448)));
    // 0x3547b0: 0x2463dc50  addiu       $v1, $v1, -0x23B0
    ctx->pc = 0x3547b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294958160));
    // 0x3547b4: 0x38440001  xori        $a0, $v0, 0x1
    ctx->pc = 0x3547b4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x3547b8: 0x410c0  sll         $v0, $a0, 3
    ctx->pc = 0x3547b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x3547bc: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x3547bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x3547c0: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x3547c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x3547c4: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x3547c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x3547c8: 0x220c0  sll         $a0, $v0, 3
    ctx->pc = 0x3547c8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x3547cc: 0x641021  addu        $v0, $v1, $a0
    ctx->pc = 0x3547ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3547d0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x3547d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3547d4: 0x544000ed  bnel        $v0, $zero, . + 4 + (0xED << 2)
    ctx->pc = 0x3547D4u;
    {
        const bool branch_taken_0x3547d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3547d4) {
            ctx->pc = 0x3547D8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3547D4u;
            // 0x3547d8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x354B8Cu;
            goto label_354b8c;
        }
    }
    ctx->pc = 0x3547DCu;
    // 0x3547dc: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x3547dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x3547e0: 0x2442dc54  addiu       $v0, $v0, -0x23AC
    ctx->pc = 0x3547e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958164));
    // 0x3547e4: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x3547e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x3547e8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x3547e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3547ec: 0x1440001b  bnez        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x3547ECu;
    {
        const bool branch_taken_0x3547ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3547ec) {
            ctx->pc = 0x35485Cu;
            goto label_35485c;
        }
    }
    ctx->pc = 0x3547F4u;
    // 0x3547f4: 0xc04a3be  jal         func_128EF8
    ctx->pc = 0x3547F4u;
    SET_GPR_U32(ctx, 31, 0x3547FCu);
    ctx->pc = 0x128EF8u;
    if (runtime->hasFunction(0x128EF8u)) {
        auto targetFn = runtime->lookupFunction(0x128EF8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3547FCu; }
        if (ctx->pc != 0x3547FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00128EF8_0x128ef8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3547FCu; }
        if (ctx->pc != 0x3547FCu) { return; }
    }
    ctx->pc = 0x3547FCu;
label_3547fc:
    // 0x3547fc: 0xc048bb2  jal         func_122EC8
    ctx->pc = 0x3547FCu;
    SET_GPR_U32(ctx, 31, 0x354804u);
    ctx->pc = 0x354800u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3547FCu;
            // 0x354800: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x122EC8u;
    if (runtime->hasFunction(0x122EC8u)) {
        auto targetFn = runtime->lookupFunction(0x122EC8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x354804u; }
        if (ctx->pc != 0x354804u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00122EC8_0x122ec8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x354804u; }
        if (ctx->pc != 0x354804u) { return; }
    }
    ctx->pc = 0x354804u;
label_354804:
    // 0x354804: 0x3c034018  lui         $v1, 0x4018
    ctx->pc = 0x354804u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16408 << 16));
    // 0x354808: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x354808u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35480c: 0xc048a76  jal         func_1229D8
    ctx->pc = 0x35480Cu;
    SET_GPR_U32(ctx, 31, 0x354814u);
    ctx->pc = 0x354810u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x35480Cu;
            // 0x354810: 0x3203c  dsll32      $a0, $v1, 0 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1229D8u;
    if (runtime->hasFunction(0x1229D8u)) {
        auto targetFn = runtime->lookupFunction(0x1229D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x354814u; }
        if (ctx->pc != 0x354814u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001229D8_0x1229d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x354814u; }
        if (ctx->pc != 0x354814u) { return; }
    }
    ctx->pc = 0x354814u;
label_354814:
    // 0x354814: 0x3c0341e0  lui         $v1, 0x41E0
    ctx->pc = 0x354814u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16864 << 16));
    // 0x354818: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x354818u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35481c: 0xc048b0a  jal         func_122C28
    ctx->pc = 0x35481Cu;
    SET_GPR_U32(ctx, 31, 0x354824u);
    ctx->pc = 0x354820u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x35481Cu;
            // 0x354820: 0x3283c  dsll32      $a1, $v1, 0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) << (32 + 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x122C28u;
    if (runtime->hasFunction(0x122C28u)) {
        auto targetFn = runtime->lookupFunction(0x122C28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x354824u; }
        if (ctx->pc != 0x354824u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00122C28_0x122c28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x354824u; }
        if (ctx->pc != 0x354824u) { return; }
    }
    ctx->pc = 0x354824u;
label_354824:
    // 0x354824: 0xc048bde  jal         func_122F78
    ctx->pc = 0x354824u;
    SET_GPR_U32(ctx, 31, 0x35482Cu);
    ctx->pc = 0x354828u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x354824u;
            // 0x354828: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x122F78u;
    if (runtime->hasFunction(0x122F78u)) {
        auto targetFn = runtime->lookupFunction(0x122F78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35482Cu; }
        if (ctx->pc != 0x35482Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00122F78_0x122f78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35482Cu; }
        if (ctx->pc != 0x35482Cu) { return; }
    }
    ctx->pc = 0x35482Cu;
label_35482c:
    // 0x35482c: 0x22880  sll         $a1, $v0, 2
    ctx->pc = 0x35482cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x354830: 0x3c03003e  lui         $v1, 0x3E
    ctx->pc = 0x354830u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)62 << 16));
    // 0x354834: 0x3c02003e  lui         $v0, 0x3E
    ctx->pc = 0x354834u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)62 << 16));
    // 0x354838: 0x24639910  addiu       $v1, $v1, -0x66F0
    ctx->pc = 0x354838u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294940944));
    // 0x35483c: 0x24429912  addiu       $v0, $v0, -0x66EE
    ctx->pc = 0x35483cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940946));
    // 0x354840: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x354840u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x354844: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x354844u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x354848: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x354848u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35484c: 0x94650000  lhu         $a1, 0x0($v1)
    ctx->pc = 0x35484cu;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x354850: 0x94460000  lhu         $a2, 0x0($v0)
    ctx->pc = 0x354850u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x354854: 0xc05a888  jal         func_16A220
    ctx->pc = 0x354854u;
    SET_GPR_U32(ctx, 31, 0x35485Cu);
    ctx->pc = 0x354858u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x354854u;
            // 0x354858: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16A220u;
    if (runtime->hasFunction(0x16A220u)) {
        auto targetFn = runtime->lookupFunction(0x16A220u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35485Cu; }
        if (ctx->pc != 0x35485Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016A220_0x16a220(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35485Cu; }
        if (ctx->pc != 0x35485Cu) { return; }
    }
    ctx->pc = 0x35485Cu;
label_35485c:
    // 0x35485c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x35485cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x354860: 0x100000ca  b           . + 4 + (0xCA << 2)
    ctx->pc = 0x354860u;
    {
        const bool branch_taken_0x354860 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x354860) {
            ctx->pc = 0x354B8Cu;
            goto label_354b8c;
        }
    }
    ctx->pc = 0x354868u;
label_354868:
    // 0x354868: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x354868u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x35486c: 0x8c42da70  lw          $v0, -0x2590($v0)
    ctx->pc = 0x35486cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294957680)));
    // 0x354870: 0x3042003f  andi        $v0, $v0, 0x3F
    ctx->pc = 0x354870u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)63);
    // 0x354874: 0x504000c5  beql        $v0, $zero, . + 4 + (0xC5 << 2)
    ctx->pc = 0x354874u;
    {
        const bool branch_taken_0x354874 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x354874) {
            ctx->pc = 0x354878u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x354874u;
            // 0x354878: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x354B8Cu;
            goto label_354b8c;
        }
    }
    ctx->pc = 0x35487Cu;
    // 0x35487c: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x35487cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
    // 0x354880: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x354880u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x354884: 0x90429720  lbu         $v0, -0x68E0($v0)
    ctx->pc = 0x354884u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294940448)));
    // 0x354888: 0x2463dc50  addiu       $v1, $v1, -0x23B0
    ctx->pc = 0x354888u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294958160));
    // 0x35488c: 0x38440001  xori        $a0, $v0, 0x1
    ctx->pc = 0x35488cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x354890: 0x410c0  sll         $v0, $a0, 3
    ctx->pc = 0x354890u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x354894: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x354894u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x354898: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x354898u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x35489c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x35489cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x3548a0: 0x220c0  sll         $a0, $v0, 3
    ctx->pc = 0x3548a0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x3548a4: 0x641021  addu        $v0, $v1, $a0
    ctx->pc = 0x3548a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3548a8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x3548a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3548ac: 0x14400011  bnez        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x3548ACu;
    {
        const bool branch_taken_0x3548ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3548ac) {
            ctx->pc = 0x3548F4u;
            goto label_3548f4;
        }
    }
    ctx->pc = 0x3548B4u;
    // 0x3548b4: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x3548b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x3548b8: 0x2442dc54  addiu       $v0, $v0, -0x23AC
    ctx->pc = 0x3548b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958164));
    // 0x3548bc: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x3548bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x3548c0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x3548c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3548c4: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x3548C4u;
    {
        const bool branch_taken_0x3548c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3548c4) {
            ctx->pc = 0x3548F4u;
            goto label_3548f4;
        }
    }
    ctx->pc = 0x3548CCu;
    // 0x3548cc: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x3548ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x3548d0: 0x8442da60  lh          $v0, -0x25A0($v0)
    ctx->pc = 0x3548d0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294957664)));
    // 0x3548d4: 0x28410002  slti        $at, $v0, 0x2
    ctx->pc = 0x3548d4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x3548d8: 0x14200006  bnez        $at, . + 4 + (0x6 << 2)
    ctx->pc = 0x3548D8u;
    {
        const bool branch_taken_0x3548d8 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x3548d8) {
            ctx->pc = 0x3548F4u;
            goto label_3548f4;
        }
    }
    ctx->pc = 0x3548E0u;
    // 0x3548e0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3548e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3548e4: 0x24050036  addiu       $a1, $zero, 0x36
    ctx->pc = 0x3548e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 54));
    // 0x3548e8: 0x24061000  addiu       $a2, $zero, 0x1000
    ctx->pc = 0x3548e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
    // 0x3548ec: 0xc05a888  jal         func_16A220
    ctx->pc = 0x3548ECu;
    SET_GPR_U32(ctx, 31, 0x3548F4u);
    ctx->pc = 0x3548F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3548ECu;
            // 0x3548f0: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16A220u;
    if (runtime->hasFunction(0x16A220u)) {
        auto targetFn = runtime->lookupFunction(0x16A220u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3548F4u; }
        if (ctx->pc != 0x3548F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016A220_0x16a220(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3548F4u; }
        if (ctx->pc != 0x3548F4u) { return; }
    }
    ctx->pc = 0x3548F4u;
label_3548f4:
    // 0x3548f4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3548f4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3548f8: 0x100000a4  b           . + 4 + (0xA4 << 2)
    ctx->pc = 0x3548F8u;
    {
        const bool branch_taken_0x3548f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3548f8) {
            ctx->pc = 0x354B8Cu;
            goto label_354b8c;
        }
    }
    ctx->pc = 0x354900u;
label_354900:
    // 0x354900: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x354900u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x354904: 0x8c42da70  lw          $v0, -0x2590($v0)
    ctx->pc = 0x354904u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294957680)));
    // 0x354908: 0x3042007f  andi        $v0, $v0, 0x7F
    ctx->pc = 0x354908u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)127);
    // 0x35490c: 0x5040009f  beql        $v0, $zero, . + 4 + (0x9F << 2)
    ctx->pc = 0x35490Cu;
    {
        const bool branch_taken_0x35490c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x35490c) {
            ctx->pc = 0x354910u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x35490Cu;
            // 0x354910: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x354B8Cu;
            goto label_354b8c;
        }
    }
    ctx->pc = 0x354914u;
    // 0x354914: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x354914u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x354918: 0x24050026  addiu       $a1, $zero, 0x26
    ctx->pc = 0x354918u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
    // 0x35491c: 0x24061000  addiu       $a2, $zero, 0x1000
    ctx->pc = 0x35491cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
    // 0x354920: 0xc05a888  jal         func_16A220
    ctx->pc = 0x354920u;
    SET_GPR_U32(ctx, 31, 0x354928u);
    ctx->pc = 0x354924u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x354920u;
            // 0x354924: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16A220u;
    if (runtime->hasFunction(0x16A220u)) {
        auto targetFn = runtime->lookupFunction(0x16A220u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x354928u; }
        if (ctx->pc != 0x354928u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016A220_0x16a220(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x354928u; }
        if (ctx->pc != 0x354928u) { return; }
    }
    ctx->pc = 0x354928u;
label_354928:
    // 0x354928: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x354928u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35492c: 0x10000097  b           . + 4 + (0x97 << 2)
    ctx->pc = 0x35492Cu;
    {
        const bool branch_taken_0x35492c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x35492c) {
            ctx->pc = 0x354B8Cu;
            goto label_354b8c;
        }
    }
    ctx->pc = 0x354934u;
label_354934:
    // 0x354934: 0x10000095  b           . + 4 + (0x95 << 2)
    ctx->pc = 0x354934u;
    {
        const bool branch_taken_0x354934 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x354938u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x354934u;
            // 0x354938: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x354934) {
            ctx->pc = 0x354B8Cu;
            goto label_354b8c;
        }
    }
    ctx->pc = 0x35493Cu;
label_35493c:
    // 0x35493c: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x35493cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x354940: 0x8c42da70  lw          $v0, -0x2590($v0)
    ctx->pc = 0x354940u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294957680)));
    // 0x354944: 0x3042001f  andi        $v0, $v0, 0x1F
    ctx->pc = 0x354944u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
    // 0x354948: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x354948u;
    {
        const bool branch_taken_0x354948 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x354948) {
            ctx->pc = 0x354958u;
            goto label_354958;
        }
    }
    ctx->pc = 0x354950u;
    // 0x354950: 0x1000008e  b           . + 4 + (0x8E << 2)
    ctx->pc = 0x354950u;
    {
        const bool branch_taken_0x354950 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x354954u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x354950u;
            // 0x354954: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x354950) {
            ctx->pc = 0x354B8Cu;
            goto label_354b8c;
        }
    }
    ctx->pc = 0x354958u;
label_354958:
    // 0x354958: 0xc04a3be  jal         func_128EF8
    ctx->pc = 0x354958u;
    SET_GPR_U32(ctx, 31, 0x354960u);
    ctx->pc = 0x128EF8u;
    if (runtime->hasFunction(0x128EF8u)) {
        auto targetFn = runtime->lookupFunction(0x128EF8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x354960u; }
        if (ctx->pc != 0x354960u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00128EF8_0x128ef8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x354960u; }
        if (ctx->pc != 0x354960u) { return; }
    }
    ctx->pc = 0x354960u;
label_354960:
    // 0x354960: 0xc048bb2  jal         func_122EC8
    ctx->pc = 0x354960u;
    SET_GPR_U32(ctx, 31, 0x354968u);
    ctx->pc = 0x354964u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x354960u;
            // 0x354964: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x122EC8u;
    if (runtime->hasFunction(0x122EC8u)) {
        auto targetFn = runtime->lookupFunction(0x122EC8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x354968u; }
        if (ctx->pc != 0x354968u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00122EC8_0x122ec8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x354968u; }
        if (ctx->pc != 0x354968u) { return; }
    }
    ctx->pc = 0x354968u;
label_354968:
    // 0x354968: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x354968u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x35496c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x35496cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x354970: 0xc048a76  jal         func_1229D8
    ctx->pc = 0x354970u;
    SET_GPR_U32(ctx, 31, 0x354978u);
    ctx->pc = 0x354974u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x354970u;
            // 0x354974: 0x3203c  dsll32      $a0, $v1, 0 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1229D8u;
    if (runtime->hasFunction(0x1229D8u)) {
        auto targetFn = runtime->lookupFunction(0x1229D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x354978u; }
        if (ctx->pc != 0x354978u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001229D8_0x1229d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x354978u; }
        if (ctx->pc != 0x354978u) { return; }
    }
    ctx->pc = 0x354978u;
label_354978:
    // 0x354978: 0x3c0341e0  lui         $v1, 0x41E0
    ctx->pc = 0x354978u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16864 << 16));
    // 0x35497c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x35497cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x354980: 0xc048b0a  jal         func_122C28
    ctx->pc = 0x354980u;
    SET_GPR_U32(ctx, 31, 0x354988u);
    ctx->pc = 0x354984u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x354980u;
            // 0x354984: 0x3283c  dsll32      $a1, $v1, 0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) << (32 + 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x122C28u;
    if (runtime->hasFunction(0x122C28u)) {
        auto targetFn = runtime->lookupFunction(0x122C28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x354988u; }
        if (ctx->pc != 0x354988u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00122C28_0x122c28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x354988u; }
        if (ctx->pc != 0x354988u) { return; }
    }
    ctx->pc = 0x354988u;
label_354988:
    // 0x354988: 0xc048bde  jal         func_122F78
    ctx->pc = 0x354988u;
    SET_GPR_U32(ctx, 31, 0x354990u);
    ctx->pc = 0x35498Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x354988u;
            // 0x35498c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x122F78u;
    if (runtime->hasFunction(0x122F78u)) {
        auto targetFn = runtime->lookupFunction(0x122F78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x354990u; }
        if (ctx->pc != 0x354990u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00122F78_0x122f78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x354990u; }
        if (ctx->pc != 0x354990u) { return; }
    }
    ctx->pc = 0x354990u;
label_354990:
    // 0x354990: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x354990u;
    {
        const bool branch_taken_0x354990 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x354990) {
            ctx->pc = 0x354A08u;
            goto label_354a08;
        }
    }
    ctx->pc = 0x354998u;
    // 0x354998: 0xc04a3be  jal         func_128EF8
    ctx->pc = 0x354998u;
    SET_GPR_U32(ctx, 31, 0x3549A0u);
    ctx->pc = 0x128EF8u;
    if (runtime->hasFunction(0x128EF8u)) {
        auto targetFn = runtime->lookupFunction(0x128EF8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3549A0u; }
        if (ctx->pc != 0x3549A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00128EF8_0x128ef8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3549A0u; }
        if (ctx->pc != 0x3549A0u) { return; }
    }
    ctx->pc = 0x3549A0u;
label_3549a0:
    // 0x3549a0: 0xc048bb2  jal         func_122EC8
    ctx->pc = 0x3549A0u;
    SET_GPR_U32(ctx, 31, 0x3549A8u);
    ctx->pc = 0x3549A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3549A0u;
            // 0x3549a4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x122EC8u;
    if (runtime->hasFunction(0x122EC8u)) {
        auto targetFn = runtime->lookupFunction(0x122EC8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3549A8u; }
        if (ctx->pc != 0x3549A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00122EC8_0x122ec8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3549A8u; }
        if (ctx->pc != 0x3549A8u) { return; }
    }
    ctx->pc = 0x3549A8u;
label_3549a8:
    // 0x3549a8: 0x3c034020  lui         $v1, 0x4020
    ctx->pc = 0x3549a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16416 << 16));
    // 0x3549ac: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x3549acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3549b0: 0xc048a76  jal         func_1229D8
    ctx->pc = 0x3549B0u;
    SET_GPR_U32(ctx, 31, 0x3549B8u);
    ctx->pc = 0x3549B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3549B0u;
            // 0x3549b4: 0x3203c  dsll32      $a0, $v1, 0 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1229D8u;
    if (runtime->hasFunction(0x1229D8u)) {
        auto targetFn = runtime->lookupFunction(0x1229D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3549B8u; }
        if (ctx->pc != 0x3549B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001229D8_0x1229d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3549B8u; }
        if (ctx->pc != 0x3549B8u) { return; }
    }
    ctx->pc = 0x3549B8u;
label_3549b8:
    // 0x3549b8: 0x3c0341e0  lui         $v1, 0x41E0
    ctx->pc = 0x3549b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16864 << 16));
    // 0x3549bc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3549bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3549c0: 0xc048b0a  jal         func_122C28
    ctx->pc = 0x3549C0u;
    SET_GPR_U32(ctx, 31, 0x3549C8u);
    ctx->pc = 0x3549C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3549C0u;
            // 0x3549c4: 0x3283c  dsll32      $a1, $v1, 0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) << (32 + 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x122C28u;
    if (runtime->hasFunction(0x122C28u)) {
        auto targetFn = runtime->lookupFunction(0x122C28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3549C8u; }
        if (ctx->pc != 0x3549C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00122C28_0x122c28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3549C8u; }
        if (ctx->pc != 0x3549C8u) { return; }
    }
    ctx->pc = 0x3549C8u;
label_3549c8:
    // 0x3549c8: 0xc048bde  jal         func_122F78
    ctx->pc = 0x3549C8u;
    SET_GPR_U32(ctx, 31, 0x3549D0u);
    ctx->pc = 0x3549CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3549C8u;
            // 0x3549cc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x122F78u;
    if (runtime->hasFunction(0x122F78u)) {
        auto targetFn = runtime->lookupFunction(0x122F78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3549D0u; }
        if (ctx->pc != 0x3549D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00122F78_0x122f78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3549D0u; }
        if (ctx->pc != 0x3549D0u) { return; }
    }
    ctx->pc = 0x3549D0u;
label_3549d0:
    // 0x3549d0: 0x22880  sll         $a1, $v0, 2
    ctx->pc = 0x3549d0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x3549d4: 0x3c03003e  lui         $v1, 0x3E
    ctx->pc = 0x3549d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)62 << 16));
    // 0x3549d8: 0x3c02003e  lui         $v0, 0x3E
    ctx->pc = 0x3549d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)62 << 16));
    // 0x3549dc: 0x24639930  addiu       $v1, $v1, -0x66D0
    ctx->pc = 0x3549dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294940976));
    // 0x3549e0: 0x24429932  addiu       $v0, $v0, -0x66CE
    ctx->pc = 0x3549e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940978));
    // 0x3549e4: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x3549e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x3549e8: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x3549e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x3549ec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3549ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3549f0: 0x94650000  lhu         $a1, 0x0($v1)
    ctx->pc = 0x3549f0u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3549f4: 0x94460000  lhu         $a2, 0x0($v0)
    ctx->pc = 0x3549f4u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3549f8: 0xc05a888  jal         func_16A220
    ctx->pc = 0x3549F8u;
    SET_GPR_U32(ctx, 31, 0x354A00u);
    ctx->pc = 0x3549FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3549F8u;
            // 0x3549fc: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16A220u;
    if (runtime->hasFunction(0x16A220u)) {
        auto targetFn = runtime->lookupFunction(0x16A220u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x354A00u; }
        if (ctx->pc != 0x354A00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016A220_0x16a220(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x354A00u; }
        if (ctx->pc != 0x354A00u) { return; }
    }
    ctx->pc = 0x354A00u;
label_354a00:
    // 0x354a00: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x354A00u;
    {
        const bool branch_taken_0x354a00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x354A04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x354A00u;
            // 0x354a04: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x354a00) {
            ctx->pc = 0x354A74u;
            goto label_354a74;
        }
    }
    ctx->pc = 0x354A08u;
label_354a08:
    // 0x354a08: 0xc04a3be  jal         func_128EF8
    ctx->pc = 0x354A08u;
    SET_GPR_U32(ctx, 31, 0x354A10u);
    ctx->pc = 0x128EF8u;
    if (runtime->hasFunction(0x128EF8u)) {
        auto targetFn = runtime->lookupFunction(0x128EF8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x354A10u; }
        if (ctx->pc != 0x354A10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00128EF8_0x128ef8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x354A10u; }
        if (ctx->pc != 0x354A10u) { return; }
    }
    ctx->pc = 0x354A10u;
label_354a10:
    // 0x354a10: 0xc048bb2  jal         func_122EC8
    ctx->pc = 0x354A10u;
    SET_GPR_U32(ctx, 31, 0x354A18u);
    ctx->pc = 0x354A14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x354A10u;
            // 0x354a14: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x122EC8u;
    if (runtime->hasFunction(0x122EC8u)) {
        auto targetFn = runtime->lookupFunction(0x122EC8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x354A18u; }
        if (ctx->pc != 0x354A18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00122EC8_0x122ec8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x354A18u; }
        if (ctx->pc != 0x354A18u) { return; }
    }
    ctx->pc = 0x354A18u;
label_354a18:
    // 0x354a18: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x354a18u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x354a1c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x354a1cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x354a20: 0xc048a76  jal         func_1229D8
    ctx->pc = 0x354A20u;
    SET_GPR_U32(ctx, 31, 0x354A28u);
    ctx->pc = 0x354A24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x354A20u;
            // 0x354a24: 0x3203c  dsll32      $a0, $v1, 0 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1229D8u;
    if (runtime->hasFunction(0x1229D8u)) {
        auto targetFn = runtime->lookupFunction(0x1229D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x354A28u; }
        if (ctx->pc != 0x354A28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001229D8_0x1229d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x354A28u; }
        if (ctx->pc != 0x354A28u) { return; }
    }
    ctx->pc = 0x354A28u;
label_354a28:
    // 0x354a28: 0x3c0341e0  lui         $v1, 0x41E0
    ctx->pc = 0x354a28u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16864 << 16));
    // 0x354a2c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x354a2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x354a30: 0xc048b0a  jal         func_122C28
    ctx->pc = 0x354A30u;
    SET_GPR_U32(ctx, 31, 0x354A38u);
    ctx->pc = 0x354A34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x354A30u;
            // 0x354a34: 0x3283c  dsll32      $a1, $v1, 0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) << (32 + 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x122C28u;
    if (runtime->hasFunction(0x122C28u)) {
        auto targetFn = runtime->lookupFunction(0x122C28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x354A38u; }
        if (ctx->pc != 0x354A38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00122C28_0x122c28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x354A38u; }
        if (ctx->pc != 0x354A38u) { return; }
    }
    ctx->pc = 0x354A38u;
label_354a38:
    // 0x354a38: 0xc048bde  jal         func_122F78
    ctx->pc = 0x354A38u;
    SET_GPR_U32(ctx, 31, 0x354A40u);
    ctx->pc = 0x354A3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x354A38u;
            // 0x354a3c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x122F78u;
    if (runtime->hasFunction(0x122F78u)) {
        auto targetFn = runtime->lookupFunction(0x122F78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x354A40u; }
        if (ctx->pc != 0x354A40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00122F78_0x122f78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x354A40u; }
        if (ctx->pc != 0x354A40u) { return; }
    }
    ctx->pc = 0x354A40u;
label_354a40:
    // 0x354a40: 0x22880  sll         $a1, $v0, 2
    ctx->pc = 0x354a40u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x354a44: 0x3c03003e  lui         $v1, 0x3E
    ctx->pc = 0x354a44u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)62 << 16));
    // 0x354a48: 0x3c02003e  lui         $v0, 0x3E
    ctx->pc = 0x354a48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)62 << 16));
    // 0x354a4c: 0x24639950  addiu       $v1, $v1, -0x66B0
    ctx->pc = 0x354a4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294941008));
    // 0x354a50: 0x24429952  addiu       $v0, $v0, -0x66AE
    ctx->pc = 0x354a50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941010));
    // 0x354a54: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x354a54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x354a58: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x354a58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x354a5c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x354a5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x354a60: 0x94650000  lhu         $a1, 0x0($v1)
    ctx->pc = 0x354a60u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x354a64: 0x94460000  lhu         $a2, 0x0($v0)
    ctx->pc = 0x354a64u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x354a68: 0xc05a888  jal         func_16A220
    ctx->pc = 0x354A68u;
    SET_GPR_U32(ctx, 31, 0x354A70u);
    ctx->pc = 0x354A6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x354A68u;
            // 0x354a6c: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16A220u;
    if (runtime->hasFunction(0x16A220u)) {
        auto targetFn = runtime->lookupFunction(0x16A220u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x354A70u; }
        if (ctx->pc != 0x354A70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016A220_0x16a220(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x354A70u; }
        if (ctx->pc != 0x354A70u) { return; }
    }
    ctx->pc = 0x354A70u;
label_354a70:
    // 0x354a70: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x354a70u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_354a74:
    // 0x354a74: 0x10000045  b           . + 4 + (0x45 << 2)
    ctx->pc = 0x354A74u;
    {
        const bool branch_taken_0x354a74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x354a74) {
            ctx->pc = 0x354B8Cu;
            goto label_354b8c;
        }
    }
    ctx->pc = 0x354A7Cu;
label_354a7c:
    // 0x354a7c: 0x8e220494  lw          $v0, 0x494($s1)
    ctx->pc = 0x354a7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1172)));
    // 0x354a80: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x354a80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x354a84: 0x50400041  beql        $v0, $zero, . + 4 + (0x41 << 2)
    ctx->pc = 0x354A84u;
    {
        const bool branch_taken_0x354a84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x354a84) {
            ctx->pc = 0x354A88u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x354A84u;
            // 0x354a88: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x354B8Cu;
            goto label_354b8c;
        }
    }
    ctx->pc = 0x354A8Cu;
    // 0x354a8c: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x354a8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x354a90: 0x8c42da70  lw          $v0, -0x2590($v0)
    ctx->pc = 0x354a90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294957680)));
    // 0x354a94: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x354a94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x354a98: 0x50400015  beql        $v0, $zero, . + 4 + (0x15 << 2)
    ctx->pc = 0x354A98u;
    {
        const bool branch_taken_0x354a98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x354a98) {
            ctx->pc = 0x354A9Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x354A98u;
            // 0x354a9c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x354AF0u;
            goto label_354af0;
        }
    }
    ctx->pc = 0x354AA0u;
    // 0x354aa0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x354aa0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x354aa4: 0xc062a7c  jal         func_18A9F0
    ctx->pc = 0x354AA4u;
    SET_GPR_U32(ctx, 31, 0x354AACu);
    ctx->pc = 0x354AA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x354AA4u;
            // 0x354aa8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18A9F0u;
    if (runtime->hasFunction(0x18A9F0u)) {
        auto targetFn = runtime->lookupFunction(0x18A9F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x354AACu; }
        if (ctx->pc != 0x354AACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0018A9F0_0x18a9f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x354AACu; }
        if (ctx->pc != 0x354AACu) { return; }
    }
    ctx->pc = 0x354AACu;
label_354aac:
    // 0x354aac: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x354aacu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x354ab0: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x354ab0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x354ab4: 0x54620003  bnel        $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x354AB4u;
    {
        const bool branch_taken_0x354ab4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x354ab4) {
            ctx->pc = 0x354AB8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x354AB4u;
            // 0x354ab8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x354AC4u;
            goto label_354ac4;
        }
    }
    ctx->pc = 0x354ABCu;
    // 0x354abc: 0x10000033  b           . + 4 + (0x33 << 2)
    ctx->pc = 0x354ABCu;
    {
        const bool branch_taken_0x354abc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x354AC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x354ABCu;
            // 0x354ac0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x354abc) {
            ctx->pc = 0x354B8Cu;
            goto label_354b8c;
        }
    }
    ctx->pc = 0x354AC4u;
label_354ac4:
    // 0x354ac4: 0xc04f9fc  jal         func_13E7F0
    ctx->pc = 0x354AC4u;
    SET_GPR_U32(ctx, 31, 0x354ACCu);
    ctx->pc = 0x354AC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x354AC4u;
            // 0x354ac8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E7F0u;
    if (runtime->hasFunction(0x13E7F0u)) {
        auto targetFn = runtime->lookupFunction(0x13E7F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x354ACCu; }
        if (ctx->pc != 0x354ACCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013E7F0_0x13e7f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x354ACCu; }
        if (ctx->pc != 0x354ACCu) { return; }
    }
    ctx->pc = 0x354ACCu;
label_354acc:
    // 0x354acc: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x354ACCu;
    {
        const bool branch_taken_0x354acc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x354acc) {
            ctx->pc = 0x354B34u;
            goto label_354b34;
        }
    }
    ctx->pc = 0x354AD4u;
    // 0x354ad4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x354ad4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x354ad8: 0x24040009  addiu       $a0, $zero, 0x9
    ctx->pc = 0x354ad8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x354adc: 0xae220214  sw          $v0, 0x214($s1)
    ctx->pc = 0x354adcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 532), GPR_U32(ctx, 2));
    // 0x354ae0: 0xc0501d0  jal         func_140740
    ctx->pc = 0x354AE0u;
    SET_GPR_U32(ctx, 31, 0x354AE8u);
    ctx->pc = 0x354AE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x354AE0u;
            // 0x354ae4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x140740u;
    if (runtime->hasFunction(0x140740u)) {
        auto targetFn = runtime->lookupFunction(0x140740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x354AE8u; }
        if (ctx->pc != 0x354AE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00140740_0x140740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x354AE8u; }
        if (ctx->pc != 0x354AE8u) { return; }
    }
    ctx->pc = 0x354AE8u;
label_354ae8:
    // 0x354ae8: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x354AE8u;
    {
        const bool branch_taken_0x354ae8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x354ae8) {
            ctx->pc = 0x354B34u;
            goto label_354b34;
        }
    }
    ctx->pc = 0x354AF0u;
label_354af0:
    // 0x354af0: 0xc062a7c  jal         func_18A9F0
    ctx->pc = 0x354AF0u;
    SET_GPR_U32(ctx, 31, 0x354AF8u);
    ctx->pc = 0x354AF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x354AF0u;
            // 0x354af4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18A9F0u;
    if (runtime->hasFunction(0x18A9F0u)) {
        auto targetFn = runtime->lookupFunction(0x18A9F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x354AF8u; }
        if (ctx->pc != 0x354AF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0018A9F0_0x18a9f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x354AF8u; }
        if (ctx->pc != 0x354AF8u) { return; }
    }
    ctx->pc = 0x354AF8u;
label_354af8:
    // 0x354af8: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x354af8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x354afc: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x354afcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x354b00: 0x54620003  bnel        $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x354B00u;
    {
        const bool branch_taken_0x354b00 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x354b00) {
            ctx->pc = 0x354B04u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x354B00u;
            // 0x354b04: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x354B10u;
            goto label_354b10;
        }
    }
    ctx->pc = 0x354B08u;
    // 0x354b08: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x354B08u;
    {
        const bool branch_taken_0x354b08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x354B0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x354B08u;
            // 0x354b0c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x354b08) {
            ctx->pc = 0x354B8Cu;
            goto label_354b8c;
        }
    }
    ctx->pc = 0x354B10u;
label_354b10:
    // 0x354b10: 0xc04f9fc  jal         func_13E7F0
    ctx->pc = 0x354B10u;
    SET_GPR_U32(ctx, 31, 0x354B18u);
    ctx->pc = 0x354B14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x354B10u;
            // 0x354b14: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E7F0u;
    if (runtime->hasFunction(0x13E7F0u)) {
        auto targetFn = runtime->lookupFunction(0x13E7F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x354B18u; }
        if (ctx->pc != 0x354B18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013E7F0_0x13e7f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x354B18u; }
        if (ctx->pc != 0x354B18u) { return; }
    }
    ctx->pc = 0x354B18u;
label_354b18:
    // 0x354b18: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x354B18u;
    {
        const bool branch_taken_0x354b18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x354b18) {
            ctx->pc = 0x354B34u;
            goto label_354b34;
        }
    }
    ctx->pc = 0x354B20u;
    // 0x354b20: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x354b20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x354b24: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x354b24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x354b28: 0xae220214  sw          $v0, 0x214($s1)
    ctx->pc = 0x354b28u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 532), GPR_U32(ctx, 2));
    // 0x354b2c: 0xc0501d0  jal         func_140740
    ctx->pc = 0x354B2Cu;
    SET_GPR_U32(ctx, 31, 0x354B34u);
    ctx->pc = 0x354B30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x354B2Cu;
            // 0x354b30: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x140740u;
    if (runtime->hasFunction(0x140740u)) {
        auto targetFn = runtime->lookupFunction(0x140740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x354B34u; }
        if (ctx->pc != 0x354B34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00140740_0x140740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x354B34u; }
        if (ctx->pc != 0x354B34u) { return; }
    }
    ctx->pc = 0x354B34u;
label_354b34:
    // 0x354b34: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x354b34u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x354b38: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x354B38u;
    {
        const bool branch_taken_0x354b38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x354b38) {
            ctx->pc = 0x354B8Cu;
            goto label_354b8c;
        }
    }
    ctx->pc = 0x354B40u;
label_354b40:
    // 0x354b40: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x354b40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
    // 0x354b44: 0x8c42bef4  lw          $v0, -0x410C($v0)
    ctx->pc = 0x354b44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950644)));
    // 0x354b48: 0x1840000d  blez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x354B48u;
    {
        const bool branch_taken_0x354b48 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x354b48) {
            ctx->pc = 0x354B80u;
            goto label_354b80;
        }
    }
    ctx->pc = 0x354B50u;
    // 0x354b50: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x354b50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x354b54: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x354b54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x354b58: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x354b58u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x354b5c: 0xc05a888  jal         func_16A220
    ctx->pc = 0x354B5Cu;
    SET_GPR_U32(ctx, 31, 0x354B64u);
    ctx->pc = 0x354B60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x354B5Cu;
            // 0x354b60: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16A220u;
    if (runtime->hasFunction(0x16A220u)) {
        auto targetFn = runtime->lookupFunction(0x16A220u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x354B64u; }
        if (ctx->pc != 0x354B64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016A220_0x16a220(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x354B64u; }
        if (ctx->pc != 0x354B64u) { return; }
    }
    ctx->pc = 0x354B64u;
label_354b64:
    // 0x354b64: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x354b64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
    // 0x354b68: 0x3c0301e0  lui         $v1, 0x1E0
    ctx->pc = 0x354b68u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)480 << 16));
    // 0x354b6c: 0x8c44bef4  lw          $a0, -0x410C($v0)
    ctx->pc = 0x354b6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950644)));
    // 0x354b70: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x354b70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x354b74: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x354b74u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x354b78: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x354B78u;
    {
        const bool branch_taken_0x354b78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x354B7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x354B78u;
            // 0x354b7c: 0xac64bef4  sw          $a0, -0x410C($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294950644), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x354b78) {
            ctx->pc = 0x354B8Cu;
            goto label_354b8c;
        }
    }
    ctx->pc = 0x354B80u;
label_354b80:
    // 0x354b80: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x354b80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
    // 0x354b84: 0xac40bee8  sw          $zero, -0x4118($v0)
    ctx->pc = 0x354b84u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294950632), GPR_U32(ctx, 0));
label_354b88:
    // 0x354b88: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x354b88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_354b8c:
    // 0x354b8c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x354b8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x354b90: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x354b90u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x354b94: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x354b94u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x354b98: 0x3e00008  jr          $ra
    ctx->pc = 0x354B98u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x354B9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x354B98u;
            // 0x354b9c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x354BA0u;
label_354ba0:
    // 0x354ba0: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x354ba0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
    // 0x354ba4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x354ba4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x354ba8: 0x9042bed2  lbu         $v0, -0x412E($v0)
    ctx->pc = 0x354ba8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294950610)));
    // 0x354bac: 0x1043000c  beq         $v0, $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x354BACu;
    {
        const bool branch_taken_0x354bac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x354bac) {
            ctx->pc = 0x354BE0u;
            goto label_354be0;
        }
    }
    ctx->pc = 0x354BB4u;
    // 0x354bb4: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x354BB4u;
    {
        const bool branch_taken_0x354bb4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x354bb4) {
            ctx->pc = 0x354BB8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x354BB4u;
            // 0x354bb8: 0x24440001  addiu       $a0, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x354BC4u;
            goto label_354bc4;
        }
    }
    ctx->pc = 0x354BBCu;
    // 0x354bbc: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x354BBCu;
    {
        const bool branch_taken_0x354bbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x354bbc) {
            ctx->pc = 0x354BE0u;
            goto label_354be0;
        }
    }
    ctx->pc = 0x354BC4u;
label_354bc4:
    // 0x354bc4: 0x240500f8  addiu       $a1, $zero, 0xF8
    ctx->pc = 0x354bc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 248));
    // 0x354bc8: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x354bc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
    // 0x354bcc: 0xa043bf00  sb          $v1, -0x4100($v0)
    ctx->pc = 0x354bccu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294950656), (uint8_t)GPR_U32(ctx, 3));
    // 0x354bd0: 0x3c0301e0  lui         $v1, 0x1E0
    ctx->pc = 0x354bd0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)480 << 16));
    // 0x354bd4: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x354bd4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
    // 0x354bd8: 0xa065bf14  sb          $a1, -0x40EC($v1)
    ctx->pc = 0x354bd8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4294950676), (uint8_t)GPR_U32(ctx, 5));
    // 0x354bdc: 0xa044bed2  sb          $a0, -0x412E($v0)
    ctx->pc = 0x354bdcu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294950610), (uint8_t)GPR_U32(ctx, 4));
label_354be0:
    // 0x354be0: 0x80d5058  j           func_354160
    ctx->pc = 0x354BE0u;
    ctx->pc = 0x354160u;
    if (runtime->hasFunction(0x354160u)) {
        auto targetFn = runtime->lookupFunction(0x354160u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_00354160_0x354160(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x354BE8u;
    // 0x354be8: 0x0  nop
    ctx->pc = 0x354be8u;
    // NOP
    // 0x354bec: 0x0  nop
    ctx->pc = 0x354becu;
    // NOP
label_354bf0:
    // 0x354bf0: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x354bf0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
    // 0x354bf4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x354bf4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x354bf8: 0x9042bed2  lbu         $v0, -0x412E($v0)
    ctx->pc = 0x354bf8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294950610)));
    // 0x354bfc: 0x1043000c  beq         $v0, $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x354BFCu;
    {
        const bool branch_taken_0x354bfc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x354bfc) {
            ctx->pc = 0x354C30u;
            goto label_354c30;
        }
    }
    ctx->pc = 0x354C04u;
    // 0x354c04: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x354C04u;
    {
        const bool branch_taken_0x354c04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x354c04) {
            ctx->pc = 0x354C08u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x354C04u;
            // 0x354c08: 0x24440001  addiu       $a0, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x354C14u;
            goto label_354c14;
        }
    }
    ctx->pc = 0x354C0Cu;
    // 0x354c0c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x354C0Cu;
    {
        const bool branch_taken_0x354c0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x354c0c) {
            ctx->pc = 0x354C30u;
            goto label_354c30;
        }
    }
    ctx->pc = 0x354C14u;
label_354c14:
    // 0x354c14: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x354c14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x354c18: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x354c18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
    // 0x354c1c: 0xa043bf00  sb          $v1, -0x4100($v0)
    ctx->pc = 0x354c1cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294950656), (uint8_t)GPR_U32(ctx, 3));
    // 0x354c20: 0x3c0301e0  lui         $v1, 0x1E0
    ctx->pc = 0x354c20u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)480 << 16));
    // 0x354c24: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x354c24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
    // 0x354c28: 0xa065bf14  sb          $a1, -0x40EC($v1)
    ctx->pc = 0x354c28u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4294950676), (uint8_t)GPR_U32(ctx, 5));
    // 0x354c2c: 0xa044bed2  sb          $a0, -0x412E($v0)
    ctx->pc = 0x354c2cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294950610), (uint8_t)GPR_U32(ctx, 4));
label_354c30:
    // 0x354c30: 0x80d5058  j           func_354160
    ctx->pc = 0x354C30u;
    ctx->pc = 0x354160u;
    if (runtime->hasFunction(0x354160u)) {
        auto targetFn = runtime->lookupFunction(0x354160u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_00354160_0x354160(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x354C38u;
    // 0x354c38: 0x0  nop
    ctx->pc = 0x354c38u;
    // NOP
    // 0x354c3c: 0x0  nop
    ctx->pc = 0x354c3cu;
    // NOP
label_354c40:
    // 0x354c40: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x354c40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
    // 0x354c44: 0x9043bed2  lbu         $v1, -0x412E($v0)
    ctx->pc = 0x354c44u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294950610)));
    // 0x354c48: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x354c48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x354c4c: 0x10620014  beq         $v1, $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x354C4Cu;
    {
        const bool branch_taken_0x354c4c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x354c4c) {
            ctx->pc = 0x354CA0u;
            goto label_354ca0;
        }
    }
    ctx->pc = 0x354C54u;
    // 0x354c54: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x354C54u;
    {
        const bool branch_taken_0x354c54 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x354c54) {
            ctx->pc = 0x354C64u;
            goto label_354c64;
        }
    }
    ctx->pc = 0x354C5Cu;
    // 0x354c5c: 0x10000032  b           . + 4 + (0x32 << 2)
    ctx->pc = 0x354C5Cu;
    {
        const bool branch_taken_0x354c5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x354C60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x354C5Cu;
            // 0x354c60: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x354c5c) {
            ctx->pc = 0x354D28u;
            goto label_354d28;
        }
    }
    ctx->pc = 0x354C64u;
label_354c64:
    // 0x354c64: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x354c64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
    // 0x354c68: 0x24650001  addiu       $a1, $v1, 0x1
    ctx->pc = 0x354c68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x354c6c: 0x8c47bee4  lw          $a3, -0x411C($v0)
    ctx->pc = 0x354c6cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950628)));
    // 0x354c70: 0x3c030008  lui         $v1, 0x8
    ctx->pc = 0x354c70u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8 << 16));
    // 0x354c74: 0x3c0401e0  lui         $a0, 0x1E0
    ctx->pc = 0x354c74u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)480 << 16));
    // 0x354c78: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x354c78u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x354c7c: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x354c7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
    // 0x354c80: 0xac40bef4  sw          $zero, -0x410C($v0)
    ctx->pc = 0x354c80u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294950644), GPR_U32(ctx, 0));
    // 0x354c84: 0xe31025  or          $v0, $a3, $v1
    ctx->pc = 0x354c84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) | GPR_U64(ctx, 3));
    // 0x354c88: 0xac82bee4  sw          $v0, -0x411C($a0)
    ctx->pc = 0x354c88u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4294950628), GPR_U32(ctx, 2));
    // 0x354c8c: 0x3c0301e0  lui         $v1, 0x1E0
    ctx->pc = 0x354c8cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)480 << 16));
    // 0x354c90: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x354c90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
    // 0x354c94: 0xa066bed9  sb          $a2, -0x4127($v1)
    ctx->pc = 0x354c94u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4294950617), (uint8_t)GPR_U32(ctx, 6));
    // 0x354c98: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x354C98u;
    {
        const bool branch_taken_0x354c98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x354C9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x354C98u;
            // 0x354c9c: 0xa045bed2  sb          $a1, -0x412E($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 4294950610), (uint8_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x354c98) {
            ctx->pc = 0x354D24u;
            goto label_354d24;
        }
    }
    ctx->pc = 0x354CA0u;
label_354ca0:
    // 0x354ca0: 0x3c0301e0  lui         $v1, 0x1E0
    ctx->pc = 0x354ca0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)480 << 16));
    // 0x354ca4: 0x3c040400  lui         $a0, 0x400
    ctx->pc = 0x354ca4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1024 << 16));
    // 0x354ca8: 0x8c66bedc  lw          $a2, -0x4124($v1)
    ctx->pc = 0x354ca8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294950620)));
    // 0x354cac: 0xc41824  and         $v1, $a2, $a0
    ctx->pc = 0x354cacu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & GPR_U64(ctx, 4));
    // 0x354cb0: 0x10600010  beqz        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x354CB0u;
    {
        const bool branch_taken_0x354cb0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x354cb0) {
            ctx->pc = 0x354CF4u;
            goto label_354cf4;
        }
    }
    ctx->pc = 0x354CB8u;
    // 0x354cb8: 0x3c03fbff  lui         $v1, 0xFBFF
    ctx->pc = 0x354cb8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64511 << 16));
    // 0x354cbc: 0x3c0401e0  lui         $a0, 0x1E0
    ctx->pc = 0x354cbcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)480 << 16));
    // 0x354cc0: 0x3465ffff  ori         $a1, $v1, 0xFFFF
    ctx->pc = 0x354cc0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x354cc4: 0xc53024  and         $a2, $a2, $a1
    ctx->pc = 0x354cc4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 5));
    // 0x354cc8: 0x3c0301e0  lui         $v1, 0x1E0
    ctx->pc = 0x354cc8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)480 << 16));
    // 0x354ccc: 0x8c65bef4  lw          $a1, -0x410C($v1)
    ctx->pc = 0x354cccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294950644)));
    // 0x354cd0: 0xac86bedc  sw          $a2, -0x4124($a0)
    ctx->pc = 0x354cd0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4294950620), GPR_U32(ctx, 6));
    // 0x354cd4: 0x3c0301e0  lui         $v1, 0x1E0
    ctx->pc = 0x354cd4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)480 << 16));
    // 0x354cd8: 0x24a40001  addiu       $a0, $a1, 0x1
    ctx->pc = 0x354cd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x354cdc: 0xac64bef4  sw          $a0, -0x410C($v1)
    ctx->pc = 0x354cdcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294950644), GPR_U32(ctx, 4));
    // 0x354ce0: 0x2883000a  slti        $v1, $a0, 0xA
    ctx->pc = 0x354ce0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x354ce4: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x354CE4u;
    {
        const bool branch_taken_0x354ce4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x354ce4) {
            ctx->pc = 0x354CF4u;
            goto label_354cf4;
        }
    }
    ctx->pc = 0x354CECu;
    // 0x354cec: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x354CECu;
    {
        const bool branch_taken_0x354cec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x354cec) {
            ctx->pc = 0x354D28u;
            goto label_354d28;
        }
    }
    ctx->pc = 0x354CF4u;
label_354cf4:
    // 0x354cf4: 0x3c0201d5  lui         $v0, 0x1D5
    ctx->pc = 0x354cf4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)469 << 16));
    // 0x354cf8: 0x8c43d918  lw          $v1, -0x26E8($v0)
    ctx->pc = 0x354cf8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294957336)));
    // 0x354cfc: 0x30620080  andi        $v0, $v1, 0x80
    ctx->pc = 0x354cfcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)128);
    // 0x354d00: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x354D00u;
    {
        const bool branch_taken_0x354d00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x354d00) {
            ctx->pc = 0x354D04u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x354D00u;
            // 0x354d04: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x354D28u;
            goto label_354d28;
        }
    }
    ctx->pc = 0x354D08u;
    // 0x354d08: 0x3c020004  lui         $v0, 0x4
    ctx->pc = 0x354d08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4 << 16));
    // 0x354d0c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x354d0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x354d10: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x354D10u;
    {
        const bool branch_taken_0x354d10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x354d10) {
            ctx->pc = 0x354D24u;
            goto label_354d24;
        }
    }
    ctx->pc = 0x354D18u;
    // 0x354d18: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x354d18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x354d1c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x354D1Cu;
    {
        const bool branch_taken_0x354d1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x354d1c) {
            ctx->pc = 0x354D28u;
            goto label_354d28;
        }
    }
    ctx->pc = 0x354D24u;
label_354d24:
    // 0x354d24: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x354d24u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_354d28:
    // 0x354d28: 0x3e00008  jr          $ra
    ctx->pc = 0x354D28u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x354D30u;
label_354d30:
    // 0x354d30: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x354d30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
    // 0x354d34: 0x9043bed2  lbu         $v1, -0x412E($v0)
    ctx->pc = 0x354d34u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294950610)));
    // 0x354d38: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x354d38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x354d3c: 0x10620018  beq         $v1, $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x354D3Cu;
    {
        const bool branch_taken_0x354d3c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x354d3c) {
            ctx->pc = 0x354DA0u;
            goto label_354da0;
        }
    }
    ctx->pc = 0x354D44u;
    // 0x354d44: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x354D44u;
    {
        const bool branch_taken_0x354d44 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x354d44) {
            ctx->pc = 0x354D54u;
            goto label_354d54;
        }
    }
    ctx->pc = 0x354D4Cu;
    // 0x354d4c: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x354D4Cu;
    {
        const bool branch_taken_0x354d4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x354d4c) {
            ctx->pc = 0x354DECu;
            goto label_354dec;
        }
    }
    ctx->pc = 0x354D54u;
label_354d54:
    // 0x354d54: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x354d54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
    // 0x354d58: 0x24640001  addiu       $a0, $v1, 0x1
    ctx->pc = 0x354d58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x354d5c: 0x8c47bee4  lw          $a3, -0x411C($v0)
    ctx->pc = 0x354d5cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950628)));
    // 0x354d60: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x354d60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x354d64: 0x3c0301e0  lui         $v1, 0x1E0
    ctx->pc = 0x354d64u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)480 << 16));
    // 0x354d68: 0x3c060008  lui         $a2, 0x8
    ctx->pc = 0x354d68u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8 << 16));
    // 0x354d6c: 0xac65bee8  sw          $a1, -0x4118($v1)
    ctx->pc = 0x354d6cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294950632), GPR_U32(ctx, 5));
    // 0x354d70: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x354d70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x354d74: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x354d74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
    // 0x354d78: 0xa045bed9  sb          $a1, -0x4127($v0)
    ctx->pc = 0x354d78u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294950617), (uint8_t)GPR_U32(ctx, 5));
    // 0x354d7c: 0x3c0301e0  lui         $v1, 0x1E0
    ctx->pc = 0x354d7cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)480 << 16));
    // 0x354d80: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x354d80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
    // 0x354d84: 0xac40bef4  sw          $zero, -0x410C($v0)
    ctx->pc = 0x354d84u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294950644), GPR_U32(ctx, 0));
    // 0x354d88: 0x34e20040  ori         $v0, $a3, 0x40
    ctx->pc = 0x354d88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)64);
    // 0x354d8c: 0x462825  or          $a1, $v0, $a2
    ctx->pc = 0x354d8cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x354d90: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x354d90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
    // 0x354d94: 0xac65bee4  sw          $a1, -0x411C($v1)
    ctx->pc = 0x354d94u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294950628), GPR_U32(ctx, 5));
    // 0x354d98: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x354D98u;
    {
        const bool branch_taken_0x354d98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x354D9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x354D98u;
            // 0x354d9c: 0xa044bed2  sb          $a0, -0x412E($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 4294950610), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x354d98) {
            ctx->pc = 0x354DECu;
            goto label_354dec;
        }
    }
    ctx->pc = 0x354DA0u;
label_354da0:
    // 0x354da0: 0x3c0301e0  lui         $v1, 0x1E0
    ctx->pc = 0x354da0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)480 << 16));
    // 0x354da4: 0x8c65bedc  lw          $a1, -0x4124($v1)
    ctx->pc = 0x354da4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294950620)));
    // 0x354da8: 0x30a30001  andi        $v1, $a1, 0x1
    ctx->pc = 0x354da8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x354dac: 0x1060000f  beqz        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x354DACu;
    {
        const bool branch_taken_0x354dac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x354dac) {
            ctx->pc = 0x354DECu;
            goto label_354dec;
        }
    }
    ctx->pc = 0x354DB4u;
    // 0x354db4: 0x2404fffe  addiu       $a0, $zero, -0x2
    ctx->pc = 0x354db4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x354db8: 0x3c0301e0  lui         $v1, 0x1E0
    ctx->pc = 0x354db8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)480 << 16));
    // 0x354dbc: 0xa42824  and         $a1, $a1, $a0
    ctx->pc = 0x354dbcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 4));
    // 0x354dc0: 0x3c0401e0  lui         $a0, 0x1E0
    ctx->pc = 0x354dc0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)480 << 16));
    // 0x354dc4: 0xac65bedc  sw          $a1, -0x4124($v1)
    ctx->pc = 0x354dc4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294950620), GPR_U32(ctx, 5));
    // 0x354dc8: 0x8c84bef4  lw          $a0, -0x410C($a0)
    ctx->pc = 0x354dc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294950644)));
    // 0x354dcc: 0x3c0301e0  lui         $v1, 0x1E0
    ctx->pc = 0x354dccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)480 << 16));
    // 0x354dd0: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x354dd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x354dd4: 0xac64bef4  sw          $a0, -0x410C($v1)
    ctx->pc = 0x354dd4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294950644), GPR_U32(ctx, 4));
    // 0x354dd8: 0x28830005  slti        $v1, $a0, 0x5
    ctx->pc = 0x354dd8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x354ddc: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x354DDCu;
    {
        const bool branch_taken_0x354ddc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x354ddc) {
            ctx->pc = 0x354DECu;
            goto label_354dec;
        }
    }
    ctx->pc = 0x354DE4u;
    // 0x354de4: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x354DE4u;
    {
        const bool branch_taken_0x354de4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x354de4) {
            ctx->pc = 0x354E14u;
            goto label_354e14;
        }
    }
    ctx->pc = 0x354DECu;
label_354dec:
    // 0x354dec: 0x3c0201d5  lui         $v0, 0x1D5
    ctx->pc = 0x354decu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)469 << 16));
    // 0x354df0: 0x8c43d918  lw          $v1, -0x26E8($v0)
    ctx->pc = 0x354df0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294957336)));
    // 0x354df4: 0x30620080  andi        $v0, $v1, 0x80
    ctx->pc = 0x354df4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)128);
    // 0x354df8: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x354DF8u;
    {
        const bool branch_taken_0x354df8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x354df8) {
            ctx->pc = 0x354DFCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x354DF8u;
            // 0x354dfc: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x354E14u;
            goto label_354e14;
        }
    }
    ctx->pc = 0x354E00u;
    // 0x354e00: 0x3c020004  lui         $v0, 0x4
    ctx->pc = 0x354e00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4 << 16));
    // 0x354e04: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x354e04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x354e08: 0x50400002  beql        $v0, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x354E08u;
    {
        const bool branch_taken_0x354e08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x354e08) {
            ctx->pc = 0x354E0Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x354E08u;
            // 0x354e0c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x354E14u;
            goto label_354e14;
        }
    }
    ctx->pc = 0x354E10u;
    // 0x354e10: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x354e10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_354e14:
    // 0x354e14: 0x3e00008  jr          $ra
    ctx->pc = 0x354E14u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x354E1Cu;
    // 0x354e1c: 0x0  nop
    ctx->pc = 0x354e1cu;
    // NOP
label_354e20:
    // 0x354e20: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x354e20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x354e24: 0x3c06009c  lui         $a2, 0x9C
    ctx->pc = 0x354e24u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)156 << 16));
    // 0x354e28: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x354e28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x354e2c: 0x3c04009c  lui         $a0, 0x9C
    ctx->pc = 0x354e2cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)156 << 16));
    // 0x354e30: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x354e30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x354e34: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x354e34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
    // 0x354e38: 0x90509720  lbu         $s0, -0x68E0($v0)
    ctx->pc = 0x354e38u;
    SET_GPR_U32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294940448)));
    // 0x354e3c: 0x24c6db8c  addiu       $a2, $a2, -0x2474
    ctx->pc = 0x354e3cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294957964));
    // 0x354e40: 0x240700e0  addiu       $a3, $zero, 0xE0
    ctx->pc = 0x354e40u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 224));
    // 0x354e44: 0x2484db88  addiu       $a0, $a0, -0x2478
    ctx->pc = 0x354e44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294957960));
    // 0x354e48: 0x24050230  addiu       $a1, $zero, 0x230
    ctx->pc = 0x354e48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 560));
    // 0x354e4c: 0x3c0201d5  lui         $v0, 0x1D5
    ctx->pc = 0x354e4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)469 << 16));
    // 0x354e50: 0x8c43d918  lw          $v1, -0x26E8($v0)
    ctx->pc = 0x354e50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294957336)));
    // 0x354e54: 0x1010c0  sll         $v0, $s0, 3
    ctx->pc = 0x354e54u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x354e58: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x354e58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x354e5c: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x354e5cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x354e60: 0x504021  addu        $t0, $v0, $s0
    ctx->pc = 0x354e60u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x354e64: 0x840c0  sll         $t0, $t0, 3
    ctx->pc = 0x354e64u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
    // 0x354e68: 0x30620080  andi        $v0, $v1, 0x80
    ctx->pc = 0x354e68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)128);
    // 0x354e6c: 0xc83021  addu        $a2, $a2, $t0
    ctx->pc = 0x354e6cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
    // 0x354e70: 0x882021  addu        $a0, $a0, $t0
    ctx->pc = 0x354e70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 8)));
    // 0x354e74: 0xacc70000  sw          $a3, 0x0($a2)
    ctx->pc = 0x354e74u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 7));
    // 0x354e78: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x354E78u;
    {
        const bool branch_taken_0x354e78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x354E7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x354E78u;
            // 0x354e7c: 0xac850000  sw          $a1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x354e78) {
            ctx->pc = 0x354EA4u;
            goto label_354ea4;
        }
    }
    ctx->pc = 0x354E80u;
    // 0x354e80: 0xc0c4534  jal         func_3114D0
    ctx->pc = 0x354E80u;
    SET_GPR_U32(ctx, 31, 0x354E88u);
    ctx->pc = 0x3114D0u;
    if (runtime->hasFunction(0x3114D0u)) {
        auto targetFn = runtime->lookupFunction(0x3114D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x354E88u; }
        if (ctx->pc != 0x354E88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003114D0_0x3114d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x354E88u; }
        if (ctx->pc != 0x354E88u) { return; }
    }
    ctx->pc = 0x354E88u;
label_354e88:
    // 0x354e88: 0x5602000c  bnel        $s0, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x354E88u;
    {
        const bool branch_taken_0x354e88 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x354e88) {
            ctx->pc = 0x354E8Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x354E88u;
            // 0x354e8c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x354EBCu;
            goto label_354ebc;
        }
    }
    ctx->pc = 0x354E90u;
    // 0x354e90: 0x24030020  addiu       $v1, $zero, 0x20
    ctx->pc = 0x354e90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x354e94: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x354e94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
    // 0x354e98: 0xa443bf02  sh          $v1, -0x40FE($v0)
    ctx->pc = 0x354e98u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4294950658), (uint16_t)GPR_U32(ctx, 3));
    // 0x354e9c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x354E9Cu;
    {
        const bool branch_taken_0x354e9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x354EA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x354E9Cu;
            // 0x354ea0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x354e9c) {
            ctx->pc = 0x354EBCu;
            goto label_354ebc;
        }
    }
    ctx->pc = 0x354EA4u;
label_354ea4:
    // 0x354ea4: 0x3c020004  lui         $v0, 0x4
    ctx->pc = 0x354ea4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4 << 16));
    // 0x354ea8: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x354ea8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x354eac: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x354EACu;
    {
        const bool branch_taken_0x354eac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x354eac) {
            ctx->pc = 0x354EB0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x354EACu;
            // 0x354eb0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x354EBCu;
            goto label_354ebc;
        }
    }
    ctx->pc = 0x354EB4u;
    // 0x354eb4: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x354EB4u;
    {
        const bool branch_taken_0x354eb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x354EB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x354EB4u;
            // 0x354eb8: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x354eb4) {
            ctx->pc = 0x354EBCu;
            goto label_354ebc;
        }
    }
    ctx->pc = 0x354EBCu;
label_354ebc:
    // 0x354ebc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x354ebcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x354ec0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x354ec0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x354ec4: 0x3e00008  jr          $ra
    ctx->pc = 0x354EC4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x354EC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x354EC4u;
            // 0x354ec8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x354ECCu;
    // 0x354ecc: 0x0  nop
    ctx->pc = 0x354eccu;
    // NOP
label_354ed0:
    // 0x354ed0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x354ed0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x354ed4: 0x3c06009c  lui         $a2, 0x9C
    ctx->pc = 0x354ed4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)156 << 16));
    // 0x354ed8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x354ed8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x354edc: 0x3c04009c  lui         $a0, 0x9C
    ctx->pc = 0x354edcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)156 << 16));
    // 0x354ee0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x354ee0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x354ee4: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x354ee4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
    // 0x354ee8: 0x90509720  lbu         $s0, -0x68E0($v0)
    ctx->pc = 0x354ee8u;
    SET_GPR_U32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294940448)));
    // 0x354eec: 0x24c6db8c  addiu       $a2, $a2, -0x2474
    ctx->pc = 0x354eecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294957964));
    // 0x354ef0: 0x240700e0  addiu       $a3, $zero, 0xE0
    ctx->pc = 0x354ef0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 224));
    // 0x354ef4: 0x2484db88  addiu       $a0, $a0, -0x2478
    ctx->pc = 0x354ef4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294957960));
    // 0x354ef8: 0x24050230  addiu       $a1, $zero, 0x230
    ctx->pc = 0x354ef8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 560));
    // 0x354efc: 0x3c0201d5  lui         $v0, 0x1D5
    ctx->pc = 0x354efcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)469 << 16));
    // 0x354f00: 0x8c43d918  lw          $v1, -0x26E8($v0)
    ctx->pc = 0x354f00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294957336)));
    // 0x354f04: 0x1010c0  sll         $v0, $s0, 3
    ctx->pc = 0x354f04u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x354f08: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x354f08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x354f0c: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x354f0cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x354f10: 0x504021  addu        $t0, $v0, $s0
    ctx->pc = 0x354f10u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x354f14: 0x840c0  sll         $t0, $t0, 3
    ctx->pc = 0x354f14u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
    // 0x354f18: 0x30620080  andi        $v0, $v1, 0x80
    ctx->pc = 0x354f18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)128);
    // 0x354f1c: 0xc83021  addu        $a2, $a2, $t0
    ctx->pc = 0x354f1cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
    // 0x354f20: 0x882021  addu        $a0, $a0, $t0
    ctx->pc = 0x354f20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 8)));
    // 0x354f24: 0xacc70000  sw          $a3, 0x0($a2)
    ctx->pc = 0x354f24u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 7));
    // 0x354f28: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x354F28u;
    {
        const bool branch_taken_0x354f28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x354F2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x354F28u;
            // 0x354f2c: 0xac850000  sw          $a1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x354f28) {
            ctx->pc = 0x354F54u;
            goto label_354f54;
        }
    }
    ctx->pc = 0x354F30u;
    // 0x354f30: 0xc0c4534  jal         func_3114D0
    ctx->pc = 0x354F30u;
    SET_GPR_U32(ctx, 31, 0x354F38u);
    ctx->pc = 0x3114D0u;
    if (runtime->hasFunction(0x3114D0u)) {
        auto targetFn = runtime->lookupFunction(0x3114D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x354F38u; }
        if (ctx->pc != 0x354F38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003114D0_0x3114d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x354F38u; }
        if (ctx->pc != 0x354F38u) { return; }
    }
    ctx->pc = 0x354F38u;
label_354f38:
    // 0x354f38: 0x5602000c  bnel        $s0, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x354F38u;
    {
        const bool branch_taken_0x354f38 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x354f38) {
            ctx->pc = 0x354F3Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x354F38u;
            // 0x354f3c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x354F6Cu;
            goto label_354f6c;
        }
    }
    ctx->pc = 0x354F40u;
    // 0x354f40: 0x24030040  addiu       $v1, $zero, 0x40
    ctx->pc = 0x354f40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x354f44: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x354f44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
    // 0x354f48: 0xa443bf02  sh          $v1, -0x40FE($v0)
    ctx->pc = 0x354f48u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4294950658), (uint16_t)GPR_U32(ctx, 3));
    // 0x354f4c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x354F4Cu;
    {
        const bool branch_taken_0x354f4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x354F50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x354F4Cu;
            // 0x354f50: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x354f4c) {
            ctx->pc = 0x354F6Cu;
            goto label_354f6c;
        }
    }
    ctx->pc = 0x354F54u;
label_354f54:
    // 0x354f54: 0x3c020004  lui         $v0, 0x4
    ctx->pc = 0x354f54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4 << 16));
    // 0x354f58: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x354f58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x354f5c: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x354F5Cu;
    {
        const bool branch_taken_0x354f5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x354f5c) {
            ctx->pc = 0x354F60u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x354F5Cu;
            // 0x354f60: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x354F6Cu;
            goto label_354f6c;
        }
    }
    ctx->pc = 0x354F64u;
    // 0x354f64: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x354F64u;
    {
        const bool branch_taken_0x354f64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x354F68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x354F64u;
            // 0x354f68: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x354f64) {
            ctx->pc = 0x354F6Cu;
            goto label_354f6c;
        }
    }
    ctx->pc = 0x354F6Cu;
label_354f6c:
    // 0x354f6c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x354f6cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x354f70: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x354f70u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x354f74: 0x3e00008  jr          $ra
    ctx->pc = 0x354F74u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x354F78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x354F74u;
            // 0x354f78: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x354F7Cu;
    // 0x354f7c: 0x0  nop
    ctx->pc = 0x354f7cu;
    // NOP
label_354f80:
    // 0x354f80: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x354f80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
    // 0x354f84: 0x9043bed2  lbu         $v1, -0x412E($v0)
    ctx->pc = 0x354f84u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294950610)));
    // 0x354f88: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x354f88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x354f8c: 0x10620013  beq         $v1, $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x354F8Cu;
    {
        const bool branch_taken_0x354f8c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x354f8c) {
            ctx->pc = 0x354FDCu;
            goto label_354fdc;
        }
    }
    ctx->pc = 0x354F94u;
    // 0x354f94: 0x50600003  beql        $v1, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x354F94u;
    {
        const bool branch_taken_0x354f94 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x354f94) {
            ctx->pc = 0x354F98u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x354F94u;
            // 0x354f98: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
            ctx->pc = 0x354FA4u;
            goto label_354fa4;
        }
    }
    ctx->pc = 0x354F9Cu;
    // 0x354f9c: 0x1000003f  b           . + 4 + (0x3F << 2)
    ctx->pc = 0x354F9Cu;
    {
        const bool branch_taken_0x354f9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x354FA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x354F9Cu;
            // 0x354fa0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x354f9c) {
            ctx->pc = 0x35509Cu;
            goto label_35509c;
        }
    }
    ctx->pc = 0x354FA4u;
label_354fa4:
    // 0x354fa4: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x354fa4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
    // 0x354fa8: 0xa045bf15  sb          $a1, -0x40EB($v0)
    ctx->pc = 0x354fa8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294950677), (uint8_t)GPR_U32(ctx, 5));
    // 0x354fac: 0x24640001  addiu       $a0, $v1, 0x1
    ctx->pc = 0x354facu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x354fb0: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x354fb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x354fb4: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x354fb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
    // 0x354fb8: 0xa043bf16  sb          $v1, -0x40EA($v0)
    ctx->pc = 0x354fb8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294950678), (uint8_t)GPR_U32(ctx, 3));
    // 0x354fbc: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x354fbcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x354fc0: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x354fc0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
    // 0x354fc4: 0x3c0301e0  lui         $v1, 0x1E0
    ctx->pc = 0x354fc4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)480 << 16));
    // 0x354fc8: 0xa045bed9  sb          $a1, -0x4127($v0)
    ctx->pc = 0x354fc8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294950617), (uint8_t)GPR_U32(ctx, 5));
    // 0x354fcc: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x354fccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
    // 0x354fd0: 0xac60bef4  sw          $zero, -0x410C($v1)
    ctx->pc = 0x354fd0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294950644), GPR_U32(ctx, 0));
    // 0x354fd4: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x354FD4u;
    {
        const bool branch_taken_0x354fd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x354FD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x354FD4u;
            // 0x354fd8: 0xa044bed2  sb          $a0, -0x412E($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 4294950610), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x354fd4) {
            ctx->pc = 0x355098u;
            goto label_355098;
        }
    }
    ctx->pc = 0x354FDCu;
label_354fdc:
    // 0x354fdc: 0x3c03009f  lui         $v1, 0x9F
    ctx->pc = 0x354fdcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)159 << 16));
    // 0x354fe0: 0x3c07009c  lui         $a3, 0x9C
    ctx->pc = 0x354fe0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)156 << 16));
    // 0x354fe4: 0x90699720  lbu         $t1, -0x68E0($v1)
    ctx->pc = 0x354fe4u;
    SET_GPR_U32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294940448)));
    // 0x354fe8: 0x3c04009c  lui         $a0, 0x9C
    ctx->pc = 0x354fe8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)156 << 16));
    // 0x354fec: 0x24e7db8c  addiu       $a3, $a3, -0x2474
    ctx->pc = 0x354fecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294957964));
    // 0x354ff0: 0x240800e0  addiu       $t0, $zero, 0xE0
    ctx->pc = 0x354ff0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 224));
    // 0x354ff4: 0x2484db88  addiu       $a0, $a0, -0x2478
    ctx->pc = 0x354ff4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294957960));
    // 0x354ff8: 0x24060230  addiu       $a2, $zero, 0x230
    ctx->pc = 0x354ff8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 560));
    // 0x354ffc: 0x3c0301e0  lui         $v1, 0x1E0
    ctx->pc = 0x354ffcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)480 << 16));
    // 0x355000: 0x8c65bedc  lw          $a1, -0x4124($v1)
    ctx->pc = 0x355000u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294950620)));
    // 0x355004: 0x918c0  sll         $v1, $t1, 3
    ctx->pc = 0x355004u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 9), 3));
    // 0x355008: 0x691821  addu        $v1, $v1, $t1
    ctx->pc = 0x355008u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x35500c: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x35500cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x355010: 0x694821  addu        $t1, $v1, $t1
    ctx->pc = 0x355010u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x355014: 0x948c0  sll         $t1, $t1, 3
    ctx->pc = 0x355014u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 3));
    // 0x355018: 0x30a30008  andi        $v1, $a1, 0x8
    ctx->pc = 0x355018u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)8);
    // 0x35501c: 0xe93821  addu        $a3, $a3, $t1
    ctx->pc = 0x35501cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 9)));
    // 0x355020: 0x892021  addu        $a0, $a0, $t1
    ctx->pc = 0x355020u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 9)));
    // 0x355024: 0xace80000  sw          $t0, 0x0($a3)
    ctx->pc = 0x355024u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 8));
    // 0x355028: 0x1060000f  beqz        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x355028u;
    {
        const bool branch_taken_0x355028 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x35502Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x355028u;
            // 0x35502c: 0xac860000  sw          $a2, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x355028) {
            ctx->pc = 0x355068u;
            goto label_355068;
        }
    }
    ctx->pc = 0x355030u;
    // 0x355030: 0x2404fff7  addiu       $a0, $zero, -0x9
    ctx->pc = 0x355030u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967287));
    // 0x355034: 0x3c0301e0  lui         $v1, 0x1E0
    ctx->pc = 0x355034u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)480 << 16));
    // 0x355038: 0xa42824  and         $a1, $a1, $a0
    ctx->pc = 0x355038u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 4));
    // 0x35503c: 0x3c0401e0  lui         $a0, 0x1E0
    ctx->pc = 0x35503cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)480 << 16));
    // 0x355040: 0xac65bedc  sw          $a1, -0x4124($v1)
    ctx->pc = 0x355040u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294950620), GPR_U32(ctx, 5));
    // 0x355044: 0x8c84bef4  lw          $a0, -0x410C($a0)
    ctx->pc = 0x355044u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294950644)));
    // 0x355048: 0x3c0301e0  lui         $v1, 0x1E0
    ctx->pc = 0x355048u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)480 << 16));
    // 0x35504c: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x35504cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x355050: 0xac64bef4  sw          $a0, -0x410C($v1)
    ctx->pc = 0x355050u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294950644), GPR_U32(ctx, 4));
    // 0x355054: 0x2883000a  slti        $v1, $a0, 0xA
    ctx->pc = 0x355054u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x355058: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x355058u;
    {
        const bool branch_taken_0x355058 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x355058) {
            ctx->pc = 0x355068u;
            goto label_355068;
        }
    }
    ctx->pc = 0x355060u;
    // 0x355060: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x355060u;
    {
        const bool branch_taken_0x355060 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x355060) {
            ctx->pc = 0x35509Cu;
            goto label_35509c;
        }
    }
    ctx->pc = 0x355068u;
label_355068:
    // 0x355068: 0x3c0201d5  lui         $v0, 0x1D5
    ctx->pc = 0x355068u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)469 << 16));
    // 0x35506c: 0x8c43d918  lw          $v1, -0x26E8($v0)
    ctx->pc = 0x35506cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294957336)));
    // 0x355070: 0x30620080  andi        $v0, $v1, 0x80
    ctx->pc = 0x355070u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)128);
    // 0x355074: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x355074u;
    {
        const bool branch_taken_0x355074 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x355074) {
            ctx->pc = 0x355078u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x355074u;
            // 0x355078: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x35509Cu;
            goto label_35509c;
        }
    }
    ctx->pc = 0x35507Cu;
    // 0x35507c: 0x3c020004  lui         $v0, 0x4
    ctx->pc = 0x35507cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4 << 16));
    // 0x355080: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x355080u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x355084: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x355084u;
    {
        const bool branch_taken_0x355084 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x355084) {
            ctx->pc = 0x355098u;
            goto label_355098;
        }
    }
    ctx->pc = 0x35508Cu;
    // 0x35508c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x35508cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x355090: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x355090u;
    {
        const bool branch_taken_0x355090 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x355090) {
            ctx->pc = 0x35509Cu;
            goto label_35509c;
        }
    }
    ctx->pc = 0x355098u;
label_355098:
    // 0x355098: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x355098u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_35509c:
    // 0x35509c: 0x3e00008  jr          $ra
    ctx->pc = 0x35509Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3550A4u;
    // 0x3550a4: 0x0  nop
    ctx->pc = 0x3550a4u;
    // NOP
    // 0x3550a8: 0x0  nop
    ctx->pc = 0x3550a8u;
    // NOP
    // 0x3550ac: 0x0  nop
    ctx->pc = 0x3550acu;
    // NOP
label_3550b0:
    // 0x3550b0: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x3550b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
    // 0x3550b4: 0x9043bed2  lbu         $v1, -0x412E($v0)
    ctx->pc = 0x3550b4u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294950610)));
    // 0x3550b8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3550b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3550bc: 0x10620013  beq         $v1, $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x3550BCu;
    {
        const bool branch_taken_0x3550bc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x3550bc) {
            ctx->pc = 0x35510Cu;
            goto label_35510c;
        }
    }
    ctx->pc = 0x3550C4u;
    // 0x3550c4: 0x50600003  beql        $v1, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x3550C4u;
    {
        const bool branch_taken_0x3550c4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3550c4) {
            ctx->pc = 0x3550C8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3550C4u;
            // 0x3550c8: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3550D4u;
            goto label_3550d4;
        }
    }
    ctx->pc = 0x3550CCu;
    // 0x3550cc: 0x1000003f  b           . + 4 + (0x3F << 2)
    ctx->pc = 0x3550CCu;
    {
        const bool branch_taken_0x3550cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3550D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3550CCu;
            // 0x3550d0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3550cc) {
            ctx->pc = 0x3551CCu;
            goto label_3551cc;
        }
    }
    ctx->pc = 0x3550D4u;
label_3550d4:
    // 0x3550d4: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x3550d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
    // 0x3550d8: 0xa045bf15  sb          $a1, -0x40EB($v0)
    ctx->pc = 0x3550d8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294950677), (uint8_t)GPR_U32(ctx, 5));
    // 0x3550dc: 0x24640001  addiu       $a0, $v1, 0x1
    ctx->pc = 0x3550dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3550e0: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x3550e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3550e4: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x3550e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
    // 0x3550e8: 0xa043bf16  sb          $v1, -0x40EA($v0)
    ctx->pc = 0x3550e8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294950678), (uint8_t)GPR_U32(ctx, 3));
    // 0x3550ec: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x3550ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x3550f0: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x3550f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
    // 0x3550f4: 0x3c0301e0  lui         $v1, 0x1E0
    ctx->pc = 0x3550f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)480 << 16));
    // 0x3550f8: 0xa045bed9  sb          $a1, -0x4127($v0)
    ctx->pc = 0x3550f8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294950617), (uint8_t)GPR_U32(ctx, 5));
    // 0x3550fc: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x3550fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
    // 0x355100: 0xac60bef4  sw          $zero, -0x410C($v1)
    ctx->pc = 0x355100u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294950644), GPR_U32(ctx, 0));
    // 0x355104: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x355104u;
    {
        const bool branch_taken_0x355104 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x355108u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x355104u;
            // 0x355108: 0xa044bed2  sb          $a0, -0x412E($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 4294950610), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x355104) {
            ctx->pc = 0x3551C8u;
            goto label_3551c8;
        }
    }
    ctx->pc = 0x35510Cu;
label_35510c:
    // 0x35510c: 0x3c03009f  lui         $v1, 0x9F
    ctx->pc = 0x35510cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)159 << 16));
    // 0x355110: 0x3c07009c  lui         $a3, 0x9C
    ctx->pc = 0x355110u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)156 << 16));
    // 0x355114: 0x90699720  lbu         $t1, -0x68E0($v1)
    ctx->pc = 0x355114u;
    SET_GPR_U32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294940448)));
    // 0x355118: 0x3c04009c  lui         $a0, 0x9C
    ctx->pc = 0x355118u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)156 << 16));
    // 0x35511c: 0x24e7db8c  addiu       $a3, $a3, -0x2474
    ctx->pc = 0x35511cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294957964));
    // 0x355120: 0x240800e0  addiu       $t0, $zero, 0xE0
    ctx->pc = 0x355120u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 224));
    // 0x355124: 0x2484db88  addiu       $a0, $a0, -0x2478
    ctx->pc = 0x355124u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294957960));
    // 0x355128: 0x24060230  addiu       $a2, $zero, 0x230
    ctx->pc = 0x355128u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 560));
    // 0x35512c: 0x3c0301e0  lui         $v1, 0x1E0
    ctx->pc = 0x35512cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)480 << 16));
    // 0x355130: 0x8c65bedc  lw          $a1, -0x4124($v1)
    ctx->pc = 0x355130u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294950620)));
    // 0x355134: 0x918c0  sll         $v1, $t1, 3
    ctx->pc = 0x355134u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 9), 3));
    // 0x355138: 0x691821  addu        $v1, $v1, $t1
    ctx->pc = 0x355138u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x35513c: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x35513cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x355140: 0x694821  addu        $t1, $v1, $t1
    ctx->pc = 0x355140u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x355144: 0x948c0  sll         $t1, $t1, 3
    ctx->pc = 0x355144u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 3));
    // 0x355148: 0x30a30004  andi        $v1, $a1, 0x4
    ctx->pc = 0x355148u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)4);
    // 0x35514c: 0xe93821  addu        $a3, $a3, $t1
    ctx->pc = 0x35514cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 9)));
    // 0x355150: 0x892021  addu        $a0, $a0, $t1
    ctx->pc = 0x355150u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 9)));
    // 0x355154: 0xace80000  sw          $t0, 0x0($a3)
    ctx->pc = 0x355154u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 8));
    // 0x355158: 0x1060000f  beqz        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x355158u;
    {
        const bool branch_taken_0x355158 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x35515Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x355158u;
            // 0x35515c: 0xac860000  sw          $a2, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x355158) {
            ctx->pc = 0x355198u;
            goto label_355198;
        }
    }
    ctx->pc = 0x355160u;
    // 0x355160: 0x2404fffb  addiu       $a0, $zero, -0x5
    ctx->pc = 0x355160u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
    // 0x355164: 0x3c0301e0  lui         $v1, 0x1E0
    ctx->pc = 0x355164u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)480 << 16));
    // 0x355168: 0xa42824  and         $a1, $a1, $a0
    ctx->pc = 0x355168u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 4));
    // 0x35516c: 0x3c0401e0  lui         $a0, 0x1E0
    ctx->pc = 0x35516cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)480 << 16));
    // 0x355170: 0xac65bedc  sw          $a1, -0x4124($v1)
    ctx->pc = 0x355170u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294950620), GPR_U32(ctx, 5));
    // 0x355174: 0x8c84bef4  lw          $a0, -0x410C($a0)
    ctx->pc = 0x355174u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294950644)));
    // 0x355178: 0x3c0301e0  lui         $v1, 0x1E0
    ctx->pc = 0x355178u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)480 << 16));
    // 0x35517c: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x35517cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x355180: 0xac64bef4  sw          $a0, -0x410C($v1)
    ctx->pc = 0x355180u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294950644), GPR_U32(ctx, 4));
    // 0x355184: 0x2883000a  slti        $v1, $a0, 0xA
    ctx->pc = 0x355184u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x355188: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x355188u;
    {
        const bool branch_taken_0x355188 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x355188) {
            ctx->pc = 0x355198u;
            goto label_355198;
        }
    }
    ctx->pc = 0x355190u;
    // 0x355190: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x355190u;
    {
        const bool branch_taken_0x355190 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x355190) {
            ctx->pc = 0x3551CCu;
            goto label_3551cc;
        }
    }
    ctx->pc = 0x355198u;
label_355198:
    // 0x355198: 0x3c0201d5  lui         $v0, 0x1D5
    ctx->pc = 0x355198u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)469 << 16));
    // 0x35519c: 0x8c43d918  lw          $v1, -0x26E8($v0)
    ctx->pc = 0x35519cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294957336)));
    // 0x3551a0: 0x30620080  andi        $v0, $v1, 0x80
    ctx->pc = 0x3551a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)128);
    // 0x3551a4: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x3551A4u;
    {
        const bool branch_taken_0x3551a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3551a4) {
            ctx->pc = 0x3551A8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3551A4u;
            // 0x3551a8: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3551CCu;
            goto label_3551cc;
        }
    }
    ctx->pc = 0x3551ACu;
    // 0x3551ac: 0x3c020004  lui         $v0, 0x4
    ctx->pc = 0x3551acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4 << 16));
    // 0x3551b0: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x3551b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x3551b4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3551B4u;
    {
        const bool branch_taken_0x3551b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3551b4) {
            ctx->pc = 0x3551C8u;
            goto label_3551c8;
        }
    }
    ctx->pc = 0x3551BCu;
    // 0x3551bc: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x3551bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3551c0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x3551C0u;
    {
        const bool branch_taken_0x3551c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3551c0) {
            ctx->pc = 0x3551CCu;
            goto label_3551cc;
        }
    }
    ctx->pc = 0x3551C8u;
label_3551c8:
    // 0x3551c8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3551c8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3551cc:
    // 0x3551cc: 0x3e00008  jr          $ra
    ctx->pc = 0x3551CCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3551D4u;
    // 0x3551d4: 0x0  nop
    ctx->pc = 0x3551d4u;
    // NOP
    // 0x3551d8: 0x0  nop
    ctx->pc = 0x3551d8u;
    // NOP
    // 0x3551dc: 0x0  nop
    ctx->pc = 0x3551dcu;
    // NOP
label_3551e0:
    // 0x3551e0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3551e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3551e4: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x3551e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
    // 0x3551e8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3551e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3551ec: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3551ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3551f0: 0x9043bed2  lbu         $v1, -0x412E($v0)
    ctx->pc = 0x3551f0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294950610)));
    // 0x3551f4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3551f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3551f8: 0x10620014  beq         $v1, $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x3551F8u;
    {
        const bool branch_taken_0x3551f8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x3551f8) {
            ctx->pc = 0x35524Cu;
            goto label_35524c;
        }
    }
    ctx->pc = 0x355200u;
    // 0x355200: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x355200u;
    {
        const bool branch_taken_0x355200 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x355200) {
            ctx->pc = 0x355210u;
            goto label_355210;
        }
    }
    ctx->pc = 0x355208u;
    // 0x355208: 0x10000029  b           . + 4 + (0x29 << 2)
    ctx->pc = 0x355208u;
    {
        const bool branch_taken_0x355208 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x35520Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x355208u;
            // 0x35520c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x355208) {
            ctx->pc = 0x3552B0u;
            goto label_3552b0;
        }
    }
    ctx->pc = 0x355210u;
label_355210:
    // 0x355210: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x355210u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
    // 0x355214: 0x24650001  addiu       $a1, $v1, 0x1
    ctx->pc = 0x355214u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x355218: 0x8c47bee4  lw          $a3, -0x411C($v0)
    ctx->pc = 0x355218u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950628)));
    // 0x35521c: 0x3c030020  lui         $v1, 0x20
    ctx->pc = 0x35521cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32 << 16));
    // 0x355220: 0x3c0401e0  lui         $a0, 0x1E0
    ctx->pc = 0x355220u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)480 << 16));
    // 0x355224: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x355224u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x355228: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x355228u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
    // 0x35522c: 0xac40bef4  sw          $zero, -0x410C($v0)
    ctx->pc = 0x35522cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294950644), GPR_U32(ctx, 0));
    // 0x355230: 0xe31025  or          $v0, $a3, $v1
    ctx->pc = 0x355230u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) | GPR_U64(ctx, 3));
    // 0x355234: 0xac82bee4  sw          $v0, -0x411C($a0)
    ctx->pc = 0x355234u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4294950628), GPR_U32(ctx, 2));
    // 0x355238: 0x3c0301e0  lui         $v1, 0x1E0
    ctx->pc = 0x355238u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)480 << 16));
    // 0x35523c: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x35523cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
    // 0x355240: 0xa066beda  sb          $a2, -0x4126($v1)
    ctx->pc = 0x355240u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4294950618), (uint8_t)GPR_U32(ctx, 6));
    // 0x355244: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x355244u;
    {
        const bool branch_taken_0x355244 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x355248u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x355244u;
            // 0x355248: 0xa045bed2  sb          $a1, -0x412E($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 4294950610), (uint8_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x355244) {
            ctx->pc = 0x3552ACu;
            goto label_3552ac;
        }
    }
    ctx->pc = 0x35524Cu;
label_35524c:
    // 0x35524c: 0x3c0201d5  lui         $v0, 0x1D5
    ctx->pc = 0x35524cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)469 << 16));
    // 0x355250: 0x8c43d918  lw          $v1, -0x26E8($v0)
    ctx->pc = 0x355250u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294957336)));
    // 0x355254: 0x30620080  andi        $v0, $v1, 0x80
    ctx->pc = 0x355254u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)128);
    // 0x355258: 0x5040000f  beql        $v0, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x355258u;
    {
        const bool branch_taken_0x355258 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x355258) {
            ctx->pc = 0x35525Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x355258u;
            // 0x35525c: 0x3c020004  lui         $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x355298u;
            goto label_355298;
        }
    }
    ctx->pc = 0x355260u;
    // 0x355260: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x355260u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
    // 0x355264: 0xc0c4534  jal         func_3114D0
    ctx->pc = 0x355264u;
    SET_GPR_U32(ctx, 31, 0x35526Cu);
    ctx->pc = 0x355268u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x355264u;
            // 0x355268: 0x90509720  lbu         $s0, -0x68E0($v0) (Delay Slot)
        SET_GPR_U32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294940448)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3114D0u;
    if (runtime->hasFunction(0x3114D0u)) {
        auto targetFn = runtime->lookupFunction(0x3114D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35526Cu; }
        if (ctx->pc != 0x35526Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003114D0_0x3114d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35526Cu; }
        if (ctx->pc != 0x35526Cu) { return; }
    }
    ctx->pc = 0x35526Cu;
label_35526c:
    // 0x35526c: 0x56020010  bnel        $s0, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x35526Cu;
    {
        const bool branch_taken_0x35526c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x35526c) {
            ctx->pc = 0x355270u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x35526Cu;
            // 0x355270: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3552B0u;
            goto label_3552b0;
        }
    }
    ctx->pc = 0x355274u;
    // 0x355274: 0x3c0301e0  lui         $v1, 0x1E0
    ctx->pc = 0x355274u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)480 << 16));
    // 0x355278: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x355278u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
    // 0x35527c: 0x9063beda  lbu         $v1, -0x4126($v1)
    ctx->pc = 0x35527cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294950618)));
    // 0x355280: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x355280u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x355284: 0xa043beda  sb          $v1, -0x4126($v0)
    ctx->pc = 0x355284u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294950618), (uint8_t)GPR_U32(ctx, 3));
    // 0x355288: 0x306200ff  andi        $v0, $v1, 0xFF
    ctx->pc = 0x355288u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x35528c: 0x401026  xor         $v0, $v0, $zero
    ctx->pc = 0x35528cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 0));
    // 0x355290: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x355290u;
    {
        const bool branch_taken_0x355290 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x355294u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x355290u;
            // 0x355294: 0x2c420001  sltiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x355290) {
            ctx->pc = 0x3552B0u;
            goto label_3552b0;
        }
    }
    ctx->pc = 0x355298u;
label_355298:
    // 0x355298: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x355298u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x35529c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x35529Cu;
    {
        const bool branch_taken_0x35529c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x35529c) {
            ctx->pc = 0x3552ACu;
            goto label_3552ac;
        }
    }
    ctx->pc = 0x3552A4u;
    // 0x3552a4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x3552A4u;
    {
        const bool branch_taken_0x3552a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3552A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3552A4u;
            // 0x3552a8: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3552a4) {
            ctx->pc = 0x3552B0u;
            goto label_3552b0;
        }
    }
    ctx->pc = 0x3552ACu;
label_3552ac:
    // 0x3552ac: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3552acu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3552b0:
    // 0x3552b0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3552b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3552b4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3552b4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3552b8: 0x3e00008  jr          $ra
    ctx->pc = 0x3552B8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3552BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3552B8u;
            // 0x3552bc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3552C0u;
label_3552c0:
    // 0x3552c0: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x3552c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
    // 0x3552c4: 0x9044bed2  lbu         $a0, -0x412E($v0)
    ctx->pc = 0x3552c4u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294950610)));
    // 0x3552c8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x3552c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3552cc: 0x10820033  beq         $a0, $v0, . + 4 + (0x33 << 2)
    ctx->pc = 0x3552CCu;
    {
        const bool branch_taken_0x3552cc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x3552cc) {
            ctx->pc = 0x35539Cu;
            goto label_35539c;
        }
    }
    ctx->pc = 0x3552D4u;
    // 0x3552d4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3552d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3552d8: 0x10820027  beq         $a0, $v0, . + 4 + (0x27 << 2)
    ctx->pc = 0x3552D8u;
    {
        const bool branch_taken_0x3552d8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x3552d8) {
            ctx->pc = 0x355378u;
            goto label_355378;
        }
    }
    ctx->pc = 0x3552E0u;
    // 0x3552e0: 0x50800003  beql        $a0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x3552E0u;
    {
        const bool branch_taken_0x3552e0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3552e0) {
            ctx->pc = 0x3552E4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3552E0u;
            // 0x3552e4: 0x24030007  addiu       $v1, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3552F0u;
            goto label_3552f0;
        }
    }
    ctx->pc = 0x3552E8u;
    // 0x3552e8: 0x1000003c  b           . + 4 + (0x3C << 2)
    ctx->pc = 0x3552E8u;
    {
        const bool branch_taken_0x3552e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3552ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3552E8u;
            // 0x3552ec: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3552e8) {
            ctx->pc = 0x3553DCu;
            goto label_3553dc;
        }
    }
    ctx->pc = 0x3552F0u;
label_3552f0:
    // 0x3552f0: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x3552f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
    // 0x3552f4: 0xa043bf15  sb          $v1, -0x40EB($v0)
    ctx->pc = 0x3552f4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294950677), (uint8_t)GPR_U32(ctx, 3));
    // 0x3552f8: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x3552f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3552fc: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x3552fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
    // 0x355300: 0x3c0301e0  lui         $v1, 0x1E0
    ctx->pc = 0x355300u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)480 << 16));
    // 0x355304: 0x8c46bee4  lw          $a2, -0x411C($v0)
    ctx->pc = 0x355304u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950628)));
    // 0x355308: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x355308u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x35530c: 0xa064bf16  sb          $a0, -0x40EA($v1)
    ctx->pc = 0x35530cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4294950678), (uint8_t)GPR_U32(ctx, 4));
    // 0x355310: 0x2404001e  addiu       $a0, $zero, 0x1E
    ctx->pc = 0x355310u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x355314: 0x3c0301e0  lui         $v1, 0x1E0
    ctx->pc = 0x355314u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)480 << 16));
    // 0x355318: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x355318u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
    // 0x35531c: 0xac45bee8  sw          $a1, -0x4118($v0)
    ctx->pc = 0x35531cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294950632), GPR_U32(ctx, 5));
    // 0x355320: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x355320u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
    // 0x355324: 0xa444bf0a  sh          $a0, -0x40F6($v0)
    ctx->pc = 0x355324u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4294950666), (uint16_t)GPR_U32(ctx, 4));
    // 0x355328: 0x34c20400  ori         $v0, $a2, 0x400
    ctx->pc = 0x355328u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)1024);
    // 0x35532c: 0x2404008f  addiu       $a0, $zero, 0x8F
    ctx->pc = 0x35532cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 143));
    // 0x355330: 0x34420040  ori         $v0, $v0, 0x40
    ctx->pc = 0x355330u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
    // 0x355334: 0x24060016  addiu       $a2, $zero, 0x16
    ctx->pc = 0x355334u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    // 0x355338: 0xac62bee4  sw          $v0, -0x411C($v1)
    ctx->pc = 0x355338u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294950628), GPR_U32(ctx, 2));
    // 0x35533c: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x35533cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
    // 0x355340: 0x3c0301e0  lui         $v1, 0x1E0
    ctx->pc = 0x355340u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)480 << 16));
    // 0x355344: 0xa044bf14  sb          $a0, -0x40EC($v0)
    ctx->pc = 0x355344u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294950676), (uint8_t)GPR_U32(ctx, 4));
    // 0x355348: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x355348u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
    // 0x35534c: 0x3c0401e0  lui         $a0, 0x1E0
    ctx->pc = 0x35534cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)480 << 16));
    // 0x355350: 0x90459720  lbu         $a1, -0x68E0($v0)
    ctx->pc = 0x355350u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294940448)));
    // 0x355354: 0x2484bf0c  addiu       $a0, $a0, -0x40F4
    ctx->pc = 0x355354u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950668));
    // 0x355358: 0x52840  sll         $a1, $a1, 1
    ctx->pc = 0x355358u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x35535c: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x35535cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
    // 0x355360: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x355360u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x355364: 0xa4860000  sh          $a2, 0x0($a0)
    ctx->pc = 0x355364u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 6));
    // 0x355368: 0x9063bed2  lbu         $v1, -0x412E($v1)
    ctx->pc = 0x355368u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294950610)));
    // 0x35536c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x35536cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x355370: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x355370u;
    {
        const bool branch_taken_0x355370 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x355374u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x355370u;
            // 0x355374: 0xa043bed2  sb          $v1, -0x412E($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 4294950610), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x355370) {
            ctx->pc = 0x3553D8u;
            goto label_3553d8;
        }
    }
    ctx->pc = 0x355378u;
label_355378:
    // 0x355378: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x355378u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x35537c: 0x24030303  addiu       $v1, $zero, 0x303
    ctx->pc = 0x35537cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 771));
    // 0x355380: 0x9442dab0  lhu         $v0, -0x2550($v0)
    ctx->pc = 0x355380u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294957744)));
    // 0x355384: 0x14430014  bne         $v0, $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x355384u;
    {
        const bool branch_taken_0x355384 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x355384) {
            ctx->pc = 0x3553D8u;
            goto label_3553d8;
        }
    }
    ctx->pc = 0x35538Cu;
    // 0x35538c: 0x24830001  addiu       $v1, $a0, 0x1
    ctx->pc = 0x35538cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x355390: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x355390u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
    // 0x355394: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x355394u;
    {
        const bool branch_taken_0x355394 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x355398u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x355394u;
            // 0x355398: 0xa043bed2  sb          $v1, -0x412E($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 4294950610), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x355394) {
            ctx->pc = 0x3553D8u;
            goto label_3553d8;
        }
    }
    ctx->pc = 0x35539Cu;
label_35539c:
    // 0x35539c: 0x3c0301d5  lui         $v1, 0x1D5
    ctx->pc = 0x35539cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)469 << 16));
    // 0x3553a0: 0x3c040004  lui         $a0, 0x4
    ctx->pc = 0x3553a0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4 << 16));
    // 0x3553a4: 0x8c65d918  lw          $a1, -0x26E8($v1)
    ctx->pc = 0x3553a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294957336)));
    // 0x3553a8: 0xa41824  and         $v1, $a1, $a0
    ctx->pc = 0x3553a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 4));
    // 0x3553ac: 0x50600006  beql        $v1, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x3553ACu;
    {
        const bool branch_taken_0x3553ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3553ac) {
            ctx->pc = 0x3553B0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3553ACu;
            // 0x3553b0: 0x30a30080  andi        $v1, $a1, 0x80 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)128);
        ctx->in_delay_slot = false;
            ctx->pc = 0x3553C8u;
            goto label_3553c8;
        }
    }
    ctx->pc = 0x3553B4u;
    // 0x3553b4: 0x24030100  addiu       $v1, $zero, 0x100
    ctx->pc = 0x3553b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x3553b8: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x3553b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
    // 0x3553bc: 0xa443bf02  sh          $v1, -0x40FE($v0)
    ctx->pc = 0x3553bcu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4294950658), (uint16_t)GPR_U32(ctx, 3));
    // 0x3553c0: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x3553C0u;
    {
        const bool branch_taken_0x3553c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3553C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3553C0u;
            // 0x3553c4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3553c0) {
            ctx->pc = 0x3553DCu;
            goto label_3553dc;
        }
    }
    ctx->pc = 0x3553C8u;
label_3553c8:
    // 0x3553c8: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3553C8u;
    {
        const bool branch_taken_0x3553c8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3553c8) {
            ctx->pc = 0x3553D8u;
            goto label_3553d8;
        }
    }
    ctx->pc = 0x3553D0u;
    // 0x3553d0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x3553D0u;
    {
        const bool branch_taken_0x3553d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3553d0) {
            ctx->pc = 0x3553DCu;
            goto label_3553dc;
        }
    }
    ctx->pc = 0x3553D8u;
label_3553d8:
    // 0x3553d8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3553d8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3553dc:
    // 0x3553dc: 0x3e00008  jr          $ra
    ctx->pc = 0x3553DCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3553E4u;
    // 0x3553e4: 0x0  nop
    ctx->pc = 0x3553e4u;
    // NOP
    // 0x3553e8: 0x0  nop
    ctx->pc = 0x3553e8u;
    // NOP
    // 0x3553ec: 0x0  nop
    ctx->pc = 0x3553ecu;
    // NOP
label_3553f0:
    // 0x3553f0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3553f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3553f4: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x3553f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
    // 0x3553f8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3553f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3553fc: 0x9043bed2  lbu         $v1, -0x412E($v0)
    ctx->pc = 0x3553fcu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294950610)));
    // 0x355400: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x355400u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x355404: 0x1062000d  beq         $v1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x355404u;
    {
        const bool branch_taken_0x355404 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x355404) {
            ctx->pc = 0x35543Cu;
            goto label_35543c;
        }
    }
    ctx->pc = 0x35540Cu;
    // 0x35540c: 0x50600003  beql        $v1, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x35540Cu;
    {
        const bool branch_taken_0x35540c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x35540c) {
            ctx->pc = 0x355410u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x35540Cu;
            // 0x355410: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
            ctx->pc = 0x35541Cu;
            goto label_35541c;
        }
    }
    ctx->pc = 0x355414u;
    // 0x355414: 0x10000065  b           . + 4 + (0x65 << 2)
    ctx->pc = 0x355414u;
    {
        const bool branch_taken_0x355414 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x355418u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x355414u;
            // 0x355418: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x355414) {
            ctx->pc = 0x3555ACu;
            goto label_3555ac;
        }
    }
    ctx->pc = 0x35541Cu;
label_35541c:
    // 0x35541c: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x35541cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
    // 0x355420: 0x24640001  addiu       $a0, $v1, 0x1
    ctx->pc = 0x355420u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x355424: 0xa045bed9  sb          $a1, -0x4127($v0)
    ctx->pc = 0x355424u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294950617), (uint8_t)GPR_U32(ctx, 5));
    // 0x355428: 0x3c0301e0  lui         $v1, 0x1E0
    ctx->pc = 0x355428u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)480 << 16));
    // 0x35542c: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x35542cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
    // 0x355430: 0xa044bed2  sb          $a0, -0x412E($v0)
    ctx->pc = 0x355430u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294950610), (uint8_t)GPR_U32(ctx, 4));
    // 0x355434: 0x1000005c  b           . + 4 + (0x5C << 2)
    ctx->pc = 0x355434u;
    {
        const bool branch_taken_0x355434 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x355438u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x355434u;
            // 0x355438: 0xac60bef4  sw          $zero, -0x410C($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294950644), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x355434) {
            ctx->pc = 0x3555A8u;
            goto label_3555a8;
        }
    }
    ctx->pc = 0x35543Cu;
label_35543c:
    // 0x35543c: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x35543cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
    // 0x355440: 0x3c05009c  lui         $a1, 0x9C
    ctx->pc = 0x355440u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)156 << 16));
    // 0x355444: 0x90449720  lbu         $a0, -0x68E0($v0)
    ctx->pc = 0x355444u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294940448)));
    // 0x355448: 0x24a5db8c  addiu       $a1, $a1, -0x2474
    ctx->pc = 0x355448u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294957964));
    // 0x35544c: 0x240600e0  addiu       $a2, $zero, 0xE0
    ctx->pc = 0x35544cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 224));
    // 0x355450: 0x24030230  addiu       $v1, $zero, 0x230
    ctx->pc = 0x355450u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 560));
    // 0x355454: 0x438c0  sll         $a3, $a0, 3
    ctx->pc = 0x355454u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x355458: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x355458u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x35545c: 0xe43821  addu        $a3, $a3, $a0
    ctx->pc = 0x35545cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
    // 0x355460: 0x2442db88  addiu       $v0, $v0, -0x2478
    ctx->pc = 0x355460u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957960));
    // 0x355464: 0x738c0  sll         $a3, $a3, 3
    ctx->pc = 0x355464u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x355468: 0xe43821  addu        $a3, $a3, $a0
    ctx->pc = 0x355468u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
    // 0x35546c: 0x738c0  sll         $a3, $a3, 3
    ctx->pc = 0x35546cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x355470: 0xa72821  addu        $a1, $a1, $a3
    ctx->pc = 0x355470u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x355474: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x355474u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x355478: 0xaca60000  sw          $a2, 0x0($a1)
    ctx->pc = 0x355478u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 6));
    // 0x35547c: 0xc062810  jal         func_18A040
    ctx->pc = 0x35547Cu;
    SET_GPR_U32(ctx, 31, 0x355484u);
    ctx->pc = 0x355480u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x35547Cu;
            // 0x355480: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18A040u;
    if (runtime->hasFunction(0x18A040u)) {
        auto targetFn = runtime->lookupFunction(0x18A040u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x355484u; }
        if (ctx->pc != 0x355484u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0018A040_0x18a040(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x355484u; }
        if (ctx->pc != 0x355484u) { return; }
    }
    ctx->pc = 0x355484u;
label_355484:
    // 0x355484: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x355484u;
    {
        const bool branch_taken_0x355484 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x355484) {
            ctx->pc = 0x355494u;
            goto label_355494;
        }
    }
    ctx->pc = 0x35548Cu;
    // 0x35548c: 0x10000047  b           . + 4 + (0x47 << 2)
    ctx->pc = 0x35548Cu;
    {
        const bool branch_taken_0x35548c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x355490u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x35548Cu;
            // 0x355490: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35548c) {
            ctx->pc = 0x3555ACu;
            goto label_3555ac;
        }
    }
    ctx->pc = 0x355494u;
label_355494:
    // 0x355494: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x355494u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
    // 0x355498: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x355498u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x35549c: 0x90449720  lbu         $a0, -0x68E0($v0)
    ctx->pc = 0x35549cu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294940448)));
    // 0x3554a0: 0x2463db5c  addiu       $v1, $v1, -0x24A4
    ctx->pc = 0x3554a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294957916));
    // 0x3554a4: 0x410c0  sll         $v0, $a0, 3
    ctx->pc = 0x3554a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x3554a8: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x3554a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x3554ac: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x3554acu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x3554b0: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x3554b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x3554b4: 0x230c0  sll         $a2, $v0, 3
    ctx->pc = 0x3554b4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x3554b8: 0x661021  addu        $v0, $v1, $a2
    ctx->pc = 0x3554b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x3554bc: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x3554bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3554c0: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x3554c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
    // 0x3554c4: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x3554C4u;
    {
        const bool branch_taken_0x3554c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3554c4) {
            ctx->pc = 0x35551Cu;
            goto label_35551c;
        }
    }
    ctx->pc = 0x3554CCu;
    // 0x3554cc: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x3554ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
    // 0x3554d0: 0x3c0301e0  lui         $v1, 0x1E0
    ctx->pc = 0x3554d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)480 << 16));
    // 0x3554d4: 0x8c45bedc  lw          $a1, -0x4124($v0)
    ctx->pc = 0x3554d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950620)));
    // 0x3554d8: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x3554d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
    // 0x3554dc: 0x34a50010  ori         $a1, $a1, 0x10
    ctx->pc = 0x3554dcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)16);
    // 0x3554e0: 0x8c44bef4  lw          $a0, -0x410C($v0)
    ctx->pc = 0x3554e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950644)));
    // 0x3554e4: 0xac65bedc  sw          $a1, -0x4124($v1)
    ctx->pc = 0x3554e4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294950620), GPR_U32(ctx, 5));
    // 0x3554e8: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x3554e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
    // 0x3554ec: 0x24830001  addiu       $v1, $a0, 0x1
    ctx->pc = 0x3554ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x3554f0: 0xac43bef4  sw          $v1, -0x410C($v0)
    ctx->pc = 0x3554f0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294950644), GPR_U32(ctx, 3));
    // 0x3554f4: 0x28620005  slti        $v0, $v1, 0x5
    ctx->pc = 0x3554f4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x3554f8: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x3554F8u;
    {
        const bool branch_taken_0x3554f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3554f8) {
            ctx->pc = 0x35551Cu;
            goto label_35551c;
        }
    }
    ctx->pc = 0x355500u;
    // 0x355500: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x355500u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
    // 0x355504: 0x3c0301e0  lui         $v1, 0x1E0
    ctx->pc = 0x355504u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)480 << 16));
    // 0x355508: 0x9044bed2  lbu         $a0, -0x412E($v0)
    ctx->pc = 0x355508u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294950610)));
    // 0x35550c: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x35550cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x355510: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x355510u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x355514: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x355514u;
    {
        const bool branch_taken_0x355514 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x355518u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x355514u;
            // 0x355518: 0xa064bed2  sb          $a0, -0x412E($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 4294950610), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x355514) {
            ctx->pc = 0x3555ACu;
            goto label_3555ac;
        }
    }
    ctx->pc = 0x35551Cu;
label_35551c:
    // 0x35551c: 0x3c0201d5  lui         $v0, 0x1D5
    ctx->pc = 0x35551cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)469 << 16));
    // 0x355520: 0x8c43d918  lw          $v1, -0x26E8($v0)
    ctx->pc = 0x355520u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294957336)));
    // 0x355524: 0x30620080  andi        $v0, $v1, 0x80
    ctx->pc = 0x355524u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)128);
    // 0x355528: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x355528u;
    {
        const bool branch_taken_0x355528 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x355528) {
            ctx->pc = 0x355540u;
            goto label_355540;
        }
    }
    ctx->pc = 0x355530u;
    // 0x355530: 0x3c020004  lui         $v0, 0x4
    ctx->pc = 0x355530u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4 << 16));
    // 0x355534: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x355534u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x355538: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x355538u;
    {
        const bool branch_taken_0x355538 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x355538) {
            ctx->pc = 0x35555Cu;
            goto label_35555c;
        }
    }
    ctx->pc = 0x355540u;
label_355540:
    // 0x355540: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x355540u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
    // 0x355544: 0x3c0301e0  lui         $v1, 0x1E0
    ctx->pc = 0x355544u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)480 << 16));
    // 0x355548: 0x9044bed2  lbu         $a0, -0x412E($v0)
    ctx->pc = 0x355548u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294950610)));
    // 0x35554c: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x35554cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x355550: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x355550u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x355554: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x355554u;
    {
        const bool branch_taken_0x355554 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x355558u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x355554u;
            // 0x355558: 0xa064bed2  sb          $a0, -0x412E($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 4294950610), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x355554) {
            ctx->pc = 0x3555ACu;
            goto label_3555ac;
        }
    }
    ctx->pc = 0x35555Cu;
label_35555c:
    // 0x35555c: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x35555cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x355560: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x355560u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x355564: 0x2463db74  addiu       $v1, $v1, -0x248C
    ctx->pc = 0x355564u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294957940));
    // 0x355568: 0x2442db76  addiu       $v0, $v0, -0x248A
    ctx->pc = 0x355568u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957942));
    // 0x35556c: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x35556cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x355570: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x355570u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x355574: 0x94630000  lhu         $v1, 0x0($v1)
    ctx->pc = 0x355574u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x355578: 0x94420000  lhu         $v0, 0x0($v0)
    ctx->pc = 0x355578u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x35557c: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x35557cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x355580: 0x28420002  slti        $v0, $v0, 0x2
    ctx->pc = 0x355580u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x355584: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x355584u;
    {
        const bool branch_taken_0x355584 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x355584) {
            ctx->pc = 0x3555A8u;
            goto label_3555a8;
        }
    }
    ctx->pc = 0x35558Cu;
    // 0x35558c: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x35558cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
    // 0x355590: 0x3c0301e0  lui         $v1, 0x1E0
    ctx->pc = 0x355590u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)480 << 16));
    // 0x355594: 0x9044bed2  lbu         $a0, -0x412E($v0)
    ctx->pc = 0x355594u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294950610)));
    // 0x355598: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x355598u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x35559c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x35559cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3555a0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x3555A0u;
    {
        const bool branch_taken_0x3555a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3555A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3555A0u;
            // 0x3555a4: 0xa064bed2  sb          $a0, -0x412E($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 4294950610), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3555a0) {
            ctx->pc = 0x3555ACu;
            goto label_3555ac;
        }
    }
    ctx->pc = 0x3555A8u;
label_3555a8:
    // 0x3555a8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3555a8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3555ac:
    // 0x3555ac: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3555acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3555b0: 0x3e00008  jr          $ra
    ctx->pc = 0x3555B0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3555B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3555B0u;
            // 0x3555b4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3555B8u;
    // 0x3555b8: 0x0  nop
    ctx->pc = 0x3555b8u;
    // NOP
    // 0x3555bc: 0x0  nop
    ctx->pc = 0x3555bcu;
    // NOP
label_3555c0:
    // 0x3555c0: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x3555c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
    // 0x3555c4: 0x9044bed2  lbu         $a0, -0x412E($v0)
    ctx->pc = 0x3555c4u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294950610)));
    // 0x3555c8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3555c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3555cc: 0x1082000d  beq         $a0, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x3555CCu;
    {
        const bool branch_taken_0x3555cc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x3555cc) {
            ctx->pc = 0x355604u;
            goto label_355604;
        }
    }
    ctx->pc = 0x3555D4u;
    // 0x3555d4: 0x50800003  beql        $a0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x3555D4u;
    {
        const bool branch_taken_0x3555d4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3555d4) {
            ctx->pc = 0x3555D8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3555D4u;
            // 0x3555d8: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3555E4u;
            goto label_3555e4;
        }
    }
    ctx->pc = 0x3555DCu;
    // 0x3555dc: 0x10000056  b           . + 4 + (0x56 << 2)
    ctx->pc = 0x3555DCu;
    {
        const bool branch_taken_0x3555dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3555E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3555DCu;
            // 0x3555e0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3555dc) {
            ctx->pc = 0x355738u;
            goto label_355738;
        }
    }
    ctx->pc = 0x3555E4u;
label_3555e4:
    // 0x3555e4: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x3555e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
    // 0x3555e8: 0xa045bed9  sb          $a1, -0x4127($v0)
    ctx->pc = 0x3555e8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294950617), (uint8_t)GPR_U32(ctx, 5));
    // 0x3555ec: 0x3c0301e0  lui         $v1, 0x1E0
    ctx->pc = 0x3555ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)480 << 16));
    // 0x3555f0: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x3555f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x3555f4: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x3555f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
    // 0x3555f8: 0xa044bed2  sb          $a0, -0x412E($v0)
    ctx->pc = 0x3555f8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294950610), (uint8_t)GPR_U32(ctx, 4));
    // 0x3555fc: 0x1000004d  b           . + 4 + (0x4D << 2)
    ctx->pc = 0x3555FCu;
    {
        const bool branch_taken_0x3555fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x355600u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3555FCu;
            // 0x355600: 0xac60bef4  sw          $zero, -0x410C($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294950644), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3555fc) {
            ctx->pc = 0x355734u;
            goto label_355734;
        }
    }
    ctx->pc = 0x355604u;
label_355604:
    // 0x355604: 0x3c03009f  lui         $v1, 0x9F
    ctx->pc = 0x355604u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)159 << 16));
    // 0x355608: 0x3c08009c  lui         $t0, 0x9C
    ctx->pc = 0x355608u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)156 << 16));
    // 0x35560c: 0x906a9720  lbu         $t2, -0x68E0($v1)
    ctx->pc = 0x35560cu;
    SET_GPR_U32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294940448)));
    // 0x355610: 0x3c06009c  lui         $a2, 0x9C
    ctx->pc = 0x355610u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)156 << 16));
    // 0x355614: 0x3c05009c  lui         $a1, 0x9C
    ctx->pc = 0x355614u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)156 << 16));
    // 0x355618: 0x2508db8c  addiu       $t0, $t0, -0x2474
    ctx->pc = 0x355618u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294957964));
    // 0x35561c: 0x240900e0  addiu       $t1, $zero, 0xE0
    ctx->pc = 0x35561cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 224));
    // 0x355620: 0x24c6db88  addiu       $a2, $a2, -0x2478
    ctx->pc = 0x355620u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294957960));
    // 0x355624: 0xa18c0  sll         $v1, $t2, 3
    ctx->pc = 0x355624u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 10), 3));
    // 0x355628: 0x24070230  addiu       $a3, $zero, 0x230
    ctx->pc = 0x355628u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 560));
    // 0x35562c: 0x6a1821  addu        $v1, $v1, $t2
    ctx->pc = 0x35562cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 10)));
    // 0x355630: 0x24a5db5c  addiu       $a1, $a1, -0x24A4
    ctx->pc = 0x355630u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294957916));
    // 0x355634: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x355634u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x355638: 0x6a1821  addu        $v1, $v1, $t2
    ctx->pc = 0x355638u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 10)));
    // 0x35563c: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x35563cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x355640: 0x1034021  addu        $t0, $t0, $v1
    ctx->pc = 0x355640u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
    // 0x355644: 0xc33021  addu        $a2, $a2, $v1
    ctx->pc = 0x355644u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x355648: 0xad090000  sw          $t1, 0x0($t0)
    ctx->pc = 0x355648u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 9));
    // 0x35564c: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x35564cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x355650: 0xacc70000  sw          $a3, 0x0($a2)
    ctx->pc = 0x355650u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 7));
    // 0x355654: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x355654u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x355658: 0x30a50100  andi        $a1, $a1, 0x100
    ctx->pc = 0x355658u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)256);
    // 0x35565c: 0x10a00012  beqz        $a1, . + 4 + (0x12 << 2)
    ctx->pc = 0x35565Cu;
    {
        const bool branch_taken_0x35565c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x35565c) {
            ctx->pc = 0x3556A8u;
            goto label_3556a8;
        }
    }
    ctx->pc = 0x355664u;
    // 0x355664: 0x3c0501e0  lui         $a1, 0x1E0
    ctx->pc = 0x355664u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)480 << 16));
    // 0x355668: 0x3c0601e0  lui         $a2, 0x1E0
    ctx->pc = 0x355668u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)480 << 16));
    // 0x35566c: 0x8ca8bedc  lw          $t0, -0x4124($a1)
    ctx->pc = 0x35566cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294950620)));
    // 0x355670: 0x3c0501e0  lui         $a1, 0x1E0
    ctx->pc = 0x355670u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)480 << 16));
    // 0x355674: 0x35080020  ori         $t0, $t0, 0x20
    ctx->pc = 0x355674u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)32);
    // 0x355678: 0x8ca7bef4  lw          $a3, -0x410C($a1)
    ctx->pc = 0x355678u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294950644)));
    // 0x35567c: 0xacc8bedc  sw          $t0, -0x4124($a2)
    ctx->pc = 0x35567cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4294950620), GPR_U32(ctx, 8));
    // 0x355680: 0x3c0501e0  lui         $a1, 0x1E0
    ctx->pc = 0x355680u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)480 << 16));
    // 0x355684: 0x24e60001  addiu       $a2, $a3, 0x1
    ctx->pc = 0x355684u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x355688: 0xaca6bef4  sw          $a2, -0x410C($a1)
    ctx->pc = 0x355688u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4294950644), GPR_U32(ctx, 6));
    // 0x35568c: 0x28c50005  slti        $a1, $a2, 0x5
    ctx->pc = 0x35568cu;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x355690: 0x14a00005  bnez        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x355690u;
    {
        const bool branch_taken_0x355690 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x355690) {
            ctx->pc = 0x3556A8u;
            goto label_3556a8;
        }
    }
    ctx->pc = 0x355698u;
    // 0x355698: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x355698u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x35569c: 0x3c0301e0  lui         $v1, 0x1E0
    ctx->pc = 0x35569cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)480 << 16));
    // 0x3556a0: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x3556A0u;
    {
        const bool branch_taken_0x3556a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3556A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3556A0u;
            // 0x3556a4: 0xa064bed2  sb          $a0, -0x412E($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 4294950610), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3556a0) {
            ctx->pc = 0x355738u;
            goto label_355738;
        }
    }
    ctx->pc = 0x3556A8u;
label_3556a8:
    // 0x3556a8: 0x3c0201d5  lui         $v0, 0x1D5
    ctx->pc = 0x3556a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)469 << 16));
    // 0x3556ac: 0x8c44d918  lw          $a0, -0x26E8($v0)
    ctx->pc = 0x3556acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294957336)));
    // 0x3556b0: 0x30820080  andi        $v0, $a0, 0x80
    ctx->pc = 0x3556b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)128);
    // 0x3556b4: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3556B4u;
    {
        const bool branch_taken_0x3556b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3556b4) {
            ctx->pc = 0x3556CCu;
            goto label_3556cc;
        }
    }
    ctx->pc = 0x3556BCu;
    // 0x3556bc: 0x3c020004  lui         $v0, 0x4
    ctx->pc = 0x3556bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4 << 16));
    // 0x3556c0: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x3556c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x3556c4: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x3556C4u;
    {
        const bool branch_taken_0x3556c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3556c4) {
            ctx->pc = 0x3556E8u;
            goto label_3556e8;
        }
    }
    ctx->pc = 0x3556CCu;
label_3556cc:
    // 0x3556cc: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x3556ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
    // 0x3556d0: 0x3c0301e0  lui         $v1, 0x1E0
    ctx->pc = 0x3556d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)480 << 16));
    // 0x3556d4: 0x9044bed2  lbu         $a0, -0x412E($v0)
    ctx->pc = 0x3556d4u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294950610)));
    // 0x3556d8: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x3556d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x3556dc: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x3556dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3556e0: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x3556E0u;
    {
        const bool branch_taken_0x3556e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3556E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3556E0u;
            // 0x3556e4: 0xa064bed2  sb          $a0, -0x412E($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 4294950610), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3556e0) {
            ctx->pc = 0x355738u;
            goto label_355738;
        }
    }
    ctx->pc = 0x3556E8u;
label_3556e8:
    // 0x3556e8: 0x3c04009c  lui         $a0, 0x9C
    ctx->pc = 0x3556e8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)156 << 16));
    // 0x3556ec: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x3556ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x3556f0: 0x2484db74  addiu       $a0, $a0, -0x248C
    ctx->pc = 0x3556f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294957940));
    // 0x3556f4: 0x2442db76  addiu       $v0, $v0, -0x248A
    ctx->pc = 0x3556f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957942));
    // 0x3556f8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3556f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3556fc: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x3556fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x355700: 0x94830000  lhu         $v1, 0x0($a0)
    ctx->pc = 0x355700u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x355704: 0x94420000  lhu         $v0, 0x0($v0)
    ctx->pc = 0x355704u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x355708: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x355708u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x35570c: 0x28420002  slti        $v0, $v0, 0x2
    ctx->pc = 0x35570cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x355710: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x355710u;
    {
        const bool branch_taken_0x355710 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x355710) {
            ctx->pc = 0x355734u;
            goto label_355734;
        }
    }
    ctx->pc = 0x355718u;
    // 0x355718: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x355718u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
    // 0x35571c: 0x3c0301e0  lui         $v1, 0x1E0
    ctx->pc = 0x35571cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)480 << 16));
    // 0x355720: 0x9044bed2  lbu         $a0, -0x412E($v0)
    ctx->pc = 0x355720u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294950610)));
    // 0x355724: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x355724u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x355728: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x355728u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x35572c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x35572Cu;
    {
        const bool branch_taken_0x35572c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x355730u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x35572Cu;
            // 0x355730: 0xa064bed2  sb          $a0, -0x412E($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 4294950610), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35572c) {
            ctx->pc = 0x355738u;
            goto label_355738;
        }
    }
    ctx->pc = 0x355734u;
label_355734:
    // 0x355734: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x355734u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_355738:
    // 0x355738: 0x3e00008  jr          $ra
    ctx->pc = 0x355738u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x355740u;
label_355740:
    // 0x355740: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x355740u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
    // 0x355744: 0x9049bed2  lbu         $t1, -0x412E($v0)
    ctx->pc = 0x355744u;
    SET_GPR_U32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294950610)));
    // 0x355748: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x355748u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x35574c: 0x11220041  beq         $t1, $v0, . + 4 + (0x41 << 2)
    ctx->pc = 0x35574Cu;
    {
        const bool branch_taken_0x35574c = (GPR_U64(ctx, 9) == GPR_U64(ctx, 2));
        if (branch_taken_0x35574c) {
            ctx->pc = 0x355854u;
            goto label_355854;
        }
    }
    ctx->pc = 0x355754u;
    // 0x355754: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x355754u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x355758: 0x11220008  beq         $t1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x355758u;
    {
        const bool branch_taken_0x355758 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 2));
        if (branch_taken_0x355758) {
            ctx->pc = 0x35577Cu;
            goto label_35577c;
        }
    }
    ctx->pc = 0x355760u;
    // 0x355760: 0x51200003  beql        $t1, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x355760u;
    {
        const bool branch_taken_0x355760 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        if (branch_taken_0x355760) {
            ctx->pc = 0x355764u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x355760u;
            // 0x355764: 0x25230001  addiu       $v1, $t1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x355770u;
            goto label_355770;
        }
    }
    ctx->pc = 0x355768u;
    // 0x355768: 0x1000004d  b           . + 4 + (0x4D << 2)
    ctx->pc = 0x355768u;
    {
        const bool branch_taken_0x355768 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x35576Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x355768u;
            // 0x35576c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x355768) {
            ctx->pc = 0x3558A0u;
            goto label_3558a0;
        }
    }
    ctx->pc = 0x355770u;
label_355770:
    // 0x355770: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x355770u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
    // 0x355774: 0x10000049  b           . + 4 + (0x49 << 2)
    ctx->pc = 0x355774u;
    {
        const bool branch_taken_0x355774 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x355778u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x355774u;
            // 0x355778: 0xa043bed2  sb          $v1, -0x412E($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 4294950610), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x355774) {
            ctx->pc = 0x35589Cu;
            goto label_35589c;
        }
    }
    ctx->pc = 0x35577Cu;
label_35577c:
    // 0x35577c: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x35577cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
    // 0x355780: 0x3c05009c  lui         $a1, 0x9C
    ctx->pc = 0x355780u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)156 << 16));
    // 0x355784: 0x90489720  lbu         $t0, -0x68E0($v0)
    ctx->pc = 0x355784u;
    SET_GPR_U32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294940448)));
    // 0x355788: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x355788u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x35578c: 0x24a5db8c  addiu       $a1, $a1, -0x2474
    ctx->pc = 0x35578cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294957964));
    // 0x355790: 0x240600e0  addiu       $a2, $zero, 0xE0
    ctx->pc = 0x355790u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 224));
    // 0x355794: 0x2463db88  addiu       $v1, $v1, -0x2478
    ctx->pc = 0x355794u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294957960));
    // 0x355798: 0x24040230  addiu       $a0, $zero, 0x230
    ctx->pc = 0x355798u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 560));
    // 0x35579c: 0x838c0  sll         $a3, $t0, 3
    ctx->pc = 0x35579cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
    // 0x3557a0: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x3557a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x3557a4: 0xe83821  addu        $a3, $a3, $t0
    ctx->pc = 0x3557a4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
    // 0x3557a8: 0x2442db5c  addiu       $v0, $v0, -0x24A4
    ctx->pc = 0x3557a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957916));
    // 0x3557ac: 0x738c0  sll         $a3, $a3, 3
    ctx->pc = 0x3557acu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x3557b0: 0xe83821  addu        $a3, $a3, $t0
    ctx->pc = 0x3557b0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
    // 0x3557b4: 0x738c0  sll         $a3, $a3, 3
    ctx->pc = 0x3557b4u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x3557b8: 0xa72821  addu        $a1, $a1, $a3
    ctx->pc = 0x3557b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x3557bc: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x3557bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x3557c0: 0xaca60000  sw          $a2, 0x0($a1)
    ctx->pc = 0x3557c0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 6));
    // 0x3557c4: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x3557c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x3557c8: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x3557c8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x3557cc: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x3557ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3557d0: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x3557d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x3557d4: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x3557D4u;
    {
        const bool branch_taken_0x3557d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3557d4) {
            ctx->pc = 0x355824u;
            goto label_355824;
        }
    }
    ctx->pc = 0x3557DCu;
    // 0x3557dc: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x3557dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
    // 0x3557e0: 0x25250001  addiu       $a1, $t1, 0x1
    ctx->pc = 0x3557e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x3557e4: 0x8c46bedc  lw          $a2, -0x4124($v0)
    ctx->pc = 0x3557e4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950620)));
    // 0x3557e8: 0x3c0301e0  lui         $v1, 0x1E0
    ctx->pc = 0x3557e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)480 << 16));
    // 0x3557ec: 0xa065bed2  sb          $a1, -0x412E($v1)
    ctx->pc = 0x3557ecu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4294950610), (uint8_t)GPR_U32(ctx, 5));
    // 0x3557f0: 0x3c0401e0  lui         $a0, 0x1E0
    ctx->pc = 0x3557f0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)480 << 16));
    // 0x3557f4: 0x3c0201d5  lui         $v0, 0x1D5
    ctx->pc = 0x3557f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)469 << 16));
    // 0x3557f8: 0x34c52000  ori         $a1, $a2, 0x2000
    ctx->pc = 0x3557f8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)8192);
    // 0x3557fc: 0x8c43d918  lw          $v1, -0x26E8($v0)
    ctx->pc = 0x3557fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294957336)));
    // 0x355800: 0x30620080  andi        $v0, $v1, 0x80
    ctx->pc = 0x355800u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)128);
    // 0x355804: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x355804u;
    {
        const bool branch_taken_0x355804 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x355808u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x355804u;
            // 0x355808: 0xac85bedc  sw          $a1, -0x4124($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4294950620), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x355804) {
            ctx->pc = 0x35581Cu;
            goto label_35581c;
        }
    }
    ctx->pc = 0x35580Cu;
    // 0x35580c: 0x3c020004  lui         $v0, 0x4
    ctx->pc = 0x35580cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4 << 16));
    // 0x355810: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x355810u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x355814: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x355814u;
    {
        const bool branch_taken_0x355814 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x355814) {
            ctx->pc = 0x355824u;
            goto label_355824;
        }
    }
    ctx->pc = 0x35581Cu;
label_35581c:
    // 0x35581c: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x35581Cu;
    {
        const bool branch_taken_0x35581c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x355820u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x35581Cu;
            // 0x355820: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35581c) {
            ctx->pc = 0x3558A0u;
            goto label_3558a0;
        }
    }
    ctx->pc = 0x355824u;
label_355824:
    // 0x355824: 0x3c0201d5  lui         $v0, 0x1D5
    ctx->pc = 0x355824u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)469 << 16));
    // 0x355828: 0x8c43d918  lw          $v1, -0x26E8($v0)
    ctx->pc = 0x355828u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294957336)));
    // 0x35582c: 0x30620080  andi        $v0, $v1, 0x80
    ctx->pc = 0x35582cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)128);
    // 0x355830: 0x5440001b  bnel        $v0, $zero, . + 4 + (0x1B << 2)
    ctx->pc = 0x355830u;
    {
        const bool branch_taken_0x355830 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x355830) {
            ctx->pc = 0x355834u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x355830u;
            // 0x355834: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3558A0u;
            goto label_3558a0;
        }
    }
    ctx->pc = 0x355838u;
    // 0x355838: 0x3c020004  lui         $v0, 0x4
    ctx->pc = 0x355838u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4 << 16));
    // 0x35583c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x35583cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x355840: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x355840u;
    {
        const bool branch_taken_0x355840 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x355840) {
            ctx->pc = 0x35589Cu;
            goto label_35589c;
        }
    }
    ctx->pc = 0x355848u;
    // 0x355848: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x355848u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x35584c: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x35584Cu;
    {
        const bool branch_taken_0x35584c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x35584c) {
            ctx->pc = 0x3558A0u;
            goto label_3558a0;
        }
    }
    ctx->pc = 0x355854u;
label_355854:
    // 0x355854: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x355854u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
    // 0x355858: 0x8c42bedc  lw          $v0, -0x4124($v0)
    ctx->pc = 0x355858u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950620)));
    // 0x35585c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x35585Cu;
    {
        const bool branch_taken_0x35585c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x35585c) {
            ctx->pc = 0x35586Cu;
            goto label_35586c;
        }
    }
    ctx->pc = 0x355864u;
    // 0x355864: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x355864u;
    {
        const bool branch_taken_0x355864 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x355868u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x355864u;
            // 0x355868: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x355864) {
            ctx->pc = 0x3558A0u;
            goto label_3558a0;
        }
    }
    ctx->pc = 0x35586Cu;
label_35586c:
    // 0x35586c: 0x3c0201d5  lui         $v0, 0x1D5
    ctx->pc = 0x35586cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)469 << 16));
    // 0x355870: 0x8c43d918  lw          $v1, -0x26E8($v0)
    ctx->pc = 0x355870u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294957336)));
    // 0x355874: 0x30620080  andi        $v0, $v1, 0x80
    ctx->pc = 0x355874u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)128);
    // 0x355878: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x355878u;
    {
        const bool branch_taken_0x355878 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x355878) {
            ctx->pc = 0x35587Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x355878u;
            // 0x35587c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3558A0u;
            goto label_3558a0;
        }
    }
    ctx->pc = 0x355880u;
    // 0x355880: 0x3c020004  lui         $v0, 0x4
    ctx->pc = 0x355880u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4 << 16));
    // 0x355884: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x355884u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x355888: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x355888u;
    {
        const bool branch_taken_0x355888 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x355888) {
            ctx->pc = 0x35589Cu;
            goto label_35589c;
        }
    }
    ctx->pc = 0x355890u;
    // 0x355890: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x355890u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x355894: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x355894u;
    {
        const bool branch_taken_0x355894 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x355894) {
            ctx->pc = 0x3558A0u;
            goto label_3558a0;
        }
    }
    ctx->pc = 0x35589Cu;
label_35589c:
    // 0x35589c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x35589cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3558a0:
    // 0x3558a0: 0x3e00008  jr          $ra
    ctx->pc = 0x3558A0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3558A8u;
    // 0x3558a8: 0x0  nop
    ctx->pc = 0x3558a8u;
    // NOP
    // 0x3558ac: 0x0  nop
    ctx->pc = 0x3558acu;
    // NOP
label_3558b0:
    // 0x3558b0: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x3558b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
    // 0x3558b4: 0x9049bed2  lbu         $t1, -0x412E($v0)
    ctx->pc = 0x3558b4u;
    SET_GPR_U32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294950610)));
    // 0x3558b8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x3558b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3558bc: 0x11220041  beq         $t1, $v0, . + 4 + (0x41 << 2)
    ctx->pc = 0x3558BCu;
    {
        const bool branch_taken_0x3558bc = (GPR_U64(ctx, 9) == GPR_U64(ctx, 2));
        if (branch_taken_0x3558bc) {
            ctx->pc = 0x3559C4u;
            goto label_3559c4;
        }
    }
    ctx->pc = 0x3558C4u;
    // 0x3558c4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3558c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3558c8: 0x11220008  beq         $t1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x3558C8u;
    {
        const bool branch_taken_0x3558c8 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 2));
        if (branch_taken_0x3558c8) {
            ctx->pc = 0x3558ECu;
            goto label_3558ec;
        }
    }
    ctx->pc = 0x3558D0u;
    // 0x3558d0: 0x51200003  beql        $t1, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x3558D0u;
    {
        const bool branch_taken_0x3558d0 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        if (branch_taken_0x3558d0) {
            ctx->pc = 0x3558D4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3558D0u;
            // 0x3558d4: 0x25230001  addiu       $v1, $t1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3558E0u;
            goto label_3558e0;
        }
    }
    ctx->pc = 0x3558D8u;
    // 0x3558d8: 0x1000004d  b           . + 4 + (0x4D << 2)
    ctx->pc = 0x3558D8u;
    {
        const bool branch_taken_0x3558d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3558DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3558D8u;
            // 0x3558dc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3558d8) {
            ctx->pc = 0x355A10u;
            goto label_355a10;
        }
    }
    ctx->pc = 0x3558E0u;
label_3558e0:
    // 0x3558e0: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x3558e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
    // 0x3558e4: 0x10000049  b           . + 4 + (0x49 << 2)
    ctx->pc = 0x3558E4u;
    {
        const bool branch_taken_0x3558e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3558E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3558E4u;
            // 0x3558e8: 0xa043bed2  sb          $v1, -0x412E($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 4294950610), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3558e4) {
            ctx->pc = 0x355A0Cu;
            goto label_355a0c;
        }
    }
    ctx->pc = 0x3558ECu;
label_3558ec:
    // 0x3558ec: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x3558ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
    // 0x3558f0: 0x3c05009c  lui         $a1, 0x9C
    ctx->pc = 0x3558f0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)156 << 16));
    // 0x3558f4: 0x90489720  lbu         $t0, -0x68E0($v0)
    ctx->pc = 0x3558f4u;
    SET_GPR_U32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294940448)));
    // 0x3558f8: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x3558f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x3558fc: 0x24a5db8c  addiu       $a1, $a1, -0x2474
    ctx->pc = 0x3558fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294957964));
    // 0x355900: 0x240600e0  addiu       $a2, $zero, 0xE0
    ctx->pc = 0x355900u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 224));
    // 0x355904: 0x2463db88  addiu       $v1, $v1, -0x2478
    ctx->pc = 0x355904u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294957960));
    // 0x355908: 0x24040230  addiu       $a0, $zero, 0x230
    ctx->pc = 0x355908u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 560));
    // 0x35590c: 0x838c0  sll         $a3, $t0, 3
    ctx->pc = 0x35590cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
    // 0x355910: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x355910u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x355914: 0xe83821  addu        $a3, $a3, $t0
    ctx->pc = 0x355914u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
    // 0x355918: 0x2442db5c  addiu       $v0, $v0, -0x24A4
    ctx->pc = 0x355918u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957916));
    // 0x35591c: 0x738c0  sll         $a3, $a3, 3
    ctx->pc = 0x35591cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x355920: 0xe83821  addu        $a3, $a3, $t0
    ctx->pc = 0x355920u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
    // 0x355924: 0x738c0  sll         $a3, $a3, 3
    ctx->pc = 0x355924u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x355928: 0xa72821  addu        $a1, $a1, $a3
    ctx->pc = 0x355928u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x35592c: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x35592cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x355930: 0xaca60000  sw          $a2, 0x0($a1)
    ctx->pc = 0x355930u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 6));
    // 0x355934: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x355934u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x355938: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x355938u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x35593c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x35593cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x355940: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x355940u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x355944: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x355944u;
    {
        const bool branch_taken_0x355944 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x355944) {
            ctx->pc = 0x355994u;
            goto label_355994;
        }
    }
    ctx->pc = 0x35594Cu;
    // 0x35594c: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x35594cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
    // 0x355950: 0x25250001  addiu       $a1, $t1, 0x1
    ctx->pc = 0x355950u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x355954: 0x8c46bedc  lw          $a2, -0x4124($v0)
    ctx->pc = 0x355954u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950620)));
    // 0x355958: 0x3c0301e0  lui         $v1, 0x1E0
    ctx->pc = 0x355958u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)480 << 16));
    // 0x35595c: 0xa065bed2  sb          $a1, -0x412E($v1)
    ctx->pc = 0x35595cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4294950610), (uint8_t)GPR_U32(ctx, 5));
    // 0x355960: 0x3c0401e0  lui         $a0, 0x1E0
    ctx->pc = 0x355960u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)480 << 16));
    // 0x355964: 0x3c0201d5  lui         $v0, 0x1D5
    ctx->pc = 0x355964u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)469 << 16));
    // 0x355968: 0x34c54000  ori         $a1, $a2, 0x4000
    ctx->pc = 0x355968u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)16384);
    // 0x35596c: 0x8c43d918  lw          $v1, -0x26E8($v0)
    ctx->pc = 0x35596cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294957336)));
    // 0x355970: 0x30620080  andi        $v0, $v1, 0x80
    ctx->pc = 0x355970u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)128);
    // 0x355974: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x355974u;
    {
        const bool branch_taken_0x355974 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x355978u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x355974u;
            // 0x355978: 0xac85bedc  sw          $a1, -0x4124($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4294950620), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x355974) {
            ctx->pc = 0x35598Cu;
            goto label_35598c;
        }
    }
    ctx->pc = 0x35597Cu;
    // 0x35597c: 0x3c020004  lui         $v0, 0x4
    ctx->pc = 0x35597cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4 << 16));
    // 0x355980: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x355980u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x355984: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x355984u;
    {
        const bool branch_taken_0x355984 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x355984) {
            ctx->pc = 0x355994u;
            goto label_355994;
        }
    }
    ctx->pc = 0x35598Cu;
label_35598c:
    // 0x35598c: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x35598Cu;
    {
        const bool branch_taken_0x35598c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x355990u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x35598Cu;
            // 0x355990: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35598c) {
            ctx->pc = 0x355A10u;
            goto label_355a10;
        }
    }
    ctx->pc = 0x355994u;
label_355994:
    // 0x355994: 0x3c0201d5  lui         $v0, 0x1D5
    ctx->pc = 0x355994u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)469 << 16));
    // 0x355998: 0x8c43d918  lw          $v1, -0x26E8($v0)
    ctx->pc = 0x355998u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294957336)));
    // 0x35599c: 0x30620080  andi        $v0, $v1, 0x80
    ctx->pc = 0x35599cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)128);
    // 0x3559a0: 0x5440001b  bnel        $v0, $zero, . + 4 + (0x1B << 2)
    ctx->pc = 0x3559A0u;
    {
        const bool branch_taken_0x3559a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3559a0) {
            ctx->pc = 0x3559A4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3559A0u;
            // 0x3559a4: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x355A10u;
            goto label_355a10;
        }
    }
    ctx->pc = 0x3559A8u;
    // 0x3559a8: 0x3c020004  lui         $v0, 0x4
    ctx->pc = 0x3559a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4 << 16));
    // 0x3559ac: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x3559acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x3559b0: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x3559B0u;
    {
        const bool branch_taken_0x3559b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3559b0) {
            ctx->pc = 0x355A0Cu;
            goto label_355a0c;
        }
    }
    ctx->pc = 0x3559B8u;
    // 0x3559b8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x3559b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3559bc: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x3559BCu;
    {
        const bool branch_taken_0x3559bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3559bc) {
            ctx->pc = 0x355A10u;
            goto label_355a10;
        }
    }
    ctx->pc = 0x3559C4u;
label_3559c4:
    // 0x3559c4: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x3559c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
    // 0x3559c8: 0x8c42bedc  lw          $v0, -0x4124($v0)
    ctx->pc = 0x3559c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950620)));
    // 0x3559cc: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3559CCu;
    {
        const bool branch_taken_0x3559cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3559cc) {
            ctx->pc = 0x3559DCu;
            goto label_3559dc;
        }
    }
    ctx->pc = 0x3559D4u;
    // 0x3559d4: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x3559D4u;
    {
        const bool branch_taken_0x3559d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3559D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3559D4u;
            // 0x3559d8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3559d4) {
            ctx->pc = 0x355A10u;
            goto label_355a10;
        }
    }
    ctx->pc = 0x3559DCu;
label_3559dc:
    // 0x3559dc: 0x3c0201d5  lui         $v0, 0x1D5
    ctx->pc = 0x3559dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)469 << 16));
    // 0x3559e0: 0x8c43d918  lw          $v1, -0x26E8($v0)
    ctx->pc = 0x3559e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294957336)));
    // 0x3559e4: 0x30620080  andi        $v0, $v1, 0x80
    ctx->pc = 0x3559e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)128);
    // 0x3559e8: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x3559E8u;
    {
        const bool branch_taken_0x3559e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3559e8) {
            ctx->pc = 0x3559ECu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3559E8u;
            // 0x3559ec: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x355A10u;
            goto label_355a10;
        }
    }
    ctx->pc = 0x3559F0u;
    // 0x3559f0: 0x3c020004  lui         $v0, 0x4
    ctx->pc = 0x3559f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4 << 16));
    // 0x3559f4: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x3559f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x3559f8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3559F8u;
    {
        const bool branch_taken_0x3559f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3559f8) {
            ctx->pc = 0x355A0Cu;
            goto label_355a0c;
        }
    }
    ctx->pc = 0x355A00u;
    // 0x355a00: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x355a00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x355a04: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x355A04u;
    {
        const bool branch_taken_0x355a04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x355a04) {
            ctx->pc = 0x355A10u;
            goto label_355a10;
        }
    }
    ctx->pc = 0x355A0Cu;
label_355a0c:
    // 0x355a0c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x355a0cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_355a10:
    // 0x355a10: 0x3e00008  jr          $ra
    ctx->pc = 0x355A10u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x355A18u;
    // 0x355a18: 0x0  nop
    ctx->pc = 0x355a18u;
    // NOP
    // 0x355a1c: 0x0  nop
    ctx->pc = 0x355a1cu;
    // NOP
label_355a20:
    // 0x355a20: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x355a20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
    // 0x355a24: 0x9043bed2  lbu         $v1, -0x412E($v0)
    ctx->pc = 0x355a24u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294950610)));
    // 0x355a28: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x355a28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x355a2c: 0x10620018  beq         $v1, $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x355A2Cu;
    {
        const bool branch_taken_0x355a2c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x355a2c) {
            ctx->pc = 0x355A90u;
            goto label_355a90;
        }
    }
    ctx->pc = 0x355A34u;
    // 0x355a34: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x355A34u;
    {
        const bool branch_taken_0x355a34 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x355a34) {
            ctx->pc = 0x355A44u;
            goto label_355a44;
        }
    }
    ctx->pc = 0x355A3Cu;
    // 0x355a3c: 0x1000003b  b           . + 4 + (0x3B << 2)
    ctx->pc = 0x355A3Cu;
    {
        const bool branch_taken_0x355a3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x355A40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x355A3Cu;
            // 0x355a40: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x355a3c) {
            ctx->pc = 0x355B2Cu;
            goto label_355b2c;
        }
    }
    ctx->pc = 0x355A44u;
label_355a44:
    // 0x355a44: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x355a44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
    // 0x355a48: 0x24640001  addiu       $a0, $v1, 0x1
    ctx->pc = 0x355a48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x355a4c: 0x8c46bee4  lw          $a2, -0x411C($v0)
    ctx->pc = 0x355a4cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950628)));
    // 0x355a50: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x355a50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x355a54: 0x3c0301e0  lui         $v1, 0x1E0
    ctx->pc = 0x355a54u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)480 << 16));
    // 0x355a58: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x355a58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
    // 0x355a5c: 0x34c61000  ori         $a2, $a2, 0x1000
    ctx->pc = 0x355a5cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)4096);
    // 0x355a60: 0xac45bee8  sw          $a1, -0x4118($v0)
    ctx->pc = 0x355a60u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294950632), GPR_U32(ctx, 5));
    // 0x355a64: 0x2405008f  addiu       $a1, $zero, 0x8F
    ctx->pc = 0x355a64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 143));
    // 0x355a68: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x355a68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
    // 0x355a6c: 0xa045bf14  sb          $a1, -0x40EC($v0)
    ctx->pc = 0x355a6cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294950676), (uint8_t)GPR_U32(ctx, 5));
    // 0x355a70: 0x34c20040  ori         $v0, $a2, 0x40
    ctx->pc = 0x355a70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)64);
    // 0x355a74: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x355a74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x355a78: 0xac62bee4  sw          $v0, -0x411C($v1)
    ctx->pc = 0x355a78u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294950628), GPR_U32(ctx, 2));
    // 0x355a7c: 0x3c0301e0  lui         $v1, 0x1E0
    ctx->pc = 0x355a7cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)480 << 16));
    // 0x355a80: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x355a80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
    // 0x355a84: 0xa065bed9  sb          $a1, -0x4127($v1)
    ctx->pc = 0x355a84u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4294950617), (uint8_t)GPR_U32(ctx, 5));
    // 0x355a88: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x355A88u;
    {
        const bool branch_taken_0x355a88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x355A8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x355A88u;
            // 0x355a8c: 0xa044bed2  sb          $a0, -0x412E($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 4294950610), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x355a88) {
            ctx->pc = 0x355B28u;
            goto label_355b28;
        }
    }
    ctx->pc = 0x355A90u;
label_355a90:
    // 0x355a90: 0x3c0301e0  lui         $v1, 0x1E0
    ctx->pc = 0x355a90u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)480 << 16));
    // 0x355a94: 0x3c040001  lui         $a0, 0x1
    ctx->pc = 0x355a94u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1 << 16));
    // 0x355a98: 0x8c66bedc  lw          $a2, -0x4124($v1)
    ctx->pc = 0x355a98u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294950620)));
    // 0x355a9c: 0xc41824  and         $v1, $a2, $a0
    ctx->pc = 0x355a9cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & GPR_U64(ctx, 4));
    // 0x355aa0: 0x10600015  beqz        $v1, . + 4 + (0x15 << 2)
    ctx->pc = 0x355AA0u;
    {
        const bool branch_taken_0x355aa0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x355aa0) {
            ctx->pc = 0x355AF8u;
            goto label_355af8;
        }
    }
    ctx->pc = 0x355AA8u;
    // 0x355aa8: 0x3c03fffe  lui         $v1, 0xFFFE
    ctx->pc = 0x355aa8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65534 << 16));
    // 0x355aac: 0x3c0401e0  lui         $a0, 0x1E0
    ctx->pc = 0x355aacu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)480 << 16));
    // 0x355ab0: 0x3465ffff  ori         $a1, $v1, 0xFFFF
    ctx->pc = 0x355ab0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x355ab4: 0xc53024  and         $a2, $a2, $a1
    ctx->pc = 0x355ab4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 5));
    // 0x355ab8: 0x3c0301e0  lui         $v1, 0x1E0
    ctx->pc = 0x355ab8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)480 << 16));
    // 0x355abc: 0x8c65bef4  lw          $a1, -0x410C($v1)
    ctx->pc = 0x355abcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294950644)));
    // 0x355ac0: 0xac86bedc  sw          $a2, -0x4124($a0)
    ctx->pc = 0x355ac0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4294950620), GPR_U32(ctx, 6));
    // 0x355ac4: 0x3c0301e0  lui         $v1, 0x1E0
    ctx->pc = 0x355ac4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)480 << 16));
    // 0x355ac8: 0x24a40001  addiu       $a0, $a1, 0x1
    ctx->pc = 0x355ac8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x355acc: 0xac64bef4  sw          $a0, -0x410C($v1)
    ctx->pc = 0x355accu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294950644), GPR_U32(ctx, 4));
    // 0x355ad0: 0x2883000a  slti        $v1, $a0, 0xA
    ctx->pc = 0x355ad0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x355ad4: 0x14600008  bnez        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x355AD4u;
    {
        const bool branch_taken_0x355ad4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x355ad4) {
            ctx->pc = 0x355AF8u;
            goto label_355af8;
        }
    }
    ctx->pc = 0x355ADCu;
    // 0x355adc: 0x24040800  addiu       $a0, $zero, 0x800
    ctx->pc = 0x355adcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x355ae0: 0x3c0301e0  lui         $v1, 0x1E0
    ctx->pc = 0x355ae0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)480 << 16));
    // 0x355ae4: 0xa464bf02  sh          $a0, -0x40FE($v1)
    ctx->pc = 0x355ae4u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4294950658), (uint16_t)GPR_U32(ctx, 4));
    // 0x355ae8: 0x240400ff  addiu       $a0, $zero, 0xFF
    ctx->pc = 0x355ae8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x355aec: 0x3c0301e0  lui         $v1, 0x1E0
    ctx->pc = 0x355aecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)480 << 16));
    // 0x355af0: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x355AF0u;
    {
        const bool branch_taken_0x355af0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x355AF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x355AF0u;
            // 0x355af4: 0xa064bed2  sb          $a0, -0x412E($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 4294950610), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x355af0) {
            ctx->pc = 0x355B2Cu;
            goto label_355b2c;
        }
    }
    ctx->pc = 0x355AF8u;
label_355af8:
    // 0x355af8: 0x3c0201d5  lui         $v0, 0x1D5
    ctx->pc = 0x355af8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)469 << 16));
    // 0x355afc: 0x8c43d918  lw          $v1, -0x26E8($v0)
    ctx->pc = 0x355afcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294957336)));
    // 0x355b00: 0x30620080  andi        $v0, $v1, 0x80
    ctx->pc = 0x355b00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)128);
    // 0x355b04: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x355B04u;
    {
        const bool branch_taken_0x355b04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x355b04) {
            ctx->pc = 0x355B08u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x355B04u;
            // 0x355b08: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x355B2Cu;
            goto label_355b2c;
        }
    }
    ctx->pc = 0x355B0Cu;
    // 0x355b0c: 0x3c020004  lui         $v0, 0x4
    ctx->pc = 0x355b0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4 << 16));
    // 0x355b10: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x355b10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x355b14: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x355B14u;
    {
        const bool branch_taken_0x355b14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x355b14) {
            ctx->pc = 0x355B28u;
            goto label_355b28;
        }
    }
    ctx->pc = 0x355B1Cu;
    // 0x355b1c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x355b1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x355b20: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x355B20u;
    {
        const bool branch_taken_0x355b20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x355b20) {
            ctx->pc = 0x355B2Cu;
            goto label_355b2c;
        }
    }
    ctx->pc = 0x355B28u;
label_355b28:
    // 0x355b28: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x355b28u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_355b2c:
    // 0x355b2c: 0x3e00008  jr          $ra
    ctx->pc = 0x355B2Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x355B34u;
    // 0x355b34: 0x0  nop
    ctx->pc = 0x355b34u;
    // NOP
    // 0x355b38: 0x0  nop
    ctx->pc = 0x355b38u;
    // NOP
    // 0x355b3c: 0x0  nop
    ctx->pc = 0x355b3cu;
    // NOP
label_355b40:
    // 0x355b40: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x355b40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x355b44: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x355b44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
    // 0x355b48: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x355b48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x355b4c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x355b4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x355b50: 0x9043bed2  lbu         $v1, -0x412E($v0)
    ctx->pc = 0x355b50u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294950610)));
    // 0x355b54: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x355b54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x355b58: 0x1062001c  beq         $v1, $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x355B58u;
    {
        const bool branch_taken_0x355b58 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x355b58) {
            ctx->pc = 0x355BCCu;
            goto label_355bcc;
        }
    }
    ctx->pc = 0x355B60u;
    // 0x355b60: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x355b60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x355b64: 0x5062000e  beql        $v1, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x355B64u;
    {
        const bool branch_taken_0x355b64 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x355b64) {
            ctx->pc = 0x355B68u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x355B64u;
            // 0x355b68: 0x24050063  addiu       $a1, $zero, 0x63 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 99));
        ctx->in_delay_slot = false;
            ctx->pc = 0x355BA0u;
            goto label_355ba0;
        }
    }
    ctx->pc = 0x355B6Cu;
    // 0x355b6c: 0x50600003  beql        $v1, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x355B6Cu;
    {
        const bool branch_taken_0x355b6c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x355b6c) {
            ctx->pc = 0x355B70u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x355B6Cu;
            // 0x355b70: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
            ctx->pc = 0x355B7Cu;
            goto label_355b7c;
        }
    }
    ctx->pc = 0x355B74u;
    // 0x355b74: 0x1000002d  b           . + 4 + (0x2D << 2)
    ctx->pc = 0x355B74u;
    {
        const bool branch_taken_0x355b74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x355B78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x355B74u;
            // 0x355b78: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x355b74) {
            ctx->pc = 0x355C2Cu;
            goto label_355c2c;
        }
    }
    ctx->pc = 0x355B7Cu;
label_355b7c:
    // 0x355b7c: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x355b7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
    // 0x355b80: 0xa045bf15  sb          $a1, -0x40EB($v0)
    ctx->pc = 0x355b80u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294950677), (uint8_t)GPR_U32(ctx, 5));
    // 0x355b84: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x355b84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x355b88: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x355b88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
    // 0x355b8c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x355b8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x355b90: 0xa044bf16  sb          $a0, -0x40EA($v0)
    ctx->pc = 0x355b90u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294950678), (uint8_t)GPR_U32(ctx, 4));
    // 0x355b94: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x355b94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
    // 0x355b98: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x355B98u;
    {
        const bool branch_taken_0x355b98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x355B9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x355B98u;
            // 0x355b9c: 0xa043bed2  sb          $v1, -0x412E($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 4294950610), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x355b98) {
            ctx->pc = 0x355C28u;
            goto label_355c28;
        }
    }
    ctx->pc = 0x355BA0u;
label_355ba0:
    // 0x355ba0: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x355ba0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x355ba4: 0xa445da60  sh          $a1, -0x25A0($v0)
    ctx->pc = 0x355ba4u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4294957664), (uint16_t)GPR_U32(ctx, 5));
    // 0x355ba8: 0x2404005a  addiu       $a0, $zero, 0x5A
    ctx->pc = 0x355ba8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 90));
    // 0x355bac: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x355bacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x355bb0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x355bb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x355bb4: 0xa444da64  sh          $a0, -0x259C($v0)
    ctx->pc = 0x355bb4u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4294957668), (uint16_t)GPR_U32(ctx, 4));
    // 0x355bb8: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x355bb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x355bbc: 0xa444da62  sh          $a0, -0x259E($v0)
    ctx->pc = 0x355bbcu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4294957666), (uint16_t)GPR_U32(ctx, 4));
    // 0x355bc0: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x355bc0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
    // 0x355bc4: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x355BC4u;
    {
        const bool branch_taken_0x355bc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x355BC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x355BC4u;
            // 0x355bc8: 0xa043bed2  sb          $v1, -0x412E($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 4294950610), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x355bc4) {
            ctx->pc = 0x355C28u;
            goto label_355c28;
        }
    }
    ctx->pc = 0x355BCCu;
label_355bcc:
    // 0x355bcc: 0x3c0301e0  lui         $v1, 0x1E0
    ctx->pc = 0x355bccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)480 << 16));
    // 0x355bd0: 0x3c0401e0  lui         $a0, 0x1E0
    ctx->pc = 0x355bd0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)480 << 16));
    // 0x355bd4: 0x8c66bee4  lw          $a2, -0x411C($v1)
    ctx->pc = 0x355bd4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294950628)));
    // 0x355bd8: 0x3c0301d5  lui         $v1, 0x1D5
    ctx->pc = 0x355bd8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)469 << 16));
    // 0x355bdc: 0x34c68000  ori         $a2, $a2, 0x8000
    ctx->pc = 0x355bdcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)32768);
    // 0x355be0: 0x8c65d918  lw          $a1, -0x26E8($v1)
    ctx->pc = 0x355be0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294957336)));
    // 0x355be4: 0x3c030004  lui         $v1, 0x4
    ctx->pc = 0x355be4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4 << 16));
    // 0x355be8: 0xa31824  and         $v1, $a1, $v1
    ctx->pc = 0x355be8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x355bec: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x355BECu;
    {
        const bool branch_taken_0x355bec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x355BF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x355BECu;
            // 0x355bf0: 0xac86bee4  sw          $a2, -0x411C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4294950628), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x355bec) {
            ctx->pc = 0x355C14u;
            goto label_355c14;
        }
    }
    ctx->pc = 0x355BF4u;
    // 0x355bf4: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x355bf4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
    // 0x355bf8: 0xc0c4534  jal         func_3114D0
    ctx->pc = 0x355BF8u;
    SET_GPR_U32(ctx, 31, 0x355C00u);
    ctx->pc = 0x355BFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x355BF8u;
            // 0x355bfc: 0x90509720  lbu         $s0, -0x68E0($v0) (Delay Slot)
        SET_GPR_U32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294940448)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3114D0u;
    if (runtime->hasFunction(0x3114D0u)) {
        auto targetFn = runtime->lookupFunction(0x3114D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x355C00u; }
        if (ctx->pc != 0x355C00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003114D0_0x3114d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x355C00u; }
        if (ctx->pc != 0x355C00u) { return; }
    }
    ctx->pc = 0x355C00u;
label_355c00:
    // 0x355c00: 0x56020002  bnel        $s0, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x355C00u;
    {
        const bool branch_taken_0x355c00 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x355c00) {
            ctx->pc = 0x355C04u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x355C00u;
            // 0x355c04: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x355C0Cu;
            goto label_355c0c;
        }
    }
    ctx->pc = 0x355C08u;
    // 0x355c08: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x355c08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_355c0c:
    // 0x355c0c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x355C0Cu;
    {
        const bool branch_taken_0x355c0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x355C10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x355C0Cu;
            // 0x355c10: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x355c0c) {
            ctx->pc = 0x355C30u;
            goto label_355c30;
        }
    }
    ctx->pc = 0x355C14u;
label_355c14:
    // 0x355c14: 0x30a30080  andi        $v1, $a1, 0x80
    ctx->pc = 0x355c14u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)128);
    // 0x355c18: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x355C18u;
    {
        const bool branch_taken_0x355c18 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x355c18) {
            ctx->pc = 0x355C28u;
            goto label_355c28;
        }
    }
    ctx->pc = 0x355C20u;
    // 0x355c20: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x355C20u;
    {
        const bool branch_taken_0x355c20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x355c20) {
            ctx->pc = 0x355C2Cu;
            goto label_355c2c;
        }
    }
    ctx->pc = 0x355C28u;
label_355c28:
    // 0x355c28: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x355c28u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_355c2c:
    // 0x355c2c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x355c2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_355c30:
    // 0x355c30: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x355c30u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x355c34: 0x3e00008  jr          $ra
    ctx->pc = 0x355C34u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x355C38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x355C34u;
            // 0x355c38: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x355C3Cu;
    // 0x355c3c: 0x0  nop
    ctx->pc = 0x355c3cu;
    // NOP
label_355c40:
    // 0x355c40: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x355c40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x355c44: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x355c44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
    // 0x355c48: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x355c48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x355c4c: 0x9043bed2  lbu         $v1, -0x412E($v0)
    ctx->pc = 0x355c4cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294950610)));
    // 0x355c50: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x355c50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x355c54: 0x5062000d  beql        $v1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x355C54u;
    {
        const bool branch_taken_0x355c54 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x355c54) {
            ctx->pc = 0x355C58u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x355C54u;
            // 0x355c58: 0x24030008  addiu       $v1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
            ctx->pc = 0x355C8Cu;
            goto label_355c8c;
        }
    }
    ctx->pc = 0x355C5Cu;
    // 0x355c5c: 0x50600003  beql        $v1, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x355C5Cu;
    {
        const bool branch_taken_0x355c5c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x355c5c) {
            ctx->pc = 0x355C60u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x355C5Cu;
            // 0x355c60: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
            ctx->pc = 0x355C6Cu;
            goto label_355c6c;
        }
    }
    ctx->pc = 0x355C64u;
    // 0x355c64: 0x10000034  b           . + 4 + (0x34 << 2)
    ctx->pc = 0x355C64u;
    {
        const bool branch_taken_0x355c64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x355C68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x355C64u;
            // 0x355c68: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x355c64) {
            ctx->pc = 0x355D38u;
            goto label_355d38;
        }
    }
    ctx->pc = 0x355C6Cu;
label_355c6c:
    // 0x355c6c: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x355c6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
    // 0x355c70: 0x24640001  addiu       $a0, $v1, 0x1
    ctx->pc = 0x355c70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x355c74: 0xa045bed9  sb          $a1, -0x4127($v0)
    ctx->pc = 0x355c74u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294950617), (uint8_t)GPR_U32(ctx, 5));
    // 0x355c78: 0x3c0301e0  lui         $v1, 0x1E0
    ctx->pc = 0x355c78u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)480 << 16));
    // 0x355c7c: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x355c7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
    // 0x355c80: 0xa044bed2  sb          $a0, -0x412E($v0)
    ctx->pc = 0x355c80u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294950610), (uint8_t)GPR_U32(ctx, 4));
    // 0x355c84: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x355C84u;
    {
        const bool branch_taken_0x355c84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x355C88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x355C84u;
            // 0x355c88: 0xac60bef4  sw          $zero, -0x410C($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294950644), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x355c84) {
            ctx->pc = 0x355D34u;
            goto label_355d34;
        }
    }
    ctx->pc = 0x355C8Cu;
label_355c8c:
    // 0x355c8c: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x355c8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
    // 0x355c90: 0xac43bee8  sw          $v1, -0x4118($v0)
    ctx->pc = 0x355c90u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294950632), GPR_U32(ctx, 3));
    // 0x355c94: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x355c94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
    // 0x355c98: 0x90429720  lbu         $v0, -0x68E0($v0)
    ctx->pc = 0x355c98u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294940448)));
    // 0x355c9c: 0xc062810  jal         func_18A040
    ctx->pc = 0x355C9Cu;
    SET_GPR_U32(ctx, 31, 0x355CA4u);
    ctx->pc = 0x355CA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x355C9Cu;
            // 0x355ca0: 0x38440001  xori        $a0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
    ctx->pc = 0x18A040u;
    if (runtime->hasFunction(0x18A040u)) {
        auto targetFn = runtime->lookupFunction(0x18A040u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x355CA4u; }
        if (ctx->pc != 0x355CA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0018A040_0x18a040(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x355CA4u; }
        if (ctx->pc != 0x355CA4u) { return; }
    }
    ctx->pc = 0x355CA4u;
label_355ca4:
    // 0x355ca4: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x355ca4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
    // 0x355ca8: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x355ca8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x355cac: 0x90449720  lbu         $a0, -0x68E0($v0)
    ctx->pc = 0x355cacu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294940448)));
    // 0x355cb0: 0x2463db5c  addiu       $v1, $v1, -0x24A4
    ctx->pc = 0x355cb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294957916));
    // 0x355cb4: 0x410c0  sll         $v0, $a0, 3
    ctx->pc = 0x355cb4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x355cb8: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x355cb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x355cbc: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x355cbcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x355cc0: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x355cc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x355cc4: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x355cc4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x355cc8: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x355cc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x355ccc: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x355cccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x355cd0: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x355cd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x355cd4: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x355CD4u;
    {
        const bool branch_taken_0x355cd4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x355cd4) {
            ctx->pc = 0x355D04u;
            goto label_355d04;
        }
    }
    ctx->pc = 0x355CDCu;
    // 0x355cdc: 0x3c0301e0  lui         $v1, 0x1E0
    ctx->pc = 0x355cdcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)480 << 16));
    // 0x355ce0: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x355ce0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
    // 0x355ce4: 0x8c63bef4  lw          $v1, -0x410C($v1)
    ctx->pc = 0x355ce4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294950644)));
    // 0x355ce8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x355ce8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x355cec: 0xac43bef4  sw          $v1, -0x410C($v0)
    ctx->pc = 0x355cecu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294950644), GPR_U32(ctx, 3));
    // 0x355cf0: 0x28620005  slti        $v0, $v1, 0x5
    ctx->pc = 0x355cf0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x355cf4: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x355CF4u;
    {
        const bool branch_taken_0x355cf4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x355cf4) {
            ctx->pc = 0x355D04u;
            goto label_355d04;
        }
    }
    ctx->pc = 0x355CFCu;
    // 0x355cfc: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x355CFCu;
    {
        const bool branch_taken_0x355cfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x355D00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x355CFCu;
            // 0x355d00: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x355cfc) {
            ctx->pc = 0x355D38u;
            goto label_355d38;
        }
    }
    ctx->pc = 0x355D04u;
label_355d04:
    // 0x355d04: 0x3c0201d5  lui         $v0, 0x1D5
    ctx->pc = 0x355d04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)469 << 16));
    // 0x355d08: 0x8c43d918  lw          $v1, -0x26E8($v0)
    ctx->pc = 0x355d08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294957336)));
    // 0x355d0c: 0x30620080  andi        $v0, $v1, 0x80
    ctx->pc = 0x355d0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)128);
    // 0x355d10: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x355D10u;
    {
        const bool branch_taken_0x355d10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x355d10) {
            ctx->pc = 0x355D14u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x355D10u;
            // 0x355d14: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x355D38u;
            goto label_355d38;
        }
    }
    ctx->pc = 0x355D18u;
    // 0x355d18: 0x3c020004  lui         $v0, 0x4
    ctx->pc = 0x355d18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4 << 16));
    // 0x355d1c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x355d1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x355d20: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x355D20u;
    {
        const bool branch_taken_0x355d20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x355d20) {
            ctx->pc = 0x355D34u;
            goto label_355d34;
        }
    }
    ctx->pc = 0x355D28u;
    // 0x355d28: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x355d28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x355d2c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x355D2Cu;
    {
        const bool branch_taken_0x355d2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x355d2c) {
            ctx->pc = 0x355D38u;
            goto label_355d38;
        }
    }
    ctx->pc = 0x355D34u;
label_355d34:
    // 0x355d34: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x355d34u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_355d38:
    // 0x355d38: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x355d38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x355d3c: 0x3e00008  jr          $ra
    ctx->pc = 0x355D3Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x355D40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x355D3Cu;
            // 0x355d40: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x355D44u;
    // 0x355d44: 0x0  nop
    ctx->pc = 0x355d44u;
    // NOP
    // 0x355d48: 0x0  nop
    ctx->pc = 0x355d48u;
    // NOP
    // 0x355d4c: 0x0  nop
    ctx->pc = 0x355d4cu;
    // NOP
label_355d50:
    // 0x355d50: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x355d50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x355d54: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x355d54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
    // 0x355d58: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x355d58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x355d5c: 0x9043bed2  lbu         $v1, -0x412E($v0)
    ctx->pc = 0x355d5cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294950610)));
    // 0x355d60: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x355d60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x355d64: 0x1062000d  beq         $v1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x355D64u;
    {
        const bool branch_taken_0x355d64 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x355d64) {
            ctx->pc = 0x355D9Cu;
            goto label_355d9c;
        }
    }
    ctx->pc = 0x355D6Cu;
    // 0x355d6c: 0x50600003  beql        $v1, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x355D6Cu;
    {
        const bool branch_taken_0x355d6c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x355d6c) {
            ctx->pc = 0x355D70u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x355D6Cu;
            // 0x355d70: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
            ctx->pc = 0x355D7Cu;
            goto label_355d7c;
        }
    }
    ctx->pc = 0x355D74u;
    // 0x355d74: 0x10000050  b           . + 4 + (0x50 << 2)
    ctx->pc = 0x355D74u;
    {
        const bool branch_taken_0x355d74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x355D78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x355D74u;
            // 0x355d78: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x355d74) {
            ctx->pc = 0x355EB8u;
            goto label_355eb8;
        }
    }
    ctx->pc = 0x355D7Cu;
label_355d7c:
    // 0x355d7c: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x355d7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
    // 0x355d80: 0x24640001  addiu       $a0, $v1, 0x1
    ctx->pc = 0x355d80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x355d84: 0xa045bed9  sb          $a1, -0x4127($v0)
    ctx->pc = 0x355d84u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294950617), (uint8_t)GPR_U32(ctx, 5));
    // 0x355d88: 0x3c0301e0  lui         $v1, 0x1E0
    ctx->pc = 0x355d88u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)480 << 16));
    // 0x355d8c: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x355d8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
    // 0x355d90: 0xa044bed2  sb          $a0, -0x412E($v0)
    ctx->pc = 0x355d90u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294950610), (uint8_t)GPR_U32(ctx, 4));
    // 0x355d94: 0x10000047  b           . + 4 + (0x47 << 2)
    ctx->pc = 0x355D94u;
    {
        const bool branch_taken_0x355d94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x355D98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x355D94u;
            // 0x355d98: 0xac60bef4  sw          $zero, -0x410C($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294950644), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x355d94) {
            ctx->pc = 0x355EB4u;
            goto label_355eb4;
        }
    }
    ctx->pc = 0x355D9Cu;
label_355d9c:
    // 0x355d9c: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x355d9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
    // 0x355da0: 0x3c05009c  lui         $a1, 0x9C
    ctx->pc = 0x355da0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)156 << 16));
    // 0x355da4: 0x90449720  lbu         $a0, -0x68E0($v0)
    ctx->pc = 0x355da4u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294940448)));
    // 0x355da8: 0x24a5db88  addiu       $a1, $a1, -0x2478
    ctx->pc = 0x355da8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294957960));
    // 0x355dac: 0x24060230  addiu       $a2, $zero, 0x230
    ctx->pc = 0x355dacu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 560));
    // 0x355db0: 0x240300e0  addiu       $v1, $zero, 0xE0
    ctx->pc = 0x355db0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 224));
    // 0x355db4: 0x438c0  sll         $a3, $a0, 3
    ctx->pc = 0x355db4u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x355db8: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x355db8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x355dbc: 0xe43821  addu        $a3, $a3, $a0
    ctx->pc = 0x355dbcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
    // 0x355dc0: 0x2442db8c  addiu       $v0, $v0, -0x2474
    ctx->pc = 0x355dc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957964));
    // 0x355dc4: 0x738c0  sll         $a3, $a3, 3
    ctx->pc = 0x355dc4u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x355dc8: 0xe43821  addu        $a3, $a3, $a0
    ctx->pc = 0x355dc8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
    // 0x355dcc: 0x738c0  sll         $a3, $a3, 3
    ctx->pc = 0x355dccu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x355dd0: 0xa72821  addu        $a1, $a1, $a3
    ctx->pc = 0x355dd0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x355dd4: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x355dd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x355dd8: 0xaca60000  sw          $a2, 0x0($a1)
    ctx->pc = 0x355dd8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 6));
    // 0x355ddc: 0xc062810  jal         func_18A040
    ctx->pc = 0x355DDCu;
    SET_GPR_U32(ctx, 31, 0x355DE4u);
    ctx->pc = 0x355DE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x355DDCu;
            // 0x355de0: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18A040u;
    if (runtime->hasFunction(0x18A040u)) {
        auto targetFn = runtime->lookupFunction(0x18A040u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x355DE4u; }
        if (ctx->pc != 0x355DE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0018A040_0x18a040(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x355DE4u; }
        if (ctx->pc != 0x355DE4u) { return; }
    }
    ctx->pc = 0x355DE4u;
label_355de4:
    // 0x355de4: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x355de4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
    // 0x355de8: 0x8c44bedc  lw          $a0, -0x4124($v0)
    ctx->pc = 0x355de8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950620)));
    // 0x355dec: 0x30820002  andi        $v0, $a0, 0x2
    ctx->pc = 0x355decu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)2);
    // 0x355df0: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x355DF0u;
    {
        const bool branch_taken_0x355df0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x355df0) {
            ctx->pc = 0x355E30u;
            goto label_355e30;
        }
    }
    ctx->pc = 0x355DF8u;
    // 0x355df8: 0x2403fffd  addiu       $v1, $zero, -0x3
    ctx->pc = 0x355df8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    // 0x355dfc: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x355dfcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
    // 0x355e00: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x355e00u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x355e04: 0x3c0301e0  lui         $v1, 0x1E0
    ctx->pc = 0x355e04u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)480 << 16));
    // 0x355e08: 0xac44bedc  sw          $a0, -0x4124($v0)
    ctx->pc = 0x355e08u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294950620), GPR_U32(ctx, 4));
    // 0x355e0c: 0x8c63bef4  lw          $v1, -0x410C($v1)
    ctx->pc = 0x355e0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294950644)));
    // 0x355e10: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x355e10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
    // 0x355e14: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x355e14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x355e18: 0xac43bef4  sw          $v1, -0x410C($v0)
    ctx->pc = 0x355e18u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294950644), GPR_U32(ctx, 3));
    // 0x355e1c: 0x28620005  slti        $v0, $v1, 0x5
    ctx->pc = 0x355e1cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x355e20: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x355E20u;
    {
        const bool branch_taken_0x355e20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x355e20) {
            ctx->pc = 0x355E30u;
            goto label_355e30;
        }
    }
    ctx->pc = 0x355E28u;
    // 0x355e28: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x355E28u;
    {
        const bool branch_taken_0x355e28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x355E2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x355E28u;
            // 0x355e2c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x355e28) {
            ctx->pc = 0x355EB8u;
            goto label_355eb8;
        }
    }
    ctx->pc = 0x355E30u;
label_355e30:
    // 0x355e30: 0x3c0201d5  lui         $v0, 0x1D5
    ctx->pc = 0x355e30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)469 << 16));
    // 0x355e34: 0x8c43d918  lw          $v1, -0x26E8($v0)
    ctx->pc = 0x355e34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294957336)));
    // 0x355e38: 0x30620080  andi        $v0, $v1, 0x80
    ctx->pc = 0x355e38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)128);
    // 0x355e3c: 0x5440001e  bnel        $v0, $zero, . + 4 + (0x1E << 2)
    ctx->pc = 0x355E3Cu;
    {
        const bool branch_taken_0x355e3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x355e3c) {
            ctx->pc = 0x355E40u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x355E3Cu;
            // 0x355e40: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x355EB8u;
            goto label_355eb8;
        }
    }
    ctx->pc = 0x355E44u;
    // 0x355e44: 0x3c020004  lui         $v0, 0x4
    ctx->pc = 0x355e44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4 << 16));
    // 0x355e48: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x355e48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x355e4c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x355E4Cu;
    {
        const bool branch_taken_0x355e4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x355e4c) {
            ctx->pc = 0x355E60u;
            goto label_355e60;
        }
    }
    ctx->pc = 0x355E54u;
    // 0x355e54: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x355e54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x355e58: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x355E58u;
    {
        const bool branch_taken_0x355e58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x355e58) {
            ctx->pc = 0x355EB8u;
            goto label_355eb8;
        }
    }
    ctx->pc = 0x355E60u;
label_355e60:
    // 0x355e60: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x355e60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
    // 0x355e64: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x355e64u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x355e68: 0x90459720  lbu         $a1, -0x68E0($v0)
    ctx->pc = 0x355e68u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294940448)));
    // 0x355e6c: 0x2463db74  addiu       $v1, $v1, -0x248C
    ctx->pc = 0x355e6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294957940));
    // 0x355e70: 0x520c0  sll         $a0, $a1, 3
    ctx->pc = 0x355e70u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x355e74: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x355e74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x355e78: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x355e78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x355e7c: 0x2442db76  addiu       $v0, $v0, -0x248A
    ctx->pc = 0x355e7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957942));
    // 0x355e80: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x355e80u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x355e84: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x355e84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x355e88: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x355e88u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x355e8c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x355e8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x355e90: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x355e90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x355e94: 0x94630000  lhu         $v1, 0x0($v1)
    ctx->pc = 0x355e94u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x355e98: 0x94420000  lhu         $v0, 0x0($v0)
    ctx->pc = 0x355e98u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x355e9c: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x355e9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x355ea0: 0x28420002  slti        $v0, $v0, 0x2
    ctx->pc = 0x355ea0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x355ea4: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x355EA4u;
    {
        const bool branch_taken_0x355ea4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x355ea4) {
            ctx->pc = 0x355EB4u;
            goto label_355eb4;
        }
    }
    ctx->pc = 0x355EACu;
    // 0x355eac: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x355EACu;
    {
        const bool branch_taken_0x355eac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x355EB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x355EACu;
            // 0x355eb0: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x355eac) {
            ctx->pc = 0x355EB8u;
            goto label_355eb8;
        }
    }
    ctx->pc = 0x355EB4u;
label_355eb4:
    // 0x355eb4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x355eb4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_355eb8:
    // 0x355eb8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x355eb8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x355ebc: 0x3e00008  jr          $ra
    ctx->pc = 0x355EBCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x355EC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x355EBCu;
            // 0x355ec0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x355EC4u;
    // 0x355ec4: 0x0  nop
    ctx->pc = 0x355ec4u;
    // NOP
    // 0x355ec8: 0x0  nop
    ctx->pc = 0x355ec8u;
    // NOP
    // 0x355ecc: 0x0  nop
    ctx->pc = 0x355eccu;
    // NOP
label_355ed0:
    // 0x355ed0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x355ed0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x355ed4: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x355ed4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
    // 0x355ed8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x355ed8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x355edc: 0x9043bed2  lbu         $v1, -0x412E($v0)
    ctx->pc = 0x355edcu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294950610)));
    // 0x355ee0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x355ee0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x355ee4: 0x1062001a  beq         $v1, $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x355EE4u;
    {
        const bool branch_taken_0x355ee4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x355ee4) {
            ctx->pc = 0x355F50u;
            goto label_355f50;
        }
    }
    ctx->pc = 0x355EECu;
    // 0x355eec: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x355EECu;
    {
        const bool branch_taken_0x355eec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x355eec) {
            ctx->pc = 0x355EFCu;
            goto label_355efc;
        }
    }
    ctx->pc = 0x355EF4u;
    // 0x355ef4: 0x1000003f  b           . + 4 + (0x3F << 2)
    ctx->pc = 0x355EF4u;
    {
        const bool branch_taken_0x355ef4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x355EF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x355EF4u;
            // 0x355ef8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x355ef4) {
            ctx->pc = 0x355FF4u;
            goto label_355ff4;
        }
    }
    ctx->pc = 0x355EFCu;
label_355efc:
    // 0x355efc: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x355efcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
    // 0x355f00: 0x24640001  addiu       $a0, $v1, 0x1
    ctx->pc = 0x355f00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x355f04: 0x8c46bee4  lw          $a2, -0x411C($v0)
    ctx->pc = 0x355f04u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950628)));
    // 0x355f08: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x355f08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x355f0c: 0x3c0301e0  lui         $v1, 0x1E0
    ctx->pc = 0x355f0cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)480 << 16));
    // 0x355f10: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x355f10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
    // 0x355f14: 0x34c60040  ori         $a2, $a2, 0x40
    ctx->pc = 0x355f14u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)64);
    // 0x355f18: 0xac45bee8  sw          $a1, -0x4118($v0)
    ctx->pc = 0x355f18u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294950632), GPR_U32(ctx, 5));
    // 0x355f1c: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x355f1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x355f20: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x355f20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
    // 0x355f24: 0xac66bee4  sw          $a2, -0x411C($v1)
    ctx->pc = 0x355f24u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294950628), GPR_U32(ctx, 6));
    // 0x355f28: 0xa445bf0a  sh          $a1, -0x40F6($v0)
    ctx->pc = 0x355f28u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4294950666), (uint16_t)GPR_U32(ctx, 5));
    // 0x355f2c: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x355f2cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x355f30: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x355f30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x355f34: 0xa465da64  sh          $a1, -0x259C($v1)
    ctx->pc = 0x355f34u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4294957668), (uint16_t)GPR_U32(ctx, 5));
    // 0x355f38: 0xa445da62  sh          $a1, -0x259E($v0)
    ctx->pc = 0x355f38u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4294957666), (uint16_t)GPR_U32(ctx, 5));
    // 0x355f3c: 0x3c0301e0  lui         $v1, 0x1E0
    ctx->pc = 0x355f3cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)480 << 16));
    // 0x355f40: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x355f40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
    // 0x355f44: 0xac60bef4  sw          $zero, -0x410C($v1)
    ctx->pc = 0x355f44u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294950644), GPR_U32(ctx, 0));
    // 0x355f48: 0x10000029  b           . + 4 + (0x29 << 2)
    ctx->pc = 0x355F48u;
    {
        const bool branch_taken_0x355f48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x355F4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x355F48u;
            // 0x355f4c: 0xa044bed2  sb          $a0, -0x412E($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 4294950610), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x355f48) {
            ctx->pc = 0x355FF0u;
            goto label_355ff0;
        }
    }
    ctx->pc = 0x355F50u;
label_355f50:
    // 0x355f50: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x355f50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
    // 0x355f54: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x355f54u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x355f58: 0x90449720  lbu         $a0, -0x68E0($v0)
    ctx->pc = 0x355f58u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294940448)));
    // 0x355f5c: 0x2463db8c  addiu       $v1, $v1, -0x2474
    ctx->pc = 0x355f5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294957964));
    // 0x355f60: 0x240500e0  addiu       $a1, $zero, 0xE0
    ctx->pc = 0x355f60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 224));
    // 0x355f64: 0x38840001  xori        $a0, $a0, 0x1
    ctx->pc = 0x355f64u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)1);
    // 0x355f68: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x355f68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x355f6c: 0x430c0  sll         $a2, $a0, 3
    ctx->pc = 0x355f6cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x355f70: 0x2442db5c  addiu       $v0, $v0, -0x24A4
    ctx->pc = 0x355f70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957916));
    // 0x355f74: 0xc43021  addu        $a2, $a2, $a0
    ctx->pc = 0x355f74u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x355f78: 0x630c0  sll         $a2, $a2, 3
    ctx->pc = 0x355f78u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x355f7c: 0xc43021  addu        $a2, $a2, $a0
    ctx->pc = 0x355f7cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x355f80: 0x630c0  sll         $a2, $a2, 3
    ctx->pc = 0x355f80u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x355f84: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x355f84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x355f88: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x355f88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x355f8c: 0xac650000  sw          $a1, 0x0($v1)
    ctx->pc = 0x355f8cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
    // 0x355f90: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x355f90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x355f94: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x355f94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x355f98: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x355F98u;
    {
        const bool branch_taken_0x355f98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x355f98) {
            ctx->pc = 0x355FBCu;
            goto label_355fbc;
        }
    }
    ctx->pc = 0x355FA0u;
    // 0x355fa0: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x355fa0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
    // 0x355fa4: 0x3c0301e0  lui         $v1, 0x1E0
    ctx->pc = 0x355fa4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)480 << 16));
    // 0x355fa8: 0x8c44bee0  lw          $a0, -0x4120($v0)
    ctx->pc = 0x355fa8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950624)));
    // 0x355fac: 0x34840020  ori         $a0, $a0, 0x20
    ctx->pc = 0x355facu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)32);
    // 0x355fb0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x355fb0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x355fb4: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x355FB4u;
    {
        const bool branch_taken_0x355fb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x355FB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x355FB4u;
            // 0x355fb8: 0xac64bee0  sw          $a0, -0x4120($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294950624), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x355fb4) {
            ctx->pc = 0x355FF4u;
            goto label_355ff4;
        }
    }
    ctx->pc = 0x355FBCu;
label_355fbc:
    // 0x355fbc: 0xc062810  jal         func_18A040
    ctx->pc = 0x355FBCu;
    SET_GPR_U32(ctx, 31, 0x355FC4u);
    ctx->pc = 0x18A040u;
    if (runtime->hasFunction(0x18A040u)) {
        auto targetFn = runtime->lookupFunction(0x18A040u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x355FC4u; }
        if (ctx->pc != 0x355FC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0018A040_0x18a040(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x355FC4u; }
        if (ctx->pc != 0x355FC4u) { return; }
    }
    ctx->pc = 0x355FC4u;
label_355fc4:
    // 0x355fc4: 0x3c0301e0  lui         $v1, 0x1E0
    ctx->pc = 0x355fc4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)480 << 16));
    // 0x355fc8: 0x8c63bee0  lw          $v1, -0x4120($v1)
    ctx->pc = 0x355fc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294950624)));
    // 0x355fcc: 0x30630020  andi        $v1, $v1, 0x20
    ctx->pc = 0x355fccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32);
    // 0x355fd0: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x355FD0u;
    {
        const bool branch_taken_0x355fd0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x355fd0) {
            ctx->pc = 0x355FF0u;
            goto label_355ff0;
        }
    }
    ctx->pc = 0x355FD8u;
    // 0x355fd8: 0x8c420494  lw          $v0, 0x494($v0)
    ctx->pc = 0x355fd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1172)));
    // 0x355fdc: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x355fdcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x355fe0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x355FE0u;
    {
        const bool branch_taken_0x355fe0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x355fe0) {
            ctx->pc = 0x355FF0u;
            goto label_355ff0;
        }
    }
    ctx->pc = 0x355FE8u;
    // 0x355fe8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x355FE8u;
    {
        const bool branch_taken_0x355fe8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x355FECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x355FE8u;
            // 0x355fec: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x355fe8) {
            ctx->pc = 0x355FF4u;
            goto label_355ff4;
        }
    }
    ctx->pc = 0x355FF0u;
label_355ff0:
    // 0x355ff0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x355ff0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_355ff4:
    // 0x355ff4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x355ff4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x355ff8: 0x3e00008  jr          $ra
    ctx->pc = 0x355FF8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x355FFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x355FF8u;
            // 0x355ffc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x356000u;
label_356000:
    // 0x356000: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x356000u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x356004: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x356004u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
    // 0x356008: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x356008u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x35600c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x35600cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x356010: 0x9044bed2  lbu         $a0, -0x412E($v0)
    ctx->pc = 0x356010u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294950610)));
    // 0x356014: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x356014u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x356018: 0x1082002a  beq         $a0, $v0, . + 4 + (0x2A << 2)
    ctx->pc = 0x356018u;
    {
        const bool branch_taken_0x356018 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x356018) {
            ctx->pc = 0x3560C4u;
            goto label_3560c4;
        }
    }
    ctx->pc = 0x356020u;
    // 0x356020: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x356020u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x356024: 0x10830016  beq         $a0, $v1, . + 4 + (0x16 << 2)
    ctx->pc = 0x356024u;
    {
        const bool branch_taken_0x356024 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x356024) {
            ctx->pc = 0x356080u;
            goto label_356080;
        }
    }
    ctx->pc = 0x35602Cu;
    // 0x35602c: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x35602Cu;
    {
        const bool branch_taken_0x35602c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x35602c) {
            ctx->pc = 0x35603Cu;
            goto label_35603c;
        }
    }
    ctx->pc = 0x356034u;
    // 0x356034: 0x10000053  b           . + 4 + (0x53 << 2)
    ctx->pc = 0x356034u;
    {
        const bool branch_taken_0x356034 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x356038u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x356034u;
            // 0x356038: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x356034) {
            ctx->pc = 0x356184u;
            goto label_356184;
        }
    }
    ctx->pc = 0x35603Cu;
label_35603c:
    // 0x35603c: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x35603cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
    // 0x356040: 0x24850001  addiu       $a1, $a0, 0x1
    ctx->pc = 0x356040u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x356044: 0x8c48bee4  lw          $t0, -0x411C($v0)
    ctx->pc = 0x356044u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950628)));
    // 0x356048: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x356048u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x35604c: 0x3c0401e0  lui         $a0, 0x1E0
    ctx->pc = 0x35604cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)480 << 16));
    // 0x356050: 0x3c0301e0  lui         $v1, 0x1E0
    ctx->pc = 0x356050u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)480 << 16));
    // 0x356054: 0x3c02003e  lui         $v0, 0x3E
    ctx->pc = 0x356054u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)62 << 16));
    // 0x356058: 0x35080100  ori         $t0, $t0, 0x100
    ctx->pc = 0x356058u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)256);
    // 0x35605c: 0x9047986b  lbu         $a3, -0x6795($v0)
    ctx->pc = 0x35605cu;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294940779)));
    // 0x356060: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x356060u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
    // 0x356064: 0xa067befc  sb          $a3, -0x4104($v1)
    ctx->pc = 0x356064u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4294950652), (uint8_t)GPR_U32(ctx, 7));
    // 0x356068: 0xa446bf0a  sh          $a2, -0x40F6($v0)
    ctx->pc = 0x356068u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4294950666), (uint16_t)GPR_U32(ctx, 6));
    // 0x35606c: 0x35020200  ori         $v0, $t0, 0x200
    ctx->pc = 0x35606cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)512);
    // 0x356070: 0xac82bee4  sw          $v0, -0x411C($a0)
    ctx->pc = 0x356070u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4294950628), GPR_U32(ctx, 2));
    // 0x356074: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x356074u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
    // 0x356078: 0x10000041  b           . + 4 + (0x41 << 2)
    ctx->pc = 0x356078u;
    {
        const bool branch_taken_0x356078 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x35607Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x356078u;
            // 0x35607c: 0xa045bed2  sb          $a1, -0x412E($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 4294950610), (uint8_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x356078) {
            ctx->pc = 0x356180u;
            goto label_356180;
        }
    }
    ctx->pc = 0x356080u;
label_356080:
    // 0x356080: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x356080u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
    // 0x356084: 0x3c054416  lui         $a1, 0x4416
    ctx->pc = 0x356084u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)17430 << 16));
    // 0x356088: 0xa043bed8  sb          $v1, -0x4128($v0)
    ctx->pc = 0x356088u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294950616), (uint8_t)GPR_U32(ctx, 3));
    // 0x35608c: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x35608cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x356090: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x356090u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
    // 0x356094: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x356094u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x356098: 0xac45bed4  sw          $a1, -0x412C($v0)
    ctx->pc = 0x356098u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294950612), GPR_U32(ctx, 5));
    // 0x35609c: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x35609cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
    // 0x3560a0: 0xa043beda  sb          $v1, -0x4126($v0)
    ctx->pc = 0x3560a0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294950618), (uint8_t)GPR_U32(ctx, 3));
    // 0x3560a4: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x3560a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
    // 0x3560a8: 0x3c0301e0  lui         $v1, 0x1E0
    ctx->pc = 0x3560a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)480 << 16));
    // 0x3560ac: 0x8c45bee4  lw          $a1, -0x411C($v0)
    ctx->pc = 0x3560acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950628)));
    // 0x3560b0: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x3560b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
    // 0x3560b4: 0xa044bed2  sb          $a0, -0x412E($v0)
    ctx->pc = 0x3560b4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294950610), (uint8_t)GPR_U32(ctx, 4));
    // 0x3560b8: 0x34a20100  ori         $v0, $a1, 0x100
    ctx->pc = 0x3560b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)256);
    // 0x3560bc: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x3560BCu;
    {
        const bool branch_taken_0x3560bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3560C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3560BCu;
            // 0x3560c0: 0xac62bee4  sw          $v0, -0x411C($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294950628), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3560bc) {
            ctx->pc = 0x356180u;
            goto label_356180;
        }
    }
    ctx->pc = 0x3560C4u;
label_3560c4:
    // 0x3560c4: 0x3c03009f  lui         $v1, 0x9F
    ctx->pc = 0x3560c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)159 << 16));
    // 0x3560c8: 0x90639738  lbu         $v1, -0x68C8($v1)
    ctx->pc = 0x3560c8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294940472)));
    // 0x3560cc: 0x1460002c  bnez        $v1, . + 4 + (0x2C << 2)
    ctx->pc = 0x3560CCu;
    {
        const bool branch_taken_0x3560cc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3560cc) {
            ctx->pc = 0x356180u;
            goto label_356180;
        }
    }
    ctx->pc = 0x3560D4u;
    // 0x3560d4: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x3560d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x3560d8: 0x24040303  addiu       $a0, $zero, 0x303
    ctx->pc = 0x3560d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 771));
    // 0x3560dc: 0x9463dab0  lhu         $v1, -0x2550($v1)
    ctx->pc = 0x3560dcu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4294957744)));
    // 0x3560e0: 0x14640010  bne         $v1, $a0, . + 4 + (0x10 << 2)
    ctx->pc = 0x3560E0u;
    {
        const bool branch_taken_0x3560e0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x3560e0) {
            ctx->pc = 0x356124u;
            goto label_356124;
        }
    }
    ctx->pc = 0x3560E8u;
    // 0x3560e8: 0x3c0301e0  lui         $v1, 0x1E0
    ctx->pc = 0x3560e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)480 << 16));
    // 0x3560ec: 0x3c043c88  lui         $a0, 0x3C88
    ctx->pc = 0x3560ecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)15496 << 16));
    // 0x3560f0: 0xc462bed4  lwc1        $f2, -0x412C($v1)
    ctx->pc = 0x3560f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294950612)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3560f4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3560f4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3560f8: 0x34838889  ori         $v1, $a0, 0x8889
    ctx->pc = 0x3560f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)34953);
    // 0x3560fc: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x3560fcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x356100: 0x0  nop
    ctx->pc = 0x356100u;
    // NOP
    // 0x356104: 0x46011041  sub.s       $f1, $f2, $f1
    ctx->pc = 0x356104u;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x356108: 0x3c0301e0  lui         $v1, 0x1E0
    ctx->pc = 0x356108u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)480 << 16));
    // 0x35610c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x35610cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x356110: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x356110u;
    {
        const bool branch_taken_0x356110 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x356114u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x356110u;
            // 0x356114: 0xe461bed4  swc1        $f1, -0x412C($v1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4294950612), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x356110) {
            ctx->pc = 0x356124u;
            goto label_356124;
        }
    }
    ctx->pc = 0x356118u;
    // 0x356118: 0x3c0301e0  lui         $v1, 0x1E0
    ctx->pc = 0x356118u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)480 << 16));
    // 0x35611c: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x35611Cu;
    {
        const bool branch_taken_0x35611c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x356120u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x35611Cu;
            // 0x356120: 0xe460bed4  swc1        $f0, -0x412C($v1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4294950612), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x35611c) {
            ctx->pc = 0x356184u;
            goto label_356184;
        }
    }
    ctx->pc = 0x356124u;
label_356124:
    // 0x356124: 0x3c0201d5  lui         $v0, 0x1D5
    ctx->pc = 0x356124u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)469 << 16));
    // 0x356128: 0x8c42d918  lw          $v0, -0x26E8($v0)
    ctx->pc = 0x356128u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294957336)));
    // 0x35612c: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x35612cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
    // 0x356130: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x356130u;
    {
        const bool branch_taken_0x356130 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x356130) {
            ctx->pc = 0x356180u;
            goto label_356180;
        }
    }
    ctx->pc = 0x356138u;
    // 0x356138: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x356138u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
    // 0x35613c: 0xc0c4534  jal         func_3114D0
    ctx->pc = 0x35613Cu;
    SET_GPR_U32(ctx, 31, 0x356144u);
    ctx->pc = 0x356140u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x35613Cu;
            // 0x356140: 0x90509720  lbu         $s0, -0x68E0($v0) (Delay Slot)
        SET_GPR_U32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294940448)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3114D0u;
    if (runtime->hasFunction(0x3114D0u)) {
        auto targetFn = runtime->lookupFunction(0x3114D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x356144u; }
        if (ctx->pc != 0x356144u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003114D0_0x3114d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x356144u; }
        if (ctx->pc != 0x356144u) { return; }
    }
    ctx->pc = 0x356144u;
label_356144:
    // 0x356144: 0x5602000f  bnel        $s0, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x356144u;
    {
        const bool branch_taken_0x356144 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x356144) {
            ctx->pc = 0x356148u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x356144u;
            // 0x356148: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x356184u;
            goto label_356184;
        }
    }
    ctx->pc = 0x35614Cu;
    // 0x35614c: 0x3c0301e0  lui         $v1, 0x1E0
    ctx->pc = 0x35614cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)480 << 16));
    // 0x356150: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x356150u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
    // 0x356154: 0x9063beda  lbu         $v1, -0x4126($v1)
    ctx->pc = 0x356154u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294950618)));
    // 0x356158: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x356158u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x35615c: 0xa043beda  sb          $v1, -0x4126($v0)
    ctx->pc = 0x35615cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294950618), (uint8_t)GPR_U32(ctx, 3));
    // 0x356160: 0x306200ff  andi        $v0, $v1, 0xFF
    ctx->pc = 0x356160u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x356164: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x356164u;
    {
        const bool branch_taken_0x356164 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x356164) {
            ctx->pc = 0x356168u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x356164u;
            // 0x356168: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x356184u;
            goto label_356184;
        }
    }
    ctx->pc = 0x35616Cu;
    // 0x35616c: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x35616cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x356170: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x356170u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
    // 0x356174: 0xa443bf02  sh          $v1, -0x40FE($v0)
    ctx->pc = 0x356174u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4294950658), (uint16_t)GPR_U32(ctx, 3));
    // 0x356178: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x356178u;
    {
        const bool branch_taken_0x356178 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x35617Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x356178u;
            // 0x35617c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x356178) {
            ctx->pc = 0x356184u;
            goto label_356184;
        }
    }
    ctx->pc = 0x356180u;
label_356180:
    // 0x356180: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x356180u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_356184:
    // 0x356184: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x356184u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x356188: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x356188u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35618c: 0x3e00008  jr          $ra
    ctx->pc = 0x35618Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x356190u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x35618Cu;
            // 0x356190: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x356194u;
    // 0x356194: 0x0  nop
    ctx->pc = 0x356194u;
    // NOP
    // 0x356198: 0x0  nop
    ctx->pc = 0x356198u;
    // NOP
    // 0x35619c: 0x0  nop
    ctx->pc = 0x35619cu;
    // NOP
label_3561a0:
    // 0x3561a0: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x3561a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
    // 0x3561a4: 0x904abed2  lbu         $t2, -0x412E($v0)
    ctx->pc = 0x3561a4u;
    SET_GPR_U32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294950610)));
    // 0x3561a8: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x3561a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3561ac: 0x1142008c  beq         $t2, $v0, . + 4 + (0x8C << 2)
    ctx->pc = 0x3561ACu;
    {
        const bool branch_taken_0x3561ac = (GPR_U64(ctx, 10) == GPR_U64(ctx, 2));
        if (branch_taken_0x3561ac) {
            ctx->pc = 0x3563E0u;
            goto label_3563e0;
        }
    }
    ctx->pc = 0x3561B4u;
    // 0x3561b4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x3561b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3561b8: 0x1142004f  beq         $t2, $v0, . + 4 + (0x4F << 2)
    ctx->pc = 0x3561B8u;
    {
        const bool branch_taken_0x3561b8 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 2));
        if (branch_taken_0x3561b8) {
            ctx->pc = 0x3562F8u;
            goto label_3562f8;
        }
    }
    ctx->pc = 0x3561C0u;
    // 0x3561c0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3561c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3561c4: 0x11420008  beq         $t2, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x3561C4u;
    {
        const bool branch_taken_0x3561c4 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 2));
        if (branch_taken_0x3561c4) {
            ctx->pc = 0x3561E8u;
            goto label_3561e8;
        }
    }
    ctx->pc = 0x3561CCu;
    // 0x3561cc: 0x51400003  beql        $t2, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x3561CCu;
    {
        const bool branch_taken_0x3561cc = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        if (branch_taken_0x3561cc) {
            ctx->pc = 0x3561D0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3561CCu;
            // 0x3561d0: 0x25430001  addiu       $v1, $t2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3561DCu;
            goto label_3561dc;
        }
    }
    ctx->pc = 0x3561D4u;
    // 0x3561d4: 0x1000009e  b           . + 4 + (0x9E << 2)
    ctx->pc = 0x3561D4u;
    {
        const bool branch_taken_0x3561d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3561D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3561D4u;
            // 0x3561d8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3561d4) {
            ctx->pc = 0x356450u;
            goto label_356450;
        }
    }
    ctx->pc = 0x3561DCu;
label_3561dc:
    // 0x3561dc: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x3561dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
    // 0x3561e0: 0x1000009a  b           . + 4 + (0x9A << 2)
    ctx->pc = 0x3561E0u;
    {
        const bool branch_taken_0x3561e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3561E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3561E0u;
            // 0x3561e4: 0xa043bed2  sb          $v1, -0x412E($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 4294950610), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3561e0) {
            ctx->pc = 0x35644Cu;
            goto label_35644c;
        }
    }
    ctx->pc = 0x3561E8u;
label_3561e8:
    // 0x3561e8: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x3561e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
    // 0x3561ec: 0x3c07009c  lui         $a3, 0x9C
    ctx->pc = 0x3561ecu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)156 << 16));
    // 0x3561f0: 0x90499720  lbu         $t1, -0x68E0($v0)
    ctx->pc = 0x3561f0u;
    SET_GPR_U32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294940448)));
    // 0x3561f4: 0x3c05009c  lui         $a1, 0x9C
    ctx->pc = 0x3561f4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)156 << 16));
    // 0x3561f8: 0x24e7db88  addiu       $a3, $a3, -0x2478
    ctx->pc = 0x3561f8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294957960));
    // 0x3561fc: 0x24080230  addiu       $t0, $zero, 0x230
    ctx->pc = 0x3561fcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 560));
    // 0x356200: 0x24a5db8c  addiu       $a1, $a1, -0x2474
    ctx->pc = 0x356200u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294957964));
    // 0x356204: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x356204u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x356208: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x356208u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
    // 0x35620c: 0x240600e0  addiu       $a2, $zero, 0xE0
    ctx->pc = 0x35620cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 224));
    // 0x356210: 0x8c44bee0  lw          $a0, -0x4120($v0)
    ctx->pc = 0x356210u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950624)));
    // 0x356214: 0x910c0  sll         $v0, $t1, 3
    ctx->pc = 0x356214u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 9), 3));
    // 0x356218: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x356218u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x35621c: 0x491021  addu        $v0, $v0, $t1
    ctx->pc = 0x35621cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x356220: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x356220u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x356224: 0x491021  addu        $v0, $v0, $t1
    ctx->pc = 0x356224u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x356228: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x356228u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x35622c: 0xe23821  addu        $a3, $a3, $v0
    ctx->pc = 0x35622cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x356230: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x356230u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x356234: 0xace80000  sw          $t0, 0x0($a3)
    ctx->pc = 0x356234u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 8));
    // 0x356238: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x356238u;
    {
        const bool branch_taken_0x356238 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x35623Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x356238u;
            // 0x35623c: 0xaca60000  sw          $a2, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x356238) {
            ctx->pc = 0x356250u;
            goto label_356250;
        }
    }
    ctx->pc = 0x356240u;
    // 0x356240: 0x3c032000  lui         $v1, 0x2000
    ctx->pc = 0x356240u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8192 << 16));
    // 0x356244: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x356244u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x356248: 0x10600011  beqz        $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x356248u;
    {
        const bool branch_taken_0x356248 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x356248) {
            ctx->pc = 0x356290u;
            goto label_356290;
        }
    }
    ctx->pc = 0x356250u;
label_356250:
    // 0x356250: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x356250u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x356254: 0x3c0501e0  lui         $a1, 0x1E0
    ctx->pc = 0x356254u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)480 << 16));
    // 0x356258: 0x2463db57  addiu       $v1, $v1, -0x24A9
    ctx->pc = 0x356258u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294957911));
    // 0x35625c: 0x622021  addu        $a0, $v1, $v0
    ctx->pc = 0x35625cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x356260: 0x3c0301e0  lui         $v1, 0x1E0
    ctx->pc = 0x356260u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)480 << 16));
    // 0x356264: 0x90880000  lbu         $t0, 0x0($a0)
    ctx->pc = 0x356264u;
    SET_GPR_U32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x356268: 0x8c67bee0  lw          $a3, -0x4120($v1)
    ctx->pc = 0x356268u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294950624)));
    // 0x35626c: 0xaca8bef4  sw          $t0, -0x410C($a1)
    ctx->pc = 0x35626cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4294950644), GPR_U32(ctx, 8));
    // 0x356270: 0x3c0401e0  lui         $a0, 0x1E0
    ctx->pc = 0x356270u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)480 << 16));
    // 0x356274: 0x3c0301e0  lui         $v1, 0x1E0
    ctx->pc = 0x356274u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)480 << 16));
    // 0x356278: 0x34e50010  ori         $a1, $a3, 0x10
    ctx->pc = 0x356278u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)16);
    // 0x35627c: 0x9066bed2  lbu         $a2, -0x412E($v1)
    ctx->pc = 0x35627cu;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294950610)));
    // 0x356280: 0xac85bee0  sw          $a1, -0x4120($a0)
    ctx->pc = 0x356280u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4294950624), GPR_U32(ctx, 5));
    // 0x356284: 0x3c0301e0  lui         $v1, 0x1E0
    ctx->pc = 0x356284u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)480 << 16));
    // 0x356288: 0x24c40001  addiu       $a0, $a2, 0x1
    ctx->pc = 0x356288u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x35628c: 0xa064bed2  sb          $a0, -0x412E($v1)
    ctx->pc = 0x35628cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4294950610), (uint8_t)GPR_U32(ctx, 4));
label_356290:
    // 0x356290: 0x3c04009c  lui         $a0, 0x9C
    ctx->pc = 0x356290u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)156 << 16));
    // 0x356294: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x356294u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x356298: 0x2484db74  addiu       $a0, $a0, -0x248C
    ctx->pc = 0x356298u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294957940));
    // 0x35629c: 0x2463db76  addiu       $v1, $v1, -0x248A
    ctx->pc = 0x35629cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294957942));
    // 0x3562a0: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x3562a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x3562a4: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x3562a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x3562a8: 0x94830000  lhu         $v1, 0x0($a0)
    ctx->pc = 0x3562a8u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3562ac: 0x94420000  lhu         $v0, 0x0($v0)
    ctx->pc = 0x3562acu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3562b0: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x3562b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x3562b4: 0x28420002  slti        $v0, $v0, 0x2
    ctx->pc = 0x3562b4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x3562b8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3562B8u;
    {
        const bool branch_taken_0x3562b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3562b8) {
            ctx->pc = 0x3562C8u;
            goto label_3562c8;
        }
    }
    ctx->pc = 0x3562C0u;
    // 0x3562c0: 0x10000063  b           . + 4 + (0x63 << 2)
    ctx->pc = 0x3562C0u;
    {
        const bool branch_taken_0x3562c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3562C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3562C0u;
            // 0x3562c4: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3562c0) {
            ctx->pc = 0x356450u;
            goto label_356450;
        }
    }
    ctx->pc = 0x3562C8u;
label_3562c8:
    // 0x3562c8: 0x3c0201d5  lui         $v0, 0x1D5
    ctx->pc = 0x3562c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)469 << 16));
    // 0x3562cc: 0x8c43d918  lw          $v1, -0x26E8($v0)
    ctx->pc = 0x3562ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294957336)));
    // 0x3562d0: 0x30620080  andi        $v0, $v1, 0x80
    ctx->pc = 0x3562d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)128);
    // 0x3562d4: 0x5440005e  bnel        $v0, $zero, . + 4 + (0x5E << 2)
    ctx->pc = 0x3562D4u;
    {
        const bool branch_taken_0x3562d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3562d4) {
            ctx->pc = 0x3562D8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3562D4u;
            // 0x3562d8: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x356450u;
            goto label_356450;
        }
    }
    ctx->pc = 0x3562DCu;
    // 0x3562dc: 0x3c020004  lui         $v0, 0x4
    ctx->pc = 0x3562dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4 << 16));
    // 0x3562e0: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x3562e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x3562e4: 0x10400059  beqz        $v0, . + 4 + (0x59 << 2)
    ctx->pc = 0x3562E4u;
    {
        const bool branch_taken_0x3562e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3562e4) {
            ctx->pc = 0x35644Cu;
            goto label_35644c;
        }
    }
    ctx->pc = 0x3562ECu;
    // 0x3562ec: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x3562ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3562f0: 0x10000057  b           . + 4 + (0x57 << 2)
    ctx->pc = 0x3562F0u;
    {
        const bool branch_taken_0x3562f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3562f0) {
            ctx->pc = 0x356450u;
            goto label_356450;
        }
    }
    ctx->pc = 0x3562F8u;
label_3562f8:
    // 0x3562f8: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x3562f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
    // 0x3562fc: 0x3c06009c  lui         $a2, 0x9C
    ctx->pc = 0x3562fcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)156 << 16));
    // 0x356300: 0x90499720  lbu         $t1, -0x68E0($v0)
    ctx->pc = 0x356300u;
    SET_GPR_U32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294940448)));
    // 0x356304: 0x3c04009c  lui         $a0, 0x9C
    ctx->pc = 0x356304u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)156 << 16));
    // 0x356308: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x356308u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x35630c: 0x24c6db88  addiu       $a2, $a2, -0x2478
    ctx->pc = 0x35630cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294957960));
    // 0x356310: 0x24070230  addiu       $a3, $zero, 0x230
    ctx->pc = 0x356310u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 560));
    // 0x356314: 0x2484db8c  addiu       $a0, $a0, -0x2474
    ctx->pc = 0x356314u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294957964));
    // 0x356318: 0x940c0  sll         $t0, $t1, 3
    ctx->pc = 0x356318u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 9), 3));
    // 0x35631c: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x35631cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
    // 0x356320: 0x1094021  addu        $t0, $t0, $t1
    ctx->pc = 0x356320u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 9)));
    // 0x356324: 0x240500e0  addiu       $a1, $zero, 0xE0
    ctx->pc = 0x356324u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 224));
    // 0x356328: 0x840c0  sll         $t0, $t0, 3
    ctx->pc = 0x356328u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
    // 0x35632c: 0x2463db57  addiu       $v1, $v1, -0x24A9
    ctx->pc = 0x35632cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294957911));
    // 0x356330: 0x1094021  addu        $t0, $t0, $t1
    ctx->pc = 0x356330u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 9)));
    // 0x356334: 0x8c42bef4  lw          $v0, -0x410C($v0)
    ctx->pc = 0x356334u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950644)));
    // 0x356338: 0x840c0  sll         $t0, $t0, 3
    ctx->pc = 0x356338u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
    // 0x35633c: 0xc83021  addu        $a2, $a2, $t0
    ctx->pc = 0x35633cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
    // 0x356340: 0x882021  addu        $a0, $a0, $t0
    ctx->pc = 0x356340u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 8)));
    // 0x356344: 0xacc70000  sw          $a3, 0x0($a2)
    ctx->pc = 0x356344u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 7));
    // 0x356348: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x356348u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x35634c: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x35634cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x356350: 0x90640000  lbu         $a0, 0x0($v1)
    ctx->pc = 0x356350u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x356354: 0x44082a  slt         $at, $v0, $a0
    ctx->pc = 0x356354u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x356358: 0x10200010  beqz        $at, . + 4 + (0x10 << 2)
    ctx->pc = 0x356358u;
    {
        const bool branch_taken_0x356358 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x356358) {
            ctx->pc = 0x35639Cu;
            goto label_35639c;
        }
    }
    ctx->pc = 0x356360u;
    // 0x356360: 0x25430001  addiu       $v1, $t2, 0x1
    ctx->pc = 0x356360u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x356364: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x356364u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
    // 0x356368: 0xa043bed2  sb          $v1, -0x412E($v0)
    ctx->pc = 0x356368u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294950610), (uint8_t)GPR_U32(ctx, 3));
    // 0x35636c: 0x3c0201d5  lui         $v0, 0x1D5
    ctx->pc = 0x35636cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)469 << 16));
    // 0x356370: 0x8c43d918  lw          $v1, -0x26E8($v0)
    ctx->pc = 0x356370u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294957336)));
    // 0x356374: 0x30620080  andi        $v0, $v1, 0x80
    ctx->pc = 0x356374u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)128);
    // 0x356378: 0x54400035  bnel        $v0, $zero, . + 4 + (0x35 << 2)
    ctx->pc = 0x356378u;
    {
        const bool branch_taken_0x356378 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x356378) {
            ctx->pc = 0x35637Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x356378u;
            // 0x35637c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x356450u;
            goto label_356450;
        }
    }
    ctx->pc = 0x356380u;
    // 0x356380: 0x3c020004  lui         $v0, 0x4
    ctx->pc = 0x356380u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4 << 16));
    // 0x356384: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x356384u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x356388: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x356388u;
    {
        const bool branch_taken_0x356388 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x356388) {
            ctx->pc = 0x35639Cu;
            goto label_35639c;
        }
    }
    ctx->pc = 0x356390u;
    // 0x356390: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x356390u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x356394: 0x1000002e  b           . + 4 + (0x2E << 2)
    ctx->pc = 0x356394u;
    {
        const bool branch_taken_0x356394 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x356394) {
            ctx->pc = 0x356450u;
            goto label_356450;
        }
    }
    ctx->pc = 0x35639Cu;
label_35639c:
    // 0x35639c: 0x3c0201d5  lui         $v0, 0x1D5
    ctx->pc = 0x35639cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)469 << 16));
    // 0x3563a0: 0x8c43d918  lw          $v1, -0x26E8($v0)
    ctx->pc = 0x3563a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294957336)));
    // 0x3563a4: 0x30620080  andi        $v0, $v1, 0x80
    ctx->pc = 0x3563a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)128);
    // 0x3563a8: 0x54400029  bnel        $v0, $zero, . + 4 + (0x29 << 2)
    ctx->pc = 0x3563A8u;
    {
        const bool branch_taken_0x3563a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3563a8) {
            ctx->pc = 0x3563ACu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3563A8u;
            // 0x3563ac: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x356450u;
            goto label_356450;
        }
    }
    ctx->pc = 0x3563B0u;
    // 0x3563b0: 0x3c020004  lui         $v0, 0x4
    ctx->pc = 0x3563b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4 << 16));
    // 0x3563b4: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x3563b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x3563b8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3563B8u;
    {
        const bool branch_taken_0x3563b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3563b8) {
            ctx->pc = 0x3563CCu;
            goto label_3563cc;
        }
    }
    ctx->pc = 0x3563C0u;
    // 0x3563c0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x3563c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3563c4: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x3563C4u;
    {
        const bool branch_taken_0x3563c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3563c4) {
            ctx->pc = 0x356450u;
            goto label_356450;
        }
    }
    ctx->pc = 0x3563CCu;
label_3563cc:
    // 0x3563cc: 0x1480001f  bnez        $a0, . + 4 + (0x1F << 2)
    ctx->pc = 0x3563CCu;
    {
        const bool branch_taken_0x3563cc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x3563cc) {
            ctx->pc = 0x35644Cu;
            goto label_35644c;
        }
    }
    ctx->pc = 0x3563D4u;
    // 0x3563d4: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x3563d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
    // 0x3563d8: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x3563D8u;
    {
        const bool branch_taken_0x3563d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3563DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3563D8u;
            // 0x3563dc: 0xa040bed2  sb          $zero, -0x412E($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 4294950610), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3563d8) {
            ctx->pc = 0x35644Cu;
            goto label_35644c;
        }
    }
    ctx->pc = 0x3563E0u;
label_3563e0:
    // 0x3563e0: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x3563e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
    // 0x3563e4: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x3563e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x3563e8: 0x90449720  lbu         $a0, -0x68E0($v0)
    ctx->pc = 0x3563e8u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294940448)));
    // 0x3563ec: 0x2463db57  addiu       $v1, $v1, -0x24A9
    ctx->pc = 0x3563ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294957911));
    // 0x3563f0: 0x410c0  sll         $v0, $a0, 3
    ctx->pc = 0x3563f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x3563f4: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x3563f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x3563f8: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x3563f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x3563fc: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x3563fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x356400: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x356400u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x356404: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x356404u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x356408: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x356408u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x35640c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x35640Cu;
    {
        const bool branch_taken_0x35640c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x35640c) {
            ctx->pc = 0x35641Cu;
            goto label_35641c;
        }
    }
    ctx->pc = 0x356414u;
    // 0x356414: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x356414u;
    {
        const bool branch_taken_0x356414 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x356418u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x356414u;
            // 0x356418: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x356414) {
            ctx->pc = 0x356450u;
            goto label_356450;
        }
    }
    ctx->pc = 0x35641Cu;
label_35641c:
    // 0x35641c: 0x3c0201d5  lui         $v0, 0x1D5
    ctx->pc = 0x35641cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)469 << 16));
    // 0x356420: 0x8c43d918  lw          $v1, -0x26E8($v0)
    ctx->pc = 0x356420u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294957336)));
    // 0x356424: 0x30620080  andi        $v0, $v1, 0x80
    ctx->pc = 0x356424u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)128);
    // 0x356428: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x356428u;
    {
        const bool branch_taken_0x356428 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x356428) {
            ctx->pc = 0x35642Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x356428u;
            // 0x35642c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x356450u;
            goto label_356450;
        }
    }
    ctx->pc = 0x356430u;
    // 0x356430: 0x3c020004  lui         $v0, 0x4
    ctx->pc = 0x356430u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4 << 16));
    // 0x356434: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x356434u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x356438: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x356438u;
    {
        const bool branch_taken_0x356438 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x356438) {
            ctx->pc = 0x35644Cu;
            goto label_35644c;
        }
    }
    ctx->pc = 0x356440u;
    // 0x356440: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x356440u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x356444: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x356444u;
    {
        const bool branch_taken_0x356444 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x356444) {
            ctx->pc = 0x356450u;
            goto label_356450;
        }
    }
    ctx->pc = 0x35644Cu;
label_35644c:
    // 0x35644c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x35644cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_356450:
    // 0x356450: 0x3e00008  jr          $ra
    ctx->pc = 0x356450u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x356458u;
    // 0x356458: 0x0  nop
    ctx->pc = 0x356458u;
    // NOP
    // 0x35645c: 0x0  nop
    ctx->pc = 0x35645cu;
    // NOP
label_356460:
    // 0x356460: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x356460u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x356464: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x356464u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
    // 0x356468: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x356468u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x35646c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x35646cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x356470: 0x9043bed2  lbu         $v1, -0x412E($v0)
    ctx->pc = 0x356470u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294950610)));
    // 0x356474: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x356474u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x356478: 0x10620029  beq         $v1, $v0, . + 4 + (0x29 << 2)
    ctx->pc = 0x356478u;
    {
        const bool branch_taken_0x356478 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x356478) {
            ctx->pc = 0x356520u;
            goto label_356520;
        }
    }
    ctx->pc = 0x356480u;
    // 0x356480: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x356480u;
    {
        const bool branch_taken_0x356480 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x356480) {
            ctx->pc = 0x356490u;
            goto label_356490;
        }
    }
    ctx->pc = 0x356488u;
    // 0x356488: 0x10000052  b           . + 4 + (0x52 << 2)
    ctx->pc = 0x356488u;
    {
        const bool branch_taken_0x356488 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x35648Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x356488u;
            // 0x35648c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x356488) {
            ctx->pc = 0x3565D4u;
            goto label_3565d4;
        }
    }
    ctx->pc = 0x356490u;
label_356490:
    // 0x356490: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x356490u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
    // 0x356494: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x356494u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x356498: 0x8c48bee4  lw          $t0, -0x411C($v0)
    ctx->pc = 0x356498u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950628)));
    // 0x35649c: 0x3c070080  lui         $a3, 0x80
    ctx->pc = 0x35649cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)128 << 16));
    // 0x3564a0: 0x3c068000  lui         $a2, 0x8000
    ctx->pc = 0x3564a0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)32768 << 16));
    // 0x3564a4: 0x3c0301e0  lui         $v1, 0x1E0
    ctx->pc = 0x3564a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)480 << 16));
    // 0x3564a8: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x3564a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x3564ac: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x3564acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
    // 0x3564b0: 0xac45bee8  sw          $a1, -0x4118($v0)
    ctx->pc = 0x3564b0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294950632), GPR_U32(ctx, 5));
    // 0x3564b4: 0x1071025  or          $v0, $t0, $a3
    ctx->pc = 0x3564b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) | GPR_U64(ctx, 7));
    // 0x3564b8: 0x462825  or          $a1, $v0, $a2
    ctx->pc = 0x3564b8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x3564bc: 0x24080025  addiu       $t0, $zero, 0x25
    ctx->pc = 0x3564bcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
    // 0x3564c0: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x3564c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
    // 0x3564c4: 0xac65bee4  sw          $a1, -0x411C($v1)
    ctx->pc = 0x3564c4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294950628), GPR_U32(ctx, 5));
    // 0x3564c8: 0xa444bf0a  sh          $a0, -0x40F6($v0)
    ctx->pc = 0x3564c8u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4294950666), (uint16_t)GPR_U32(ctx, 4));
    // 0x3564cc: 0x3c0601e0  lui         $a2, 0x1E0
    ctx->pc = 0x3564ccu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)480 << 16));
    // 0x3564d0: 0x2403000f  addiu       $v1, $zero, 0xF
    ctx->pc = 0x3564d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x3564d4: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x3564d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
    // 0x3564d8: 0xa043bf14  sb          $v1, -0x40EC($v0)
    ctx->pc = 0x3564d8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294950676), (uint8_t)GPR_U32(ctx, 3));
    // 0x3564dc: 0x24c6bf0c  addiu       $a2, $a2, -0x40F4
    ctx->pc = 0x3564dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294950668));
    // 0x3564e0: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x3564e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
    // 0x3564e4: 0x24050038  addiu       $a1, $zero, 0x38
    ctx->pc = 0x3564e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
    // 0x3564e8: 0x90449720  lbu         $a0, -0x68E0($v0)
    ctx->pc = 0x3564e8u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294940448)));
    // 0x3564ec: 0x3c0301e0  lui         $v1, 0x1E0
    ctx->pc = 0x3564ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)480 << 16));
    // 0x3564f0: 0x38870001  xori        $a3, $a0, 0x1
    ctx->pc = 0x3564f0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)1);
    // 0x3564f4: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x3564f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
    // 0x3564f8: 0x42040  sll         $a0, $a0, 1
    ctx->pc = 0x3564f8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x3564fc: 0x73840  sll         $a3, $a3, 1
    ctx->pc = 0x3564fcu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
    // 0x356500: 0xc42021  addu        $a0, $a2, $a0
    ctx->pc = 0x356500u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x356504: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x356504u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x356508: 0xa4c80000  sh          $t0, 0x0($a2)
    ctx->pc = 0x356508u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 8));
    // 0x35650c: 0xa4850000  sh          $a1, 0x0($a0)
    ctx->pc = 0x35650cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 5));
    // 0x356510: 0x9063bed2  lbu         $v1, -0x412E($v1)
    ctx->pc = 0x356510u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294950610)));
    // 0x356514: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x356514u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x356518: 0x1000002d  b           . + 4 + (0x2D << 2)
    ctx->pc = 0x356518u;
    {
        const bool branch_taken_0x356518 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x35651Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x356518u;
            // 0x35651c: 0xa043bed2  sb          $v1, -0x412E($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 4294950610), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x356518) {
            ctx->pc = 0x3565D0u;
            goto label_3565d0;
        }
    }
    ctx->pc = 0x356520u;
label_356520:
    // 0x356520: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x356520u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
    // 0x356524: 0x3c07009c  lui         $a3, 0x9C
    ctx->pc = 0x356524u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)156 << 16));
    // 0x356528: 0x90509720  lbu         $s0, -0x68E0($v0)
    ctx->pc = 0x356528u;
    SET_GPR_U32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294940448)));
    // 0x35652c: 0x3c05009c  lui         $a1, 0x9C
    ctx->pc = 0x35652cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)156 << 16));
    // 0x356530: 0x24e7db88  addiu       $a3, $a3, -0x2478
    ctx->pc = 0x356530u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294957960));
    // 0x356534: 0x24080230  addiu       $t0, $zero, 0x230
    ctx->pc = 0x356534u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 560));
    // 0x356538: 0x24a5db8c  addiu       $a1, $a1, -0x2474
    ctx->pc = 0x356538u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294957964));
    // 0x35653c: 0x240600e0  addiu       $a2, $zero, 0xE0
    ctx->pc = 0x35653cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 224));
    // 0x356540: 0x3c0201d5  lui         $v0, 0x1D5
    ctx->pc = 0x356540u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)469 << 16));
    // 0x356544: 0x3a040001  xori        $a0, $s0, 0x1
    ctx->pc = 0x356544u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) ^ (uint64_t)(uint16_t)1);
    // 0x356548: 0x8c43d918  lw          $v1, -0x26E8($v0)
    ctx->pc = 0x356548u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294957336)));
    // 0x35654c: 0x1010c0  sll         $v0, $s0, 3
    ctx->pc = 0x35654cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x356550: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x356550u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x356554: 0x248c0  sll         $t1, $v0, 3
    ctx->pc = 0x356554u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x356558: 0x410c0  sll         $v0, $a0, 3
    ctx->pc = 0x356558u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x35655c: 0x1304821  addu        $t1, $t1, $s0
    ctx->pc = 0x35655cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 16)));
    // 0x356560: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x356560u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x356564: 0x948c0  sll         $t1, $t1, 3
    ctx->pc = 0x356564u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 3));
    // 0x356568: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x356568u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x35656c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x35656cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x356570: 0xe92021  addu        $a0, $a3, $t1
    ctx->pc = 0x356570u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 9)));
    // 0x356574: 0xac880000  sw          $t0, 0x0($a0)
    ctx->pc = 0x356574u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 8));
    // 0x356578: 0xa92021  addu        $a0, $a1, $t1
    ctx->pc = 0x356578u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 9)));
    // 0x35657c: 0xac860000  sw          $a2, 0x0($a0)
    ctx->pc = 0x35657cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 6));
    // 0x356580: 0x220c0  sll         $a0, $v0, 3
    ctx->pc = 0x356580u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x356584: 0xe41021  addu        $v0, $a3, $a0
    ctx->pc = 0x356584u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
    // 0x356588: 0xac480000  sw          $t0, 0x0($v0)
    ctx->pc = 0x356588u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 8));
    // 0x35658c: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x35658cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x356590: 0x30620080  andi        $v0, $v1, 0x80
    ctx->pc = 0x356590u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)128);
    // 0x356594: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x356594u;
    {
        const bool branch_taken_0x356594 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x356598u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x356594u;
            // 0x356598: 0xac860000  sw          $a2, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x356594) {
            ctx->pc = 0x3565B8u;
            goto label_3565b8;
        }
    }
    ctx->pc = 0x35659Cu;
    // 0x35659c: 0xc0c4534  jal         func_3114D0
    ctx->pc = 0x35659Cu;
    SET_GPR_U32(ctx, 31, 0x3565A4u);
    ctx->pc = 0x3114D0u;
    if (runtime->hasFunction(0x3114D0u)) {
        auto targetFn = runtime->lookupFunction(0x3114D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3565A4u; }
        if (ctx->pc != 0x3565A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003114D0_0x3114d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3565A4u; }
        if (ctx->pc != 0x3565A4u) { return; }
    }
    ctx->pc = 0x3565A4u;
label_3565a4:
    // 0x3565a4: 0x56020002  bnel        $s0, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x3565A4u;
    {
        const bool branch_taken_0x3565a4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x3565a4) {
            ctx->pc = 0x3565A8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3565A4u;
            // 0x3565a8: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3565B0u;
            goto label_3565b0;
        }
    }
    ctx->pc = 0x3565ACu;
    // 0x3565ac: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3565acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3565b0:
    // 0x3565b0: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x3565B0u;
    {
        const bool branch_taken_0x3565b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3565B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3565B0u;
            // 0x3565b4: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3565b0) {
            ctx->pc = 0x3565D8u;
            goto label_3565d8;
        }
    }
    ctx->pc = 0x3565B8u;
label_3565b8:
    // 0x3565b8: 0x3c020004  lui         $v0, 0x4
    ctx->pc = 0x3565b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4 << 16));
    // 0x3565bc: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x3565bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x3565c0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3565C0u;
    {
        const bool branch_taken_0x3565c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3565c0) {
            ctx->pc = 0x3565D0u;
            goto label_3565d0;
        }
    }
    ctx->pc = 0x3565C8u;
    // 0x3565c8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x3565C8u;
    {
        const bool branch_taken_0x3565c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3565CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3565C8u;
            // 0x3565cc: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3565c8) {
            ctx->pc = 0x3565D4u;
            goto label_3565d4;
        }
    }
    ctx->pc = 0x3565D0u;
label_3565d0:
    // 0x3565d0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3565d0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3565d4:
    // 0x3565d4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3565d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_3565d8:
    // 0x3565d8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3565d8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3565dc: 0x3e00008  jr          $ra
    ctx->pc = 0x3565DCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3565E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3565DCu;
            // 0x3565e0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3565E4u;
    // 0x3565e4: 0x0  nop
    ctx->pc = 0x3565e4u;
    // NOP
    // 0x3565e8: 0x0  nop
    ctx->pc = 0x3565e8u;
    // NOP
    // 0x3565ec: 0x0  nop
    ctx->pc = 0x3565ecu;
    // NOP
label_3565f0:
    // 0x3565f0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3565f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3565f4: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x3565f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
    // 0x3565f8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3565f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3565fc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3565fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x356600: 0x9043bed2  lbu         $v1, -0x412E($v0)
    ctx->pc = 0x356600u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294950610)));
    // 0x356604: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x356604u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x356608: 0x1062005d  beq         $v1, $v0, . + 4 + (0x5D << 2)
    ctx->pc = 0x356608u;
    {
        const bool branch_taken_0x356608 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x356608) {
            ctx->pc = 0x356780u;
            goto label_356780;
        }
    }
    ctx->pc = 0x356610u;
    // 0x356610: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x356610u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x356614: 0x1064000b  beq         $v1, $a0, . + 4 + (0xB << 2)
    ctx->pc = 0x356614u;
    {
        const bool branch_taken_0x356614 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x356614) {
            ctx->pc = 0x356644u;
            goto label_356644;
        }
    }
    ctx->pc = 0x35661Cu;
    // 0x35661c: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x35661Cu;
    {
        const bool branch_taken_0x35661c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x35661c) {
            ctx->pc = 0x35662Cu;
            goto label_35662c;
        }
    }
    ctx->pc = 0x356624u;
    // 0x356624: 0x10000072  b           . + 4 + (0x72 << 2)
    ctx->pc = 0x356624u;
    {
        const bool branch_taken_0x356624 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x356628u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x356624u;
            // 0x356628: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x356624) {
            ctx->pc = 0x3567F0u;
            goto label_3567f0;
        }
    }
    ctx->pc = 0x35662Cu;
label_35662c:
    // 0x35662c: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x35662cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
    // 0x356630: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x356630u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x356634: 0xa044bf00  sb          $a0, -0x4100($v0)
    ctx->pc = 0x356634u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294950656), (uint8_t)GPR_U32(ctx, 4));
    // 0x356638: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x356638u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
    // 0x35663c: 0x1000006b  b           . + 4 + (0x6B << 2)
    ctx->pc = 0x35663Cu;
    {
        const bool branch_taken_0x35663c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x356640u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x35663Cu;
            // 0x356640: 0xa043bed2  sb          $v1, -0x412E($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 4294950610), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35663c) {
            ctx->pc = 0x3567ECu;
            goto label_3567ec;
        }
    }
    ctx->pc = 0x356644u;
label_356644:
    // 0x356644: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x356644u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
    // 0x356648: 0x3c040100  lui         $a0, 0x100
    ctx->pc = 0x356648u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)256 << 16));
    // 0x35664c: 0x8c46bee4  lw          $a2, -0x411C($v0)
    ctx->pc = 0x35664cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950628)));
    // 0x356650: 0x3c0301e0  lui         $v1, 0x1E0
    ctx->pc = 0x356650u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)480 << 16));
    // 0x356654: 0x240700e0  addiu       $a3, $zero, 0xE0
    ctx->pc = 0x356654u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 224));
    // 0x356658: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x356658u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
    // 0x35665c: 0xc43025  or          $a2, $a2, $a0
    ctx->pc = 0x35665cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 4));
    // 0x356660: 0x8c45bee8  lw          $a1, -0x4118($v0)
    ctx->pc = 0x356660u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950632)));
    // 0x356664: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x356664u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
    // 0x356668: 0x90449720  lbu         $a0, -0x68E0($v0)
    ctx->pc = 0x356668u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294940448)));
    // 0x35666c: 0x34a20001  ori         $v0, $a1, 0x1
    ctx->pc = 0x35666cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1);
    // 0x356670: 0xac62bee8  sw          $v0, -0x4118($v1)
    ctx->pc = 0x356670u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294950632), GPR_U32(ctx, 2));
    // 0x356674: 0x34c50040  ori         $a1, $a2, 0x40
    ctx->pc = 0x356674u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)64);
    // 0x356678: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x356678u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
    // 0x35667c: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x35667cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x356680: 0x430c0  sll         $a2, $a0, 3
    ctx->pc = 0x356680u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x356684: 0xac45bee4  sw          $a1, -0x411C($v0)
    ctx->pc = 0x356684u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294950628), GPR_U32(ctx, 5));
    // 0x356688: 0xc41021  addu        $v0, $a2, $a0
    ctx->pc = 0x356688u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x35668c: 0x2463db8c  addiu       $v1, $v1, -0x2474
    ctx->pc = 0x35668cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294957964));
    // 0x356690: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x356690u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x356694: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x356694u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x356698: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x356698u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x35669c: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x35669cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x3566a0: 0xc062810  jal         func_18A040
    ctx->pc = 0x3566A0u;
    SET_GPR_U32(ctx, 31, 0x3566A8u);
    ctx->pc = 0x3566A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3566A0u;
            // 0x3566a4: 0xac470000  sw          $a3, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18A040u;
    if (runtime->hasFunction(0x18A040u)) {
        auto targetFn = runtime->lookupFunction(0x18A040u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3566A8u; }
        if (ctx->pc != 0x3566A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0018A040_0x18a040(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3566A8u; }
        if (ctx->pc != 0x3566A8u) { return; }
    }
    ctx->pc = 0x3566A8u;
label_3566a8:
    // 0x3566a8: 0x8c43049c  lw          $v1, 0x49C($v0)
    ctx->pc = 0x3566a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1180)));
    // 0x3566ac: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3566acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3566b0: 0x2604028c  addiu       $a0, $s0, 0x28C
    ctx->pc = 0x3566b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 652));
    // 0x3566b4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3566b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3566b8: 0x24060028  addiu       $a2, $zero, 0x28
    ctx->pc = 0x3566b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x3566bc: 0x34630060  ori         $v1, $v1, 0x60
    ctx->pc = 0x3566bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)96);
    // 0x3566c0: 0xc04bbe8  jal         func_12EFA0
    ctx->pc = 0x3566C0u;
    SET_GPR_U32(ctx, 31, 0x3566C8u);
    ctx->pc = 0x3566C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3566C0u;
            // 0x3566c4: 0xac43049c  sw          $v1, 0x49C($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 1180), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12EFA0u;
    if (runtime->hasFunction(0x12EFA0u)) {
        auto targetFn = runtime->lookupFunction(0x12EFA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3566C8u; }
        if (ctx->pc != 0x3566C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012EFA0_0x12efa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3566C8u; }
        if (ctx->pc != 0x3566C8u) { return; }
    }
    ctx->pc = 0x3566C8u;
label_3566c8:
    // 0x3566c8: 0x8e04049c  lw          $a0, 0x49C($s0)
    ctx->pc = 0x3566c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1180)));
    // 0x3566cc: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x3566ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x3566d0: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x3566d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
    // 0x3566d4: 0x2463db57  addiu       $v1, $v1, -0x24A9
    ctx->pc = 0x3566d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294957911));
    // 0x3566d8: 0x34840200  ori         $a0, $a0, 0x200
    ctx->pc = 0x3566d8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)512);
    // 0x3566dc: 0xae04049c  sw          $a0, 0x49C($s0)
    ctx->pc = 0x3566dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1180), GPR_U32(ctx, 4));
    // 0x3566e0: 0x90449720  lbu         $a0, -0x68E0($v0)
    ctx->pc = 0x3566e0u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294940448)));
    // 0x3566e4: 0x410c0  sll         $v0, $a0, 3
    ctx->pc = 0x3566e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x3566e8: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x3566e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x3566ec: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x3566ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x3566f0: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x3566f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x3566f4: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x3566f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x3566f8: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x3566f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x3566fc: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x3566fcu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x356700: 0x2842000f  slti        $v0, $v0, 0xF
    ctx->pc = 0x356700u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)15) ? 1 : 0);
    // 0x356704: 0x14400012  bnez        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x356704u;
    {
        const bool branch_taken_0x356704 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x356704) {
            ctx->pc = 0x356750u;
            goto label_356750;
        }
    }
    ctx->pc = 0x35670Cu;
    // 0x35670c: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x35670cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
    // 0x356710: 0x3c0301e0  lui         $v1, 0x1E0
    ctx->pc = 0x356710u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)480 << 16));
    // 0x356714: 0x9045bed2  lbu         $a1, -0x412E($v0)
    ctx->pc = 0x356714u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294950610)));
    // 0x356718: 0x3c0201d5  lui         $v0, 0x1D5
    ctx->pc = 0x356718u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)469 << 16));
    // 0x35671c: 0x8c44d918  lw          $a0, -0x26E8($v0)
    ctx->pc = 0x35671cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294957336)));
    // 0x356720: 0x24a20001  addiu       $v0, $a1, 0x1
    ctx->pc = 0x356720u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x356724: 0xa062bed2  sb          $v0, -0x412E($v1)
    ctx->pc = 0x356724u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4294950610), (uint8_t)GPR_U32(ctx, 2));
    // 0x356728: 0x30820080  andi        $v0, $a0, 0x80
    ctx->pc = 0x356728u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)128);
    // 0x35672c: 0x54400030  bnel        $v0, $zero, . + 4 + (0x30 << 2)
    ctx->pc = 0x35672Cu;
    {
        const bool branch_taken_0x35672c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x35672c) {
            ctx->pc = 0x356730u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x35672Cu;
            // 0x356730: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3567F0u;
            goto label_3567f0;
        }
    }
    ctx->pc = 0x356734u;
    // 0x356734: 0x3c020004  lui         $v0, 0x4
    ctx->pc = 0x356734u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4 << 16));
    // 0x356738: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x356738u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x35673c: 0x1040002b  beqz        $v0, . + 4 + (0x2B << 2)
    ctx->pc = 0x35673Cu;
    {
        const bool branch_taken_0x35673c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x35673c) {
            ctx->pc = 0x3567ECu;
            goto label_3567ec;
        }
    }
    ctx->pc = 0x356744u;
    // 0x356744: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x356744u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x356748: 0x10000029  b           . + 4 + (0x29 << 2)
    ctx->pc = 0x356748u;
    {
        const bool branch_taken_0x356748 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x356748) {
            ctx->pc = 0x3567F0u;
            goto label_3567f0;
        }
    }
    ctx->pc = 0x356750u;
label_356750:
    // 0x356750: 0x3c0201d5  lui         $v0, 0x1D5
    ctx->pc = 0x356750u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)469 << 16));
    // 0x356754: 0x8c43d918  lw          $v1, -0x26E8($v0)
    ctx->pc = 0x356754u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294957336)));
    // 0x356758: 0x30620080  andi        $v0, $v1, 0x80
    ctx->pc = 0x356758u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)128);
    // 0x35675c: 0x54400024  bnel        $v0, $zero, . + 4 + (0x24 << 2)
    ctx->pc = 0x35675Cu;
    {
        const bool branch_taken_0x35675c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x35675c) {
            ctx->pc = 0x356760u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x35675Cu;
            // 0x356760: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3567F0u;
            goto label_3567f0;
        }
    }
    ctx->pc = 0x356764u;
    // 0x356764: 0x3c020004  lui         $v0, 0x4
    ctx->pc = 0x356764u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4 << 16));
    // 0x356768: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x356768u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x35676c: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x35676Cu;
    {
        const bool branch_taken_0x35676c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x35676c) {
            ctx->pc = 0x3567ECu;
            goto label_3567ec;
        }
    }
    ctx->pc = 0x356774u;
    // 0x356774: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x356774u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x356778: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x356778u;
    {
        const bool branch_taken_0x356778 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x356778) {
            ctx->pc = 0x3567F0u;
            goto label_3567f0;
        }
    }
    ctx->pc = 0x356780u;
label_356780:
    // 0x356780: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x356780u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
    // 0x356784: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x356784u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x356788: 0x90449720  lbu         $a0, -0x68E0($v0)
    ctx->pc = 0x356788u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294940448)));
    // 0x35678c: 0x2463db57  addiu       $v1, $v1, -0x24A9
    ctx->pc = 0x35678cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294957911));
    // 0x356790: 0x410c0  sll         $v0, $a0, 3
    ctx->pc = 0x356790u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x356794: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x356794u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x356798: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x356798u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x35679c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x35679cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x3567a0: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x3567a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x3567a4: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x3567a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x3567a8: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x3567a8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3567ac: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3567ACu;
    {
        const bool branch_taken_0x3567ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3567ac) {
            ctx->pc = 0x3567BCu;
            goto label_3567bc;
        }
    }
    ctx->pc = 0x3567B4u;
    // 0x3567b4: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x3567B4u;
    {
        const bool branch_taken_0x3567b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3567B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3567B4u;
            // 0x3567b8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3567b4) {
            ctx->pc = 0x3567F0u;
            goto label_3567f0;
        }
    }
    ctx->pc = 0x3567BCu;
label_3567bc:
    // 0x3567bc: 0x3c0201d5  lui         $v0, 0x1D5
    ctx->pc = 0x3567bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)469 << 16));
    // 0x3567c0: 0x8c43d918  lw          $v1, -0x26E8($v0)
    ctx->pc = 0x3567c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294957336)));
    // 0x3567c4: 0x30620080  andi        $v0, $v1, 0x80
    ctx->pc = 0x3567c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)128);
    // 0x3567c8: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x3567C8u;
    {
        const bool branch_taken_0x3567c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3567c8) {
            ctx->pc = 0x3567CCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3567C8u;
            // 0x3567cc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3567F0u;
            goto label_3567f0;
        }
    }
    ctx->pc = 0x3567D0u;
    // 0x3567d0: 0x3c020004  lui         $v0, 0x4
    ctx->pc = 0x3567d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4 << 16));
    // 0x3567d4: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x3567d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x3567d8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3567D8u;
    {
        const bool branch_taken_0x3567d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3567d8) {
            ctx->pc = 0x3567ECu;
            goto label_3567ec;
        }
    }
    ctx->pc = 0x3567E0u;
    // 0x3567e0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3567e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3567e4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x3567E4u;
    {
        const bool branch_taken_0x3567e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3567e4) {
            ctx->pc = 0x3567F0u;
            goto label_3567f0;
        }
    }
    ctx->pc = 0x3567ECu;
label_3567ec:
    // 0x3567ec: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3567ecu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3567f0:
    // 0x3567f0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3567f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3567f4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3567f4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3567f8: 0x3e00008  jr          $ra
    ctx->pc = 0x3567F8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3567FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3567F8u;
            // 0x3567fc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x356800u;
label_356800:
    // 0x356800: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x356800u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x356804: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x356804u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
    // 0x356808: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x356808u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x35680c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x35680cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x356810: 0x9043bed2  lbu         $v1, -0x412E($v0)
    ctx->pc = 0x356810u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294950610)));
    // 0x356814: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x356814u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x356818: 0x10620012  beq         $v1, $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x356818u;
    {
        const bool branch_taken_0x356818 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x356818) {
            ctx->pc = 0x356864u;
            goto label_356864;
        }
    }
    ctx->pc = 0x356820u;
    // 0x356820: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x356820u;
    {
        const bool branch_taken_0x356820 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x356820) {
            ctx->pc = 0x356830u;
            goto label_356830;
        }
    }
    ctx->pc = 0x356828u;
    // 0x356828: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x356828u;
    {
        const bool branch_taken_0x356828 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x35682Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x356828u;
            // 0x35682c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x356828) {
            ctx->pc = 0x3568B0u;
            goto label_3568b0;
        }
    }
    ctx->pc = 0x356830u;
label_356830:
    // 0x356830: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x356830u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
    // 0x356834: 0x3c0401e0  lui         $a0, 0x1E0
    ctx->pc = 0x356834u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)480 << 16));
    // 0x356838: 0x90459720  lbu         $a1, -0x68E0($v0)
    ctx->pc = 0x356838u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294940448)));
    // 0x35683c: 0x2484bf0c  addiu       $a0, $a0, -0x40F4
    ctx->pc = 0x35683cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950668));
    // 0x356840: 0x3c0301e0  lui         $v1, 0x1E0
    ctx->pc = 0x356840u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)480 << 16));
    // 0x356844: 0x52840  sll         $a1, $a1, 1
    ctx->pc = 0x356844u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x356848: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x356848u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
    // 0x35684c: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x35684cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x356850: 0xa4800000  sh          $zero, 0x0($a0)
    ctx->pc = 0x356850u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x356854: 0x9063bed2  lbu         $v1, -0x412E($v1)
    ctx->pc = 0x356854u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294950610)));
    // 0x356858: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x356858u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x35685c: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x35685Cu;
    {
        const bool branch_taken_0x35685c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x356860u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x35685Cu;
            // 0x356860: 0xa043bed2  sb          $v1, -0x412E($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 4294950610), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35685c) {
            ctx->pc = 0x3568ACu;
            goto label_3568ac;
        }
    }
    ctx->pc = 0x356864u;
label_356864:
    // 0x356864: 0x3c0201d5  lui         $v0, 0x1D5
    ctx->pc = 0x356864u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)469 << 16));
    // 0x356868: 0x8c43d918  lw          $v1, -0x26E8($v0)
    ctx->pc = 0x356868u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294957336)));
    // 0x35686c: 0x30620080  andi        $v0, $v1, 0x80
    ctx->pc = 0x35686cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)128);
    // 0x356870: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x356870u;
    {
        const bool branch_taken_0x356870 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x356870) {
            ctx->pc = 0x356874u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x356870u;
            // 0x356874: 0x3c020004  lui         $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x356898u;
            goto label_356898;
        }
    }
    ctx->pc = 0x356878u;
    // 0x356878: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x356878u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
    // 0x35687c: 0xc0c4534  jal         func_3114D0
    ctx->pc = 0x35687Cu;
    SET_GPR_U32(ctx, 31, 0x356884u);
    ctx->pc = 0x356880u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x35687Cu;
            // 0x356880: 0x90509720  lbu         $s0, -0x68E0($v0) (Delay Slot)
        SET_GPR_U32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294940448)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3114D0u;
    if (runtime->hasFunction(0x3114D0u)) {
        auto targetFn = runtime->lookupFunction(0x3114D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x356884u; }
        if (ctx->pc != 0x356884u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003114D0_0x3114d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x356884u; }
        if (ctx->pc != 0x356884u) { return; }
    }
    ctx->pc = 0x356884u;
label_356884:
    // 0x356884: 0x56020002  bnel        $s0, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x356884u;
    {
        const bool branch_taken_0x356884 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x356884) {
            ctx->pc = 0x356888u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x356884u;
            // 0x356888: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x356890u;
            goto label_356890;
        }
    }
    ctx->pc = 0x35688Cu;
    // 0x35688c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x35688cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_356890:
    // 0x356890: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x356890u;
    {
        const bool branch_taken_0x356890 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x356894u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x356890u;
            // 0x356894: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x356890) {
            ctx->pc = 0x3568B4u;
            goto label_3568b4;
        }
    }
    ctx->pc = 0x356898u;
label_356898:
    // 0x356898: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x356898u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x35689c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x35689Cu;
    {
        const bool branch_taken_0x35689c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x35689c) {
            ctx->pc = 0x3568ACu;
            goto label_3568ac;
        }
    }
    ctx->pc = 0x3568A4u;
    // 0x3568a4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x3568A4u;
    {
        const bool branch_taken_0x3568a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3568A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3568A4u;
            // 0x3568a8: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3568a4) {
            ctx->pc = 0x3568B0u;
            goto label_3568b0;
        }
    }
    ctx->pc = 0x3568ACu;
label_3568ac:
    // 0x3568ac: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3568acu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3568b0:
    // 0x3568b0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3568b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_3568b4:
    // 0x3568b4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3568b4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3568b8: 0x3e00008  jr          $ra
    ctx->pc = 0x3568B8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3568BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3568B8u;
            // 0x3568bc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3568C0u;
label_3568c0:
    // 0x3568c0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3568c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3568c4: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x3568c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
    // 0x3568c8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3568c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3568cc: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x3568ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3568d0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3568d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3568d4: 0x9042bed2  lbu         $v0, -0x412E($v0)
    ctx->pc = 0x3568d4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294950610)));
    // 0x3568d8: 0x10440019  beq         $v0, $a0, . + 4 + (0x19 << 2)
    ctx->pc = 0x3568D8u;
    {
        const bool branch_taken_0x3568d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        if (branch_taken_0x3568d8) {
            ctx->pc = 0x356940u;
            goto label_356940;
        }
    }
    ctx->pc = 0x3568E0u;
    // 0x3568e0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3568E0u;
    {
        const bool branch_taken_0x3568e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3568e0) {
            ctx->pc = 0x3568F0u;
            goto label_3568f0;
        }
    }
    ctx->pc = 0x3568E8u;
    // 0x3568e8: 0x10000052  b           . + 4 + (0x52 << 2)
    ctx->pc = 0x3568E8u;
    {
        const bool branch_taken_0x3568e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3568ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3568E8u;
            // 0x3568ec: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3568e8) {
            ctx->pc = 0x356A34u;
            goto label_356a34;
        }
    }
    ctx->pc = 0x3568F0u;
label_3568f0:
    // 0x3568f0: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x3568f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
    // 0x3568f4: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x3568f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x3568f8: 0xa044bf00  sb          $a0, -0x4100($v0)
    ctx->pc = 0x3568f8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294950656), (uint8_t)GPR_U32(ctx, 4));
    // 0x3568fc: 0x24060025  addiu       $a2, $zero, 0x25
    ctx->pc = 0x3568fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
    // 0x356900: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x356900u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
    // 0x356904: 0x3c0401e0  lui         $a0, 0x1E0
    ctx->pc = 0x356904u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)480 << 16));
    // 0x356908: 0xa443bf0a  sh          $v1, -0x40F6($v0)
    ctx->pc = 0x356908u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4294950666), (uint16_t)GPR_U32(ctx, 3));
    // 0x35690c: 0x2484bf0c  addiu       $a0, $a0, -0x40F4
    ctx->pc = 0x35690cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950668));
    // 0x356910: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x356910u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
    // 0x356914: 0x3c0301e0  lui         $v1, 0x1E0
    ctx->pc = 0x356914u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)480 << 16));
    // 0x356918: 0x90459720  lbu         $a1, -0x68E0($v0)
    ctx->pc = 0x356918u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294940448)));
    // 0x35691c: 0x38a50001  xori        $a1, $a1, 0x1
    ctx->pc = 0x35691cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) ^ (uint64_t)(uint16_t)1);
    // 0x356920: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x356920u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
    // 0x356924: 0x52840  sll         $a1, $a1, 1
    ctx->pc = 0x356924u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x356928: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x356928u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x35692c: 0xa4860000  sh          $a2, 0x0($a0)
    ctx->pc = 0x35692cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 6));
    // 0x356930: 0x9063bed2  lbu         $v1, -0x412E($v1)
    ctx->pc = 0x356930u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294950610)));
    // 0x356934: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x356934u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x356938: 0x1000003d  b           . + 4 + (0x3D << 2)
    ctx->pc = 0x356938u;
    {
        const bool branch_taken_0x356938 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x35693Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x356938u;
            // 0x35693c: 0xa043bed2  sb          $v1, -0x412E($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 4294950610), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x356938) {
            ctx->pc = 0x356A30u;
            goto label_356a30;
        }
    }
    ctx->pc = 0x356940u;
label_356940:
    // 0x356940: 0x3c0201d5  lui         $v0, 0x1D5
    ctx->pc = 0x356940u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)469 << 16));
    // 0x356944: 0x8c43d918  lw          $v1, -0x26E8($v0)
    ctx->pc = 0x356944u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294957336)));
    // 0x356948: 0x30620080  andi        $v0, $v1, 0x80
    ctx->pc = 0x356948u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)128);
    // 0x35694c: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x35694Cu;
    {
        const bool branch_taken_0x35694c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x35694c) {
            ctx->pc = 0x356950u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x35694Cu;
            // 0x356950: 0x3c020004  lui         $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x35697Cu;
            goto label_35697c;
        }
    }
    ctx->pc = 0x356954u;
    // 0x356954: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x356954u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
    // 0x356958: 0xc0c4534  jal         func_3114D0
    ctx->pc = 0x356958u;
    SET_GPR_U32(ctx, 31, 0x356960u);
    ctx->pc = 0x35695Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x356958u;
            // 0x35695c: 0x90509720  lbu         $s0, -0x68E0($v0) (Delay Slot)
        SET_GPR_U32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294940448)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3114D0u;
    if (runtime->hasFunction(0x3114D0u)) {
        auto targetFn = runtime->lookupFunction(0x3114D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x356960u; }
        if (ctx->pc != 0x356960u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003114D0_0x3114d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x356960u; }
        if (ctx->pc != 0x356960u) { return; }
    }
    ctx->pc = 0x356960u;
label_356960:
    // 0x356960: 0x56020034  bnel        $s0, $v0, . + 4 + (0x34 << 2)
    ctx->pc = 0x356960u;
    {
        const bool branch_taken_0x356960 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x356960) {
            ctx->pc = 0x356964u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x356960u;
            // 0x356964: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x356A34u;
            goto label_356a34;
        }
    }
    ctx->pc = 0x356968u;
    // 0x356968: 0x24031000  addiu       $v1, $zero, 0x1000
    ctx->pc = 0x356968u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
    // 0x35696c: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x35696cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
    // 0x356970: 0xa443bf02  sh          $v1, -0x40FE($v0)
    ctx->pc = 0x356970u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4294950658), (uint16_t)GPR_U32(ctx, 3));
    // 0x356974: 0x1000002f  b           . + 4 + (0x2F << 2)
    ctx->pc = 0x356974u;
    {
        const bool branch_taken_0x356974 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x356978u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x356974u;
            // 0x356978: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x356974) {
            ctx->pc = 0x356A34u;
            goto label_356a34;
        }
    }
    ctx->pc = 0x35697Cu;
label_35697c:
    // 0x35697c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x35697cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x356980: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x356980u;
    {
        const bool branch_taken_0x356980 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x356980) {
            ctx->pc = 0x356990u;
            goto label_356990;
        }
    }
    ctx->pc = 0x356988u;
    // 0x356988: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x356988u;
    {
        const bool branch_taken_0x356988 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x35698Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x356988u;
            // 0x35698c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x356988) {
            ctx->pc = 0x356A34u;
            goto label_356a34;
        }
    }
    ctx->pc = 0x356990u;
label_356990:
    // 0x356990: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x356990u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
    // 0x356994: 0x90429738  lbu         $v0, -0x68C8($v0)
    ctx->pc = 0x356994u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294940472)));
    // 0x356998: 0x14400025  bnez        $v0, . + 4 + (0x25 << 2)
    ctx->pc = 0x356998u;
    {
        const bool branch_taken_0x356998 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x356998) {
            ctx->pc = 0x356A30u;
            goto label_356a30;
        }
    }
    ctx->pc = 0x3569A0u;
    // 0x3569a0: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x3569a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x3569a4: 0x8c42da70  lw          $v0, -0x2590($v0)
    ctx->pc = 0x3569a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294957680)));
    // 0x3569a8: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x3569a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x3569ac: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x3569ACu;
    {
        const bool branch_taken_0x3569ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3569ac) {
            ctx->pc = 0x3569ECu;
            goto label_3569ec;
        }
    }
    ctx->pc = 0x3569B4u;
    // 0x3569b4: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x3569b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
    // 0x3569b8: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x3569b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x3569bc: 0x90429720  lbu         $v0, -0x68E0($v0)
    ctx->pc = 0x3569bcu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294940448)));
    // 0x3569c0: 0x2463dca4  addiu       $v1, $v1, -0x235C
    ctx->pc = 0x3569c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294958244));
    // 0x3569c4: 0x38440001  xori        $a0, $v0, 0x1
    ctx->pc = 0x3569c4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x3569c8: 0x410c0  sll         $v0, $a0, 3
    ctx->pc = 0x3569c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x3569cc: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x3569ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x3569d0: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x3569d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x3569d4: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x3569d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x3569d8: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x3569d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x3569dc: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x3569dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x3569e0: 0x84620000  lh          $v0, 0x0($v1)
    ctx->pc = 0x3569e0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3569e4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3569e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x3569e8: 0xa4620000  sh          $v0, 0x0($v1)
    ctx->pc = 0x3569e8u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
label_3569ec:
    // 0x3569ec: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x3569ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
    // 0x3569f0: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x3569f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x3569f4: 0x90429720  lbu         $v0, -0x68E0($v0)
    ctx->pc = 0x3569f4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294940448)));
    // 0x3569f8: 0x2463dca4  addiu       $v1, $v1, -0x235C
    ctx->pc = 0x3569f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294958244));
    // 0x3569fc: 0x38440001  xori        $a0, $v0, 0x1
    ctx->pc = 0x3569fcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x356a00: 0x410c0  sll         $v0, $a0, 3
    ctx->pc = 0x356a00u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x356a04: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x356a04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x356a08: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x356a08u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x356a0c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x356a0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x356a10: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x356a10u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x356a14: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x356a14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x356a18: 0x84620000  lh          $v0, 0x0($v1)
    ctx->pc = 0x356a18u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x356a1c: 0x28410026  slti        $at, $v0, 0x26
    ctx->pc = 0x356a1cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)38) ? 1 : 0);
    // 0x356a20: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x356A20u;
    {
        const bool branch_taken_0x356a20 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x356a20) {
            ctx->pc = 0x356A30u;
            goto label_356a30;
        }
    }
    ctx->pc = 0x356A28u;
    // 0x356a28: 0x24020025  addiu       $v0, $zero, 0x25
    ctx->pc = 0x356a28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
    // 0x356a2c: 0xa4620000  sh          $v0, 0x0($v1)
    ctx->pc = 0x356a2cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
label_356a30:
    // 0x356a30: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x356a30u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_356a34:
    // 0x356a34: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x356a34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x356a38: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x356a38u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x356a3c: 0x3e00008  jr          $ra
    ctx->pc = 0x356A3Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x356A40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x356A3Cu;
            // 0x356a40: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x356A44u;
    // 0x356a44: 0x0  nop
    ctx->pc = 0x356a44u;
    // NOP
    // 0x356a48: 0x0  nop
    ctx->pc = 0x356a48u;
    // NOP
    // 0x356a4c: 0x0  nop
    ctx->pc = 0x356a4cu;
    // NOP
label_356a50:
    // 0x356a50: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x356a50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x356a54: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x356a54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
    // 0x356a58: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x356a58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x356a5c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x356a5cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x356a60: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x356a60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x356a64: 0x9042bed2  lbu         $v0, -0x412E($v0)
    ctx->pc = 0x356a64u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294950610)));
    // 0x356a68: 0x10460013  beq         $v0, $a2, . + 4 + (0x13 << 2)
    ctx->pc = 0x356A68u;
    {
        const bool branch_taken_0x356a68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 6));
        if (branch_taken_0x356a68) {
            ctx->pc = 0x356AB8u;
            goto label_356ab8;
        }
    }
    ctx->pc = 0x356A70u;
    // 0x356a70: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x356A70u;
    {
        const bool branch_taken_0x356a70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x356a70) {
            ctx->pc = 0x356A74u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x356A70u;
            // 0x356a74: 0x24440001  addiu       $a0, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x356A80u;
            goto label_356a80;
        }
    }
    ctx->pc = 0x356A78u;
    // 0x356a78: 0x1000003c  b           . + 4 + (0x3C << 2)
    ctx->pc = 0x356A78u;
    {
        const bool branch_taken_0x356a78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x356A7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x356A78u;
            // 0x356a7c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x356a78) {
            ctx->pc = 0x356B6Cu;
            goto label_356b6c;
        }
    }
    ctx->pc = 0x356A80u;
label_356a80:
    // 0x356a80: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x356a80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x356a84: 0x3c0301e0  lui         $v1, 0x1E0
    ctx->pc = 0x356a84u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)480 << 16));
    // 0x356a88: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x356a88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
    // 0x356a8c: 0xa465bf0a  sh          $a1, -0x40F6($v1)
    ctx->pc = 0x356a8cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4294950666), (uint16_t)GPR_U32(ctx, 5));
    // 0x356a90: 0xa046bed8  sb          $a2, -0x4128($v0)
    ctx->pc = 0x356a90u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294950616), (uint8_t)GPR_U32(ctx, 6));
    // 0x356a94: 0x3c0343d2  lui         $v1, 0x43D2
    ctx->pc = 0x356a94u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17362 << 16));
    // 0x356a98: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x356a98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
    // 0x356a9c: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x356a9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x356aa0: 0xac43bed4  sw          $v1, -0x412C($v0)
    ctx->pc = 0x356aa0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294950612), GPR_U32(ctx, 3));
    // 0x356aa4: 0x3c0301e0  lui         $v1, 0x1E0
    ctx->pc = 0x356aa4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)480 << 16));
    // 0x356aa8: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x356aa8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
    // 0x356aac: 0xa065beda  sb          $a1, -0x4126($v1)
    ctx->pc = 0x356aacu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4294950618), (uint8_t)GPR_U32(ctx, 5));
    // 0x356ab0: 0x1000002d  b           . + 4 + (0x2D << 2)
    ctx->pc = 0x356AB0u;
    {
        const bool branch_taken_0x356ab0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x356AB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x356AB0u;
            // 0x356ab4: 0xa044bed2  sb          $a0, -0x412E($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 4294950610), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x356ab0) {
            ctx->pc = 0x356B68u;
            goto label_356b68;
        }
    }
    ctx->pc = 0x356AB8u;
label_356ab8:
    // 0x356ab8: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x356ab8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
    // 0x356abc: 0x90429738  lbu         $v0, -0x68C8($v0)
    ctx->pc = 0x356abcu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294940472)));
    // 0x356ac0: 0x14400029  bnez        $v0, . + 4 + (0x29 << 2)
    ctx->pc = 0x356AC0u;
    {
        const bool branch_taken_0x356ac0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x356ac0) {
            ctx->pc = 0x356B68u;
            goto label_356b68;
        }
    }
    ctx->pc = 0x356AC8u;
    // 0x356ac8: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x356ac8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x356acc: 0x24030303  addiu       $v1, $zero, 0x303
    ctx->pc = 0x356accu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 771));
    // 0x356ad0: 0x9442dab0  lhu         $v0, -0x2550($v0)
    ctx->pc = 0x356ad0u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294957744)));
    // 0x356ad4: 0x14430011  bne         $v0, $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x356AD4u;
    {
        const bool branch_taken_0x356ad4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x356ad4) {
            ctx->pc = 0x356B1Cu;
            goto label_356b1c;
        }
    }
    ctx->pc = 0x356ADCu;
    // 0x356adc: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x356adcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
    // 0x356ae0: 0x3c033c88  lui         $v1, 0x3C88
    ctx->pc = 0x356ae0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15496 << 16));
    // 0x356ae4: 0xc442bed4  lwc1        $f2, -0x412C($v0)
    ctx->pc = 0x356ae4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294950612)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x356ae8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x356ae8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x356aec: 0x34628889  ori         $v0, $v1, 0x8889
    ctx->pc = 0x356aecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)34953);
    // 0x356af0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x356af0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x356af4: 0x0  nop
    ctx->pc = 0x356af4u;
    // NOP
    // 0x356af8: 0x46011041  sub.s       $f1, $f2, $f1
    ctx->pc = 0x356af8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x356afc: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x356afcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
    // 0x356b00: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x356b00u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x356b04: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x356B04u;
    {
        const bool branch_taken_0x356b04 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x356B08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x356B04u;
            // 0x356b08: 0xe441bed4  swc1        $f1, -0x412C($v0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294950612), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x356b04) {
            ctx->pc = 0x356B1Cu;
            goto label_356b1c;
        }
    }
    ctx->pc = 0x356B0Cu;
    // 0x356b0c: 0x3c0301e0  lui         $v1, 0x1E0
    ctx->pc = 0x356b0cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)480 << 16));
    // 0x356b10: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x356b10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x356b14: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x356B14u;
    {
        const bool branch_taken_0x356b14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x356B18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x356B14u;
            // 0x356b18: 0xe460bed4  swc1        $f0, -0x412C($v1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4294950612), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x356b14) {
            ctx->pc = 0x356B6Cu;
            goto label_356b6c;
        }
    }
    ctx->pc = 0x356B1Cu;
label_356b1c:
    // 0x356b1c: 0x3c0201d5  lui         $v0, 0x1D5
    ctx->pc = 0x356b1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)469 << 16));
    // 0x356b20: 0x8c42d918  lw          $v0, -0x26E8($v0)
    ctx->pc = 0x356b20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294957336)));
    // 0x356b24: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x356b24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
    // 0x356b28: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x356B28u;
    {
        const bool branch_taken_0x356b28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x356b28) {
            ctx->pc = 0x356B68u;
            goto label_356b68;
        }
    }
    ctx->pc = 0x356B30u;
    // 0x356b30: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x356b30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
    // 0x356b34: 0xc0c4534  jal         func_3114D0
    ctx->pc = 0x356B34u;
    SET_GPR_U32(ctx, 31, 0x356B3Cu);
    ctx->pc = 0x356B38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x356B34u;
            // 0x356b38: 0x90509720  lbu         $s0, -0x68E0($v0) (Delay Slot)
        SET_GPR_U32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294940448)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3114D0u;
    if (runtime->hasFunction(0x3114D0u)) {
        auto targetFn = runtime->lookupFunction(0x3114D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x356B3Cu; }
        if (ctx->pc != 0x356B3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003114D0_0x3114d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x356B3Cu; }
        if (ctx->pc != 0x356B3Cu) { return; }
    }
    ctx->pc = 0x356B3Cu;
label_356b3c:
    // 0x356b3c: 0x5602000b  bnel        $s0, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x356B3Cu;
    {
        const bool branch_taken_0x356b3c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x356b3c) {
            ctx->pc = 0x356B40u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x356B3Cu;
            // 0x356b40: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x356B6Cu;
            goto label_356b6c;
        }
    }
    ctx->pc = 0x356B44u;
    // 0x356b44: 0x3c0301e0  lui         $v1, 0x1E0
    ctx->pc = 0x356b44u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)480 << 16));
    // 0x356b48: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x356b48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
    // 0x356b4c: 0x9063beda  lbu         $v1, -0x4126($v1)
    ctx->pc = 0x356b4cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294950618)));
    // 0x356b50: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x356b50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x356b54: 0xa043beda  sb          $v1, -0x4126($v0)
    ctx->pc = 0x356b54u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294950618), (uint8_t)GPR_U32(ctx, 3));
    // 0x356b58: 0x306200ff  andi        $v0, $v1, 0xFF
    ctx->pc = 0x356b58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x356b5c: 0x401026  xor         $v0, $v0, $zero
    ctx->pc = 0x356b5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 0));
    // 0x356b60: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x356B60u;
    {
        const bool branch_taken_0x356b60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x356B64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x356B60u;
            // 0x356b64: 0x2c420001  sltiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x356b60) {
            ctx->pc = 0x356B6Cu;
            goto label_356b6c;
        }
    }
    ctx->pc = 0x356B68u;
label_356b68:
    // 0x356b68: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x356b68u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_356b6c:
    // 0x356b6c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x356b6cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x356b70: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x356b70u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x356b74: 0x3e00008  jr          $ra
    ctx->pc = 0x356B74u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x356B78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x356B74u;
            // 0x356b78: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x356B7Cu;
    // 0x356b7c: 0x0  nop
    ctx->pc = 0x356b7cu;
    // NOP
label_356b80:
    // 0x356b80: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x356b80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
    // 0x356b84: 0x9043bed2  lbu         $v1, -0x412E($v0)
    ctx->pc = 0x356b84u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294950610)));
    // 0x356b88: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x356b88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x356b8c: 0x10620014  beq         $v1, $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x356B8Cu;
    {
        const bool branch_taken_0x356b8c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x356b8c) {
            ctx->pc = 0x356BE0u;
            goto label_356be0;
        }
    }
    ctx->pc = 0x356B94u;
    // 0x356b94: 0x50600003  beql        $v1, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x356B94u;
    {
        const bool branch_taken_0x356b94 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x356b94) {
            ctx->pc = 0x356B98u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x356B94u;
            // 0x356b98: 0x2403000f  addiu       $v1, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
            ctx->pc = 0x356BA4u;
            goto label_356ba4;
        }
    }
    ctx->pc = 0x356B9Cu;
    // 0x356b9c: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x356B9Cu;
    {
        const bool branch_taken_0x356b9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x356BA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x356B9Cu;
            // 0x356ba0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x356b9c) {
            ctx->pc = 0x356C14u;
            goto label_356c14;
        }
    }
    ctx->pc = 0x356BA4u;
label_356ba4:
    // 0x356ba4: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x356ba4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
    // 0x356ba8: 0xa443bf0a  sh          $v1, -0x40F6($v0)
    ctx->pc = 0x356ba8u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4294950666), (uint16_t)GPR_U32(ctx, 3));
    // 0x356bac: 0x3c0401e0  lui         $a0, 0x1E0
    ctx->pc = 0x356bacu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)480 << 16));
    // 0x356bb0: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x356bb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
    // 0x356bb4: 0x2484bf0c  addiu       $a0, $a0, -0x40F4
    ctx->pc = 0x356bb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950668));
    // 0x356bb8: 0x90459720  lbu         $a1, -0x68E0($v0)
    ctx->pc = 0x356bb8u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294940448)));
    // 0x356bbc: 0x3c0301e0  lui         $v1, 0x1E0
    ctx->pc = 0x356bbcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)480 << 16));
    // 0x356bc0: 0x52840  sll         $a1, $a1, 1
    ctx->pc = 0x356bc0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x356bc4: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x356bc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
    // 0x356bc8: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x356bc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x356bcc: 0xa4800000  sh          $zero, 0x0($a0)
    ctx->pc = 0x356bccu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x356bd0: 0x9063bed2  lbu         $v1, -0x412E($v1)
    ctx->pc = 0x356bd0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294950610)));
    // 0x356bd4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x356bd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x356bd8: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x356BD8u;
    {
        const bool branch_taken_0x356bd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x356BDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x356BD8u;
            // 0x356bdc: 0xa043bed2  sb          $v1, -0x412E($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 4294950610), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x356bd8) {
            ctx->pc = 0x356C10u;
            goto label_356c10;
        }
    }
    ctx->pc = 0x356BE0u;
label_356be0:
    // 0x356be0: 0x3c0301d5  lui         $v1, 0x1D5
    ctx->pc = 0x356be0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)469 << 16));
    // 0x356be4: 0x8c64d918  lw          $a0, -0x26E8($v1)
    ctx->pc = 0x356be4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294957336)));
    // 0x356be8: 0x30830080  andi        $v1, $a0, 0x80
    ctx->pc = 0x356be8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)128);
    // 0x356bec: 0x50600003  beql        $v1, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x356BECu;
    {
        const bool branch_taken_0x356bec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x356bec) {
            ctx->pc = 0x356BF0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x356BECu;
            // 0x356bf0: 0x3c030004  lui         $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x356BFCu;
            goto label_356bfc;
        }
    }
    ctx->pc = 0x356BF4u;
    // 0x356bf4: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x356BF4u;
    {
        const bool branch_taken_0x356bf4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x356BF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x356BF4u;
            // 0x356bf8: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x356bf4) {
            ctx->pc = 0x356C14u;
            goto label_356c14;
        }
    }
    ctx->pc = 0x356BFCu;
label_356bfc:
    // 0x356bfc: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x356bfcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x356c00: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x356C00u;
    {
        const bool branch_taken_0x356c00 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x356c00) {
            ctx->pc = 0x356C10u;
            goto label_356c10;
        }
    }
    ctx->pc = 0x356C08u;
    // 0x356c08: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x356C08u;
    {
        const bool branch_taken_0x356c08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x356c08) {
            ctx->pc = 0x356C14u;
            goto label_356c14;
        }
    }
    ctx->pc = 0x356C10u;
label_356c10:
    // 0x356c10: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x356c10u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_356c14:
    // 0x356c14: 0x3e00008  jr          $ra
    ctx->pc = 0x356C14u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x356C1Cu;
    // 0x356c1c: 0x0  nop
    ctx->pc = 0x356c1cu;
    // NOP
label_356c20:
    // 0x356c20: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x356c20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
    // 0x356c24: 0x9043bed2  lbu         $v1, -0x412E($v0)
    ctx->pc = 0x356c24u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294950610)));
    // 0x356c28: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x356c28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x356c2c: 0x10620053  beq         $v1, $v0, . + 4 + (0x53 << 2)
    ctx->pc = 0x356C2Cu;
    {
        const bool branch_taken_0x356c2c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x356c2c) {
            ctx->pc = 0x356D7Cu;
            goto label_356d7c;
        }
    }
    ctx->pc = 0x356C34u;
    // 0x356c34: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x356c34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x356c38: 0x10620008  beq         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x356C38u;
    {
        const bool branch_taken_0x356c38 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x356c38) {
            ctx->pc = 0x356C5Cu;
            goto label_356c5c;
        }
    }
    ctx->pc = 0x356C40u;
    // 0x356c40: 0x50600003  beql        $v1, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x356C40u;
    {
        const bool branch_taken_0x356c40 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x356c40) {
            ctx->pc = 0x356C44u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x356C40u;
            // 0x356c44: 0x24630001  addiu       $v1, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x356C50u;
            goto label_356c50;
        }
    }
    ctx->pc = 0x356C48u;
    // 0x356c48: 0x1000006f  b           . + 4 + (0x6F << 2)
    ctx->pc = 0x356C48u;
    {
        const bool branch_taken_0x356c48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x356C4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x356C48u;
            // 0x356c4c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x356c48) {
            ctx->pc = 0x356E08u;
            goto label_356e08;
        }
    }
    ctx->pc = 0x356C50u;
label_356c50:
    // 0x356c50: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x356c50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
    // 0x356c54: 0x1000006b  b           . + 4 + (0x6B << 2)
    ctx->pc = 0x356C54u;
    {
        const bool branch_taken_0x356c54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x356C58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x356C54u;
            // 0x356c58: 0xa043bed2  sb          $v1, -0x412E($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 4294950610), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x356c54) {
            ctx->pc = 0x356E04u;
            goto label_356e04;
        }
    }
    ctx->pc = 0x356C5Cu;
label_356c5c:
    // 0x356c5c: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x356c5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
    // 0x356c60: 0x3c05009c  lui         $a1, 0x9C
    ctx->pc = 0x356c60u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)156 << 16));
    // 0x356c64: 0x90489720  lbu         $t0, -0x68E0($v0)
    ctx->pc = 0x356c64u;
    SET_GPR_U32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294940448)));
    // 0x356c68: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x356c68u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x356c6c: 0x24a5db88  addiu       $a1, $a1, -0x2478
    ctx->pc = 0x356c6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294957960));
    // 0x356c70: 0x24060230  addiu       $a2, $zero, 0x230
    ctx->pc = 0x356c70u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 560));
    // 0x356c74: 0x2463db8c  addiu       $v1, $v1, -0x2474
    ctx->pc = 0x356c74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294957964));
    // 0x356c78: 0x240400e0  addiu       $a0, $zero, 0xE0
    ctx->pc = 0x356c78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 224));
    // 0x356c7c: 0x838c0  sll         $a3, $t0, 3
    ctx->pc = 0x356c7cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
    // 0x356c80: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x356c80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x356c84: 0xe83821  addu        $a3, $a3, $t0
    ctx->pc = 0x356c84u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
    // 0x356c88: 0x2442db5c  addiu       $v0, $v0, -0x24A4
    ctx->pc = 0x356c88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957916));
    // 0x356c8c: 0x738c0  sll         $a3, $a3, 3
    ctx->pc = 0x356c8cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x356c90: 0xe83821  addu        $a3, $a3, $t0
    ctx->pc = 0x356c90u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
    // 0x356c94: 0x738c0  sll         $a3, $a3, 3
    ctx->pc = 0x356c94u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x356c98: 0xa72821  addu        $a1, $a1, $a3
    ctx->pc = 0x356c98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x356c9c: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x356c9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x356ca0: 0xaca60000  sw          $a2, 0x0($a1)
    ctx->pc = 0x356ca0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 6));
    // 0x356ca4: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x356ca4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x356ca8: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x356ca8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x356cac: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x356cacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x356cb0: 0x30820008  andi        $v0, $a0, 0x8
    ctx->pc = 0x356cb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)8);
    // 0x356cb4: 0x5040000a  beql        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x356CB4u;
    {
        const bool branch_taken_0x356cb4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x356cb4) {
            ctx->pc = 0x356CB8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x356CB4u;
            // 0x356cb8: 0x30820010  andi        $v0, $a0, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)16);
        ctx->in_delay_slot = false;
            ctx->pc = 0x356CE0u;
            goto label_356ce0;
        }
    }
    ctx->pc = 0x356CBCu;
    // 0x356cbc: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x356cbcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
    // 0x356cc0: 0x8c43bee0  lw          $v1, -0x4120($v0)
    ctx->pc = 0x356cc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950624)));
    // 0x356cc4: 0x30624000  andi        $v0, $v1, 0x4000
    ctx->pc = 0x356cc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16384);
    // 0x356cc8: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x356CC8u;
    {
        const bool branch_taken_0x356cc8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x356cc8) {
            ctx->pc = 0x356CDCu;
            goto label_356cdc;
        }
    }
    ctx->pc = 0x356CD0u;
    // 0x356cd0: 0x34632000  ori         $v1, $v1, 0x2000
    ctx->pc = 0x356cd0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8192);
    // 0x356cd4: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x356cd4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
    // 0x356cd8: 0xac43bee0  sw          $v1, -0x4120($v0)
    ctx->pc = 0x356cd8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294950624), GPR_U32(ctx, 3));
label_356cdc:
    // 0x356cdc: 0x30820010  andi        $v0, $a0, 0x10
    ctx->pc = 0x356cdcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)16);
label_356ce0:
    // 0x356ce0: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x356CE0u;
    {
        const bool branch_taken_0x356ce0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x356ce0) {
            ctx->pc = 0x356D4Cu;
            goto label_356d4c;
        }
    }
    ctx->pc = 0x356CE8u;
    // 0x356ce8: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x356ce8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
    // 0x356cec: 0x8c42bee0  lw          $v0, -0x4120($v0)
    ctx->pc = 0x356cecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950624)));
    // 0x356cf0: 0x30422000  andi        $v0, $v0, 0x2000
    ctx->pc = 0x356cf0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8192);
    // 0x356cf4: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x356CF4u;
    {
        const bool branch_taken_0x356cf4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x356cf4) {
            ctx->pc = 0x356D4Cu;
            goto label_356d4c;
        }
    }
    ctx->pc = 0x356CFCu;
    // 0x356cfc: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x356cfcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
    // 0x356d00: 0x3c0301e0  lui         $v1, 0x1E0
    ctx->pc = 0x356d00u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)480 << 16));
    // 0x356d04: 0x8c45bedc  lw          $a1, -0x4124($v0)
    ctx->pc = 0x356d04u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950620)));
    // 0x356d08: 0x3c0401e0  lui         $a0, 0x1E0
    ctx->pc = 0x356d08u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)480 << 16));
    // 0x356d0c: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x356d0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
    // 0x356d10: 0x34a74000  ori         $a3, $a1, 0x4000
    ctx->pc = 0x356d10u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)16384);
    // 0x356d14: 0x9046bed2  lbu         $a2, -0x412E($v0)
    ctx->pc = 0x356d14u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294950610)));
    // 0x356d18: 0x3c0201d5  lui         $v0, 0x1D5
    ctx->pc = 0x356d18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)469 << 16));
    // 0x356d1c: 0x8c45d918  lw          $a1, -0x26E8($v0)
    ctx->pc = 0x356d1cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294957336)));
    // 0x356d20: 0x24c20001  addiu       $v0, $a2, 0x1
    ctx->pc = 0x356d20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x356d24: 0xa062bed2  sb          $v0, -0x412E($v1)
    ctx->pc = 0x356d24u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4294950610), (uint8_t)GPR_U32(ctx, 2));
    // 0x356d28: 0x30a20080  andi        $v0, $a1, 0x80
    ctx->pc = 0x356d28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)128);
    // 0x356d2c: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x356D2Cu;
    {
        const bool branch_taken_0x356d2c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x356D30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x356D2Cu;
            // 0x356d30: 0xac87bedc  sw          $a3, -0x4124($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4294950620), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x356d2c) {
            ctx->pc = 0x356D44u;
            goto label_356d44;
        }
    }
    ctx->pc = 0x356D34u;
    // 0x356d34: 0x3c020004  lui         $v0, 0x4
    ctx->pc = 0x356d34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4 << 16));
    // 0x356d38: 0xa21024  and         $v0, $a1, $v0
    ctx->pc = 0x356d38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x356d3c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x356D3Cu;
    {
        const bool branch_taken_0x356d3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x356d3c) {
            ctx->pc = 0x356D4Cu;
            goto label_356d4c;
        }
    }
    ctx->pc = 0x356D44u;
label_356d44:
    // 0x356d44: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x356D44u;
    {
        const bool branch_taken_0x356d44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x356D48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x356D44u;
            // 0x356d48: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x356d44) {
            ctx->pc = 0x356E08u;
            goto label_356e08;
        }
    }
    ctx->pc = 0x356D4Cu;
label_356d4c:
    // 0x356d4c: 0x3c0201d5  lui         $v0, 0x1D5
    ctx->pc = 0x356d4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)469 << 16));
    // 0x356d50: 0x8c43d918  lw          $v1, -0x26E8($v0)
    ctx->pc = 0x356d50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294957336)));
    // 0x356d54: 0x30620080  andi        $v0, $v1, 0x80
    ctx->pc = 0x356d54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)128);
    // 0x356d58: 0x5440002b  bnel        $v0, $zero, . + 4 + (0x2B << 2)
    ctx->pc = 0x356D58u;
    {
        const bool branch_taken_0x356d58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x356d58) {
            ctx->pc = 0x356D5Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x356D58u;
            // 0x356d5c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x356E08u;
            goto label_356e08;
        }
    }
    ctx->pc = 0x356D60u;
    // 0x356d60: 0x3c020004  lui         $v0, 0x4
    ctx->pc = 0x356d60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4 << 16));
    // 0x356d64: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x356d64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x356d68: 0x10400026  beqz        $v0, . + 4 + (0x26 << 2)
    ctx->pc = 0x356D68u;
    {
        const bool branch_taken_0x356d68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x356d68) {
            ctx->pc = 0x356E04u;
            goto label_356e04;
        }
    }
    ctx->pc = 0x356D70u;
    // 0x356d70: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x356d70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x356d74: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x356D74u;
    {
        const bool branch_taken_0x356d74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x356d74) {
            ctx->pc = 0x356E08u;
            goto label_356e08;
        }
    }
    ctx->pc = 0x356D7Cu;
label_356d7c:
    // 0x356d7c: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x356d7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
    // 0x356d80: 0x3c05009c  lui         $a1, 0x9C
    ctx->pc = 0x356d80u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)156 << 16));
    // 0x356d84: 0x90489720  lbu         $t0, -0x68E0($v0)
    ctx->pc = 0x356d84u;
    SET_GPR_U32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294940448)));
    // 0x356d88: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x356d88u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x356d8c: 0x24a5db88  addiu       $a1, $a1, -0x2478
    ctx->pc = 0x356d8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294957960));
    // 0x356d90: 0x24060230  addiu       $a2, $zero, 0x230
    ctx->pc = 0x356d90u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 560));
    // 0x356d94: 0x2463db8c  addiu       $v1, $v1, -0x2474
    ctx->pc = 0x356d94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294957964));
    // 0x356d98: 0x240400e0  addiu       $a0, $zero, 0xE0
    ctx->pc = 0x356d98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 224));
    // 0x356d9c: 0x838c0  sll         $a3, $t0, 3
    ctx->pc = 0x356d9cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
    // 0x356da0: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x356da0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
    // 0x356da4: 0xe83821  addu        $a3, $a3, $t0
    ctx->pc = 0x356da4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
    // 0x356da8: 0x8c42bee0  lw          $v0, -0x4120($v0)
    ctx->pc = 0x356da8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950624)));
    // 0x356dac: 0x738c0  sll         $a3, $a3, 3
    ctx->pc = 0x356dacu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x356db0: 0xe83821  addu        $a3, $a3, $t0
    ctx->pc = 0x356db0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
    // 0x356db4: 0x738c0  sll         $a3, $a3, 3
    ctx->pc = 0x356db4u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x356db8: 0xa72821  addu        $a1, $a1, $a3
    ctx->pc = 0x356db8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x356dbc: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x356dbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x356dc0: 0xaca60000  sw          $a2, 0x0($a1)
    ctx->pc = 0x356dc0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 6));
    // 0x356dc4: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x356DC4u;
    {
        const bool branch_taken_0x356dc4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x356DC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x356DC4u;
            // 0x356dc8: 0xac640000  sw          $a0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x356dc4) {
            ctx->pc = 0x356DD4u;
            goto label_356dd4;
        }
    }
    ctx->pc = 0x356DCCu;
    // 0x356dcc: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x356DCCu;
    {
        const bool branch_taken_0x356dcc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x356DD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x356DCCu;
            // 0x356dd0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x356dcc) {
            ctx->pc = 0x356E08u;
            goto label_356e08;
        }
    }
    ctx->pc = 0x356DD4u;
label_356dd4:
    // 0x356dd4: 0x3c0201d5  lui         $v0, 0x1D5
    ctx->pc = 0x356dd4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)469 << 16));
    // 0x356dd8: 0x8c43d918  lw          $v1, -0x26E8($v0)
    ctx->pc = 0x356dd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294957336)));
    // 0x356ddc: 0x30620080  andi        $v0, $v1, 0x80
    ctx->pc = 0x356ddcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)128);
    // 0x356de0: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x356DE0u;
    {
        const bool branch_taken_0x356de0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x356de0) {
            ctx->pc = 0x356DE4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x356DE0u;
            // 0x356de4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x356E08u;
            goto label_356e08;
        }
    }
    ctx->pc = 0x356DE8u;
    // 0x356de8: 0x3c020004  lui         $v0, 0x4
    ctx->pc = 0x356de8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4 << 16));
    // 0x356dec: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x356decu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x356df0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x356DF0u;
    {
        const bool branch_taken_0x356df0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x356df0) {
            ctx->pc = 0x356E04u;
            goto label_356e04;
        }
    }
    ctx->pc = 0x356DF8u;
    // 0x356df8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x356df8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x356dfc: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x356DFCu;
    {
        const bool branch_taken_0x356dfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x356dfc) {
            ctx->pc = 0x356E08u;
            goto label_356e08;
        }
    }
    ctx->pc = 0x356E04u;
label_356e04:
    // 0x356e04: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x356e04u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_356e08:
    // 0x356e08: 0x3e00008  jr          $ra
    ctx->pc = 0x356E08u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x356E10u;
label_356e10:
    // 0x356e10: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x356e10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x356e14: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x356e14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
    // 0x356e18: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x356e18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x356e1c: 0x9043bed2  lbu         $v1, -0x412E($v0)
    ctx->pc = 0x356e1cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294950610)));
    // 0x356e20: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x356e20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x356e24: 0x50620008  beql        $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x356E24u;
    {
        const bool branch_taken_0x356e24 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x356e24) {
            ctx->pc = 0x356E28u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x356E24u;
            // 0x356e28: 0x24030005  addiu       $v1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
            ctx->pc = 0x356E48u;
            goto label_356e48;
        }
    }
    ctx->pc = 0x356E2Cu;
    // 0x356e2c: 0x50600003  beql        $v1, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x356E2Cu;
    {
        const bool branch_taken_0x356e2c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x356e2c) {
            ctx->pc = 0x356E30u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x356E2Cu;
            // 0x356e30: 0x24630001  addiu       $v1, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x356E3Cu;
            goto label_356e3c;
        }
    }
    ctx->pc = 0x356E34u;
    // 0x356e34: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x356E34u;
    {
        const bool branch_taken_0x356e34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x356e34) {
            ctx->pc = 0x356EA8u;
            goto label_356ea8;
        }
    }
    ctx->pc = 0x356E3Cu;
label_356e3c:
    // 0x356e3c: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x356e3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
    // 0x356e40: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x356E40u;
    {
        const bool branch_taken_0x356e40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x356E44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x356E40u;
            // 0x356e44: 0xa043bed2  sb          $v1, -0x412E($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 4294950610), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x356e40) {
            ctx->pc = 0x356EA8u;
            goto label_356ea8;
        }
    }
    ctx->pc = 0x356E48u;
label_356e48:
    // 0x356e48: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x356e48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
    // 0x356e4c: 0xac43bee8  sw          $v1, -0x4118($v0)
    ctx->pc = 0x356e4cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294950632), GPR_U32(ctx, 3));
    // 0x356e50: 0x3c060002  lui         $a2, 0x2
    ctx->pc = 0x356e50u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)2 << 16));
    // 0x356e54: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x356e54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
    // 0x356e58: 0x3c050200  lui         $a1, 0x200
    ctx->pc = 0x356e58u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)512 << 16));
    // 0x356e5c: 0x8c44bee4  lw          $a0, -0x411C($v0)
    ctx->pc = 0x356e5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950628)));
    // 0x356e60: 0x3c0301e0  lui         $v1, 0x1E0
    ctx->pc = 0x356e60u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)480 << 16));
    // 0x356e64: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x356e64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
    // 0x356e68: 0x34870080  ori         $a3, $a0, 0x80
    ctx->pc = 0x356e68u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)128);
    // 0x356e6c: 0x90449720  lbu         $a0, -0x68E0($v0)
    ctx->pc = 0x356e6cu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294940448)));
    // 0x356e70: 0xe61025  or          $v0, $a3, $a2
    ctx->pc = 0x356e70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) | GPR_U64(ctx, 6));
    // 0x356e74: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x356e74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x356e78: 0xc062810  jal         func_18A040
    ctx->pc = 0x356E78u;
    SET_GPR_U32(ctx, 31, 0x356E80u);
    ctx->pc = 0x356E7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x356E78u;
            // 0x356e7c: 0xac62bee4  sw          $v0, -0x411C($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294950628), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18A040u;
    if (runtime->hasFunction(0x18A040u)) {
        auto targetFn = runtime->lookupFunction(0x18A040u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x356E80u; }
        if (ctx->pc != 0x356E80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0018A040_0x18a040(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x356E80u; }
        if (ctx->pc != 0x356E80u) { return; }
    }
    ctx->pc = 0x356E80u;
label_356e80:
    // 0x356e80: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x356E80u;
    {
        const bool branch_taken_0x356e80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x356e80) {
            ctx->pc = 0x356E84u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x356E80u;
            // 0x356e84: 0x8c43049c  lw          $v1, 0x49C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1180)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x356E90u;
            goto label_356e90;
        }
    }
    ctx->pc = 0x356E88u;
    // 0x356e88: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x356E88u;
    {
        const bool branch_taken_0x356e88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x356E8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x356E88u;
            // 0x356e8c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x356e88) {
            ctx->pc = 0x356EB0u;
            goto label_356eb0;
        }
    }
    ctx->pc = 0x356E90u;
label_356e90:
    // 0x356e90: 0x2444028c  addiu       $a0, $v0, 0x28C
    ctx->pc = 0x356e90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 652));
    // 0x356e94: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x356e94u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x356e98: 0x24060028  addiu       $a2, $zero, 0x28
    ctx->pc = 0x356e98u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x356e9c: 0x34630080  ori         $v1, $v1, 0x80
    ctx->pc = 0x356e9cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)128);
    // 0x356ea0: 0xc04bbe8  jal         func_12EFA0
    ctx->pc = 0x356EA0u;
    SET_GPR_U32(ctx, 31, 0x356EA8u);
    ctx->pc = 0x356EA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x356EA0u;
            // 0x356ea4: 0xac43049c  sw          $v1, 0x49C($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 1180), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12EFA0u;
    if (runtime->hasFunction(0x12EFA0u)) {
        auto targetFn = runtime->lookupFunction(0x12EFA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x356EA8u; }
        if (ctx->pc != 0x356EA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012EFA0_0x12efa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x356EA8u; }
        if (ctx->pc != 0x356EA8u) { return; }
    }
    ctx->pc = 0x356EA8u;
label_356ea8:
    // 0x356ea8: 0xc0d5058  jal         func_354160
    ctx->pc = 0x356EA8u;
    SET_GPR_U32(ctx, 31, 0x356EB0u);
    ctx->pc = 0x354160u;
    if (runtime->hasFunction(0x354160u)) {
        auto targetFn = runtime->lookupFunction(0x354160u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x356EB0u; }
        if (ctx->pc != 0x356EB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00354160_0x354160(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x356EB0u; }
        if (ctx->pc != 0x356EB0u) { return; }
    }
    ctx->pc = 0x356EB0u;
label_356eb0:
    // 0x356eb0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x356eb0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x356eb4: 0x3e00008  jr          $ra
    ctx->pc = 0x356EB4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x356EB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x356EB4u;
            // 0x356eb8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x356EBCu;
    // 0x356ebc: 0x0  nop
    ctx->pc = 0x356ebcu;
    // NOP
label_356ec0:
    // 0x356ec0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x356ec0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x356ec4: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x356ec4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
    // 0x356ec8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x356ec8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x356ecc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x356eccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x356ed0: 0x9043bed2  lbu         $v1, -0x412E($v0)
    ctx->pc = 0x356ed0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294950610)));
    // 0x356ed4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x356ed4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x356ed8: 0x10620015  beq         $v1, $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x356ED8u;
    {
        const bool branch_taken_0x356ed8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x356ed8) {
            ctx->pc = 0x356F30u;
            goto label_356f30;
        }
    }
    ctx->pc = 0x356EE0u;
    // 0x356ee0: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x356EE0u;
    {
        const bool branch_taken_0x356ee0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x356ee0) {
            ctx->pc = 0x356EF0u;
            goto label_356ef0;
        }
    }
    ctx->pc = 0x356EE8u;
    // 0x356ee8: 0x1000004b  b           . + 4 + (0x4B << 2)
    ctx->pc = 0x356EE8u;
    {
        const bool branch_taken_0x356ee8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x356EECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x356EE8u;
            // 0x356eec: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x356ee8) {
            ctx->pc = 0x357018u;
            goto label_357018;
        }
    }
    ctx->pc = 0x356EF0u;
label_356ef0:
    // 0x356ef0: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x356ef0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
    // 0x356ef4: 0x24640001  addiu       $a0, $v1, 0x1
    ctx->pc = 0x356ef4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x356ef8: 0x8c47bee4  lw          $a3, -0x411C($v0)
    ctx->pc = 0x356ef8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950628)));
    // 0x356efc: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x356efcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x356f00: 0x3c0301e0  lui         $v1, 0x1E0
    ctx->pc = 0x356f00u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)480 << 16));
    // 0x356f04: 0x3c060002  lui         $a2, 0x2
    ctx->pc = 0x356f04u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)2 << 16));
    // 0x356f08: 0xac65bee8  sw          $a1, -0x4118($v1)
    ctx->pc = 0x356f08u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294950632), GPR_U32(ctx, 5));
    // 0x356f0c: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x356f0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
    // 0x356f10: 0x3c050200  lui         $a1, 0x200
    ctx->pc = 0x356f10u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)512 << 16));
    // 0x356f14: 0xa044bed2  sb          $a0, -0x412E($v0)
    ctx->pc = 0x356f14u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294950610), (uint8_t)GPR_U32(ctx, 4));
    // 0x356f18: 0x3c0301e0  lui         $v1, 0x1E0
    ctx->pc = 0x356f18u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)480 << 16));
    // 0x356f1c: 0x34e20080  ori         $v0, $a3, 0x80
    ctx->pc = 0x356f1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)128);
    // 0x356f20: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x356f20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x356f24: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x356f24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x356f28: 0x1000003a  b           . + 4 + (0x3A << 2)
    ctx->pc = 0x356F28u;
    {
        const bool branch_taken_0x356f28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x356F2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x356F28u;
            // 0x356f2c: 0xac62bee4  sw          $v0, -0x411C($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294950628), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x356f28) {
            ctx->pc = 0x357014u;
            goto label_357014;
        }
    }
    ctx->pc = 0x356F30u;
label_356f30:
    // 0x356f30: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x356f30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
    // 0x356f34: 0x3c07009c  lui         $a3, 0x9C
    ctx->pc = 0x356f34u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)156 << 16));
    // 0x356f38: 0x90449720  lbu         $a0, -0x68E0($v0)
    ctx->pc = 0x356f38u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294940448)));
    // 0x356f3c: 0x3c05009c  lui         $a1, 0x9C
    ctx->pc = 0x356f3cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)156 << 16));
    // 0x356f40: 0x24e7db88  addiu       $a3, $a3, -0x2478
    ctx->pc = 0x356f40u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294957960));
    // 0x356f44: 0x24080230  addiu       $t0, $zero, 0x230
    ctx->pc = 0x356f44u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 560));
    // 0x356f48: 0x24a5db8c  addiu       $a1, $a1, -0x2474
    ctx->pc = 0x356f48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294957964));
    // 0x356f4c: 0x240600e0  addiu       $a2, $zero, 0xE0
    ctx->pc = 0x356f4cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 224));
    // 0x356f50: 0x410c0  sll         $v0, $a0, 3
    ctx->pc = 0x356f50u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x356f54: 0x38830001  xori        $v1, $a0, 0x1
    ctx->pc = 0x356f54u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)1);
    // 0x356f58: 0x444821  addu        $t1, $v0, $a0
    ctx->pc = 0x356f58u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x356f5c: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x356f5cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x356f60: 0x948c0  sll         $t1, $t1, 3
    ctx->pc = 0x356f60u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 3));
    // 0x356f64: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x356f64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x356f68: 0x1244821  addu        $t1, $t1, $a0
    ctx->pc = 0x356f68u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 4)));
    // 0x356f6c: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x356f6cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x356f70: 0x948c0  sll         $t1, $t1, 3
    ctx->pc = 0x356f70u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 3));
    // 0x356f74: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x356f74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x356f78: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x356f78u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x356f7c: 0xe91021  addu        $v0, $a3, $t1
    ctx->pc = 0x356f7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 9)));
    // 0x356f80: 0xac480000  sw          $t0, 0x0($v0)
    ctx->pc = 0x356f80u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 8));
    // 0x356f84: 0xa91021  addu        $v0, $a1, $t1
    ctx->pc = 0x356f84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 9)));
    // 0x356f88: 0xac460000  sw          $a2, 0x0($v0)
    ctx->pc = 0x356f88u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 6));
    // 0x356f8c: 0xe31021  addu        $v0, $a3, $v1
    ctx->pc = 0x356f8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x356f90: 0xac480000  sw          $t0, 0x0($v0)
    ctx->pc = 0x356f90u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 8));
    // 0x356f94: 0xa31021  addu        $v0, $a1, $v1
    ctx->pc = 0x356f94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x356f98: 0xc062810  jal         func_18A040
    ctx->pc = 0x356F98u;
    SET_GPR_U32(ctx, 31, 0x356FA0u);
    ctx->pc = 0x356F9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x356F98u;
            // 0x356f9c: 0xac460000  sw          $a2, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18A040u;
    if (runtime->hasFunction(0x18A040u)) {
        auto targetFn = runtime->lookupFunction(0x18A040u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x356FA0u; }
        if (ctx->pc != 0x356FA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0018A040_0x18a040(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x356FA0u; }
        if (ctx->pc != 0x356FA0u) { return; }
    }
    ctx->pc = 0x356FA0u;
label_356fa0:
    // 0x356fa0: 0x5040001e  beql        $v0, $zero, . + 4 + (0x1E << 2)
    ctx->pc = 0x356FA0u;
    {
        const bool branch_taken_0x356fa0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x356fa0) {
            ctx->pc = 0x356FA4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x356FA0u;
            // 0x356fa4: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x35701Cu;
            goto label_35701c;
        }
    }
    ctx->pc = 0x356FA8u;
    // 0x356fa8: 0x8c43049c  lw          $v1, 0x49C($v0)
    ctx->pc = 0x356fa8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1180)));
    // 0x356fac: 0x2444028c  addiu       $a0, $v0, 0x28C
    ctx->pc = 0x356facu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 652));
    // 0x356fb0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x356fb0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x356fb4: 0x24060028  addiu       $a2, $zero, 0x28
    ctx->pc = 0x356fb4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x356fb8: 0x34630080  ori         $v1, $v1, 0x80
    ctx->pc = 0x356fb8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)128);
    // 0x356fbc: 0xc04bbe8  jal         func_12EFA0
    ctx->pc = 0x356FBCu;
    SET_GPR_U32(ctx, 31, 0x356FC4u);
    ctx->pc = 0x356FC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x356FBCu;
            // 0x356fc0: 0xac43049c  sw          $v1, 0x49C($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 1180), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12EFA0u;
    if (runtime->hasFunction(0x12EFA0u)) {
        auto targetFn = runtime->lookupFunction(0x12EFA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x356FC4u; }
        if (ctx->pc != 0x356FC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012EFA0_0x12efa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x356FC4u; }
        if (ctx->pc != 0x356FC4u) { return; }
    }
    ctx->pc = 0x356FC4u;
label_356fc4:
    // 0x356fc4: 0x3c0201d5  lui         $v0, 0x1D5
    ctx->pc = 0x356fc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)469 << 16));
    // 0x356fc8: 0x8c43d918  lw          $v1, -0x26E8($v0)
    ctx->pc = 0x356fc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294957336)));
    // 0x356fcc: 0x30620080  andi        $v0, $v1, 0x80
    ctx->pc = 0x356fccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)128);
    // 0x356fd0: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x356FD0u;
    {
        const bool branch_taken_0x356fd0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x356fd0) {
            ctx->pc = 0x356FD4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x356FD0u;
            // 0x356fd4: 0x3c020004  lui         $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x357000u;
            goto label_357000;
        }
    }
    ctx->pc = 0x356FD8u;
    // 0x356fd8: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x356fd8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
    // 0x356fdc: 0xc0c4534  jal         func_3114D0
    ctx->pc = 0x356FDCu;
    SET_GPR_U32(ctx, 31, 0x356FE4u);
    ctx->pc = 0x356FE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x356FDCu;
            // 0x356fe0: 0x90509720  lbu         $s0, -0x68E0($v0) (Delay Slot)
        SET_GPR_U32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294940448)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3114D0u;
    if (runtime->hasFunction(0x3114D0u)) {
        auto targetFn = runtime->lookupFunction(0x3114D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x356FE4u; }
        if (ctx->pc != 0x356FE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003114D0_0x3114d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x356FE4u; }
        if (ctx->pc != 0x356FE4u) { return; }
    }
    ctx->pc = 0x356FE4u;
label_356fe4:
    // 0x356fe4: 0x5602000c  bnel        $s0, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x356FE4u;
    {
        const bool branch_taken_0x356fe4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x356fe4) {
            ctx->pc = 0x356FE8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x356FE4u;
            // 0x356fe8: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x357018u;
            goto label_357018;
        }
    }
    ctx->pc = 0x356FECu;
    // 0x356fec: 0x24032000  addiu       $v1, $zero, 0x2000
    ctx->pc = 0x356fecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
    // 0x356ff0: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x356ff0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
    // 0x356ff4: 0xa443bf02  sh          $v1, -0x40FE($v0)
    ctx->pc = 0x356ff4u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4294950658), (uint16_t)GPR_U32(ctx, 3));
    // 0x356ff8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x356FF8u;
    {
        const bool branch_taken_0x356ff8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x356FFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x356FF8u;
            // 0x356ffc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x356ff8) {
            ctx->pc = 0x357018u;
            goto label_357018;
        }
    }
    ctx->pc = 0x357000u;
label_357000:
    // 0x357000: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x357000u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x357004: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x357004u;
    {
        const bool branch_taken_0x357004 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x357004) {
            ctx->pc = 0x357014u;
            goto label_357014;
        }
    }
    ctx->pc = 0x35700Cu;
    // 0x35700c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x35700Cu;
    {
        const bool branch_taken_0x35700c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x357010u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x35700Cu;
            // 0x357010: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35700c) {
            ctx->pc = 0x357018u;
            goto label_357018;
        }
    }
    ctx->pc = 0x357014u;
label_357014:
    // 0x357014: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x357014u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_357018:
    // 0x357018: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x357018u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_35701c:
    // 0x35701c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x35701cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x357020: 0x3e00008  jr          $ra
    ctx->pc = 0x357020u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x357024u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x357020u;
            // 0x357024: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x357028u;
    // 0x357028: 0x0  nop
    ctx->pc = 0x357028u;
    // NOP
    // 0x35702c: 0x0  nop
    ctx->pc = 0x35702cu;
    // NOP
label_357030:
    // 0x357030: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x357030u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x357034: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x357034u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
    // 0x357038: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x357038u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x35703c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x35703cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x357040: 0x9042bed2  lbu         $v0, -0x412E($v0)
    ctx->pc = 0x357040u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294950610)));
    // 0x357044: 0x10440028  beq         $v0, $a0, . + 4 + (0x28 << 2)
    ctx->pc = 0x357044u;
    {
        const bool branch_taken_0x357044 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        if (branch_taken_0x357044) {
            ctx->pc = 0x3570E8u;
            goto label_3570e8;
        }
    }
    ctx->pc = 0x35704Cu;
    // 0x35704c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x35704Cu;
    {
        const bool branch_taken_0x35704c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x35704c) {
            ctx->pc = 0x35705Cu;
            goto label_35705c;
        }
    }
    ctx->pc = 0x357054u;
    // 0x357054: 0x10000062  b           . + 4 + (0x62 << 2)
    ctx->pc = 0x357054u;
    {
        const bool branch_taken_0x357054 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x357058u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x357054u;
            // 0x357058: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x357054) {
            ctx->pc = 0x3571E0u;
            goto label_3571e0;
        }
    }
    ctx->pc = 0x35705Cu;
label_35705c:
    // 0x35705c: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x35705cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
    // 0x357060: 0x24030040  addiu       $v1, $zero, 0x40
    ctx->pc = 0x357060u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x357064: 0xa044bf00  sb          $a0, -0x4100($v0)
    ctx->pc = 0x357064u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294950656), (uint8_t)GPR_U32(ctx, 4));
    // 0x357068: 0x3c060100  lui         $a2, 0x100
    ctx->pc = 0x357068u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)256 << 16));
    // 0x35706c: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x35706cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
    // 0x357070: 0x3c0401e0  lui         $a0, 0x1E0
    ctx->pc = 0x357070u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)480 << 16));
    // 0x357074: 0xa043bf14  sb          $v1, -0x40EC($v0)
    ctx->pc = 0x357074u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294950676), (uint8_t)GPR_U32(ctx, 3));
    // 0x357078: 0x24080038  addiu       $t0, $zero, 0x38
    ctx->pc = 0x357078u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
    // 0x35707c: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x35707cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
    // 0x357080: 0x3c0301e0  lui         $v1, 0x1E0
    ctx->pc = 0x357080u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)480 << 16));
    // 0x357084: 0x8c47bee4  lw          $a3, -0x411C($v0)
    ctx->pc = 0x357084u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950628)));
    // 0x357088: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x357088u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
    // 0x35708c: 0xe63025  or          $a2, $a3, $a2
    ctx->pc = 0x35708cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) | GPR_U64(ctx, 6));
    // 0x357090: 0x8c45bee8  lw          $a1, -0x4118($v0)
    ctx->pc = 0x357090u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950632)));
    // 0x357094: 0xac86bee4  sw          $a2, -0x411C($a0)
    ctx->pc = 0x357094u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4294950628), GPR_U32(ctx, 6));
    // 0x357098: 0x3c0601e0  lui         $a2, 0x1E0
    ctx->pc = 0x357098u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)480 << 16));
    // 0x35709c: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x35709cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
    // 0x3570a0: 0x34a40001  ori         $a0, $a1, 0x1
    ctx->pc = 0x3570a0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1);
    // 0x3570a4: 0x90429720  lbu         $v0, -0x68E0($v0)
    ctx->pc = 0x3570a4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294940448)));
    // 0x3570a8: 0x24c6bf0c  addiu       $a2, $a2, -0x40F4
    ctx->pc = 0x3570a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294950668));
    // 0x3570ac: 0xac64bee8  sw          $a0, -0x4118($v1)
    ctx->pc = 0x3570acu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294950632), GPR_U32(ctx, 4));
    // 0x3570b0: 0x24050021  addiu       $a1, $zero, 0x21
    ctx->pc = 0x3570b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
    // 0x3570b4: 0x3c0301e0  lui         $v1, 0x1E0
    ctx->pc = 0x3570b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)480 << 16));
    // 0x3570b8: 0x38440001  xori        $a0, $v0, 0x1
    ctx->pc = 0x3570b8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x3570bc: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x3570bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x3570c0: 0x43840  sll         $a3, $a0, 1
    ctx->pc = 0x3570c0u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x3570c4: 0xc22021  addu        $a0, $a2, $v0
    ctx->pc = 0x3570c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x3570c8: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x3570c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x3570cc: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x3570ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
    // 0x3570d0: 0xa4c80000  sh          $t0, 0x0($a2)
    ctx->pc = 0x3570d0u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 8));
    // 0x3570d4: 0xa4850000  sh          $a1, 0x0($a0)
    ctx->pc = 0x3570d4u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 5));
    // 0x3570d8: 0x9063bed2  lbu         $v1, -0x412E($v1)
    ctx->pc = 0x3570d8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294950610)));
    // 0x3570dc: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3570dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3570e0: 0x1000003e  b           . + 4 + (0x3E << 2)
    ctx->pc = 0x3570E0u;
    {
        const bool branch_taken_0x3570e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3570E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3570E0u;
            // 0x3570e4: 0xa043bed2  sb          $v1, -0x412E($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 4294950610), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3570e0) {
            ctx->pc = 0x3571DCu;
            goto label_3571dc;
        }
    }
    ctx->pc = 0x3570E8u;
label_3570e8:
    // 0x3570e8: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x3570e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
    // 0x3570ec: 0x90429720  lbu         $v0, -0x68E0($v0)
    ctx->pc = 0x3570ecu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294940448)));
    // 0x3570f0: 0xc062810  jal         func_18A040
    ctx->pc = 0x3570F0u;
    SET_GPR_U32(ctx, 31, 0x3570F8u);
    ctx->pc = 0x3570F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3570F0u;
            // 0x3570f4: 0x38440001  xori        $a0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
    ctx->pc = 0x18A040u;
    if (runtime->hasFunction(0x18A040u)) {
        auto targetFn = runtime->lookupFunction(0x18A040u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3570F8u; }
        if (ctx->pc != 0x3570F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0018A040_0x18a040(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3570F8u; }
        if (ctx->pc != 0x3570F8u) { return; }
    }
    ctx->pc = 0x3570F8u;
label_3570f8:
    // 0x3570f8: 0x904204f0  lbu         $v0, 0x4F0($v0)
    ctx->pc = 0x3570f8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1264)));
    // 0x3570fc: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x3570fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
    // 0x357100: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x357100u;
    {
        const bool branch_taken_0x357100 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x357100) {
            ctx->pc = 0x357110u;
            goto label_357110;
        }
    }
    ctx->pc = 0x357108u;
    // 0x357108: 0x10000035  b           . + 4 + (0x35 << 2)
    ctx->pc = 0x357108u;
    {
        const bool branch_taken_0x357108 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x35710Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x357108u;
            // 0x35710c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x357108) {
            ctx->pc = 0x3571E0u;
            goto label_3571e0;
        }
    }
    ctx->pc = 0x357110u;
label_357110:
    // 0x357110: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x357110u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
    // 0x357114: 0x3c04009c  lui         $a0, 0x9C
    ctx->pc = 0x357114u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)156 << 16));
    // 0x357118: 0x90479720  lbu         $a3, -0x68E0($v0)
    ctx->pc = 0x357118u;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294940448)));
    // 0x35711c: 0x2484db53  addiu       $a0, $a0, -0x24AD
    ctx->pc = 0x35711cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294957907));
    // 0x357120: 0x38e60001  xori        $a2, $a3, 0x1
    ctx->pc = 0x357120u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) ^ (uint64_t)(uint16_t)1);
    // 0x357124: 0x718c0  sll         $v1, $a3, 3
    ctx->pc = 0x357124u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x357128: 0x628c0  sll         $a1, $a2, 3
    ctx->pc = 0x357128u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x35712c: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x35712cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x357130: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x357130u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x357134: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x357134u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x357138: 0x528c0  sll         $a1, $a1, 3
    ctx->pc = 0x357138u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x35713c: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x35713cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x357140: 0xa63021  addu        $a2, $a1, $a2
    ctx->pc = 0x357140u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x357144: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x357144u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x357148: 0x2442db57  addiu       $v0, $v0, -0x24A9
    ctx->pc = 0x357148u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957911));
    // 0x35714c: 0x328c0  sll         $a1, $v1, 3
    ctx->pc = 0x35714cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x357150: 0x630c0  sll         $a2, $a2, 3
    ctx->pc = 0x357150u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x357154: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x357154u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x357158: 0x861821  addu        $v1, $a0, $a2
    ctx->pc = 0x357158u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x35715c: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x35715cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x357160: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x357160u;
    {
        const bool branch_taken_0x357160 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x357164u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x357160u;
            // 0x357164: 0x90630000  lbu         $v1, 0x0($v1) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x357160) {
            ctx->pc = 0x357184u;
            goto label_357184;
        }
    }
    ctx->pc = 0x357168u;
    // 0x357168: 0x31140  sll         $v0, $v1, 5
    ctx->pc = 0x357168u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x35716c: 0x24040038  addiu       $a0, $zero, 0x38
    ctx->pc = 0x35716cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
    // 0x357170: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x357170u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x357174: 0x2463dca4  addiu       $v1, $v1, -0x235C
    ctx->pc = 0x357174u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294958244));
    // 0x357178: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x357178u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x35717c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x35717cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x357180: 0xa4440000  sh          $a0, 0x0($v0)
    ctx->pc = 0x357180u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 4));
label_357184:
    // 0x357184: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x357184u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x357188: 0x24030230  addiu       $v1, $zero, 0x230
    ctx->pc = 0x357188u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 560));
    // 0x35718c: 0x2442db88  addiu       $v0, $v0, -0x2478
    ctx->pc = 0x35718cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957960));
    // 0x357190: 0x240400e0  addiu       $a0, $zero, 0xE0
    ctx->pc = 0x357190u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 224));
    // 0x357194: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x357194u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x357198: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x357198u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x35719c: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x35719cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x3571a0: 0x2442db8c  addiu       $v0, $v0, -0x2474
    ctx->pc = 0x3571a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957964));
    // 0x3571a4: 0x451821  addu        $v1, $v0, $a1
    ctx->pc = 0x3571a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x3571a8: 0x3c0201d5  lui         $v0, 0x1D5
    ctx->pc = 0x3571a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)469 << 16));
    // 0x3571ac: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x3571acu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x3571b0: 0x8c43d918  lw          $v1, -0x26E8($v0)
    ctx->pc = 0x3571b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294957336)));
    // 0x3571b4: 0x30620080  andi        $v0, $v1, 0x80
    ctx->pc = 0x3571b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)128);
    // 0x3571b8: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x3571B8u;
    {
        const bool branch_taken_0x3571b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3571b8) {
            ctx->pc = 0x3571BCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3571B8u;
            // 0x3571bc: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3571E0u;
            goto label_3571e0;
        }
    }
    ctx->pc = 0x3571C0u;
    // 0x3571c0: 0x3c020004  lui         $v0, 0x4
    ctx->pc = 0x3571c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4 << 16));
    // 0x3571c4: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x3571c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x3571c8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3571C8u;
    {
        const bool branch_taken_0x3571c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3571c8) {
            ctx->pc = 0x3571DCu;
            goto label_3571dc;
        }
    }
    ctx->pc = 0x3571D0u;
    // 0x3571d0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x3571d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3571d4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x3571D4u;
    {
        const bool branch_taken_0x3571d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3571d4) {
            ctx->pc = 0x3571E0u;
            goto label_3571e0;
        }
    }
    ctx->pc = 0x3571DCu;
label_3571dc:
    // 0x3571dc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3571dcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3571e0:
    // 0x3571e0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3571e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3571e4: 0x3e00008  jr          $ra
    ctx->pc = 0x3571E4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3571E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3571E4u;
            // 0x3571e8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3571ECu;
    // 0x3571ec: 0x0  nop
    ctx->pc = 0x3571ecu;
    // NOP
label_3571f0:
    // 0x3571f0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3571f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3571f4: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x3571f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
    // 0x3571f8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3571f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3571fc: 0x9044bed2  lbu         $a0, -0x412E($v0)
    ctx->pc = 0x3571fcu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294950610)));
    // 0x357200: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x357200u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x357204: 0x10820014  beq         $a0, $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x357204u;
    {
        const bool branch_taken_0x357204 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x357204) {
            ctx->pc = 0x357258u;
            goto label_357258;
        }
    }
    ctx->pc = 0x35720Cu;
    // 0x35720c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x35720cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x357210: 0x10820008  beq         $a0, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x357210u;
    {
        const bool branch_taken_0x357210 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x357210) {
            ctx->pc = 0x357234u;
            goto label_357234;
        }
    }
    ctx->pc = 0x357218u;
    // 0x357218: 0x50800003  beql        $a0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x357218u;
    {
        const bool branch_taken_0x357218 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x357218) {
            ctx->pc = 0x35721Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x357218u;
            // 0x35721c: 0x24830001  addiu       $v1, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x357228u;
            goto label_357228;
        }
    }
    ctx->pc = 0x357220u;
    // 0x357220: 0x10000055  b           . + 4 + (0x55 << 2)
    ctx->pc = 0x357220u;
    {
        const bool branch_taken_0x357220 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x357220) {
            ctx->pc = 0x357378u;
            goto label_357378;
        }
    }
    ctx->pc = 0x357228u;
label_357228:
    // 0x357228: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x357228u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
    // 0x35722c: 0x10000052  b           . + 4 + (0x52 << 2)
    ctx->pc = 0x35722Cu;
    {
        const bool branch_taken_0x35722c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x357230u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x35722Cu;
            // 0x357230: 0xa043bed2  sb          $v1, -0x412E($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 4294950610), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35722c) {
            ctx->pc = 0x357378u;
            goto label_357378;
        }
    }
    ctx->pc = 0x357234u;
label_357234:
    // 0x357234: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x357234u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x357238: 0x24030303  addiu       $v1, $zero, 0x303
    ctx->pc = 0x357238u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 771));
    // 0x35723c: 0x9442dab0  lhu         $v0, -0x2550($v0)
    ctx->pc = 0x35723cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294957744)));
    // 0x357240: 0x1443004d  bne         $v0, $v1, . + 4 + (0x4D << 2)
    ctx->pc = 0x357240u;
    {
        const bool branch_taken_0x357240 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x357240) {
            ctx->pc = 0x357378u;
            goto label_357378;
        }
    }
    ctx->pc = 0x357248u;
    // 0x357248: 0x24830001  addiu       $v1, $a0, 0x1
    ctx->pc = 0x357248u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x35724c: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x35724cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
    // 0x357250: 0x10000049  b           . + 4 + (0x49 << 2)
    ctx->pc = 0x357250u;
    {
        const bool branch_taken_0x357250 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x357254u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x357250u;
            // 0x357254: 0xa043bed2  sb          $v1, -0x412E($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 4294950610), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x357250) {
            ctx->pc = 0x357378u;
            goto label_357378;
        }
    }
    ctx->pc = 0x357258u;
label_357258:
    // 0x357258: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x357258u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
    // 0x35725c: 0x90429720  lbu         $v0, -0x68E0($v0)
    ctx->pc = 0x35725cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294940448)));
    // 0x357260: 0xc062810  jal         func_18A040
    ctx->pc = 0x357260u;
    SET_GPR_U32(ctx, 31, 0x357268u);
    ctx->pc = 0x357264u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x357260u;
            // 0x357264: 0x38440001  xori        $a0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
    ctx->pc = 0x18A040u;
    if (runtime->hasFunction(0x18A040u)) {
        auto targetFn = runtime->lookupFunction(0x18A040u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x357268u; }
        if (ctx->pc != 0x357268u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0018A040_0x18a040(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x357268u; }
        if (ctx->pc != 0x357268u) { return; }
    }
    ctx->pc = 0x357268u;
label_357268:
    // 0x357268: 0x3c03009f  lui         $v1, 0x9F
    ctx->pc = 0x357268u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)159 << 16));
    // 0x35726c: 0x3c05009c  lui         $a1, 0x9C
    ctx->pc = 0x35726cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)156 << 16));
    // 0x357270: 0x90669720  lbu         $a2, -0x68E0($v1)
    ctx->pc = 0x357270u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294940448)));
    // 0x357274: 0x3c04009c  lui         $a0, 0x9C
    ctx->pc = 0x357274u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)156 << 16));
    // 0x357278: 0x24a5db53  addiu       $a1, $a1, -0x24AD
    ctx->pc = 0x357278u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294957907));
    // 0x35727c: 0x2484dc9d  addiu       $a0, $a0, -0x2363
    ctx->pc = 0x35727cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294958237));
    // 0x357280: 0x38c70001  xori        $a3, $a2, 0x1
    ctx->pc = 0x357280u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 6) ^ (uint64_t)(uint16_t)1);
    // 0x357284: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x357284u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x357288: 0x730c0  sll         $a2, $a3, 3
    ctx->pc = 0x357288u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x35728c: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x35728cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x357290: 0x630c0  sll         $a2, $a2, 3
    ctx->pc = 0x357290u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x357294: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x357294u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x357298: 0x630c0  sll         $a2, $a2, 3
    ctx->pc = 0x357298u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x35729c: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x35729cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x3572a0: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x3572a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x3572a4: 0x90a50000  lbu         $a1, 0x0($a1)
    ctx->pc = 0x3572a4u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3572a8: 0x52940  sll         $a1, $a1, 5
    ctx->pc = 0x3572a8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
    // 0x3572ac: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x3572acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x3572b0: 0x90840000  lbu         $a0, 0x0($a0)
    ctx->pc = 0x3572b0u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3572b4: 0x5483000e  bnel        $a0, $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x3572B4u;
    {
        const bool branch_taken_0x3572b4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x3572b4) {
            ctx->pc = 0x3572B8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3572B4u;
            // 0x3572b8: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3572F0u;
            goto label_3572f0;
        }
    }
    ctx->pc = 0x3572BCu;
    // 0x3572bc: 0x904300f7  lbu         $v1, 0xF7($v0)
    ctx->pc = 0x3572bcu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 247)));
    // 0x3572c0: 0x1460001b  bnez        $v1, . + 4 + (0x1B << 2)
    ctx->pc = 0x3572C0u;
    {
        const bool branch_taken_0x3572c0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3572c0) {
            ctx->pc = 0x357330u;
            goto label_357330;
        }
    }
    ctx->pc = 0x3572C8u;
    // 0x3572c8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3572c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3572cc: 0xc0611ec  jal         func_1847B0
    ctx->pc = 0x3572CCu;
    SET_GPR_U32(ctx, 31, 0x3572D4u);
    ctx->pc = 0x3572D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3572CCu;
            // 0x3572d0: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1847B0u;
    if (runtime->hasFunction(0x1847B0u)) {
        auto targetFn = runtime->lookupFunction(0x1847B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3572D4u; }
        if (ctx->pc != 0x3572D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001847B0_0x1847b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3572D4u; }
        if (ctx->pc != 0x3572D4u) { return; }
    }
    ctx->pc = 0x3572D4u;
label_3572d4:
    // 0x3572d4: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x3572d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x3572d8: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x3572d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
    // 0x3572dc: 0xac43bee8  sw          $v1, -0x4118($v0)
    ctx->pc = 0x3572dcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294950632), GPR_U32(ctx, 3));
    // 0x3572e0: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x3572e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3572e4: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x3572e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
    // 0x3572e8: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x3572E8u;
    {
        const bool branch_taken_0x3572e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3572ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3572E8u;
            // 0x3572ec: 0xac43bef4  sw          $v1, -0x410C($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294950644), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3572e8) {
            ctx->pc = 0x357330u;
            goto label_357330;
        }
    }
    ctx->pc = 0x3572F0u;
label_3572f0:
    // 0x3572f0: 0x54850009  bnel        $a0, $a1, . + 4 + (0x9 << 2)
    ctx->pc = 0x3572F0u;
    {
        const bool branch_taken_0x3572f0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 5));
        if (branch_taken_0x3572f0) {
            ctx->pc = 0x3572F4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3572F0u;
            // 0x3572f4: 0x904300f7  lbu         $v1, 0xF7($v0) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 247)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x357318u;
            goto label_357318;
        }
    }
    ctx->pc = 0x3572F8u;
    // 0x3572f8: 0x904300f7  lbu         $v1, 0xF7($v0)
    ctx->pc = 0x3572f8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 247)));
    // 0x3572fc: 0x1460000c  bnez        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x3572FCu;
    {
        const bool branch_taken_0x3572fc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3572fc) {
            ctx->pc = 0x357330u;
            goto label_357330;
        }
    }
    ctx->pc = 0x357304u;
    // 0x357304: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x357304u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x357308: 0xc0611ec  jal         func_1847B0
    ctx->pc = 0x357308u;
    SET_GPR_U32(ctx, 31, 0x357310u);
    ctx->pc = 0x35730Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x357308u;
            // 0x35730c: 0x3c050500  lui         $a1, 0x500 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1280 << 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1847B0u;
    if (runtime->hasFunction(0x1847B0u)) {
        auto targetFn = runtime->lookupFunction(0x1847B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x357310u; }
        if (ctx->pc != 0x357310u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001847B0_0x1847b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x357310u; }
        if (ctx->pc != 0x357310u) { return; }
    }
    ctx->pc = 0x357310u;
label_357310:
    // 0x357310: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x357310u;
    {
        const bool branch_taken_0x357310 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x357310) {
            ctx->pc = 0x357330u;
            goto label_357330;
        }
    }
    ctx->pc = 0x357318u;
label_357318:
    // 0x357318: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x357318u;
    {
        const bool branch_taken_0x357318 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x357318) {
            ctx->pc = 0x357330u;
            goto label_357330;
        }
    }
    ctx->pc = 0x357320u;
    // 0x357320: 0xc0611ec  jal         func_1847B0
    ctx->pc = 0x357320u;
    SET_GPR_U32(ctx, 31, 0x357328u);
    ctx->pc = 0x357324u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x357320u;
            // 0x357324: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1847B0u;
    if (runtime->hasFunction(0x1847B0u)) {
        auto targetFn = runtime->lookupFunction(0x1847B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x357328u; }
        if (ctx->pc != 0x357328u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001847B0_0x1847b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x357328u; }
        if (ctx->pc != 0x357328u) { return; }
    }
    ctx->pc = 0x357328u;
label_357328:
    // 0x357328: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x357328u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
    // 0x35732c: 0xac40bee8  sw          $zero, -0x4118($v0)
    ctx->pc = 0x35732cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294950632), GPR_U32(ctx, 0));
label_357330:
    // 0x357330: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x357330u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
    // 0x357334: 0x3c04009c  lui         $a0, 0x9C
    ctx->pc = 0x357334u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)156 << 16));
    // 0x357338: 0x90469720  lbu         $a2, -0x68E0($v0)
    ctx->pc = 0x357338u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294940448)));
    // 0x35733c: 0x2484db88  addiu       $a0, $a0, -0x2478
    ctx->pc = 0x35733cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294957960));
    // 0x357340: 0x24050230  addiu       $a1, $zero, 0x230
    ctx->pc = 0x357340u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 560));
    // 0x357344: 0x240300e0  addiu       $v1, $zero, 0xE0
    ctx->pc = 0x357344u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 224));
    // 0x357348: 0x38c70001  xori        $a3, $a2, 0x1
    ctx->pc = 0x357348u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 6) ^ (uint64_t)(uint16_t)1);
    // 0x35734c: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x35734cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x357350: 0x730c0  sll         $a2, $a3, 3
    ctx->pc = 0x357350u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x357354: 0x2442db8c  addiu       $v0, $v0, -0x2474
    ctx->pc = 0x357354u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957964));
    // 0x357358: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x357358u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x35735c: 0x630c0  sll         $a2, $a2, 3
    ctx->pc = 0x35735cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x357360: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x357360u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x357364: 0x630c0  sll         $a2, $a2, 3
    ctx->pc = 0x357364u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x357368: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x357368u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x35736c: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x35736cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x357370: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x357370u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x357374: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x357374u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_357378:
    // 0x357378: 0xc0d5058  jal         func_354160
    ctx->pc = 0x357378u;
    SET_GPR_U32(ctx, 31, 0x357380u);
    ctx->pc = 0x354160u;
    if (runtime->hasFunction(0x354160u)) {
        auto targetFn = runtime->lookupFunction(0x354160u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x357380u; }
        if (ctx->pc != 0x357380u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00354160_0x354160(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x357380u; }
        if (ctx->pc != 0x357380u) { return; }
    }
    ctx->pc = 0x357380u;
label_357380:
    // 0x357380: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x357380u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x357384: 0x3e00008  jr          $ra
    ctx->pc = 0x357384u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x357388u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x357384u;
            // 0x357388: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x35738Cu;
    // 0x35738c: 0x0  nop
    ctx->pc = 0x35738cu;
    // NOP
label_357390:
    // 0x357390: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x357390u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x357394: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x357394u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
    // 0x357398: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x357398u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x35739c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x35739cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3573a0: 0x9042bed2  lbu         $v0, -0x412E($v0)
    ctx->pc = 0x3573a0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294950610)));
    // 0x3573a4: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x3573A4u;
    {
        const bool branch_taken_0x3573a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3573a4) {
            ctx->pc = 0x3573A8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3573A4u;
            // 0x3573a8: 0x24440001  addiu       $a0, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3573B4u;
            goto label_3573b4;
        }
    }
    ctx->pc = 0x3573ACu;
    // 0x3573ac: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x3573ACu;
    {
        const bool branch_taken_0x3573ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3573ac) {
            ctx->pc = 0x3573C8u;
            goto label_3573c8;
        }
    }
    ctx->pc = 0x3573B4u;
label_3573b4:
    // 0x3573b4: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x3573b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3573b8: 0x3c0301e0  lui         $v1, 0x1E0
    ctx->pc = 0x3573b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)480 << 16));
    // 0x3573bc: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x3573bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
    // 0x3573c0: 0xa465bf0a  sh          $a1, -0x40F6($v1)
    ctx->pc = 0x3573c0u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4294950666), (uint16_t)GPR_U32(ctx, 5));
    // 0x3573c4: 0xa044bed2  sb          $a0, -0x412E($v0)
    ctx->pc = 0x3573c4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294950610), (uint8_t)GPR_U32(ctx, 4));
label_3573c8:
    // 0x3573c8: 0x3c0201d5  lui         $v0, 0x1D5
    ctx->pc = 0x3573c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)469 << 16));
    // 0x3573cc: 0x8c43d918  lw          $v1, -0x26E8($v0)
    ctx->pc = 0x3573ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294957336)));
    // 0x3573d0: 0x30620080  andi        $v0, $v1, 0x80
    ctx->pc = 0x3573d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)128);
    // 0x3573d4: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x3573D4u;
    {
        const bool branch_taken_0x3573d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3573d4) {
            ctx->pc = 0x3573D8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3573D4u;
            // 0x3573d8: 0x3c020004  lui         $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3573FCu;
            goto label_3573fc;
        }
    }
    ctx->pc = 0x3573DCu;
    // 0x3573dc: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x3573dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
    // 0x3573e0: 0xc0c4534  jal         func_3114D0
    ctx->pc = 0x3573E0u;
    SET_GPR_U32(ctx, 31, 0x3573E8u);
    ctx->pc = 0x3573E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3573E0u;
            // 0x3573e4: 0x90509720  lbu         $s0, -0x68E0($v0) (Delay Slot)
        SET_GPR_U32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294940448)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3114D0u;
    if (runtime->hasFunction(0x3114D0u)) {
        auto targetFn = runtime->lookupFunction(0x3114D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3573E8u; }
        if (ctx->pc != 0x3573E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003114D0_0x3114d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3573E8u; }
        if (ctx->pc != 0x3573E8u) { return; }
    }
    ctx->pc = 0x3573E8u;
label_3573e8:
    // 0x3573e8: 0x56020002  bnel        $s0, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x3573E8u;
    {
        const bool branch_taken_0x3573e8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x3573e8) {
            ctx->pc = 0x3573ECu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3573E8u;
            // 0x3573ec: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3573F4u;
            goto label_3573f4;
        }
    }
    ctx->pc = 0x3573F0u;
    // 0x3573f0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3573f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3573f4:
    // 0x3573f4: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x3573F4u;
    {
        const bool branch_taken_0x3573f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3573F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3573F4u;
            // 0x3573f8: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3573f4) {
            ctx->pc = 0x357414u;
            goto label_357414;
        }
    }
    ctx->pc = 0x3573FCu;
label_3573fc:
    // 0x3573fc: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x3573fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x357400: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x357400u;
    {
        const bool branch_taken_0x357400 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x357400) {
            ctx->pc = 0x357404u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x357400u;
            // 0x357404: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x357410u;
            goto label_357410;
        }
    }
    ctx->pc = 0x357408u;
    // 0x357408: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x357408u;
    {
        const bool branch_taken_0x357408 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x35740Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x357408u;
            // 0x35740c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x357408) {
            ctx->pc = 0x357410u;
            goto label_357410;
        }
    }
    ctx->pc = 0x357410u;
label_357410:
    // 0x357410: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x357410u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_357414:
    // 0x357414: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x357414u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x357418: 0x3e00008  jr          $ra
    ctx->pc = 0x357418u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35741Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x357418u;
            // 0x35741c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x357420u;
label_357420:
    // 0x357420: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x357420u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x357424: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x357424u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
    // 0x357428: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x357428u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x35742c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x35742cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x357430: 0x9042bed2  lbu         $v0, -0x412E($v0)
    ctx->pc = 0x357430u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294950610)));
    // 0x357434: 0x10440025  beq         $v0, $a0, . + 4 + (0x25 << 2)
    ctx->pc = 0x357434u;
    {
        const bool branch_taken_0x357434 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        if (branch_taken_0x357434) {
            ctx->pc = 0x3574CCu;
            goto label_3574cc;
        }
    }
    ctx->pc = 0x35743Cu;
    // 0x35743c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x35743Cu;
    {
        const bool branch_taken_0x35743c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x35743c) {
            ctx->pc = 0x35744Cu;
            goto label_35744c;
        }
    }
    ctx->pc = 0x357444u;
    // 0x357444: 0x1000005f  b           . + 4 + (0x5F << 2)
    ctx->pc = 0x357444u;
    {
        const bool branch_taken_0x357444 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x357448u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x357444u;
            // 0x357448: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x357444) {
            ctx->pc = 0x3575C4u;
            goto label_3575c4;
        }
    }
    ctx->pc = 0x35744Cu;
label_35744c:
    // 0x35744c: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x35744cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
    // 0x357450: 0x3c0301e0  lui         $v1, 0x1E0
    ctx->pc = 0x357450u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)480 << 16));
    // 0x357454: 0x8c47bee8  lw          $a3, -0x4118($v0)
    ctx->pc = 0x357454u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950632)));
    // 0x357458: 0x3c050100  lui         $a1, 0x100
    ctx->pc = 0x357458u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)256 << 16));
    // 0x35745c: 0xa064bf00  sb          $a0, -0x4100($v1)
    ctx->pc = 0x35745cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4294950656), (uint8_t)GPR_U32(ctx, 4));
    // 0x357460: 0x3c0401e0  lui         $a0, 0x1E0
    ctx->pc = 0x357460u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)480 << 16));
    // 0x357464: 0x3c0301e0  lui         $v1, 0x1E0
    ctx->pc = 0x357464u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)480 << 16));
    // 0x357468: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x357468u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
    // 0x35746c: 0x34e70002  ori         $a3, $a3, 0x2
    ctx->pc = 0x35746cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)2);
    // 0x357470: 0x8c46bee4  lw          $a2, -0x411C($v0)
    ctx->pc = 0x357470u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950628)));
    // 0x357474: 0xac87bee8  sw          $a3, -0x4118($a0)
    ctx->pc = 0x357474u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4294950632), GPR_U32(ctx, 7));
    // 0x357478: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x357478u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
    // 0x35747c: 0xc52025  or          $a0, $a2, $a1
    ctx->pc = 0x35747cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) | GPR_U64(ctx, 5));
    // 0x357480: 0x90429720  lbu         $v0, -0x68E0($v0)
    ctx->pc = 0x357480u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294940448)));
    // 0x357484: 0x24050059  addiu       $a1, $zero, 0x59
    ctx->pc = 0x357484u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 89));
    // 0x357488: 0xac64bee4  sw          $a0, -0x411C($v1)
    ctx->pc = 0x357488u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294950628), GPR_U32(ctx, 4));
    // 0x35748c: 0x3c0401e0  lui         $a0, 0x1E0
    ctx->pc = 0x35748cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)480 << 16));
    // 0x357490: 0x38430001  xori        $v1, $v0, 0x1
    ctx->pc = 0x357490u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x357494: 0x2484bf0c  addiu       $a0, $a0, -0x40F4
    ctx->pc = 0x357494u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950668));
    // 0x357498: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x357498u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x35749c: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x35749cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x3574a0: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x3574a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x3574a4: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x3574a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x3574a8: 0xa4650000  sh          $a1, 0x0($v1)
    ctx->pc = 0x3574a8u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 5));
    // 0x3574ac: 0x24030021  addiu       $v1, $zero, 0x21
    ctx->pc = 0x3574acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
    // 0x3574b0: 0xa4430000  sh          $v1, 0x0($v0)
    ctx->pc = 0x3574b0u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x3574b4: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x3574b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
    // 0x3574b8: 0x9043bed2  lbu         $v1, -0x412E($v0)
    ctx->pc = 0x3574b8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294950610)));
    // 0x3574bc: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x3574bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
    // 0x3574c0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3574c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3574c4: 0x1000003e  b           . + 4 + (0x3E << 2)
    ctx->pc = 0x3574C4u;
    {
        const bool branch_taken_0x3574c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3574C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3574C4u;
            // 0x3574c8: 0xa043bed2  sb          $v1, -0x412E($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 4294950610), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3574c4) {
            ctx->pc = 0x3575C0u;
            goto label_3575c0;
        }
    }
    ctx->pc = 0x3574CCu;
label_3574cc:
    // 0x3574cc: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x3574ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
    // 0x3574d0: 0x90429720  lbu         $v0, -0x68E0($v0)
    ctx->pc = 0x3574d0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294940448)));
    // 0x3574d4: 0xc062810  jal         func_18A040
    ctx->pc = 0x3574D4u;
    SET_GPR_U32(ctx, 31, 0x3574DCu);
    ctx->pc = 0x3574D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3574D4u;
            // 0x3574d8: 0x38440001  xori        $a0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
    ctx->pc = 0x18A040u;
    if (runtime->hasFunction(0x18A040u)) {
        auto targetFn = runtime->lookupFunction(0x18A040u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3574DCu; }
        if (ctx->pc != 0x3574DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0018A040_0x18a040(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3574DCu; }
        if (ctx->pc != 0x3574DCu) { return; }
    }
    ctx->pc = 0x3574DCu;
label_3574dc:
    // 0x3574dc: 0x904204f0  lbu         $v0, 0x4F0($v0)
    ctx->pc = 0x3574dcu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1264)));
    // 0x3574e0: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x3574e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
    // 0x3574e4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3574E4u;
    {
        const bool branch_taken_0x3574e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3574e4) {
            ctx->pc = 0x3574F4u;
            goto label_3574f4;
        }
    }
    ctx->pc = 0x3574ECu;
    // 0x3574ec: 0x10000035  b           . + 4 + (0x35 << 2)
    ctx->pc = 0x3574ECu;
    {
        const bool branch_taken_0x3574ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3574F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3574ECu;
            // 0x3574f0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3574ec) {
            ctx->pc = 0x3575C4u;
            goto label_3575c4;
        }
    }
    ctx->pc = 0x3574F4u;
label_3574f4:
    // 0x3574f4: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x3574f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
    // 0x3574f8: 0x3c04009c  lui         $a0, 0x9C
    ctx->pc = 0x3574f8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)156 << 16));
    // 0x3574fc: 0x90479720  lbu         $a3, -0x68E0($v0)
    ctx->pc = 0x3574fcu;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294940448)));
    // 0x357500: 0x2484db53  addiu       $a0, $a0, -0x24AD
    ctx->pc = 0x357500u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294957907));
    // 0x357504: 0x38e60001  xori        $a2, $a3, 0x1
    ctx->pc = 0x357504u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) ^ (uint64_t)(uint16_t)1);
    // 0x357508: 0x718c0  sll         $v1, $a3, 3
    ctx->pc = 0x357508u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x35750c: 0x628c0  sll         $a1, $a2, 3
    ctx->pc = 0x35750cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x357510: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x357510u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x357514: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x357514u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x357518: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x357518u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x35751c: 0x528c0  sll         $a1, $a1, 3
    ctx->pc = 0x35751cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x357520: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x357520u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x357524: 0xa63021  addu        $a2, $a1, $a2
    ctx->pc = 0x357524u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x357528: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x357528u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x35752c: 0x2442db57  addiu       $v0, $v0, -0x24A9
    ctx->pc = 0x35752cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957911));
    // 0x357530: 0x328c0  sll         $a1, $v1, 3
    ctx->pc = 0x357530u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x357534: 0x630c0  sll         $a2, $a2, 3
    ctx->pc = 0x357534u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x357538: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x357538u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x35753c: 0x861821  addu        $v1, $a0, $a2
    ctx->pc = 0x35753cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x357540: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x357540u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x357544: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x357544u;
    {
        const bool branch_taken_0x357544 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x357548u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x357544u;
            // 0x357548: 0x90630000  lbu         $v1, 0x0($v1) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x357544) {
            ctx->pc = 0x357568u;
            goto label_357568;
        }
    }
    ctx->pc = 0x35754Cu;
    // 0x35754c: 0x31140  sll         $v0, $v1, 5
    ctx->pc = 0x35754cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x357550: 0x24040059  addiu       $a0, $zero, 0x59
    ctx->pc = 0x357550u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 89));
    // 0x357554: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x357554u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x357558: 0x2463dca4  addiu       $v1, $v1, -0x235C
    ctx->pc = 0x357558u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294958244));
    // 0x35755c: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x35755cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x357560: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x357560u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x357564: 0xa4440000  sh          $a0, 0x0($v0)
    ctx->pc = 0x357564u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 4));
label_357568:
    // 0x357568: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x357568u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x35756c: 0x24030230  addiu       $v1, $zero, 0x230
    ctx->pc = 0x35756cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 560));
    // 0x357570: 0x2442db88  addiu       $v0, $v0, -0x2478
    ctx->pc = 0x357570u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957960));
    // 0x357574: 0x240400e0  addiu       $a0, $zero, 0xE0
    ctx->pc = 0x357574u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 224));
    // 0x357578: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x357578u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x35757c: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x35757cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x357580: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x357580u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x357584: 0x2442db8c  addiu       $v0, $v0, -0x2474
    ctx->pc = 0x357584u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957964));
    // 0x357588: 0x451821  addu        $v1, $v0, $a1
    ctx->pc = 0x357588u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x35758c: 0x3c0201d5  lui         $v0, 0x1D5
    ctx->pc = 0x35758cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)469 << 16));
    // 0x357590: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x357590u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x357594: 0x8c43d918  lw          $v1, -0x26E8($v0)
    ctx->pc = 0x357594u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294957336)));
    // 0x357598: 0x30620080  andi        $v0, $v1, 0x80
    ctx->pc = 0x357598u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)128);
    // 0x35759c: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x35759Cu;
    {
        const bool branch_taken_0x35759c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x35759c) {
            ctx->pc = 0x3575A0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x35759Cu;
            // 0x3575a0: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3575C4u;
            goto label_3575c4;
        }
    }
    ctx->pc = 0x3575A4u;
    // 0x3575a4: 0x3c020004  lui         $v0, 0x4
    ctx->pc = 0x3575a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4 << 16));
    // 0x3575a8: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x3575a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x3575ac: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3575ACu;
    {
        const bool branch_taken_0x3575ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3575ac) {
            ctx->pc = 0x3575C0u;
            goto label_3575c0;
        }
    }
    ctx->pc = 0x3575B4u;
    // 0x3575b4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x3575b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3575b8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x3575B8u;
    {
        const bool branch_taken_0x3575b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3575b8) {
            ctx->pc = 0x3575C4u;
            goto label_3575c4;
        }
    }
    ctx->pc = 0x3575C0u;
label_3575c0:
    // 0x3575c0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3575c0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3575c4:
    // 0x3575c4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3575c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3575c8: 0x3e00008  jr          $ra
    ctx->pc = 0x3575C8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3575CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3575C8u;
            // 0x3575cc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3575D0u;
label_3575d0:
    // 0x3575d0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3575d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3575d4: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x3575d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
    // 0x3575d8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3575d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3575dc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3575dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3575e0: 0x9042bed2  lbu         $v0, -0x412E($v0)
    ctx->pc = 0x3575e0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294950610)));
    // 0x3575e4: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x3575E4u;
    {
        const bool branch_taken_0x3575e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3575e4) {
            ctx->pc = 0x3575E8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3575E4u;
            // 0x3575e8: 0x24440001  addiu       $a0, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3575F4u;
            goto label_3575f4;
        }
    }
    ctx->pc = 0x3575ECu;
    // 0x3575ec: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x3575ECu;
    {
        const bool branch_taken_0x3575ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3575ec) {
            ctx->pc = 0x357630u;
            goto label_357630;
        }
    }
    ctx->pc = 0x3575F4u;
label_3575f4:
    // 0x3575f4: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x3575f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x3575f8: 0x3c0301e0  lui         $v1, 0x1E0
    ctx->pc = 0x3575f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)480 << 16));
    // 0x3575fc: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x3575fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
    // 0x357600: 0xa065bf15  sb          $a1, -0x40EB($v1)
    ctx->pc = 0x357600u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4294950677), (uint8_t)GPR_U32(ctx, 5));
    // 0x357604: 0xa045bf16  sb          $a1, -0x40EA($v0)
    ctx->pc = 0x357604u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294950678), (uint8_t)GPR_U32(ctx, 5));
    // 0x357608: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x357608u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x35760c: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x35760cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
    // 0x357610: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x357610u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x357614: 0xa043bf00  sb          $v1, -0x4100($v0)
    ctx->pc = 0x357614u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294950656), (uint8_t)GPR_U32(ctx, 3));
    // 0x357618: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x357618u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
    // 0x35761c: 0x3c0301e0  lui         $v1, 0x1E0
    ctx->pc = 0x35761cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)480 << 16));
    // 0x357620: 0xac45beec  sw          $a1, -0x4114($v0)
    ctx->pc = 0x357620u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294950636), GPR_U32(ctx, 5));
    // 0x357624: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x357624u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
    // 0x357628: 0xac65bef0  sw          $a1, -0x4110($v1)
    ctx->pc = 0x357628u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294950640), GPR_U32(ctx, 5));
    // 0x35762c: 0xa044bed2  sb          $a0, -0x412E($v0)
    ctx->pc = 0x35762cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294950610), (uint8_t)GPR_U32(ctx, 4));
label_357630:
    // 0x357630: 0x3c0201d5  lui         $v0, 0x1D5
    ctx->pc = 0x357630u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)469 << 16));
    // 0x357634: 0x8c43d918  lw          $v1, -0x26E8($v0)
    ctx->pc = 0x357634u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294957336)));
    // 0x357638: 0x30620080  andi        $v0, $v1, 0x80
    ctx->pc = 0x357638u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)128);
    // 0x35763c: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x35763Cu;
    {
        const bool branch_taken_0x35763c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x35763c) {
            ctx->pc = 0x357640u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x35763Cu;
            // 0x357640: 0x3c020004  lui         $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x35766Cu;
            goto label_35766c;
        }
    }
    ctx->pc = 0x357644u;
    // 0x357644: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x357644u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
    // 0x357648: 0xc0c4534  jal         func_3114D0
    ctx->pc = 0x357648u;
    SET_GPR_U32(ctx, 31, 0x357650u);
    ctx->pc = 0x35764Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x357648u;
            // 0x35764c: 0x90509720  lbu         $s0, -0x68E0($v0) (Delay Slot)
        SET_GPR_U32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294940448)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3114D0u;
    if (runtime->hasFunction(0x3114D0u)) {
        auto targetFn = runtime->lookupFunction(0x3114D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x357650u; }
        if (ctx->pc != 0x357650u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003114D0_0x3114d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x357650u; }
        if (ctx->pc != 0x357650u) { return; }
    }
    ctx->pc = 0x357650u;
label_357650:
    // 0x357650: 0x5602000b  bnel        $s0, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x357650u;
    {
        const bool branch_taken_0x357650 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x357650) {
            ctx->pc = 0x357654u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x357650u;
            // 0x357654: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x357680u;
            goto label_357680;
        }
    }
    ctx->pc = 0x357658u;
    // 0x357658: 0x24030200  addiu       $v1, $zero, 0x200
    ctx->pc = 0x357658u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x35765c: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x35765cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
    // 0x357660: 0xa443bf02  sh          $v1, -0x40FE($v0)
    ctx->pc = 0x357660u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4294950658), (uint16_t)GPR_U32(ctx, 3));
    // 0x357664: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x357664u;
    {
        const bool branch_taken_0x357664 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x357668u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x357664u;
            // 0x357668: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x357664) {
            ctx->pc = 0x357680u;
            goto label_357680;
        }
    }
    ctx->pc = 0x35766Cu;
label_35766c:
    // 0x35766c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x35766cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x357670: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x357670u;
    {
        const bool branch_taken_0x357670 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x357670) {
            ctx->pc = 0x357674u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x357670u;
            // 0x357674: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x357680u;
            goto label_357680;
        }
    }
    ctx->pc = 0x357678u;
    // 0x357678: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x357678u;
    {
        const bool branch_taken_0x357678 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x35767Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x357678u;
            // 0x35767c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x357678) {
            ctx->pc = 0x357680u;
            goto label_357680;
        }
    }
    ctx->pc = 0x357680u;
label_357680:
    // 0x357680: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x357680u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x357684: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x357684u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x357688: 0x3e00008  jr          $ra
    ctx->pc = 0x357688u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35768Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x357688u;
            // 0x35768c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x357690u;
label_357690:
    // 0x357690: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x357690u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
    // 0x357694: 0x9043bed2  lbu         $v1, -0x412E($v0)
    ctx->pc = 0x357694u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294950610)));
    // 0x357698: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x357698u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x35769c: 0x10620021  beq         $v1, $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x35769Cu;
    {
        const bool branch_taken_0x35769c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x35769c) {
            ctx->pc = 0x357724u;
            goto label_357724;
        }
    }
    ctx->pc = 0x3576A4u;
    // 0x3576a4: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3576A4u;
    {
        const bool branch_taken_0x3576a4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3576a4) {
            ctx->pc = 0x3576B4u;
            goto label_3576b4;
        }
    }
    ctx->pc = 0x3576ACu;
    // 0x3576ac: 0x1000003c  b           . + 4 + (0x3C << 2)
    ctx->pc = 0x3576ACu;
    {
        const bool branch_taken_0x3576ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3576B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3576ACu;
            // 0x3576b0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3576ac) {
            ctx->pc = 0x3577A0u;
            goto label_3577a0;
        }
    }
    ctx->pc = 0x3576B4u;
label_3576b4:
    // 0x3576b4: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x3576b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
    // 0x3576b8: 0x24040009  addiu       $a0, $zero, 0x9
    ctx->pc = 0x3576b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x3576bc: 0x8c46bee4  lw          $a2, -0x411C($v0)
    ctx->pc = 0x3576bcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950628)));
    // 0x3576c0: 0x3c050010  lui         $a1, 0x10
    ctx->pc = 0x3576c0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16 << 16));
    // 0x3576c4: 0x3c0301e0  lui         $v1, 0x1E0
    ctx->pc = 0x3576c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)480 << 16));
    // 0x3576c8: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x3576c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
    // 0x3576cc: 0xc52825  or          $a1, $a2, $a1
    ctx->pc = 0x3576ccu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) | GPR_U64(ctx, 5));
    // 0x3576d0: 0xac44bee8  sw          $a0, -0x4118($v0)
    ctx->pc = 0x3576d0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294950632), GPR_U32(ctx, 4));
    // 0x3576d4: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x3576d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3576d8: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x3576d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
    // 0x3576dc: 0xa444bf0a  sh          $a0, -0x40F6($v0)
    ctx->pc = 0x3576dcu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4294950666), (uint16_t)GPR_U32(ctx, 4));
    // 0x3576e0: 0xac65bee4  sw          $a1, -0x411C($v1)
    ctx->pc = 0x3576e0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294950628), GPR_U32(ctx, 5));
    // 0x3576e4: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x3576e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
    // 0x3576e8: 0x2403000f  addiu       $v1, $zero, 0xF
    ctx->pc = 0x3576e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x3576ec: 0x3c0401e0  lui         $a0, 0x1E0
    ctx->pc = 0x3576ecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)480 << 16));
    // 0x3576f0: 0xa043bf14  sb          $v1, -0x40EC($v0)
    ctx->pc = 0x3576f0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294950676), (uint8_t)GPR_U32(ctx, 3));
    // 0x3576f4: 0x2484bf0c  addiu       $a0, $a0, -0x40F4
    ctx->pc = 0x3576f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950668));
    // 0x3576f8: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x3576f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
    // 0x3576fc: 0x3c0301e0  lui         $v1, 0x1E0
    ctx->pc = 0x3576fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)480 << 16));
    // 0x357700: 0x90459720  lbu         $a1, -0x68E0($v0)
    ctx->pc = 0x357700u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294940448)));
    // 0x357704: 0x52840  sll         $a1, $a1, 1
    ctx->pc = 0x357704u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x357708: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x357708u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
    // 0x35770c: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x35770cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x357710: 0xa4800000  sh          $zero, 0x0($a0)
    ctx->pc = 0x357710u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x357714: 0x9063bed2  lbu         $v1, -0x412E($v1)
    ctx->pc = 0x357714u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294950610)));
    // 0x357718: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x357718u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x35771c: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x35771Cu;
    {
        const bool branch_taken_0x35771c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x357720u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x35771Cu;
            // 0x357720: 0xa043bed2  sb          $v1, -0x412E($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 4294950610), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35771c) {
            ctx->pc = 0x35779Cu;
            goto label_35779c;
        }
    }
    ctx->pc = 0x357724u;
label_357724:
    // 0x357724: 0x3c03009f  lui         $v1, 0x9F
    ctx->pc = 0x357724u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)159 << 16));
    // 0x357728: 0x3c08009c  lui         $t0, 0x9C
    ctx->pc = 0x357728u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)156 << 16));
    // 0x35772c: 0x90659720  lbu         $a1, -0x68E0($v1)
    ctx->pc = 0x35772cu;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294940448)));
    // 0x357730: 0x3c06009c  lui         $a2, 0x9C
    ctx->pc = 0x357730u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)156 << 16));
    // 0x357734: 0x3c040004  lui         $a0, 0x4
    ctx->pc = 0x357734u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4 << 16));
    // 0x357738: 0x2508db88  addiu       $t0, $t0, -0x2478
    ctx->pc = 0x357738u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294957960));
    // 0x35773c: 0x24090230  addiu       $t1, $zero, 0x230
    ctx->pc = 0x35773cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 560));
    // 0x357740: 0x24c6db8c  addiu       $a2, $a2, -0x2474
    ctx->pc = 0x357740u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294957964));
    // 0x357744: 0x3c0301d5  lui         $v1, 0x1D5
    ctx->pc = 0x357744u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)469 << 16));
    // 0x357748: 0x38ab0001  xori        $t3, $a1, 0x1
    ctx->pc = 0x357748u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 5) ^ (uint64_t)(uint16_t)1);
    // 0x35774c: 0x8c65d918  lw          $a1, -0x26E8($v1)
    ctx->pc = 0x35774cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294957336)));
    // 0x357750: 0x240700e0  addiu       $a3, $zero, 0xE0
    ctx->pc = 0x357750u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 224));
    // 0x357754: 0xb18c0  sll         $v1, $t3, 3
    ctx->pc = 0x357754u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 11), 3));
    // 0x357758: 0x6b1821  addu        $v1, $v1, $t3
    ctx->pc = 0x357758u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 11)));
    // 0x35775c: 0x350c0  sll         $t2, $v1, 3
    ctx->pc = 0x35775cu;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x357760: 0xa41824  and         $v1, $a1, $a0
    ctx->pc = 0x357760u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 4));
    // 0x357764: 0x14b2021  addu        $a0, $t2, $t3
    ctx->pc = 0x357764u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 11)));
    // 0x357768: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x357768u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x35776c: 0x1044021  addu        $t0, $t0, $a0
    ctx->pc = 0x35776cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
    // 0x357770: 0xc42021  addu        $a0, $a2, $a0
    ctx->pc = 0x357770u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x357774: 0xad090000  sw          $t1, 0x0($t0)
    ctx->pc = 0x357774u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 9));
    // 0x357778: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x357778u;
    {
        const bool branch_taken_0x357778 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x35777Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x357778u;
            // 0x35777c: 0xac870000  sw          $a3, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x357778) {
            ctx->pc = 0x357788u;
            goto label_357788;
        }
    }
    ctx->pc = 0x357780u;
    // 0x357780: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x357780u;
    {
        const bool branch_taken_0x357780 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x357780) {
            ctx->pc = 0x3577A0u;
            goto label_3577a0;
        }
    }
    ctx->pc = 0x357788u;
label_357788:
    // 0x357788: 0x30a20080  andi        $v0, $a1, 0x80
    ctx->pc = 0x357788u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)128);
    // 0x35778c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x35778Cu;
    {
        const bool branch_taken_0x35778c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x35778c) {
            ctx->pc = 0x35779Cu;
            goto label_35779c;
        }
    }
    ctx->pc = 0x357794u;
    // 0x357794: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x357794u;
    {
        const bool branch_taken_0x357794 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x357798u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x357794u;
            // 0x357798: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x357794) {
            ctx->pc = 0x3577A0u;
            goto label_3577a0;
        }
    }
    ctx->pc = 0x35779Cu;
label_35779c:
    // 0x35779c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x35779cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3577a0:
    // 0x3577a0: 0x3e00008  jr          $ra
    ctx->pc = 0x3577A0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3577A8u;
    // 0x3577a8: 0x0  nop
    ctx->pc = 0x3577a8u;
    // NOP
    // 0x3577ac: 0x0  nop
    ctx->pc = 0x3577acu;
    // NOP
label_3577b0:
    // 0x3577b0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3577b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3577b4: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x3577b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
    // 0x3577b8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3577b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3577bc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3577bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3577c0: 0x9043bed2  lbu         $v1, -0x412E($v0)
    ctx->pc = 0x3577c0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294950610)));
    // 0x3577c4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x3577c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3577c8: 0x1062005d  beq         $v1, $v0, . + 4 + (0x5D << 2)
    ctx->pc = 0x3577C8u;
    {
        const bool branch_taken_0x3577c8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x3577c8) {
            ctx->pc = 0x357940u;
            goto label_357940;
        }
    }
    ctx->pc = 0x3577D0u;
    // 0x3577d0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x3577d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3577d4: 0x1064000b  beq         $v1, $a0, . + 4 + (0xB << 2)
    ctx->pc = 0x3577D4u;
    {
        const bool branch_taken_0x3577d4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x3577d4) {
            ctx->pc = 0x357804u;
            goto label_357804;
        }
    }
    ctx->pc = 0x3577DCu;
    // 0x3577dc: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3577DCu;
    {
        const bool branch_taken_0x3577dc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3577dc) {
            ctx->pc = 0x3577ECu;
            goto label_3577ec;
        }
    }
    ctx->pc = 0x3577E4u;
    // 0x3577e4: 0x10000072  b           . + 4 + (0x72 << 2)
    ctx->pc = 0x3577E4u;
    {
        const bool branch_taken_0x3577e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3577E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3577E4u;
            // 0x3577e8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3577e4) {
            ctx->pc = 0x3579B0u;
            goto label_3579b0;
        }
    }
    ctx->pc = 0x3577ECu;
label_3577ec:
    // 0x3577ec: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x3577ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
    // 0x3577f0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3577f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3577f4: 0xa044bf00  sb          $a0, -0x4100($v0)
    ctx->pc = 0x3577f4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294950656), (uint8_t)GPR_U32(ctx, 4));
    // 0x3577f8: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x3577f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
    // 0x3577fc: 0x1000006b  b           . + 4 + (0x6B << 2)
    ctx->pc = 0x3577FCu;
    {
        const bool branch_taken_0x3577fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x357800u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3577FCu;
            // 0x357800: 0xa043bed2  sb          $v1, -0x412E($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 4294950610), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3577fc) {
            ctx->pc = 0x3579ACu;
            goto label_3579ac;
        }
    }
    ctx->pc = 0x357804u;
label_357804:
    // 0x357804: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x357804u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
    // 0x357808: 0x3c040100  lui         $a0, 0x100
    ctx->pc = 0x357808u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)256 << 16));
    // 0x35780c: 0x8c47bee4  lw          $a3, -0x411C($v0)
    ctx->pc = 0x35780cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950628)));
    // 0x357810: 0x3c0301e0  lui         $v1, 0x1E0
    ctx->pc = 0x357810u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)480 << 16));
    // 0x357814: 0x3c0501e0  lui         $a1, 0x1E0
    ctx->pc = 0x357814u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)480 << 16));
    // 0x357818: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x357818u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
    // 0x35781c: 0xe43825  or          $a3, $a3, $a0
    ctx->pc = 0x35781cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 4));
    // 0x357820: 0x8c46bee8  lw          $a2, -0x4118($v0)
    ctx->pc = 0x357820u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950632)));
    // 0x357824: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x357824u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
    // 0x357828: 0x34c60001  ori         $a2, $a2, 0x1
    ctx->pc = 0x357828u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)1);
    // 0x35782c: 0x90449720  lbu         $a0, -0x68E0($v0)
    ctx->pc = 0x35782cu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294940448)));
    // 0x357830: 0xaca6bee8  sw          $a2, -0x4118($a1)
    ctx->pc = 0x357830u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4294950632), GPR_U32(ctx, 6));
    // 0x357834: 0x240500e0  addiu       $a1, $zero, 0xE0
    ctx->pc = 0x357834u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 224));
    // 0x357838: 0x34e20040  ori         $v0, $a3, 0x40
    ctx->pc = 0x357838u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)64);
    // 0x35783c: 0xac62bee4  sw          $v0, -0x411C($v1)
    ctx->pc = 0x35783cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294950628), GPR_U32(ctx, 2));
    // 0x357840: 0x410c0  sll         $v0, $a0, 3
    ctx->pc = 0x357840u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x357844: 0x441821  addu        $v1, $v0, $a0
    ctx->pc = 0x357844u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x357848: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x357848u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x35784c: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x35784cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x357850: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x357850u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x357854: 0x2442db8c  addiu       $v0, $v0, -0x2474
    ctx->pc = 0x357854u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957964));
    // 0x357858: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x357858u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x35785c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x35785cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x357860: 0xc062810  jal         func_18A040
    ctx->pc = 0x357860u;
    SET_GPR_U32(ctx, 31, 0x357868u);
    ctx->pc = 0x357864u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x357860u;
            // 0x357864: 0xac450000  sw          $a1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18A040u;
    if (runtime->hasFunction(0x18A040u)) {
        auto targetFn = runtime->lookupFunction(0x18A040u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x357868u; }
        if (ctx->pc != 0x357868u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0018A040_0x18a040(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x357868u; }
        if (ctx->pc != 0x357868u) { return; }
    }
    ctx->pc = 0x357868u;
label_357868:
    // 0x357868: 0x8c43049c  lw          $v1, 0x49C($v0)
    ctx->pc = 0x357868u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1180)));
    // 0x35786c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x35786cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x357870: 0x2604028c  addiu       $a0, $s0, 0x28C
    ctx->pc = 0x357870u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 652));
    // 0x357874: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x357874u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x357878: 0x24060028  addiu       $a2, $zero, 0x28
    ctx->pc = 0x357878u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x35787c: 0x34630060  ori         $v1, $v1, 0x60
    ctx->pc = 0x35787cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)96);
    // 0x357880: 0xc04bbe8  jal         func_12EFA0
    ctx->pc = 0x357880u;
    SET_GPR_U32(ctx, 31, 0x357888u);
    ctx->pc = 0x357884u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x357880u;
            // 0x357884: 0xac43049c  sw          $v1, 0x49C($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 1180), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12EFA0u;
    if (runtime->hasFunction(0x12EFA0u)) {
        auto targetFn = runtime->lookupFunction(0x12EFA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x357888u; }
        if (ctx->pc != 0x357888u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012EFA0_0x12efa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x357888u; }
        if (ctx->pc != 0x357888u) { return; }
    }
    ctx->pc = 0x357888u;
label_357888:
    // 0x357888: 0x8e04049c  lw          $a0, 0x49C($s0)
    ctx->pc = 0x357888u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1180)));
    // 0x35788c: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x35788cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x357890: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x357890u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
    // 0x357894: 0x2463db57  addiu       $v1, $v1, -0x24A9
    ctx->pc = 0x357894u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294957911));
    // 0x357898: 0x34840200  ori         $a0, $a0, 0x200
    ctx->pc = 0x357898u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)512);
    // 0x35789c: 0xae04049c  sw          $a0, 0x49C($s0)
    ctx->pc = 0x35789cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1180), GPR_U32(ctx, 4));
    // 0x3578a0: 0x90449720  lbu         $a0, -0x68E0($v0)
    ctx->pc = 0x3578a0u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294940448)));
    // 0x3578a4: 0x410c0  sll         $v0, $a0, 3
    ctx->pc = 0x3578a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x3578a8: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x3578a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x3578ac: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x3578acu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x3578b0: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x3578b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x3578b4: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x3578b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x3578b8: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x3578b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x3578bc: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x3578bcu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3578c0: 0x28420014  slti        $v0, $v0, 0x14
    ctx->pc = 0x3578c0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)20) ? 1 : 0);
    // 0x3578c4: 0x14400012  bnez        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x3578C4u;
    {
        const bool branch_taken_0x3578c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3578c4) {
            ctx->pc = 0x357910u;
            goto label_357910;
        }
    }
    ctx->pc = 0x3578CCu;
    // 0x3578cc: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x3578ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
    // 0x3578d0: 0x3c0301e0  lui         $v1, 0x1E0
    ctx->pc = 0x3578d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)480 << 16));
    // 0x3578d4: 0x9045bed2  lbu         $a1, -0x412E($v0)
    ctx->pc = 0x3578d4u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294950610)));
    // 0x3578d8: 0x3c0201d5  lui         $v0, 0x1D5
    ctx->pc = 0x3578d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)469 << 16));
    // 0x3578dc: 0x8c44d918  lw          $a0, -0x26E8($v0)
    ctx->pc = 0x3578dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294957336)));
    // 0x3578e0: 0x24a20001  addiu       $v0, $a1, 0x1
    ctx->pc = 0x3578e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x3578e4: 0xa062bed2  sb          $v0, -0x412E($v1)
    ctx->pc = 0x3578e4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4294950610), (uint8_t)GPR_U32(ctx, 2));
    // 0x3578e8: 0x30820080  andi        $v0, $a0, 0x80
    ctx->pc = 0x3578e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)128);
    // 0x3578ec: 0x54400030  bnel        $v0, $zero, . + 4 + (0x30 << 2)
    ctx->pc = 0x3578ECu;
    {
        const bool branch_taken_0x3578ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3578ec) {
            ctx->pc = 0x3578F0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3578ECu;
            // 0x3578f0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3579B0u;
            goto label_3579b0;
        }
    }
    ctx->pc = 0x3578F4u;
    // 0x3578f4: 0x3c020004  lui         $v0, 0x4
    ctx->pc = 0x3578f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4 << 16));
    // 0x3578f8: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x3578f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x3578fc: 0x1040002b  beqz        $v0, . + 4 + (0x2B << 2)
    ctx->pc = 0x3578FCu;
    {
        const bool branch_taken_0x3578fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3578fc) {
            ctx->pc = 0x3579ACu;
            goto label_3579ac;
        }
    }
    ctx->pc = 0x357904u;
    // 0x357904: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x357904u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x357908: 0x10000029  b           . + 4 + (0x29 << 2)
    ctx->pc = 0x357908u;
    {
        const bool branch_taken_0x357908 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x357908) {
            ctx->pc = 0x3579B0u;
            goto label_3579b0;
        }
    }
    ctx->pc = 0x357910u;
label_357910:
    // 0x357910: 0x3c0201d5  lui         $v0, 0x1D5
    ctx->pc = 0x357910u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)469 << 16));
    // 0x357914: 0x8c43d918  lw          $v1, -0x26E8($v0)
    ctx->pc = 0x357914u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294957336)));
    // 0x357918: 0x30620080  andi        $v0, $v1, 0x80
    ctx->pc = 0x357918u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)128);
    // 0x35791c: 0x54400024  bnel        $v0, $zero, . + 4 + (0x24 << 2)
    ctx->pc = 0x35791Cu;
    {
        const bool branch_taken_0x35791c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x35791c) {
            ctx->pc = 0x357920u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x35791Cu;
            // 0x357920: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3579B0u;
            goto label_3579b0;
        }
    }
    ctx->pc = 0x357924u;
    // 0x357924: 0x3c020004  lui         $v0, 0x4
    ctx->pc = 0x357924u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4 << 16));
    // 0x357928: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x357928u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x35792c: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x35792Cu;
    {
        const bool branch_taken_0x35792c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x35792c) {
            ctx->pc = 0x3579ACu;
            goto label_3579ac;
        }
    }
    ctx->pc = 0x357934u;
    // 0x357934: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x357934u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x357938: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x357938u;
    {
        const bool branch_taken_0x357938 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x357938) {
            ctx->pc = 0x3579B0u;
            goto label_3579b0;
        }
    }
    ctx->pc = 0x357940u;
label_357940:
    // 0x357940: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x357940u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
    // 0x357944: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x357944u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x357948: 0x90449720  lbu         $a0, -0x68E0($v0)
    ctx->pc = 0x357948u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294940448)));
    // 0x35794c: 0x2463db57  addiu       $v1, $v1, -0x24A9
    ctx->pc = 0x35794cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294957911));
    // 0x357950: 0x410c0  sll         $v0, $a0, 3
    ctx->pc = 0x357950u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x357954: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x357954u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x357958: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x357958u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x35795c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x35795cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x357960: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x357960u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x357964: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x357964u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x357968: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x357968u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x35796c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x35796Cu;
    {
        const bool branch_taken_0x35796c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x35796c) {
            ctx->pc = 0x35797Cu;
            goto label_35797c;
        }
    }
    ctx->pc = 0x357974u;
    // 0x357974: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x357974u;
    {
        const bool branch_taken_0x357974 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x357978u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x357974u;
            // 0x357978: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x357974) {
            ctx->pc = 0x3579B0u;
            goto label_3579b0;
        }
    }
    ctx->pc = 0x35797Cu;
label_35797c:
    // 0x35797c: 0x3c0201d5  lui         $v0, 0x1D5
    ctx->pc = 0x35797cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)469 << 16));
    // 0x357980: 0x8c43d918  lw          $v1, -0x26E8($v0)
    ctx->pc = 0x357980u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294957336)));
    // 0x357984: 0x30620080  andi        $v0, $v1, 0x80
    ctx->pc = 0x357984u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)128);
    // 0x357988: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x357988u;
    {
        const bool branch_taken_0x357988 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x357988) {
            ctx->pc = 0x35798Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x357988u;
            // 0x35798c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3579B0u;
            goto label_3579b0;
        }
    }
    ctx->pc = 0x357990u;
    // 0x357990: 0x3c020004  lui         $v0, 0x4
    ctx->pc = 0x357990u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4 << 16));
    // 0x357994: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x357994u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x357998: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x357998u;
    {
        const bool branch_taken_0x357998 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x357998) {
            ctx->pc = 0x3579ACu;
            goto label_3579ac;
        }
    }
    ctx->pc = 0x3579A0u;
    // 0x3579a0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3579a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3579a4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x3579A4u;
    {
        const bool branch_taken_0x3579a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3579a4) {
            ctx->pc = 0x3579B0u;
            goto label_3579b0;
        }
    }
    ctx->pc = 0x3579ACu;
label_3579ac:
    // 0x3579ac: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3579acu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3579b0:
    // 0x3579b0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3579b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3579b4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3579b4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3579b8: 0x3e00008  jr          $ra
    ctx->pc = 0x3579B8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3579BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3579B8u;
            // 0x3579bc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3579C0u;
label_3579c0:
    // 0x3579c0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3579c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3579c4: 0x3c0301e0  lui         $v1, 0x1E0
    ctx->pc = 0x3579c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)480 << 16));
    // 0x3579c8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3579c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3579cc: 0x9064bed2  lbu         $a0, -0x412E($v1)
    ctx->pc = 0x3579ccu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294950610)));
    // 0x3579d0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3579d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3579d4: 0x10830010  beq         $a0, $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x3579D4u;
    {
        const bool branch_taken_0x3579d4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x3579d4) {
            ctx->pc = 0x357A18u;
            goto label_357a18;
        }
    }
    ctx->pc = 0x3579DCu;
    // 0x3579dc: 0x50800003  beql        $a0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x3579DCu;
    {
        const bool branch_taken_0x3579dc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3579dc) {
            ctx->pc = 0x3579E0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3579DCu;
            // 0x3579e0: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3579ECu;
            goto label_3579ec;
        }
    }
    ctx->pc = 0x3579E4u;
    // 0x3579e4: 0x10000037  b           . + 4 + (0x37 << 2)
    ctx->pc = 0x3579E4u;
    {
        const bool branch_taken_0x3579e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3579e4) {
            ctx->pc = 0x357AC4u;
            goto label_357ac4;
        }
    }
    ctx->pc = 0x3579ECu;
label_3579ec:
    // 0x3579ec: 0x3c0301e0  lui         $v1, 0x1E0
    ctx->pc = 0x3579ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)480 << 16));
    // 0x3579f0: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x3579f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
    // 0x3579f4: 0xa065bf15  sb          $a1, -0x40EB($v1)
    ctx->pc = 0x3579f4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4294950677), (uint8_t)GPR_U32(ctx, 5));
    // 0x3579f8: 0xa045bf16  sb          $a1, -0x40EA($v0)
    ctx->pc = 0x3579f8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294950678), (uint8_t)GPR_U32(ctx, 5));
    // 0x3579fc: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x3579fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x357a00: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x357a00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
    // 0x357a04: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x357a04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x357a08: 0xac43beec  sw          $v1, -0x4114($v0)
    ctx->pc = 0x357a08u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294950636), GPR_U32(ctx, 3));
    // 0x357a0c: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x357a0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
    // 0x357a10: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x357A10u;
    {
        const bool branch_taken_0x357a10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x357A14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x357A10u;
            // 0x357a14: 0xa044bed2  sb          $a0, -0x412E($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 4294950610), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x357a10) {
            ctx->pc = 0x357AC4u;
            goto label_357ac4;
        }
    }
    ctx->pc = 0x357A18u;
label_357a18:
    // 0x357a18: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x357a18u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x357a1c: 0x24040303  addiu       $a0, $zero, 0x303
    ctx->pc = 0x357a1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 771));
    // 0x357a20: 0x9463dab0  lhu         $v1, -0x2550($v1)
    ctx->pc = 0x357a20u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4294957744)));
    // 0x357a24: 0x5464002a  bnel        $v1, $a0, . + 4 + (0x2A << 2)
    ctx->pc = 0x357A24u;
    {
        const bool branch_taken_0x357a24 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x357a24) {
            ctx->pc = 0x357A28u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x357A24u;
            // 0x357a28: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x357AD0u;
            goto label_357ad0;
        }
    }
    ctx->pc = 0x357A2Cu;
    // 0x357a2c: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x357a2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
    // 0x357a30: 0x90429720  lbu         $v0, -0x68E0($v0)
    ctx->pc = 0x357a30u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294940448)));
    // 0x357a34: 0xc062810  jal         func_18A040
    ctx->pc = 0x357A34u;
    SET_GPR_U32(ctx, 31, 0x357A3Cu);
    ctx->pc = 0x357A38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x357A34u;
            // 0x357a38: 0x38440001  xori        $a0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
    ctx->pc = 0x18A040u;
    if (runtime->hasFunction(0x18A040u)) {
        auto targetFn = runtime->lookupFunction(0x18A040u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x357A3Cu; }
        if (ctx->pc != 0x357A3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0018A040_0x18a040(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x357A3Cu; }
        if (ctx->pc != 0x357A3Cu) { return; }
    }
    ctx->pc = 0x357A3Cu;
label_357a3c:
    // 0x357a3c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x357a3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x357a40: 0x904200f7  lbu         $v0, 0xF7($v0)
    ctx->pc = 0x357a40u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 247)));
    // 0x357a44: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x357A44u;
    {
        const bool branch_taken_0x357a44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x357a44) {
            ctx->pc = 0x357A54u;
            goto label_357a54;
        }
    }
    ctx->pc = 0x357A4Cu;
    // 0x357a4c: 0xc0611ec  jal         func_1847B0
    ctx->pc = 0x357A4Cu;
    SET_GPR_U32(ctx, 31, 0x357A54u);
    ctx->pc = 0x357A50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x357A4Cu;
            // 0x357a50: 0x3c050500  lui         $a1, 0x500 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1280 << 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1847B0u;
    if (runtime->hasFunction(0x1847B0u)) {
        auto targetFn = runtime->lookupFunction(0x1847B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x357A54u; }
        if (ctx->pc != 0x357A54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001847B0_0x1847b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x357A54u; }
        if (ctx->pc != 0x357A54u) { return; }
    }
    ctx->pc = 0x357A54u;
label_357a54:
    // 0x357a54: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x357a54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
    // 0x357a58: 0x3c07009c  lui         $a3, 0x9C
    ctx->pc = 0x357a58u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)156 << 16));
    // 0x357a5c: 0x904b9720  lbu         $t3, -0x68E0($v0)
    ctx->pc = 0x357a5cu;
    SET_GPR_U32(ctx, 11, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294940448)));
    // 0x357a60: 0x3c05009c  lui         $a1, 0x9C
    ctx->pc = 0x357a60u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)156 << 16));
    // 0x357a64: 0x24e7db88  addiu       $a3, $a3, -0x2478
    ctx->pc = 0x357a64u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294957960));
    // 0x357a68: 0x24080230  addiu       $t0, $zero, 0x230
    ctx->pc = 0x357a68u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 560));
    // 0x357a6c: 0x24a5db8c  addiu       $a1, $a1, -0x2474
    ctx->pc = 0x357a6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294957964));
    // 0x357a70: 0x240600e0  addiu       $a2, $zero, 0xE0
    ctx->pc = 0x357a70u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 224));
    // 0x357a74: 0xb18c0  sll         $v1, $t3, 3
    ctx->pc = 0x357a74u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 11), 3));
    // 0x357a78: 0x396a0001  xori        $t2, $t3, 0x1
    ctx->pc = 0x357a78u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 11) ^ (uint64_t)(uint16_t)1);
    // 0x357a7c: 0x6b1821  addu        $v1, $v1, $t3
    ctx->pc = 0x357a7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 11)));
    // 0x357a80: 0xa48c0  sll         $t1, $t2, 3
    ctx->pc = 0x357a80u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 10), 3));
    // 0x357a84: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x357a84u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x357a88: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x357a88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x357a8c: 0x12a4821  addu        $t1, $t1, $t2
    ctx->pc = 0x357a8cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 10)));
    // 0x357a90: 0x6b1821  addu        $v1, $v1, $t3
    ctx->pc = 0x357a90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 11)));
    // 0x357a94: 0x948c0  sll         $t1, $t1, 3
    ctx->pc = 0x357a94u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 3));
    // 0x357a98: 0x2442dcaa  addiu       $v0, $v0, -0x2356
    ctx->pc = 0x357a98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958250));
    // 0x357a9c: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x357a9cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x357aa0: 0x12a4821  addu        $t1, $t1, $t2
    ctx->pc = 0x357aa0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 10)));
    // 0x357aa4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x357aa4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x357aa8: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x357aa8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x357aac: 0x918c0  sll         $v1, $t1, 3
    ctx->pc = 0x357aacu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 9), 3));
    // 0x357ab0: 0xe33821  addu        $a3, $a3, $v1
    ctx->pc = 0x357ab0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x357ab4: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x357ab4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x357ab8: 0xace80000  sw          $t0, 0x0($a3)
    ctx->pc = 0x357ab8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 8));
    // 0x357abc: 0xac660000  sw          $a2, 0x0($v1)
    ctx->pc = 0x357abcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 6));
    // 0x357ac0: 0xa4440000  sh          $a0, 0x0($v0)
    ctx->pc = 0x357ac0u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 4));
label_357ac4:
    // 0x357ac4: 0xc0d5058  jal         func_354160
    ctx->pc = 0x357AC4u;
    SET_GPR_U32(ctx, 31, 0x357ACCu);
    ctx->pc = 0x354160u;
    if (runtime->hasFunction(0x354160u)) {
        auto targetFn = runtime->lookupFunction(0x354160u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x357ACCu; }
        if (ctx->pc != 0x357ACCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00354160_0x354160(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x357ACCu; }
        if (ctx->pc != 0x357ACCu) { return; }
    }
    ctx->pc = 0x357ACCu;
label_357acc:
    // 0x357acc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x357accu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_357ad0:
    // 0x357ad0: 0x3e00008  jr          $ra
    ctx->pc = 0x357AD0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x357AD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x357AD0u;
            // 0x357ad4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x357AD8u;
    // 0x357ad8: 0x0  nop
    ctx->pc = 0x357ad8u;
    // NOP
    // 0x357adc: 0x0  nop
    ctx->pc = 0x357adcu;
    // NOP
label_357ae0:
    // 0x357ae0: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x357ae0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
    // 0x357ae4: 0x9043bed2  lbu         $v1, -0x412E($v0)
    ctx->pc = 0x357ae4u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294950610)));
    // 0x357ae8: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x357ae8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x357aec: 0x1062008a  beq         $v1, $v0, . + 4 + (0x8A << 2)
    ctx->pc = 0x357AECu;
    {
        const bool branch_taken_0x357aec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x357aec) {
            ctx->pc = 0x357D18u;
            goto label_357d18;
        }
    }
    ctx->pc = 0x357AF4u;
    // 0x357af4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x357af4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x357af8: 0x1062004d  beq         $v1, $v0, . + 4 + (0x4D << 2)
    ctx->pc = 0x357AF8u;
    {
        const bool branch_taken_0x357af8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x357af8) {
            ctx->pc = 0x357C30u;
            goto label_357c30;
        }
    }
    ctx->pc = 0x357B00u;
    // 0x357b00: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x357b00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x357b04: 0x1062000b  beq         $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x357B04u;
    {
        const bool branch_taken_0x357b04 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x357b04) {
            ctx->pc = 0x357B34u;
            goto label_357b34;
        }
    }
    ctx->pc = 0x357B0Cu;
    // 0x357b0c: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x357B0Cu;
    {
        const bool branch_taken_0x357b0c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x357b0c) {
            ctx->pc = 0x357B1Cu;
            goto label_357b1c;
        }
    }
    ctx->pc = 0x357B14u;
    // 0x357b14: 0x100000a6  b           . + 4 + (0xA6 << 2)
    ctx->pc = 0x357B14u;
    {
        const bool branch_taken_0x357b14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x357B18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x357B14u;
            // 0x357b18: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x357b14) {
            ctx->pc = 0x357DB0u;
            goto label_357db0;
        }
    }
    ctx->pc = 0x357B1Cu;
label_357b1c:
    // 0x357b1c: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x357b1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
    // 0x357b20: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x357b20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x357b24: 0xac40bef4  sw          $zero, -0x410C($v0)
    ctx->pc = 0x357b24u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294950644), GPR_U32(ctx, 0));
    // 0x357b28: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x357b28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
    // 0x357b2c: 0x1000009f  b           . + 4 + (0x9F << 2)
    ctx->pc = 0x357B2Cu;
    {
        const bool branch_taken_0x357b2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x357B30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x357B2Cu;
            // 0x357b30: 0xa043bed2  sb          $v1, -0x412E($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 4294950610), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x357b2c) {
            ctx->pc = 0x357DACu;
            goto label_357dac;
        }
    }
    ctx->pc = 0x357B34u;
label_357b34:
    // 0x357b34: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x357b34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
    // 0x357b38: 0x3c08009c  lui         $t0, 0x9C
    ctx->pc = 0x357b38u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)156 << 16));
    // 0x357b3c: 0x904a9720  lbu         $t2, -0x68E0($v0)
    ctx->pc = 0x357b3cu;
    SET_GPR_U32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294940448)));
    // 0x357b40: 0x3c06009c  lui         $a2, 0x9C
    ctx->pc = 0x357b40u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)156 << 16));
    // 0x357b44: 0x2508db88  addiu       $t0, $t0, -0x2478
    ctx->pc = 0x357b44u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294957960));
    // 0x357b48: 0x24090230  addiu       $t1, $zero, 0x230
    ctx->pc = 0x357b48u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 560));
    // 0x357b4c: 0x24c6db8c  addiu       $a2, $a2, -0x2474
    ctx->pc = 0x357b4cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294957964));
    // 0x357b50: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x357b50u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x357b54: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x357b54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
    // 0x357b58: 0x240700e0  addiu       $a3, $zero, 0xE0
    ctx->pc = 0x357b58u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 224));
    // 0x357b5c: 0x8c45bee0  lw          $a1, -0x4120($v0)
    ctx->pc = 0x357b5cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950624)));
    // 0x357b60: 0xa10c0  sll         $v0, $t2, 3
    ctx->pc = 0x357b60u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 10), 3));
    // 0x357b64: 0xa42024  and         $a0, $a1, $a0
    ctx->pc = 0x357b64u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & GPR_U64(ctx, 4));
    // 0x357b68: 0x4a1021  addu        $v0, $v0, $t2
    ctx->pc = 0x357b68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
    // 0x357b6c: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x357b6cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x357b70: 0x4a1021  addu        $v0, $v0, $t2
    ctx->pc = 0x357b70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
    // 0x357b74: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x357b74u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x357b78: 0x1024021  addu        $t0, $t0, $v0
    ctx->pc = 0x357b78u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x357b7c: 0xc23021  addu        $a2, $a2, $v0
    ctx->pc = 0x357b7cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x357b80: 0xad090000  sw          $t1, 0x0($t0)
    ctx->pc = 0x357b80u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 9));
    // 0x357b84: 0x10800011  beqz        $a0, . + 4 + (0x11 << 2)
    ctx->pc = 0x357B84u;
    {
        const bool branch_taken_0x357b84 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x357B88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x357B84u;
            // 0x357b88: 0xacc70000  sw          $a3, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x357b84) {
            ctx->pc = 0x357BCCu;
            goto label_357bcc;
        }
    }
    ctx->pc = 0x357B8Cu;
    // 0x357b8c: 0x3c042000  lui         $a0, 0x2000
    ctx->pc = 0x357b8cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)8192 << 16));
    // 0x357b90: 0xa42024  and         $a0, $a1, $a0
    ctx->pc = 0x357b90u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & GPR_U64(ctx, 4));
    // 0x357b94: 0x1080000d  beqz        $a0, . + 4 + (0xD << 2)
    ctx->pc = 0x357B94u;
    {
        const bool branch_taken_0x357b94 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x357b94) {
            ctx->pc = 0x357BCCu;
            goto label_357bcc;
        }
    }
    ctx->pc = 0x357B9Cu;
    // 0x357b9c: 0x3c04009c  lui         $a0, 0x9C
    ctx->pc = 0x357b9cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)156 << 16));
    // 0x357ba0: 0x2484db57  addiu       $a0, $a0, -0x24A9
    ctx->pc = 0x357ba0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294957911));
    // 0x357ba4: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x357ba4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x357ba8: 0x90850000  lbu         $a1, 0x0($a0)
    ctx->pc = 0x357ba8u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x357bac: 0x28a40002  slti        $a0, $a1, 0x2
    ctx->pc = 0x357bacu;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x357bb0: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x357BB0u;
    {
        const bool branch_taken_0x357bb0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x357bb0) {
            ctx->pc = 0x357BCCu;
            goto label_357bcc;
        }
    }
    ctx->pc = 0x357BB8u;
    // 0x357bb8: 0x24640001  addiu       $a0, $v1, 0x1
    ctx->pc = 0x357bb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x357bbc: 0x3c0301e0  lui         $v1, 0x1E0
    ctx->pc = 0x357bbcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)480 << 16));
    // 0x357bc0: 0xac65bef4  sw          $a1, -0x410C($v1)
    ctx->pc = 0x357bc0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294950644), GPR_U32(ctx, 5));
    // 0x357bc4: 0x3c0301e0  lui         $v1, 0x1E0
    ctx->pc = 0x357bc4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)480 << 16));
    // 0x357bc8: 0xa064bed2  sb          $a0, -0x412E($v1)
    ctx->pc = 0x357bc8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4294950610), (uint8_t)GPR_U32(ctx, 4));
label_357bcc:
    // 0x357bcc: 0x3c0301d5  lui         $v1, 0x1D5
    ctx->pc = 0x357bccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)469 << 16));
    // 0x357bd0: 0x8c64d918  lw          $a0, -0x26E8($v1)
    ctx->pc = 0x357bd0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294957336)));
    // 0x357bd4: 0x30830080  andi        $v1, $a0, 0x80
    ctx->pc = 0x357bd4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)128);
    // 0x357bd8: 0x54600075  bnel        $v1, $zero, . + 4 + (0x75 << 2)
    ctx->pc = 0x357BD8u;
    {
        const bool branch_taken_0x357bd8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x357bd8) {
            ctx->pc = 0x357BDCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x357BD8u;
            // 0x357bdc: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x357DB0u;
            goto label_357db0;
        }
    }
    ctx->pc = 0x357BE0u;
    // 0x357be0: 0x3c030004  lui         $v1, 0x4
    ctx->pc = 0x357be0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4 << 16));
    // 0x357be4: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x357be4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x357be8: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x357BE8u;
    {
        const bool branch_taken_0x357be8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x357be8) {
            ctx->pc = 0x357BFCu;
            goto label_357bfc;
        }
    }
    ctx->pc = 0x357BF0u;
    // 0x357bf0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x357bf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x357bf4: 0x1000006e  b           . + 4 + (0x6E << 2)
    ctx->pc = 0x357BF4u;
    {
        const bool branch_taken_0x357bf4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x357bf4) {
            ctx->pc = 0x357DB0u;
            goto label_357db0;
        }
    }
    ctx->pc = 0x357BFCu;
label_357bfc:
    // 0x357bfc: 0x3c04009c  lui         $a0, 0x9C
    ctx->pc = 0x357bfcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)156 << 16));
    // 0x357c00: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x357c00u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x357c04: 0x2484db74  addiu       $a0, $a0, -0x248C
    ctx->pc = 0x357c04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294957940));
    // 0x357c08: 0x2463db76  addiu       $v1, $v1, -0x248A
    ctx->pc = 0x357c08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294957942));
    // 0x357c0c: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x357c0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x357c10: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x357c10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x357c14: 0x94830000  lhu         $v1, 0x0($a0)
    ctx->pc = 0x357c14u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x357c18: 0x94420000  lhu         $v0, 0x0($v0)
    ctx->pc = 0x357c18u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x357c1c: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x357c1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x357c20: 0x18400062  blez        $v0, . + 4 + (0x62 << 2)
    ctx->pc = 0x357C20u;
    {
        const bool branch_taken_0x357c20 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x357c20) {
            ctx->pc = 0x357DACu;
            goto label_357dac;
        }
    }
    ctx->pc = 0x357C28u;
    // 0x357c28: 0x10000061  b           . + 4 + (0x61 << 2)
    ctx->pc = 0x357C28u;
    {
        const bool branch_taken_0x357c28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x357C2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x357C28u;
            // 0x357c2c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x357c28) {
            ctx->pc = 0x357DB0u;
            goto label_357db0;
        }
    }
    ctx->pc = 0x357C30u;
label_357c30:
    // 0x357c30: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x357c30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
    // 0x357c34: 0x3c07009c  lui         $a3, 0x9C
    ctx->pc = 0x357c34u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)156 << 16));
    // 0x357c38: 0x904a9720  lbu         $t2, -0x68E0($v0)
    ctx->pc = 0x357c38u;
    SET_GPR_U32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294940448)));
    // 0x357c3c: 0x3c05009c  lui         $a1, 0x9C
    ctx->pc = 0x357c3cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)156 << 16));
    // 0x357c40: 0x3c04009c  lui         $a0, 0x9C
    ctx->pc = 0x357c40u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)156 << 16));
    // 0x357c44: 0x24e7db88  addiu       $a3, $a3, -0x2478
    ctx->pc = 0x357c44u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294957960));
    // 0x357c48: 0x24080230  addiu       $t0, $zero, 0x230
    ctx->pc = 0x357c48u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 560));
    // 0x357c4c: 0x24a5db8c  addiu       $a1, $a1, -0x2474
    ctx->pc = 0x357c4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294957964));
    // 0x357c50: 0xa48c0  sll         $t1, $t2, 3
    ctx->pc = 0x357c50u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 10), 3));
    // 0x357c54: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x357c54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
    // 0x357c58: 0x12a4821  addu        $t1, $t1, $t2
    ctx->pc = 0x357c58u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 10)));
    // 0x357c5c: 0x240600e0  addiu       $a2, $zero, 0xE0
    ctx->pc = 0x357c5cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 224));
    // 0x357c60: 0x948c0  sll         $t1, $t1, 3
    ctx->pc = 0x357c60u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 3));
    // 0x357c64: 0x2484db57  addiu       $a0, $a0, -0x24A9
    ctx->pc = 0x357c64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294957911));
    // 0x357c68: 0x12a4821  addu        $t1, $t1, $t2
    ctx->pc = 0x357c68u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 10)));
    // 0x357c6c: 0x8c42bef4  lw          $v0, -0x410C($v0)
    ctx->pc = 0x357c6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950644)));
    // 0x357c70: 0x948c0  sll         $t1, $t1, 3
    ctx->pc = 0x357c70u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 3));
    // 0x357c74: 0xe93821  addu        $a3, $a3, $t1
    ctx->pc = 0x357c74u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 9)));
    // 0x357c78: 0xa92821  addu        $a1, $a1, $t1
    ctx->pc = 0x357c78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 9)));
    // 0x357c7c: 0xace80000  sw          $t0, 0x0($a3)
    ctx->pc = 0x357c7cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 8));
    // 0x357c80: 0x892021  addu        $a0, $a0, $t1
    ctx->pc = 0x357c80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 9)));
    // 0x357c84: 0xaca60000  sw          $a2, 0x0($a1)
    ctx->pc = 0x357c84u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 6));
    // 0x357c88: 0x90840000  lbu         $a0, 0x0($a0)
    ctx->pc = 0x357c88u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x357c8c: 0x44082a  slt         $at, $v0, $a0
    ctx->pc = 0x357c8cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x357c90: 0x10200010  beqz        $at, . + 4 + (0x10 << 2)
    ctx->pc = 0x357C90u;
    {
        const bool branch_taken_0x357c90 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x357c90) {
            ctx->pc = 0x357CD4u;
            goto label_357cd4;
        }
    }
    ctx->pc = 0x357C98u;
    // 0x357c98: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x357c98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x357c9c: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x357c9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
    // 0x357ca0: 0xa043bed2  sb          $v1, -0x412E($v0)
    ctx->pc = 0x357ca0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294950610), (uint8_t)GPR_U32(ctx, 3));
    // 0x357ca4: 0x3c0201d5  lui         $v0, 0x1D5
    ctx->pc = 0x357ca4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)469 << 16));
    // 0x357ca8: 0x8c43d918  lw          $v1, -0x26E8($v0)
    ctx->pc = 0x357ca8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294957336)));
    // 0x357cac: 0x30620080  andi        $v0, $v1, 0x80
    ctx->pc = 0x357cacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)128);
    // 0x357cb0: 0x5440003f  bnel        $v0, $zero, . + 4 + (0x3F << 2)
    ctx->pc = 0x357CB0u;
    {
        const bool branch_taken_0x357cb0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x357cb0) {
            ctx->pc = 0x357CB4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x357CB0u;
            // 0x357cb4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x357DB0u;
            goto label_357db0;
        }
    }
    ctx->pc = 0x357CB8u;
    // 0x357cb8: 0x3c020004  lui         $v0, 0x4
    ctx->pc = 0x357cb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4 << 16));
    // 0x357cbc: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x357cbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x357cc0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x357CC0u;
    {
        const bool branch_taken_0x357cc0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x357cc0) {
            ctx->pc = 0x357CD4u;
            goto label_357cd4;
        }
    }
    ctx->pc = 0x357CC8u;
    // 0x357cc8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x357cc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x357ccc: 0x10000038  b           . + 4 + (0x38 << 2)
    ctx->pc = 0x357CCCu;
    {
        const bool branch_taken_0x357ccc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x357ccc) {
            ctx->pc = 0x357DB0u;
            goto label_357db0;
        }
    }
    ctx->pc = 0x357CD4u;
label_357cd4:
    // 0x357cd4: 0x3c0201d5  lui         $v0, 0x1D5
    ctx->pc = 0x357cd4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)469 << 16));
    // 0x357cd8: 0x8c43d918  lw          $v1, -0x26E8($v0)
    ctx->pc = 0x357cd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294957336)));
    // 0x357cdc: 0x30620080  andi        $v0, $v1, 0x80
    ctx->pc = 0x357cdcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)128);
    // 0x357ce0: 0x54400033  bnel        $v0, $zero, . + 4 + (0x33 << 2)
    ctx->pc = 0x357CE0u;
    {
        const bool branch_taken_0x357ce0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x357ce0) {
            ctx->pc = 0x357CE4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x357CE0u;
            // 0x357ce4: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x357DB0u;
            goto label_357db0;
        }
    }
    ctx->pc = 0x357CE8u;
    // 0x357ce8: 0x3c020004  lui         $v0, 0x4
    ctx->pc = 0x357ce8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4 << 16));
    // 0x357cec: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x357cecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x357cf0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x357CF0u;
    {
        const bool branch_taken_0x357cf0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x357cf0) {
            ctx->pc = 0x357D04u;
            goto label_357d04;
        }
    }
    ctx->pc = 0x357CF8u;
    // 0x357cf8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x357cf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x357cfc: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x357CFCu;
    {
        const bool branch_taken_0x357cfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x357cfc) {
            ctx->pc = 0x357DB0u;
            goto label_357db0;
        }
    }
    ctx->pc = 0x357D04u;
label_357d04:
    // 0x357d04: 0x14800029  bnez        $a0, . + 4 + (0x29 << 2)
    ctx->pc = 0x357D04u;
    {
        const bool branch_taken_0x357d04 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x357d04) {
            ctx->pc = 0x357DACu;
            goto label_357dac;
        }
    }
    ctx->pc = 0x357D0Cu;
    // 0x357d0c: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x357d0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
    // 0x357d10: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x357D10u;
    {
        const bool branch_taken_0x357d10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x357D14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x357D10u;
            // 0x357d14: 0xa040bed2  sb          $zero, -0x412E($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 4294950610), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x357d10) {
            ctx->pc = 0x357DACu;
            goto label_357dac;
        }
    }
    ctx->pc = 0x357D18u;
label_357d18:
    // 0x357d18: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x357d18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
    // 0x357d1c: 0x3c05009c  lui         $a1, 0x9C
    ctx->pc = 0x357d1cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)156 << 16));
    // 0x357d20: 0x90489720  lbu         $t0, -0x68E0($v0)
    ctx->pc = 0x357d20u;
    SET_GPR_U32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294940448)));
    // 0x357d24: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x357d24u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x357d28: 0x24a5db88  addiu       $a1, $a1, -0x2478
    ctx->pc = 0x357d28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294957960));
    // 0x357d2c: 0x24060230  addiu       $a2, $zero, 0x230
    ctx->pc = 0x357d2cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 560));
    // 0x357d30: 0x2463db8c  addiu       $v1, $v1, -0x2474
    ctx->pc = 0x357d30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294957964));
    // 0x357d34: 0x240400e0  addiu       $a0, $zero, 0xE0
    ctx->pc = 0x357d34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 224));
    // 0x357d38: 0x838c0  sll         $a3, $t0, 3
    ctx->pc = 0x357d38u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
    // 0x357d3c: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x357d3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x357d40: 0xe83821  addu        $a3, $a3, $t0
    ctx->pc = 0x357d40u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
    // 0x357d44: 0x2442db57  addiu       $v0, $v0, -0x24A9
    ctx->pc = 0x357d44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957911));
    // 0x357d48: 0x738c0  sll         $a3, $a3, 3
    ctx->pc = 0x357d48u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x357d4c: 0xe83821  addu        $a3, $a3, $t0
    ctx->pc = 0x357d4cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
    // 0x357d50: 0x738c0  sll         $a3, $a3, 3
    ctx->pc = 0x357d50u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x357d54: 0xa72821  addu        $a1, $a1, $a3
    ctx->pc = 0x357d54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x357d58: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x357d58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x357d5c: 0xaca60000  sw          $a2, 0x0($a1)
    ctx->pc = 0x357d5cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 6));
    // 0x357d60: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x357d60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x357d64: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x357d64u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x357d68: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x357d68u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x357d6c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x357D6Cu;
    {
        const bool branch_taken_0x357d6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x357d6c) {
            ctx->pc = 0x357D7Cu;
            goto label_357d7c;
        }
    }
    ctx->pc = 0x357D74u;
    // 0x357d74: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x357D74u;
    {
        const bool branch_taken_0x357d74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x357D78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x357D74u;
            // 0x357d78: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x357d74) {
            ctx->pc = 0x357DB0u;
            goto label_357db0;
        }
    }
    ctx->pc = 0x357D7Cu;
label_357d7c:
    // 0x357d7c: 0x3c0201d5  lui         $v0, 0x1D5
    ctx->pc = 0x357d7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)469 << 16));
    // 0x357d80: 0x8c43d918  lw          $v1, -0x26E8($v0)
    ctx->pc = 0x357d80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294957336)));
    // 0x357d84: 0x30620080  andi        $v0, $v1, 0x80
    ctx->pc = 0x357d84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)128);
    // 0x357d88: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x357D88u;
    {
        const bool branch_taken_0x357d88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x357d88) {
            ctx->pc = 0x357D8Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x357D88u;
            // 0x357d8c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x357DB0u;
            goto label_357db0;
        }
    }
    ctx->pc = 0x357D90u;
    // 0x357d90: 0x3c020004  lui         $v0, 0x4
    ctx->pc = 0x357d90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4 << 16));
    // 0x357d94: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x357d94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x357d98: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x357D98u;
    {
        const bool branch_taken_0x357d98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x357d98) {
            ctx->pc = 0x357DACu;
            goto label_357dac;
        }
    }
    ctx->pc = 0x357DA0u;
    // 0x357da0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x357da0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x357da4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x357DA4u;
    {
        const bool branch_taken_0x357da4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x357da4) {
            ctx->pc = 0x357DB0u;
            goto label_357db0;
        }
    }
    ctx->pc = 0x357DACu;
label_357dac:
    // 0x357dac: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x357dacu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_357db0:
    // 0x357db0: 0x3e00008  jr          $ra
    ctx->pc = 0x357DB0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x357DB8u;
    // 0x357db8: 0x0  nop
    ctx->pc = 0x357db8u;
    // NOP
    // 0x357dbc: 0x0  nop
    ctx->pc = 0x357dbcu;
    // NOP
label_357dc0:
    // 0x357dc0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x357dc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x357dc4: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x357dc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
    // 0x357dc8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x357dc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x357dcc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x357dccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x357dd0: 0x9043bed2  lbu         $v1, -0x412E($v0)
    ctx->pc = 0x357dd0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294950610)));
    // 0x357dd4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x357dd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x357dd8: 0x1062001d  beq         $v1, $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x357DD8u;
    {
        const bool branch_taken_0x357dd8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x357dd8) {
            ctx->pc = 0x357E50u;
            goto label_357e50;
        }
    }
    ctx->pc = 0x357DE0u;
    // 0x357de0: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x357DE0u;
    {
        const bool branch_taken_0x357de0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x357de0) {
            ctx->pc = 0x357DF0u;
            goto label_357df0;
        }
    }
    ctx->pc = 0x357DE8u;
    // 0x357de8: 0x1000002e  b           . + 4 + (0x2E << 2)
    ctx->pc = 0x357DE8u;
    {
        const bool branch_taken_0x357de8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x357DECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x357DE8u;
            // 0x357dec: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x357de8) {
            ctx->pc = 0x357EA4u;
            goto label_357ea4;
        }
    }
    ctx->pc = 0x357DF0u;
label_357df0:
    // 0x357df0: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x357df0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
    // 0x357df4: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x357df4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x357df8: 0x8c47bee4  lw          $a3, -0x411C($v0)
    ctx->pc = 0x357df8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950628)));
    // 0x357dfc: 0x3c050800  lui         $a1, 0x800
    ctx->pc = 0x357dfcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)2048 << 16));
    // 0x357e00: 0x3c0301e0  lui         $v1, 0x1E0
    ctx->pc = 0x357e00u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)480 << 16));
    // 0x357e04: 0x24060038  addiu       $a2, $zero, 0x38
    ctx->pc = 0x357e04u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
    // 0x357e08: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x357e08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
    // 0x357e0c: 0xac44bee8  sw          $a0, -0x4118($v0)
    ctx->pc = 0x357e0cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294950632), GPR_U32(ctx, 4));
    // 0x357e10: 0x34e40800  ori         $a0, $a3, 0x800
    ctx->pc = 0x357e10u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)2048);
    // 0x357e14: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x357e14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
    // 0x357e18: 0x852025  or          $a0, $a0, $a1
    ctx->pc = 0x357e18u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
    // 0x357e1c: 0x90459720  lbu         $a1, -0x68E0($v0)
    ctx->pc = 0x357e1cu;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294940448)));
    // 0x357e20: 0xac64bee4  sw          $a0, -0x411C($v1)
    ctx->pc = 0x357e20u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294950628), GPR_U32(ctx, 4));
    // 0x357e24: 0x3c0401e0  lui         $a0, 0x1E0
    ctx->pc = 0x357e24u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)480 << 16));
    // 0x357e28: 0x3c0301e0  lui         $v1, 0x1E0
    ctx->pc = 0x357e28u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)480 << 16));
    // 0x357e2c: 0x2484bf0c  addiu       $a0, $a0, -0x40F4
    ctx->pc = 0x357e2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950668));
    // 0x357e30: 0x52840  sll         $a1, $a1, 1
    ctx->pc = 0x357e30u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x357e34: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x357e34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x357e38: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x357e38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
    // 0x357e3c: 0xa4860000  sh          $a2, 0x0($a0)
    ctx->pc = 0x357e3cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 6));
    // 0x357e40: 0x9063bed2  lbu         $v1, -0x412E($v1)
    ctx->pc = 0x357e40u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294950610)));
    // 0x357e44: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x357e44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x357e48: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x357E48u;
    {
        const bool branch_taken_0x357e48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x357E4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x357E48u;
            // 0x357e4c: 0xa043bed2  sb          $v1, -0x412E($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 4294950610), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x357e48) {
            ctx->pc = 0x357EA0u;
            goto label_357ea0;
        }
    }
    ctx->pc = 0x357E50u;
label_357e50:
    // 0x357e50: 0x3c0201d5  lui         $v0, 0x1D5
    ctx->pc = 0x357e50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)469 << 16));
    // 0x357e54: 0x8c43d918  lw          $v1, -0x26E8($v0)
    ctx->pc = 0x357e54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294957336)));
    // 0x357e58: 0x30620080  andi        $v0, $v1, 0x80
    ctx->pc = 0x357e58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)128);
    // 0x357e5c: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x357E5Cu;
    {
        const bool branch_taken_0x357e5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x357e5c) {
            ctx->pc = 0x357E60u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x357E5Cu;
            // 0x357e60: 0x3c020004  lui         $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x357E8Cu;
            goto label_357e8c;
        }
    }
    ctx->pc = 0x357E64u;
    // 0x357e64: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x357e64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
    // 0x357e68: 0xc0c4534  jal         func_3114D0
    ctx->pc = 0x357E68u;
    SET_GPR_U32(ctx, 31, 0x357E70u);
    ctx->pc = 0x357E6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x357E68u;
            // 0x357e6c: 0x90509720  lbu         $s0, -0x68E0($v0) (Delay Slot)
        SET_GPR_U32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294940448)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3114D0u;
    if (runtime->hasFunction(0x3114D0u)) {
        auto targetFn = runtime->lookupFunction(0x3114D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x357E70u; }
        if (ctx->pc != 0x357E70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003114D0_0x3114d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x357E70u; }
        if (ctx->pc != 0x357E70u) { return; }
    }
    ctx->pc = 0x357E70u;
label_357e70:
    // 0x357e70: 0x5602000c  bnel        $s0, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x357E70u;
    {
        const bool branch_taken_0x357e70 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x357e70) {
            ctx->pc = 0x357E74u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x357E70u;
            // 0x357e74: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x357EA4u;
            goto label_357ea4;
        }
    }
    ctx->pc = 0x357E78u;
    // 0x357e78: 0x24030400  addiu       $v1, $zero, 0x400
    ctx->pc = 0x357e78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x357e7c: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x357e7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
    // 0x357e80: 0xa443bf02  sh          $v1, -0x40FE($v0)
    ctx->pc = 0x357e80u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4294950658), (uint16_t)GPR_U32(ctx, 3));
    // 0x357e84: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x357E84u;
    {
        const bool branch_taken_0x357e84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x357E88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x357E84u;
            // 0x357e88: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x357e84) {
            ctx->pc = 0x357EA4u;
            goto label_357ea4;
        }
    }
    ctx->pc = 0x357E8Cu;
label_357e8c:
    // 0x357e8c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x357e8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x357e90: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x357E90u;
    {
        const bool branch_taken_0x357e90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x357e90) {
            ctx->pc = 0x357EA0u;
            goto label_357ea0;
        }
    }
    ctx->pc = 0x357E98u;
    // 0x357e98: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x357E98u;
    {
        const bool branch_taken_0x357e98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x357E9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x357E98u;
            // 0x357e9c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x357e98) {
            ctx->pc = 0x357EA4u;
            goto label_357ea4;
        }
    }
    ctx->pc = 0x357EA0u;
label_357ea0:
    // 0x357ea0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x357ea0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_357ea4:
    // 0x357ea4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x357ea4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x357ea8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x357ea8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x357eac: 0x3e00008  jr          $ra
    ctx->pc = 0x357EACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x357EB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x357EACu;
            // 0x357eb0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x357EB4u;
    // 0x357eb4: 0x0  nop
    ctx->pc = 0x357eb4u;
    // NOP
    // 0x357eb8: 0x0  nop
    ctx->pc = 0x357eb8u;
    // NOP
    // 0x357ebc: 0x0  nop
    ctx->pc = 0x357ebcu;
    // NOP
    ctx->pc = 0x357ec0u;
}
