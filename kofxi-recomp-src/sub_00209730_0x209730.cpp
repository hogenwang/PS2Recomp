#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00209730
// Address: 0x209730 - 0x209870
void sub_00209730_0x209730(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00209730_0x209730");
#endif

    switch (ctx->pc) {
        case 0x209740u: goto label_209740;
        case 0x209774u: goto label_209774;
        case 0x209794u: goto label_209794;
        case 0x2097a0u: goto label_2097a0;
        case 0x209808u: goto label_209808;
        case 0x209818u: goto label_209818;
        case 0x209830u: goto label_209830;
        case 0x209840u: goto label_209840;
        case 0x209850u: goto label_209850;
        case 0x209858u: goto label_209858;
        default: break;
    }

    ctx->pc = 0x209730u;

label_209730:
    // 0x209730: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x209730u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x209734: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x209734u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x209738: 0xc055684  jal         func_155A10
    ctx->pc = 0x209738u;
    SET_GPR_U32(ctx, 31, 0x209740u);
    ctx->pc = 0x155A10u;
    if (runtime->hasFunction(0x155A10u)) {
        auto targetFn = runtime->lookupFunction(0x155A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x209740u; }
        if (ctx->pc != 0x209740u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00155A10_0x155a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x209740u; }
        if (ctx->pc != 0x209740u) { return; }
    }
    ctx->pc = 0x209740u;
label_209740:
    // 0x209740: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x209740u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x209744: 0x3c040033  lui         $a0, 0x33
    ctx->pc = 0x209744u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)51 << 16));
    // 0x209748: 0xa040e818  sb          $zero, -0x17E8($v0)
    ctx->pc = 0x209748u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294961176), (uint8_t)GPR_U32(ctx, 0));
    // 0x20974c: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x20974cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x209750: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x209750u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x209754: 0x24841760  addiu       $a0, $a0, 0x1760
    ctx->pc = 0x209754u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 5984));
    // 0x209758: 0xac43e800  sw          $v1, -0x1800($v0)
    ctx->pc = 0x209758u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294961152), GPR_U32(ctx, 3));
    // 0x20975c: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x20975cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x209760: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x209760u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x209764: 0xac40e7f8  sw          $zero, -0x1808($v0)
    ctx->pc = 0x209764u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294961144), GPR_U32(ctx, 0));
    // 0x209768: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x209768u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x20976c: 0xc0558e0  jal         func_156380
    ctx->pc = 0x20976Cu;
    SET_GPR_U32(ctx, 31, 0x209774u);
    ctx->pc = 0x209770u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20976Cu;
            // 0x209770: 0xa043e820  sb          $v1, -0x17E0($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 4294961184), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x156380u;
    if (runtime->hasFunction(0x156380u)) {
        auto targetFn = runtime->lookupFunction(0x156380u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x209774u; }
        if (ctx->pc != 0x209774u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00156380_0x156380(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x209774u; }
        if (ctx->pc != 0x209774u) { return; }
    }
    ctx->pc = 0x209774u;
label_209774:
    // 0x209774: 0x3c040033  lui         $a0, 0x33
    ctx->pc = 0x209774u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)51 << 16));
    // 0x209778: 0x3c05003f  lui         $a1, 0x3F
    ctx->pc = 0x209778u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
    // 0x20977c: 0x24841180  addiu       $a0, $a0, 0x1180
    ctx->pc = 0x20977cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4480));
    // 0x209780: 0x24a5f820  addiu       $a1, $a1, -0x7E0
    ctx->pc = 0x209780u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294965280));
    // 0x209784: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x209784u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x209788: 0x24070034  addiu       $a3, $zero, 0x34
    ctx->pc = 0x209788u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
    // 0x20978c: 0xc0556d4  jal         func_155B50
    ctx->pc = 0x20978Cu;
    SET_GPR_U32(ctx, 31, 0x209794u);
    ctx->pc = 0x209790u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20978Cu;
            // 0x209790: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x155B50u;
    if (runtime->hasFunction(0x155B50u)) {
        auto targetFn = runtime->lookupFunction(0x155B50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x209794u; }
        if (ctx->pc != 0x209794u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00155B50_0x155b50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x209794u; }
        if (ctx->pc != 0x209794u) { return; }
    }
    ctx->pc = 0x209794u;
label_209794:
    // 0x209794: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x209794u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x209798: 0x3e00008  jr          $ra
    ctx->pc = 0x209798u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20979Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x209798u;
            // 0x20979c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2097A0u;
label_2097a0:
    // 0x2097a0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2097a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2097a4: 0x3c0301c1  lui         $v1, 0x1C1
    ctx->pc = 0x2097a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)449 << 16));
    // 0x2097a8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2097a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2097ac: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2097acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2097b0: 0x8c659bf8  lw          $a1, -0x6408($v1)
    ctx->pc = 0x2097b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294941688)));
    // 0x2097b4: 0x8ca30054  lw          $v1, 0x54($a1)
    ctx->pc = 0x2097b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 84)));
    // 0x2097b8: 0x50640009  beql        $v1, $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2097B8u;
    {
        const bool branch_taken_0x2097b8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x2097b8) {
            ctx->pc = 0x2097BCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2097B8u;
            // 0x2097bc: 0x8ca40058  lw          $a0, 0x58($a1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 88)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2097E0u;
            goto label_2097e0;
        }
    }
    ctx->pc = 0x2097C0u;
    // 0x2097c0: 0x50600003  beql        $v1, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x2097C0u;
    {
        const bool branch_taken_0x2097c0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2097c0) {
            ctx->pc = 0x2097C4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2097C0u;
            // 0x2097c4: 0xaca00058  sw          $zero, 0x58($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 88), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2097D0u;
            goto label_2097d0;
        }
    }
    ctx->pc = 0x2097C8u;
    // 0x2097c8: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x2097C8u;
    {
        const bool branch_taken_0x2097c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2097c8) {
            ctx->pc = 0x209810u;
            goto label_209810;
        }
    }
    ctx->pc = 0x2097D0u;
label_2097d0:
    // 0x2097d0: 0x3c0301c1  lui         $v1, 0x1C1
    ctx->pc = 0x2097d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)449 << 16));
    // 0x2097d4: 0x8c639bf8  lw          $v1, -0x6408($v1)
    ctx->pc = 0x2097d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294941688)));
    // 0x2097d8: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x2097D8u;
    {
        const bool branch_taken_0x2097d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2097DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2097D8u;
            // 0x2097dc: 0xac640054  sw          $a0, 0x54($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 84), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2097d8) {
            ctx->pc = 0x209818u;
            goto label_209818;
        }
    }
    ctx->pc = 0x2097E0u;
label_2097e0:
    // 0x2097e0: 0x3c0301c1  lui         $v1, 0x1C1
    ctx->pc = 0x2097e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)449 << 16));
    // 0x2097e4: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x2097e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x2097e8: 0xaca40058  sw          $a0, 0x58($a1)
    ctx->pc = 0x2097e8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 88), GPR_U32(ctx, 4));
    // 0x2097ec: 0x8c639bf8  lw          $v1, -0x6408($v1)
    ctx->pc = 0x2097ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294941688)));
    // 0x2097f0: 0x8c630058  lw          $v1, 0x58($v1)
    ctx->pc = 0x2097f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x2097f4: 0x28610011  slti        $at, $v1, 0x11
    ctx->pc = 0x2097f4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)17) ? 1 : 0);
    // 0x2097f8: 0x54200008  bnel        $at, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x2097F8u;
    {
        const bool branch_taken_0x2097f8 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x2097f8) {
            ctx->pc = 0x2097FCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2097F8u;
            // 0x2097fc: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x20981Cu;
            goto label_20981c;
        }
    }
    ctx->pc = 0x209800u;
    // 0x209800: 0xc0825cc  jal         func_209730
    ctx->pc = 0x209800u;
    SET_GPR_U32(ctx, 31, 0x209808u);
    ctx->pc = 0x209730u;
    goto label_209730;
    ctx->pc = 0x209808u;
label_209808:
    // 0x209808: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x209808u;
    {
        const bool branch_taken_0x209808 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x209808) {
            ctx->pc = 0x209818u;
            goto label_209818;
        }
    }
    ctx->pc = 0x209810u;
label_209810:
    // 0x209810: 0xc0825cc  jal         func_209730
    ctx->pc = 0x209810u;
    SET_GPR_U32(ctx, 31, 0x209818u);
    ctx->pc = 0x209730u;
    goto label_209730;
    ctx->pc = 0x209818u;
label_209818:
    // 0x209818: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x209818u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_20981c:
    // 0x20981c: 0x3e00008  jr          $ra
    ctx->pc = 0x20981Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x209820u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20981Cu;
            // 0x209820: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x209824u;
    // 0x209824: 0x0  nop
    ctx->pc = 0x209824u;
    // NOP
    // 0x209828: 0x0  nop
    ctx->pc = 0x209828u;
    // NOP
    // 0x20982c: 0x0  nop
    ctx->pc = 0x20982cu;
    // NOP
label_209830:
    // 0x209830: 0x80828f0  j           func_20A3C0
    ctx->pc = 0x209830u;
    ctx->pc = 0x20A3C0u;
    if (runtime->hasFunction(0x20A3C0u)) {
        auto targetFn = runtime->lookupFunction(0x20A3C0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_0020A3C0_0x20a3c0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x209838u;
    // 0x209838: 0x0  nop
    ctx->pc = 0x209838u;
    // NOP
    // 0x20983c: 0x0  nop
    ctx->pc = 0x20983cu;
    // NOP
label_209840:
    // 0x209840: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x209840u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x209844: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x209844u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x209848: 0xc0828f0  jal         func_20A3C0
    ctx->pc = 0x209848u;
    SET_GPR_U32(ctx, 31, 0x209850u);
    ctx->pc = 0x20A3C0u;
    if (runtime->hasFunction(0x20A3C0u)) {
        auto targetFn = runtime->lookupFunction(0x20A3C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x209850u; }
        if (ctx->pc != 0x209850u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0020A3C0_0x20a3c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x209850u; }
        if (ctx->pc != 0x209850u) { return; }
    }
    ctx->pc = 0x209850u;
label_209850:
    // 0x209850: 0xc082900  jal         func_20A400
    ctx->pc = 0x209850u;
    SET_GPR_U32(ctx, 31, 0x209858u);
    ctx->pc = 0x20A400u;
    if (runtime->hasFunction(0x20A400u)) {
        auto targetFn = runtime->lookupFunction(0x20A400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x209858u; }
        if (ctx->pc != 0x209858u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0020A400_0x20a400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x209858u; }
        if (ctx->pc != 0x209858u) { return; }
    }
    ctx->pc = 0x209858u;
label_209858:
    // 0x209858: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x209858u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20985c: 0x3e00008  jr          $ra
    ctx->pc = 0x20985Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x209860u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20985Cu;
            // 0x209860: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x209864u;
    // 0x209864: 0x0  nop
    ctx->pc = 0x209864u;
    // NOP
    // 0x209868: 0x0  nop
    ctx->pc = 0x209868u;
    // NOP
    // 0x20986c: 0x0  nop
    ctx->pc = 0x20986cu;
    // NOP
    ctx->pc = 0x209870u;
}
