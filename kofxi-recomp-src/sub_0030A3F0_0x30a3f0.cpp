#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0030A3F0
// Address: 0x30a3f0 - 0x30a510
void sub_0030A3F0_0x30a3f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0030A3F0_0x30a3f0");
#endif

    switch (ctx->pc) {
        case 0x30a428u: goto label_30a428;
        case 0x30a458u: goto label_30a458;
        case 0x30a498u: goto label_30a498;
        case 0x30a4a0u: goto label_30a4a0;
        case 0x30a4b8u: goto label_30a4b8;
        case 0x30a4d8u: goto label_30a4d8;
        case 0x30a4e8u: goto label_30a4e8;
        default: break;
    }

    ctx->pc = 0x30a3f0u;

    // 0x30a3f0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x30a3f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x30a3f4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x30a3f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x30a3f8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x30a3f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x30a3fc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x30a3fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x30a400: 0x8c900010  lw          $s0, 0x10($a0)
    ctx->pc = 0x30a400u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x30a404: 0x8e03011c  lw          $v1, 0x11C($s0)
    ctx->pc = 0x30a404u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 284)));
    // 0x30a408: 0x1060003c  beqz        $v1, . + 4 + (0x3C << 2)
    ctx->pc = 0x30A408u;
    {
        const bool branch_taken_0x30a408 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x30A40Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30A408u;
            // 0x30a40c: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30a408) {
            ctx->pc = 0x30A4FCu;
            goto label_30a4fc;
        }
    }
    ctx->pc = 0x30A410u;
    // 0x30a410: 0x3c0201d3  lui         $v0, 0x1D3
    ctx->pc = 0x30a410u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)467 << 16));
    // 0x30a414: 0x3c0401d3  lui         $a0, 0x1D3
    ctx->pc = 0x30a414u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)467 << 16));
    // 0x30a418: 0x8c4520c0  lw          $a1, 0x20C0($v0)
    ctx->pc = 0x30a418u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8384)));
    // 0x30a41c: 0x24841f00  addiu       $a0, $a0, 0x1F00
    ctx->pc = 0x30a41cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7936));
    // 0x30a420: 0xc040d06  jal         func_103418
    ctx->pc = 0x30A420u;
    SET_GPR_U32(ctx, 31, 0x30A428u);
    ctx->pc = 0x30A424u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30A420u;
            // 0x30a424: 0x26260020  addiu       $a2, $s1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x103418u;
    if (runtime->hasFunction(0x103418u)) {
        auto targetFn = runtime->lookupFunction(0x103418u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30A428u; }
        if (ctx->pc != 0x30A428u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00103418_0x103418(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30A428u; }
        if (ctx->pc != 0x30A428u) { return; }
    }
    ctx->pc = 0x30A428u;
label_30a428:
    // 0x30a428: 0x8e230010  lw          $v1, 0x10($s1)
    ctx->pc = 0x30a428u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x30a42c: 0x3c020400  lui         $v0, 0x400
    ctx->pc = 0x30a42cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1024 << 16));
    // 0x30a430: 0x8c630024  lw          $v1, 0x24($v1)
    ctx->pc = 0x30a430u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
    // 0x30a434: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x30a434u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x30a438: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x30A438u;
    {
        const bool branch_taken_0x30a438 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x30a438) {
            ctx->pc = 0x30A458u;
            goto label_30a458;
        }
    }
    ctx->pc = 0x30A440u;
    // 0x30a440: 0x3c0401d3  lui         $a0, 0x1D3
    ctx->pc = 0x30a440u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)467 << 16));
    // 0x30a444: 0x3c0601d3  lui         $a2, 0x1D3
    ctx->pc = 0x30a444u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)467 << 16));
    // 0x30a448: 0x24841f00  addiu       $a0, $a0, 0x1F00
    ctx->pc = 0x30a448u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7936));
    // 0x30a44c: 0x24c61ec0  addiu       $a2, $a2, 0x1EC0
    ctx->pc = 0x30a44cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 7872));
    // 0x30a450: 0xc040d06  jal         func_103418
    ctx->pc = 0x30A450u;
    SET_GPR_U32(ctx, 31, 0x30A458u);
    ctx->pc = 0x30A454u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30A450u;
            // 0x30a454: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x103418u;
    if (runtime->hasFunction(0x103418u)) {
        auto targetFn = runtime->lookupFunction(0x103418u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30A458u; }
        if (ctx->pc != 0x30A458u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00103418_0x103418(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30A458u; }
        if (ctx->pc != 0x30A458u) { return; }
    }
    ctx->pc = 0x30A458u;
label_30a458:
    // 0x30a458: 0x3c0201d2  lui         $v0, 0x1D2
    ctx->pc = 0x30a458u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)466 << 16));
    // 0x30a45c: 0x8e03011c  lw          $v1, 0x11C($s0)
    ctx->pc = 0x30a45cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 284)));
    // 0x30a460: 0x8c441e18  lw          $a0, 0x1E18($v0)
    ctx->pc = 0x30a460u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7704)));
    // 0x30a464: 0x3c0201d2  lui         $v0, 0x1D2
    ctx->pc = 0x30a464u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)466 << 16));
    // 0x30a468: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x30a468u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x30a46c: 0xac431e18  sw          $v1, 0x1E18($v0)
    ctx->pc = 0x30a46cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 7704), GPR_U32(ctx, 3));
    // 0x30a470: 0x8e060118  lw          $a2, 0x118($s0)
    ctx->pc = 0x30a470u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 280)));
    // 0x30a474: 0x54c00003  bnel        $a2, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x30A474u;
    {
        const bool branch_taken_0x30a474 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x30a474) {
            ctx->pc = 0x30A478u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x30A474u;
            // 0x30a478: 0x8e070110  lw          $a3, 0x110($s0) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 272)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x30A484u;
            goto label_30a484;
        }
    }
    ctx->pc = 0x30A47Cu;
    // 0x30a47c: 0x8e060114  lw          $a2, 0x114($s0)
    ctx->pc = 0x30a47cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 276)));
    // 0x30a480: 0x8e070110  lw          $a3, 0x110($s0)
    ctx->pc = 0x30a480u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 272)));
label_30a484:
    // 0x30a484: 0x3c0401d2  lui         $a0, 0x1D2
    ctx->pc = 0x30a484u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)466 << 16));
    // 0x30a488: 0x3c0501d3  lui         $a1, 0x1D3
    ctx->pc = 0x30a488u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)467 << 16));
    // 0x30a48c: 0x24841e50  addiu       $a0, $a0, 0x1E50
    ctx->pc = 0x30a48cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7760));
    // 0x30a490: 0xc0c2728  jal         func_309CA0
    ctx->pc = 0x30A490u;
    SET_GPR_U32(ctx, 31, 0x30A498u);
    ctx->pc = 0x30A494u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30A490u;
            // 0x30a494: 0x24a51f00  addiu       $a1, $a1, 0x1F00 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 7936));
        ctx->in_delay_slot = false;
    ctx->pc = 0x309CA0u;
    if (runtime->hasFunction(0x309CA0u)) {
        auto targetFn = runtime->lookupFunction(0x309CA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30A498u; }
        if (ctx->pc != 0x30A498u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00309CA0_0x309ca0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30A498u; }
        if (ctx->pc != 0x30A498u) { return; }
    }
    ctx->pc = 0x30A498u;
label_30a498:
    // 0x30a498: 0xc0c25dc  jal         func_309770
    ctx->pc = 0x30A498u;
    SET_GPR_U32(ctx, 31, 0x30A4A0u);
    ctx->pc = 0x30A49Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30A498u;
            // 0x30a49c: 0x8e04017c  lw          $a0, 0x17C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 380)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x309770u;
    if (runtime->hasFunction(0x309770u)) {
        auto targetFn = runtime->lookupFunction(0x309770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30A4A0u; }
        if (ctx->pc != 0x30A4A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00309770_0x309770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30A4A0u; }
        if (ctx->pc != 0x30A4A0u) { return; }
    }
    ctx->pc = 0x30A4A0u;
label_30a4a0:
    // 0x30a4a0: 0x8e07011c  lw          $a3, 0x11C($s0)
    ctx->pc = 0x30a4a0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 284)));
    // 0x30a4a4: 0x3c0501d2  lui         $a1, 0x1D2
    ctx->pc = 0x30a4a4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)466 << 16));
    // 0x30a4a8: 0x8e2400b8  lw          $a0, 0xB8($s1)
    ctx->pc = 0x30a4a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 184)));
    // 0x30a4ac: 0x8e060120  lw          $a2, 0x120($s0)
    ctx->pc = 0x30a4acu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 288)));
    // 0x30a4b0: 0xc0c2788  jal         func_309E20
    ctx->pc = 0x30A4B0u;
    SET_GPR_U32(ctx, 31, 0x30A4B8u);
    ctx->pc = 0x30A4B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30A4B0u;
            // 0x30a4b4: 0x24a51e50  addiu       $a1, $a1, 0x1E50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 7760));
        ctx->in_delay_slot = false;
    ctx->pc = 0x309E20u;
    if (runtime->hasFunction(0x309E20u)) {
        auto targetFn = runtime->lookupFunction(0x309E20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30A4B8u; }
        if (ctx->pc != 0x30A4B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00309E20_0x309e20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30A4B8u; }
        if (ctx->pc != 0x30A4B8u) { return; }
    }
    ctx->pc = 0x30A4B8u;
label_30a4b8:
    // 0x30a4b8: 0x3c0201d2  lui         $v0, 0x1D2
    ctx->pc = 0x30a4b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)466 << 16));
    // 0x30a4bc: 0x8e03011c  lw          $v1, 0x11C($s0)
    ctx->pc = 0x30a4bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 284)));
    // 0x30a4c0: 0x8c451e30  lw          $a1, 0x1E30($v0)
    ctx->pc = 0x30a4c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7728)));
    // 0x30a4c4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x30a4c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30a4c8: 0x3c0201d2  lui         $v0, 0x1D2
    ctx->pc = 0x30a4c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)466 << 16));
    // 0x30a4cc: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x30a4ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x30a4d0: 0xc0433b8  jal         func_10CEE0
    ctx->pc = 0x30A4D0u;
    SET_GPR_U32(ctx, 31, 0x30A4D8u);
    ctx->pc = 0x30A4D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30A4D0u;
            // 0x30a4d4: 0xac431e30  sw          $v1, 0x1E30($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 7728), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10CEE0u;
    if (runtime->hasFunction(0x10CEE0u)) {
        auto targetFn = runtime->lookupFunction(0x10CEE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30A4D8u; }
        if (ctx->pc != 0x30A4D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010CEE0_0x10cee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30A4D8u; }
        if (ctx->pc != 0x30A4D8u) { return; }
    }
    ctx->pc = 0x30A4D8u;
label_30a4d8:
    // 0x30a4d8: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x30a4d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x30a4dc: 0x8c44e688  lw          $a0, -0x1978($v0)
    ctx->pc = 0x30a4dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960776)));
    // 0x30a4e0: 0xc040a04  jal         func_102810
    ctx->pc = 0x30A4E0u;
    SET_GPR_U32(ctx, 31, 0x30A4E8u);
    ctx->pc = 0x30A4E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30A4E0u;
            // 0x30a4e4: 0x8e2500b4  lw          $a1, 0xB4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 180)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102810u;
    if (runtime->hasFunction(0x102810u)) {
        auto targetFn = runtime->lookupFunction(0x102810u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30A4E8u; }
        if (ctx->pc != 0x30A4E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00102810_0x102810(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30A4E8u; }
        if (ctx->pc != 0x30A4E8u) { return; }
    }
    ctx->pc = 0x30A4E8u;
label_30a4e8:
    // 0x30a4e8: 0x3c0401d2  lui         $a0, 0x1D2
    ctx->pc = 0x30a4e8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)466 << 16));
    // 0x30a4ec: 0x3c0301d2  lui         $v1, 0x1D2
    ctx->pc = 0x30a4ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)466 << 16));
    // 0x30a4f0: 0x8c841e10  lw          $a0, 0x1E10($a0)
    ctx->pc = 0x30a4f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 7696)));
    // 0x30a4f4: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x30a4f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x30a4f8: 0xac641e10  sw          $a0, 0x1E10($v1)
    ctx->pc = 0x30a4f8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 7696), GPR_U32(ctx, 4));
label_30a4fc:
    // 0x30a4fc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x30a4fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x30a500: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x30a500u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x30a504: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x30a504u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x30a508: 0x3e00008  jr          $ra
    ctx->pc = 0x30A508u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30A50Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30A508u;
            // 0x30a50c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x30A510u;
    ctx->pc = 0x30a510u;
}
