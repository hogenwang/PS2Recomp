#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0020A220
// Address: 0x20a220 - 0x20a360
void sub_0020A220_0x20a220(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020A220_0x20a220");
#endif

    switch (ctx->pc) {
        case 0x20a230u: goto label_20a230;
        case 0x20a248u: goto label_20a248;
        case 0x20a258u: goto label_20a258;
        case 0x20a260u: goto label_20a260;
        case 0x20a278u: goto label_20a278;
        case 0x20a2a4u: goto label_20a2a4;
        case 0x20a2b4u: goto label_20a2b4;
        case 0x20a2d0u: goto label_20a2d0;
        case 0x20a2e0u: goto label_20a2e0;
        case 0x20a2ecu: goto label_20a2ec;
        case 0x20a318u: goto label_20a318;
        case 0x20a330u: goto label_20a330;
        case 0x20a340u: goto label_20a340;
        case 0x20a348u: goto label_20a348;
        case 0x20a354u: goto label_20a354;
        default: break;
    }

    ctx->pc = 0x20a220u;

    // 0x20a220: 0x27bdff10  addiu       $sp, $sp, -0xF0
    ctx->pc = 0x20a220u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967056));
    // 0x20a224: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x20a224u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x20a228: 0xc087ba4  jal         func_21EE90
    ctx->pc = 0x20A228u;
    SET_GPR_U32(ctx, 31, 0x20A230u);
    ctx->pc = 0x21EE90u;
    if (runtime->hasFunction(0x21EE90u)) {
        auto targetFn = runtime->lookupFunction(0x21EE90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20A230u; }
        if (ctx->pc != 0x20A230u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0021EE90_0x21ee90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20A230u; }
        if (ctx->pc != 0x20A230u) { return; }
    }
    ctx->pc = 0x20A230u;
label_20a230:
    // 0x20a230: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x20a230u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20a234: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x20a234u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20a238: 0x5503000b  bnel        $t0, $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x20A238u;
    {
        const bool branch_taken_0x20a238 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 3));
        if (branch_taken_0x20a238) {
            ctx->pc = 0x20A23Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x20A238u;
            // 0x20a23c: 0x24030032  addiu       $v1, $zero, 0x32 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
        ctx->in_delay_slot = false;
            ctx->pc = 0x20A268u;
            goto label_20a268;
        }
    }
    ctx->pc = 0x20A240u;
    // 0x20a240: 0xc087c06  jal         func_21F018
    ctx->pc = 0x20A240u;
    SET_GPR_U32(ctx, 31, 0x20A248u);
    ctx->pc = 0x20A244u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20A240u;
            // 0x20a244: 0x27a400d0  addiu       $a0, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21F018u;
    if (runtime->hasFunction(0x21F018u)) {
        auto targetFn = runtime->lookupFunction(0x21F018u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20A248u; }
        if (ctx->pc != 0x20A248u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0021F018_0x21f018(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20A248u; }
        if (ctx->pc != 0x20A248u) { return; }
    }
    ctx->pc = 0x20A248u;
label_20a248:
    // 0x20a248: 0x8fa500e0  lw          $a1, 0xE0($sp)
    ctx->pc = 0x20a248u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x20a24c: 0x2404000b  addiu       $a0, $zero, 0xB
    ctx->pc = 0x20a24cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x20a250: 0xc08275c  jal         func_209D70
    ctx->pc = 0x20A250u;
    SET_GPR_U32(ctx, 31, 0x20A258u);
    ctx->pc = 0x20A254u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20A250u;
            // 0x20a254: 0x27a600d0  addiu       $a2, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
    ctx->pc = 0x209D70u;
    if (runtime->hasFunction(0x209D70u)) {
        auto targetFn = runtime->lookupFunction(0x209D70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20A258u; }
        if (ctx->pc != 0x20A258u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00209D70_0x209d70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20A258u; }
        if (ctx->pc != 0x20A258u) { return; }
    }
    ctx->pc = 0x20A258u;
label_20a258:
    // 0x20a258: 0xc087bde  jal         func_21EF78
    ctx->pc = 0x20A258u;
    SET_GPR_U32(ctx, 31, 0x20A260u);
    ctx->pc = 0x21EF78u;
    if (runtime->hasFunction(0x21EF78u)) {
        auto targetFn = runtime->lookupFunction(0x21EF78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20A260u; }
        if (ctx->pc != 0x20A260u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0021EF78_0x21ef78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20A260u; }
        if (ctx->pc != 0x20A260u) { return; }
    }
    ctx->pc = 0x20A260u;
label_20a260:
    // 0x20a260: 0x1000002e  b           . + 4 + (0x2E << 2)
    ctx->pc = 0x20A260u;
    {
        const bool branch_taken_0x20a260 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20A264u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20A260u;
            // 0x20a264: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20a260) {
            ctx->pc = 0x20A31Cu;
            goto label_20a31c;
        }
    }
    ctx->pc = 0x20A268u;
label_20a268:
    // 0x20a268: 0x15030022  bne         $t0, $v1, . + 4 + (0x22 << 2)
    ctx->pc = 0x20A268u;
    {
        const bool branch_taken_0x20a268 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 3));
        if (branch_taken_0x20a268) {
            ctx->pc = 0x20A2F4u;
            goto label_20a2f4;
        }
    }
    ctx->pc = 0x20A270u;
    // 0x20a270: 0xc087cb2  jal         func_21F2C8
    ctx->pc = 0x20A270u;
    SET_GPR_U32(ctx, 31, 0x20A278u);
    ctx->pc = 0x20A274u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20A270u;
            // 0x20a274: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21F2C8u;
    if (runtime->hasFunction(0x21F2C8u)) {
        auto targetFn = runtime->lookupFunction(0x21F2C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20A278u; }
        if (ctx->pc != 0x20A278u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0021F2C8_0x21f2c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20A278u; }
        if (ctx->pc != 0x20A278u) { return; }
    }
    ctx->pc = 0x20A278u;
label_20a278:
    // 0x20a278: 0x8fab00cc  lw          $t3, 0xCC($sp)
    ctx->pc = 0x20a278u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 204)));
    // 0x20a27c: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x20a27cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x20a280: 0x3c07003f  lui         $a3, 0x3F
    ctx->pc = 0x20a280u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)63 << 16));
    // 0x20a284: 0x2484f910  addiu       $a0, $a0, -0x6F0
    ctx->pc = 0x20a284u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965520));
    // 0x20a288: 0x240501a5  addiu       $a1, $zero, 0x1A5
    ctx->pc = 0x20a288u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 421));
    // 0x20a28c: 0x24060005  addiu       $a2, $zero, 0x5
    ctx->pc = 0x20a28cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x20a290: 0x24e7f930  addiu       $a3, $a3, -0x6D0
    ctx->pc = 0x20a290u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294965552));
    // 0x20a294: 0x27a80010  addiu       $t0, $sp, 0x10
    ctx->pc = 0x20a294u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x20a298: 0x27a9001f  addiu       $t1, $sp, 0x1F
    ctx->pc = 0x20a298u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 31));
    // 0x20a29c: 0xc0897d6  jal         func_225F58
    ctx->pc = 0x20A29Cu;
    SET_GPR_U32(ctx, 31, 0x20A2A4u);
    ctx->pc = 0x20A2A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20A29Cu;
            // 0x20a2a0: 0x27aa0028  addiu       $t2, $sp, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 40));
        ctx->in_delay_slot = false;
    ctx->pc = 0x225F58u;
    if (runtime->hasFunction(0x225F58u)) {
        auto targetFn = runtime->lookupFunction(0x225F58u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20A2A4u; }
        if (ctx->pc != 0x20A2A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00225F58_0x225f58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20A2A4u; }
        if (ctx->pc != 0x20A2A4u) { return; }
    }
    ctx->pc = 0x20A2A4u;
label_20a2a4:
    // 0x20a2a4: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x20a2a4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
    // 0x20a2a8: 0x27a50028  addiu       $a1, $sp, 0x28
    ctx->pc = 0x20a2a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 40));
    // 0x20a2ac: 0xc04a7dc  jal         func_129F70
    ctx->pc = 0x20A2ACu;
    SET_GPR_U32(ctx, 31, 0x20A2B4u);
    ctx->pc = 0x20A2B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20A2ACu;
            // 0x20a2b0: 0x24844200  addiu       $a0, $a0, 0x4200 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16896));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129F70u;
    if (runtime->hasFunction(0x129F70u)) {
        auto targetFn = runtime->lookupFunction(0x129F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20A2B4u; }
        if (ctx->pc != 0x20A2B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00129F70_0x129f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20A2B4u; }
        if (ctx->pc != 0x20A2B4u) { return; }
    }
    ctx->pc = 0x20A2B4u;
label_20a2b4:
    // 0x20a2b4: 0x8fa300cc  lw          $v1, 0xCC($sp)
    ctx->pc = 0x20a2b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 204)));
    // 0x20a2b8: 0x3c02003d  lui         $v0, 0x3D
    ctx->pc = 0x20a2b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61 << 16));
    // 0x20a2bc: 0x3c0401c1  lui         $a0, 0x1C1
    ctx->pc = 0x20a2bcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)449 << 16));
    // 0x20a2c0: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x20a2c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x20a2c4: 0x2484a040  addiu       $a0, $a0, -0x5FC0
    ctx->pc = 0x20a2c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294942784));
    // 0x20a2c8: 0xc04a7dc  jal         func_129F70
    ctx->pc = 0x20A2C8u;
    SET_GPR_U32(ctx, 31, 0x20A2D0u);
    ctx->pc = 0x20A2CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20A2C8u;
            // 0x20a2cc: 0xac434300  sw          $v1, 0x4300($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 17152), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129F70u;
    if (runtime->hasFunction(0x129F70u)) {
        auto targetFn = runtime->lookupFunction(0x129F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20A2D0u; }
        if (ctx->pc != 0x20A2D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00129F70_0x129f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20A2D0u; }
        if (ctx->pc != 0x20A2D0u) { return; }
    }
    ctx->pc = 0x20A2D0u;
label_20a2d0:
    // 0x20a2d0: 0x3c0401c1  lui         $a0, 0x1C1
    ctx->pc = 0x20a2d0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)449 << 16));
    // 0x20a2d4: 0x27a5001f  addiu       $a1, $sp, 0x1F
    ctx->pc = 0x20a2d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 31));
    // 0x20a2d8: 0xc04a7dc  jal         func_129F70
    ctx->pc = 0x20A2D8u;
    SET_GPR_U32(ctx, 31, 0x20A2E0u);
    ctx->pc = 0x20A2DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20A2D8u;
            // 0x20a2dc: 0x2484a020  addiu       $a0, $a0, -0x5FE0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294942752));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129F70u;
    if (runtime->hasFunction(0x129F70u)) {
        auto targetFn = runtime->lookupFunction(0x129F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20A2E0u; }
        if (ctx->pc != 0x20A2E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00129F70_0x129f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20A2E0u; }
        if (ctx->pc != 0x20A2E0u) { return; }
    }
    ctx->pc = 0x20A2E0u;
label_20a2e0:
    // 0x20a2e0: 0x3c040021  lui         $a0, 0x21
    ctx->pc = 0x20a2e0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)33 << 16));
    // 0x20a2e4: 0xc082674  jal         func_2099D0
    ctx->pc = 0x20A2E4u;
    SET_GPR_U32(ctx, 31, 0x20A2ECu);
    ctx->pc = 0x20A2E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20A2E4u;
            // 0x20a2e8: 0x2484a330  addiu       $a0, $a0, -0x5CD0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294943536));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2099D0u;
    if (runtime->hasFunction(0x2099D0u)) {
        auto targetFn = runtime->lookupFunction(0x2099D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20A2ECu; }
        if (ctx->pc != 0x20A2ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002099D0_0x2099d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20A2ECu; }
        if (ctx->pc != 0x20A2ECu) { return; }
    }
    ctx->pc = 0x20A2ECu;
label_20a2ec:
    // 0x20a2ec: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x20A2ECu;
    {
        const bool branch_taken_0x20a2ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x20a2ec) {
            ctx->pc = 0x20A318u;
            goto label_20a318;
        }
    }
    ctx->pc = 0x20A2F4u;
label_20a2f4:
    // 0x20a2f4: 0x11000008  beqz        $t0, . + 4 + (0x8 << 2)
    ctx->pc = 0x20A2F4u;
    {
        const bool branch_taken_0x20a2f4 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        if (branch_taken_0x20a2f4) {
            ctx->pc = 0x20A318u;
            goto label_20a318;
        }
    }
    ctx->pc = 0x20A2FCu;
    // 0x20a2fc: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x20a2fcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x20a300: 0x3c07003f  lui         $a3, 0x3F
    ctx->pc = 0x20a300u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)63 << 16));
    // 0x20a304: 0x2484f910  addiu       $a0, $a0, -0x6F0
    ctx->pc = 0x20a304u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965520));
    // 0x20a308: 0x240501b2  addiu       $a1, $zero, 0x1B2
    ctx->pc = 0x20a308u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 434));
    // 0x20a30c: 0x24060005  addiu       $a2, $zero, 0x5
    ctx->pc = 0x20a30cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x20a310: 0xc0897d6  jal         func_225F58
    ctx->pc = 0x20A310u;
    SET_GPR_U32(ctx, 31, 0x20A318u);
    ctx->pc = 0x20A314u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20A310u;
            // 0x20a314: 0x24e7f8c0  addiu       $a3, $a3, -0x740 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294965440));
        ctx->in_delay_slot = false;
    ctx->pc = 0x225F58u;
    if (runtime->hasFunction(0x225F58u)) {
        auto targetFn = runtime->lookupFunction(0x225F58u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20A318u; }
        if (ctx->pc != 0x20A318u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00225F58_0x225f58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20A318u; }
        if (ctx->pc != 0x20A318u) { return; }
    }
    ctx->pc = 0x20A318u;
label_20a318:
    // 0x20a318: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x20a318u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_20a31c:
    // 0x20a31c: 0x3e00008  jr          $ra
    ctx->pc = 0x20A31Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20A320u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20A31Cu;
            // 0x20a320: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x20A324u;
    // 0x20a324: 0x0  nop
    ctx->pc = 0x20a324u;
    // NOP
    // 0x20a328: 0x0  nop
    ctx->pc = 0x20a328u;
    // NOP
    // 0x20a32c: 0x0  nop
    ctx->pc = 0x20a32cu;
    // NOP
label_20a330:
    // 0x20a330: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x20a330u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x20a334: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x20a334u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x20a338: 0xc087b68  jal         func_21EDA0
    ctx->pc = 0x20A338u;
    SET_GPR_U32(ctx, 31, 0x20A340u);
    ctx->pc = 0x21EDA0u;
    if (runtime->hasFunction(0x21EDA0u)) {
        auto targetFn = runtime->lookupFunction(0x21EDA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20A340u; }
        if (ctx->pc != 0x20A340u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0021EDA0_0x21eda0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20A340u; }
        if (ctx->pc != 0x20A340u) { return; }
    }
    ctx->pc = 0x20A340u;
label_20a340:
    // 0x20a340: 0xc0897be  jal         func_225EF8
    ctx->pc = 0x20A340u;
    SET_GPR_U32(ctx, 31, 0x20A348u);
    ctx->pc = 0x20A344u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20A340u;
            // 0x20a344: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x225EF8u;
    if (runtime->hasFunction(0x225EF8u)) {
        auto targetFn = runtime->lookupFunction(0x225EF8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20A348u; }
        if (ctx->pc != 0x20A348u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00225EF8_0x225ef8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20A348u; }
        if (ctx->pc != 0x20A348u) { return; }
    }
    ctx->pc = 0x20A348u;
label_20a348:
    // 0x20a348: 0x3c020093  lui         $v0, 0x93
    ctx->pc = 0x20a348u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)147 << 16));
    // 0x20a34c: 0xc082674  jal         func_2099D0
    ctx->pc = 0x20A34Cu;
    SET_GPR_U32(ctx, 31, 0x20A354u);
    ctx->pc = 0x20A350u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20A34Cu;
            // 0x20a350: 0x8c44f78c  lw          $a0, -0x874($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294965132)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2099D0u;
    if (runtime->hasFunction(0x2099D0u)) {
        auto targetFn = runtime->lookupFunction(0x2099D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20A354u; }
        if (ctx->pc != 0x20A354u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002099D0_0x2099d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20A354u; }
        if (ctx->pc != 0x20A354u) { return; }
    }
    ctx->pc = 0x20A354u;
label_20a354:
    // 0x20a354: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x20a354u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20a358: 0x3e00008  jr          $ra
    ctx->pc = 0x20A358u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20A35Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20A358u;
            // 0x20a35c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x20A360u;
    ctx->pc = 0x20a360u;
}
