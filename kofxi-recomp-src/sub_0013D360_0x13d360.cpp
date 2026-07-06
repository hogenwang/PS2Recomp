#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0013D360
// Address: 0x13d360 - 0x13d420
void sub_0013D360_0x13d360(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013D360_0x13d360");
#endif

    switch (ctx->pc) {
        case 0x13d37cu: goto label_13d37c;
        case 0x13d3f4u: goto label_13d3f4;
        default: break;
    }

    ctx->pc = 0x13d360u;

    // 0x13d360: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x13d360u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x13d364: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x13d364u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x13d368: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x13d368u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x13d36c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x13d36cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x13d370: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x13d370u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13d374: 0xc04f6dc  jal         func_13DB70
    ctx->pc = 0x13D374u;
    SET_GPR_U32(ctx, 31, 0x13D37Cu);
    ctx->pc = 0x13D378u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13D374u;
            // 0x13d378: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DB70u;
    if (runtime->hasFunction(0x13DB70u)) {
        auto targetFn = runtime->lookupFunction(0x13DB70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13D37Cu; }
        if (ctx->pc != 0x13D37Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013DB70_0x13db70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13D37Cu; }
        if (ctx->pc != 0x13D37Cu) { return; }
    }
    ctx->pc = 0x13D37Cu;
label_13d37c:
    // 0x13d37c: 0x5c40000c  bgtzl       $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x13D37Cu;
    {
        const bool branch_taken_0x13d37c = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x13d37c) {
            ctx->pc = 0x13D380u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x13D37Cu;
            // 0x13d380: 0x8e23023c  lw          $v1, 0x23C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 572)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x13D3B0u;
            goto label_13d3b0;
        }
    }
    ctx->pc = 0x13D384u;
    // 0x13d384: 0x8e25023c  lw          $a1, 0x23C($s1)
    ctx->pc = 0x13d384u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 572)));
    // 0x13d388: 0x2404ffef  addiu       $a0, $zero, -0x11
    ctx->pc = 0x13d388u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967279));
    // 0x13d38c: 0x2403ffdf  addiu       $v1, $zero, -0x21
    ctx->pc = 0x13d38cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967263));
    // 0x13d390: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x13d390u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13d394: 0xa42024  and         $a0, $a1, $a0
    ctx->pc = 0x13d394u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & GPR_U64(ctx, 4));
    // 0x13d398: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x13d398u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x13d39c: 0xae24023c  sw          $a0, 0x23C($s1)
    ctx->pc = 0x13d39cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 572), GPR_U32(ctx, 4));
    // 0x13d3a0: 0xae23023c  sw          $v1, 0x23C($s1)
    ctx->pc = 0x13d3a0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 572), GPR_U32(ctx, 3));
    // 0x13d3a4: 0x34632000  ori         $v1, $v1, 0x2000
    ctx->pc = 0x13d3a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8192);
    // 0x13d3a8: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x13D3A8u;
    {
        const bool branch_taken_0x13d3a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13D3ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13D3A8u;
            // 0x13d3ac: 0xae23023c  sw          $v1, 0x23C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 572), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13d3a8) {
            ctx->pc = 0x13D40Cu;
            goto label_13d40c;
        }
    }
    ctx->pc = 0x13D3B0u;
label_13d3b0:
    // 0x13d3b0: 0x30620040  andi        $v0, $v1, 0x40
    ctx->pc = 0x13d3b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)64);
    // 0x13d3b4: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x13D3B4u;
    {
        const bool branch_taken_0x13d3b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x13d3b4) {
            ctx->pc = 0x13D3B8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x13D3B4u;
            // 0x13d3b8: 0x8622020c  lh          $v0, 0x20C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 524)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x13D3D8u;
            goto label_13d3d8;
        }
    }
    ctx->pc = 0x13D3BCu;
    // 0x13d3bc: 0x34620040  ori         $v0, $v1, 0x40
    ctx->pc = 0x13d3bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64);
    // 0x13d3c0: 0xae22023c  sw          $v0, 0x23C($s1)
    ctx->pc = 0x13d3c0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 572), GPR_U32(ctx, 2));
    // 0x13d3c4: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x13d3c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x13d3c8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x13d3c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13d3cc: 0xa623020c  sh          $v1, 0x20C($s1)
    ctx->pc = 0x13d3ccu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 524), (uint16_t)GPR_U32(ctx, 3));
    // 0x13d3d0: 0xae220214  sw          $v0, 0x214($s1)
    ctx->pc = 0x13d3d0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 532), GPR_U32(ctx, 2));
    // 0x13d3d4: 0x8622020c  lh          $v0, 0x20C($s1)
    ctx->pc = 0x13d3d4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 524)));
label_13d3d8:
    // 0x13d3d8: 0x58400003  blezl       $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x13D3D8u;
    {
        const bool branch_taken_0x13d3d8 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x13d3d8) {
            ctx->pc = 0x13D3DCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x13D3D8u;
            // 0x13d3dc: 0xa620020c  sh          $zero, 0x20C($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 524), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x13D3E8u;
            goto label_13d3e8;
        }
    }
    ctx->pc = 0x13D3E0u;
    // 0x13d3e0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x13d3e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x13d3e4: 0xa622020c  sh          $v0, 0x20C($s1)
    ctx->pc = 0x13d3e4u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 524), (uint16_t)GPR_U32(ctx, 2));
label_13d3e8:
    // 0x13d3e8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x13d3e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13d3ec: 0xc050160  jal         func_140580
    ctx->pc = 0x13D3ECu;
    SET_GPR_U32(ctx, 31, 0x13D3F4u);
    ctx->pc = 0x13D3F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13D3ECu;
            // 0x13d3f0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x140580u;
    if (runtime->hasFunction(0x140580u)) {
        auto targetFn = runtime->lookupFunction(0x140580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13D3F4u; }
        if (ctx->pc != 0x13D3F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00140580_0x140580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13D3F4u; }
        if (ctx->pc != 0x13D3F4u) { return; }
    }
    ctx->pc = 0x13D3F4u;
label_13d3f4:
    // 0x13d3f4: 0x8622020c  lh          $v0, 0x20C($s1)
    ctx->pc = 0x13d3f4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 524)));
    // 0x13d3f8: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x13D3F8u;
    {
        const bool branch_taken_0x13d3f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x13d3f8) {
            ctx->pc = 0x13D3FCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x13D3F8u;
            // 0x13d3fc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x13D40Cu;
            goto label_13d40c;
        }
    }
    ctx->pc = 0x13D400u;
    // 0x13d400: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x13d400u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13d404: 0xae220214  sw          $v0, 0x214($s1)
    ctx->pc = 0x13d404u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 532), GPR_U32(ctx, 2));
    // 0x13d408: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x13d408u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_13d40c:
    // 0x13d40c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x13d40cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x13d410: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x13d410u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13d414: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x13d414u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13d418: 0x3e00008  jr          $ra
    ctx->pc = 0x13D418u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13D41Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13D418u;
            // 0x13d41c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x13D420u;
    ctx->pc = 0x13d420u;
}
