#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00112170
// Address: 0x112170 - 0x112400
void sub_00112170_0x112170(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00112170_0x112170");
#endif

    switch (ctx->pc) {
        case 0x1121ccu: goto label_1121cc;
        case 0x1121e4u: goto label_1121e4;
        case 0x1121ecu: goto label_1121ec;
        case 0x1121fcu: goto label_1121fc;
        case 0x112210u: goto label_112210;
        case 0x112224u: goto label_112224;
        case 0x112258u: goto label_112258;
        case 0x1122e8u: goto label_1122e8;
        case 0x112328u: goto label_112328;
        case 0x112338u: goto label_112338;
        case 0x112340u: goto label_112340;
        case 0x112354u: goto label_112354;
        case 0x112364u: goto label_112364;
        case 0x112374u: goto label_112374;
        case 0x11237cu: goto label_11237c;
        case 0x112390u: goto label_112390;
        case 0x11239cu: goto label_11239c;
        case 0x1123b0u: goto label_1123b0;
        case 0x1123ccu: goto label_1123cc;
        default: break;
    }

    ctx->pc = 0x112170u;

    // 0x112170: 0x27bdfeb0  addiu       $sp, $sp, -0x150
    ctx->pc = 0x112170u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966960));
    // 0x112174: 0xffb00040  sd          $s0, 0x40($sp)
    ctx->pc = 0x112174u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    // 0x112178: 0xffb700b0  sd          $s7, 0xB0($sp)
    ctx->pc = 0x112178u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 23));
    // 0x11217c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x11217cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x112180: 0xffbe00c0  sd          $fp, 0xC0($sp)
    ctx->pc = 0x112180u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 30));
    // 0x112184: 0xa0b82d  daddu       $s7, $a1, $zero
    ctx->pc = 0x112184u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x112188: 0xffb10050  sd          $s1, 0x50($sp)
    ctx->pc = 0x112188u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 17));
    // 0x11218c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x11218cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x112190: 0xffbf00d0  sd          $ra, 0xD0($sp)
    ctx->pc = 0x112190u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 31));
    // 0x112194: 0x3c1e0041  lui         $fp, 0x41
    ctx->pc = 0x112194u;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)65 << 16));
    // 0x112198: 0xffb600a0  sd          $s6, 0xA0($sp)
    ctx->pc = 0x112198u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 22));
    // 0x11219c: 0x27d18280  addiu       $s1, $fp, -0x7D80
    ctx->pc = 0x11219cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 30), 4294935168));
    // 0x1121a0: 0xffb50090  sd          $s5, 0x90($sp)
    ctx->pc = 0x1121a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 21));
    // 0x1121a4: 0xffb40080  sd          $s4, 0x80($sp)
    ctx->pc = 0x1121a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 20));
    // 0x1121a8: 0xffb30070  sd          $s3, 0x70($sp)
    ctx->pc = 0x1121a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 19));
    // 0x1121ac: 0xffb20060  sd          $s2, 0x60($sp)
    ctx->pc = 0x1121acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 18));
    // 0x1121b0: 0xffa60120  sd          $a2, 0x120($sp)
    ctx->pc = 0x1121b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 288), GPR_U64(ctx, 6));
    // 0x1121b4: 0xffa70128  sd          $a3, 0x128($sp)
    ctx->pc = 0x1121b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 296), GPR_U64(ctx, 7));
    // 0x1121b8: 0xffa80130  sd          $t0, 0x130($sp)
    ctx->pc = 0x1121b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 304), GPR_U64(ctx, 8));
    // 0x1121bc: 0xffa90138  sd          $t1, 0x138($sp)
    ctx->pc = 0x1121bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 312), GPR_U64(ctx, 9));
    // 0x1121c0: 0xffaa0140  sd          $t2, 0x140($sp)
    ctx->pc = 0x1121c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 320), GPR_U64(ctx, 10));
    // 0x1121c4: 0xc0446d2  jal         func_111B48
    ctx->pc = 0x1121C4u;
    SET_GPR_U32(ctx, 31, 0x1121CCu);
    ctx->pc = 0x1121C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1121C4u;
            // 0x1121c8: 0xffab0148  sd          $t3, 0x148($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 328), GPR_U64(ctx, 11));
        ctx->in_delay_slot = false;
    ctx->pc = 0x111B48u;
    if (runtime->hasFunction(0x111B48u)) {
        auto targetFn = runtime->lookupFunction(0x111B48u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1121CCu; }
        if (ctx->pc != 0x1121CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00111B48_0x111b48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1121CCu; }
        if (ctx->pc != 0x1121CCu) { return; }
    }
    ctx->pc = 0x1121CCu;
label_1121cc:
    // 0x1121cc: 0x3c030036  lui         $v1, 0x36
    ctx->pc = 0x1121ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)54 << 16));
    // 0x1121d0: 0x8c62873c  lw          $v0, -0x78C4($v1)
    ctx->pc = 0x1121d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294936380)));
    // 0x1121d4: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1121D4u;
    {
        const bool branch_taken_0x1121d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1121d4) {
            ctx->pc = 0x1121E4u;
            goto label_1121e4;
        }
    }
    ctx->pc = 0x1121DCu;
    // 0x1121dc: 0xc04471c  jal         func_111C70
    ctx->pc = 0x1121DCu;
    SET_GPR_U32(ctx, 31, 0x1121E4u);
    ctx->pc = 0x111C70u;
    if (runtime->hasFunction(0x111C70u)) {
        auto targetFn = runtime->lookupFunction(0x111C70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1121E4u; }
        if (ctx->pc != 0x1121E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00111C70_0x111c70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1121E4u; }
        if (ctx->pc != 0x1121E4u) { return; }
    }
    ctx->pc = 0x1121E4u;
label_1121e4:
    // 0x1121e4: 0xc04479e  jal         func_111E78
    ctx->pc = 0x1121E4u;
    SET_GPR_U32(ctx, 31, 0x1121ECu);
    ctx->pc = 0x111E78u;
    if (runtime->hasFunction(0x111E78u)) {
        auto targetFn = runtime->lookupFunction(0x111E78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1121ECu; }
        if (ctx->pc != 0x1121ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00111E78_0x111e78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1121ECu; }
        if (ctx->pc != 0x1121ECu) { return; }
    }
    ctx->pc = 0x1121ECu;
label_1121ec:
    // 0x1121ec: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1121ECu;
    {
        const bool branch_taken_0x1121ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1121ec) {
            ctx->pc = 0x112208u;
            goto label_112208;
        }
    }
    ctx->pc = 0x1121F4u;
    // 0x1121f4: 0xc0446de  jal         func_111B78
    ctx->pc = 0x1121F4u;
    SET_GPR_U32(ctx, 31, 0x1121FCu);
    ctx->pc = 0x111B78u;
    if (runtime->hasFunction(0x111B78u)) {
        auto targetFn = runtime->lookupFunction(0x111B78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1121FCu; }
        if (ctx->pc != 0x1121FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00111B78_0x111b78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1121FCu; }
        if (ctx->pc != 0x1121FCu) { return; }
    }
    ctx->pc = 0x1121FCu;
label_1121fc:
    // 0x1121fc: 0x3c02fffe  lui         $v0, 0xFFFE
    ctx->pc = 0x1121fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65534 << 16));
    // 0x112200: 0x10000073  b           . + 4 + (0x73 << 2)
    ctx->pc = 0x112200u;
    {
        const bool branch_taken_0x112200 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x112204u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x112200u;
            // 0x112204: 0x3442fffc  ori         $v0, $v0, 0xFFFC (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65532);
        ctx->in_delay_slot = false;
        if (branch_taken_0x112200) {
            ctx->pc = 0x1123D0u;
            goto label_1123d0;
        }
    }
    ctx->pc = 0x112208u;
label_112208:
    // 0x112208: 0xc044554  jal         func_111550
    ctx->pc = 0x112208u;
    SET_GPR_U32(ctx, 31, 0x112210u);
    ctx->pc = 0x111550u;
    if (runtime->hasFunction(0x111550u)) {
        auto targetFn = runtime->lookupFunction(0x111550u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x112210u; }
        if (ctx->pc != 0x112210u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00111550_0x111550(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x112210u; }
        if (ctx->pc != 0x112210u) { return; }
    }
    ctx->pc = 0x112210u;
label_112210:
    // 0x112210: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x112210u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x112214: 0x56600005  bnel        $s3, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x112214u;
    {
        const bool branch_taken_0x112214 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        if (branch_taken_0x112214) {
            ctx->pc = 0x112218u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x112214u;
            // 0x112218: 0x92030000  lbu         $v1, 0x0($s0) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x11222Cu;
            goto label_11222c;
        }
    }
    ctx->pc = 0x11221Cu;
    // 0x11221c: 0xc0446de  jal         func_111B78
    ctx->pc = 0x11221Cu;
    SET_GPR_U32(ctx, 31, 0x112224u);
    ctx->pc = 0x111B78u;
    if (runtime->hasFunction(0x111B78u)) {
        auto targetFn = runtime->lookupFunction(0x111B78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x112224u; }
        if (ctx->pc != 0x112224u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00111B78_0x111b78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x112224u; }
        if (ctx->pc != 0x112224u) { return; }
    }
    ctx->pc = 0x112224u;
label_112224:
    // 0x112224: 0x1000006a  b           . + 4 + (0x6A << 2)
    ctx->pc = 0x112224u;
    {
        const bool branch_taken_0x112224 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x112228u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x112224u;
            // 0x112228: 0x2402ffed  addiu       $v0, $zero, -0x13 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967277));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112224) {
            ctx->pc = 0x1123D0u;
            goto label_1123d0;
        }
    }
    ctx->pc = 0x11222Cu;
label_11222c:
    // 0x11222c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x11222cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x112230: 0x8fa80120  lw          $t0, 0x120($sp)
    ctx->pc = 0x112230u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x112234: 0x31600  sll         $v0, $v1, 24
    ctx->pc = 0x112234u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
    // 0x112238: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x112238u;
    {
        const bool branch_taken_0x112238 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11223Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x112238u;
            // 0x11223c: 0xa2230014  sb          $v1, 0x14($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 20), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112238) {
            ctx->pc = 0x112284u;
            goto label_112284;
        }
    }
    ctx->pc = 0x112240u;
    // 0x112240: 0x3c070041  lui         $a3, 0x41
    ctx->pc = 0x112240u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)65 << 16));
    // 0x112244: 0x3c05003e  lui         $a1, 0x3E
    ctx->pc = 0x112244u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)62 << 16));
    // 0x112248: 0x27b20030  addiu       $s2, $sp, 0x30
    ctx->pc = 0x112248u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x11224c: 0x3c160041  lui         $s6, 0x41
    ctx->pc = 0x11224cu;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)65 << 16));
    // 0x112250: 0x3c140041  lui         $s4, 0x41
    ctx->pc = 0x112250u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)65 << 16));
    // 0x112254: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x112254u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_112258:
    // 0x112258: 0x28c20400  slti        $v0, $a2, 0x400
    ctx->pc = 0x112258u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)1024) ? 1 : 0);
    // 0x11225c: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x11225Cu;
    {
        const bool branch_taken_0x11225c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x112260u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11225Cu;
            // 0x112260: 0x2061021  addu        $v0, $s0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11225c) {
            ctx->pc = 0x112298u;
            goto label_112298;
        }
    }
    ctx->pc = 0x112264u;
    // 0x112264: 0x2262021  addu        $a0, $s1, $a2
    ctx->pc = 0x112264u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 6)));
    // 0x112268: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x112268u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x11226c: 0xa0830014  sb          $v1, 0x14($a0)
    ctx->pc = 0x11226cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 20), (uint8_t)GPR_U32(ctx, 3));
    // 0x112270: 0x31e00  sll         $v1, $v1, 24
    ctx->pc = 0x112270u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
    // 0x112274: 0x5460fff8  bnel        $v1, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x112274u;
    {
        const bool branch_taken_0x112274 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x112274) {
            ctx->pc = 0x112278u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x112274u;
            // 0x112278: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x112258u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_112258;
        }
    }
    ctx->pc = 0x11227Cu;
    // 0x11227c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x11227Cu;
    {
        const bool branch_taken_0x11227c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x112280u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11227Cu;
            // 0x112280: 0x24020400  addiu       $v0, $zero, 0x400 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11227c) {
            ctx->pc = 0x11229Cu;
            goto label_11229c;
        }
    }
    ctx->pc = 0x112284u;
label_112284:
    // 0x112284: 0x3c070041  lui         $a3, 0x41
    ctx->pc = 0x112284u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)65 << 16));
    // 0x112288: 0x3c05003e  lui         $a1, 0x3E
    ctx->pc = 0x112288u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)62 << 16));
    // 0x11228c: 0x27b20030  addiu       $s2, $sp, 0x30
    ctx->pc = 0x11228cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x112290: 0x3c160041  lui         $s6, 0x41
    ctx->pc = 0x112290u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)65 << 16));
    // 0x112294: 0x3c140041  lui         $s4, 0x41
    ctx->pc = 0x112294u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)65 << 16));
label_112298:
    // 0x112298: 0x24020400  addiu       $v0, $zero, 0x400
    ctx->pc = 0x112298u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
label_11229c:
    // 0x11229c: 0x50c20001  beql        $a2, $v0, . + 4 + (0x1 << 2)
    ctx->pc = 0x11229Cu;
    {
        const bool branch_taken_0x11229c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        if (branch_taken_0x11229c) {
            ctx->pc = 0x1122A0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x11229Cu;
            // 0x1122a0: 0xa2200413  sb          $zero, 0x413($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 1043), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1122A4u;
            goto label_1122a4;
        }
    }
    ctx->pc = 0x1122A4u;
label_1122a4:
    // 0x1122a4: 0x24e29780  addiu       $v0, $a3, -0x6880
    ctx->pc = 0x1122a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 4294940544));
    // 0x1122a8: 0x3c037fff  lui         $v1, 0x7FFF
    ctx->pc = 0x1122a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32767 << 16));
    // 0x1122ac: 0x2621023  subu        $v0, $s3, $v0
    ctx->pc = 0x1122acu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x1122b0: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x1122b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x1122b4: 0x2a903  sra         $s5, $v0, 4
    ctx->pc = 0x1122b4u;
    SET_GPR_S32(ctx, 21, SRA32(GPR_S32(ctx, 2), 4));
    // 0x1122b8: 0x2e31824  and         $v1, $s7, $v1
    ctx->pc = 0x1122b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 23) & GPR_U64(ctx, 3));
    // 0x1122bc: 0xae23000c  sw          $v1, 0xC($s1)
    ctx->pc = 0x1122bcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 3));
    // 0x1122c0: 0x24a5a860  addiu       $a1, $a1, -0x57A0
    ctx->pc = 0x1122c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294944864));
    // 0x1122c4: 0xae280010  sw          $t0, 0x10($s1)
    ctx->pc = 0x1122c4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 8));
    // 0x1122c8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1122c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1122cc: 0xafa20014  sw          $v0, 0x14($sp)
    ctx->pc = 0x1122ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
    // 0x1122d0: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x1122d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1122d4: 0xafa50024  sw          $a1, 0x24($sp)
    ctx->pc = 0x1122d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 5));
    // 0x1122d8: 0x26948ec0  addiu       $s4, $s4, -0x7140
    ctx->pc = 0x1122d8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294938304));
    // 0x1122dc: 0xae350414  sw          $s5, 0x414($s1)
    ctx->pc = 0x1122dcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1044), GPR_U32(ctx, 21));
    // 0x1122e0: 0xc043318  jal         func_10CC60
    ctx->pc = 0x1122E0u;
    SET_GPR_U32(ctx, 31, 0x1122E8u);
    ctx->pc = 0x1122E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1122E0u;
            // 0x1122e4: 0xafa00018  sw          $zero, 0x18($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10CC60u;
    if (runtime->hasFunction(0x10CC60u)) {
        auto targetFn = runtime->lookupFunction(0x10CC60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1122E8u; }
        if (ctx->pc != 0x1122E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        kofxiSyscallCreateSemaWrapper_0x10cc60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1122E8u; }
        if (ctx->pc != 0x1122E8u) { return; }
    }
    ctx->pc = 0x1122E8u;
label_1122e8:
    // 0x1122e8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1122e8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1122ec: 0xae320004  sw          $s2, 0x4($s1)
    ctx->pc = 0x1122ecu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 18));
    // 0x1122f0: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1122f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1122f4: 0xae300000  sw          $s0, 0x0($s1)
    ctx->pc = 0x1122f4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 16));
    // 0x1122f8: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x1122f8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
    // 0x1122fc: 0x26c49980  addiu       $a0, $s6, -0x6680
    ctx->pc = 0x1122fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 4294941056));
    // 0x112300: 0x27c78280  addiu       $a3, $fp, -0x7D80
    ctx->pc = 0x112300u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 30), 4294935168));
    // 0x112304: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x112304u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x112308: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x112308u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x11230c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x11230cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x112310: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x112310u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x112314: 0x24080418  addiu       $t0, $zero, 0x418
    ctx->pc = 0x112314u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1048));
    // 0x112318: 0x280482d  daddu       $t1, $s4, $zero
    ctx->pc = 0x112318u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11231c: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x11231cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x112320: 0xc044576  jal         func_1115D8
    ctx->pc = 0x112320u;
    SET_GPR_U32(ctx, 31, 0x112328u);
    ctx->pc = 0x112324u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x112320u;
            // 0x112324: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1115D8u;
    if (runtime->hasFunction(0x1115D8u)) {
        auto targetFn = runtime->lookupFunction(0x1115D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x112328u; }
        if (ctx->pc != 0x112328u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001115D8_0x1115d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x112328u; }
        if (ctx->pc != 0x112328u) { return; }
    }
    ctx->pc = 0x112328u;
label_112328:
    // 0x112328: 0x4410007  bgez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x112328u;
    {
        const bool branch_taken_0x112328 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x11232Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x112328u;
            // 0x11232c: 0x3c022000  lui         $v0, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112328) {
            ctx->pc = 0x112348u;
            goto label_112348;
        }
    }
    ctx->pc = 0x112330u;
    // 0x112330: 0xc04331c  jal         func_10CC70
    ctx->pc = 0x112330u;
    SET_GPR_U32(ctx, 31, 0x112338u);
    ctx->pc = 0x112334u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x112330u;
            // 0x112334: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10CC70u;
    if (runtime->hasFunction(0x10CC70u)) {
        auto targetFn = runtime->lookupFunction(0x10CC70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x112338u; }
        if (ctx->pc != 0x112338u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010CC70_0x10cc70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x112338u; }
        if (ctx->pc != 0x112338u) { return; }
    }
    ctx->pc = 0x112338u;
label_112338:
    // 0x112338: 0xc0446de  jal         func_111B78
    ctx->pc = 0x112338u;
    SET_GPR_U32(ctx, 31, 0x112340u);
    ctx->pc = 0x111B78u;
    if (runtime->hasFunction(0x111B78u)) {
        auto targetFn = runtime->lookupFunction(0x111B78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x112340u; }
        if (ctx->pc != 0x112340u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00111B78_0x111b78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x112340u; }
        if (ctx->pc != 0x112340u) { return; }
    }
    ctx->pc = 0x112340u;
label_112340:
    // 0x112340: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x112340u;
    {
        const bool branch_taken_0x112340 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x112344u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x112340u;
            // 0x112344: 0x2402fff5  addiu       $v0, $zero, -0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967285));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112340) {
            ctx->pc = 0x1123D0u;
            goto label_1123d0;
        }
    }
    ctx->pc = 0x112348u;
label_112348:
    // 0x112348: 0x2821025  or          $v0, $s4, $v0
    ctx->pc = 0x112348u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) | GPR_U64(ctx, 2));
    // 0x11234c: 0xc0446de  jal         func_111B78
    ctx->pc = 0x11234Cu;
    SET_GPR_U32(ctx, 31, 0x112354u);
    ctx->pc = 0x112350u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11234Cu;
            // 0x112350: 0x8c510000  lw          $s1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x111B78u;
    if (runtime->hasFunction(0x111B78u)) {
        auto targetFn = runtime->lookupFunction(0x111B78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x112354u; }
        if (ctx->pc != 0x112354u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00111B78_0x111b78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x112354u; }
        if (ctx->pc != 0x112354u) { return; }
    }
    ctx->pc = 0x112354u;
label_112354:
    // 0x112354: 0x16200005  bnez        $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x112354u;
    {
        const bool branch_taken_0x112354 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x112354) {
            ctx->pc = 0x11236Cu;
            goto label_11236c;
        }
    }
    ctx->pc = 0x11235Cu;
    // 0x11235c: 0xc04331c  jal         func_10CC70
    ctx->pc = 0x11235Cu;
    SET_GPR_U32(ctx, 31, 0x112364u);
    ctx->pc = 0x112360u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11235Cu;
            // 0x112360: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10CC70u;
    if (runtime->hasFunction(0x10CC70u)) {
        auto targetFn = runtime->lookupFunction(0x10CC70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x112364u; }
        if (ctx->pc != 0x112364u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010CC70_0x10cc70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x112364u; }
        if (ctx->pc != 0x112364u) { return; }
    }
    ctx->pc = 0x112364u;
label_112364:
    // 0x112364: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x112364u;
    {
        const bool branch_taken_0x112364 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x112368u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x112364u;
            // 0x112368: 0x2402fff5  addiu       $v0, $zero, -0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967285));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112364) {
            ctx->pc = 0x1123D0u;
            goto label_1123d0;
        }
    }
    ctx->pc = 0x11236Cu;
label_11236c:
    // 0x11236c: 0xc043328  jal         func_10CCA0
    ctx->pc = 0x11236Cu;
    SET_GPR_U32(ctx, 31, 0x112374u);
    ctx->pc = 0x112370u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11236Cu;
            // 0x112370: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10CCA0u;
    if (runtime->hasFunction(0x10CCA0u)) {
        auto targetFn = runtime->lookupFunction(0x10CCA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x112374u; }
        if (ctx->pc != 0x112374u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        kofxiSyscallWaitSemaWrapper_0x10cca0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x112374u; }
        if (ctx->pc != 0x112374u) { return; }
    }
    ctx->pc = 0x112374u;
label_112374:
    // 0x112374: 0xc04331c  jal         func_10CC70
    ctx->pc = 0x112374u;
    SET_GPR_U32(ctx, 31, 0x11237Cu);
    ctx->pc = 0x112378u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x112374u;
            // 0x112378: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10CC70u;
    if (runtime->hasFunction(0x10CC70u)) {
        auto targetFn = runtime->lookupFunction(0x10CC70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11237Cu; }
        if (ctx->pc != 0x11237Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010CC70_0x10cc70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11237Cu; }
        if (ctx->pc != 0x11237Cu) { return; }
    }
    ctx->pc = 0x11237Cu;
label_11237c:
    // 0x11237c: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x11237cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x112380: 0x4610008  bgez        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x112380u;
    {
        const bool branch_taken_0x112380 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x112384u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x112380u;
            // 0x112384: 0x3c100036  lui         $s0, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)54 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112380) {
            ctx->pc = 0x1123A4u;
            goto label_1123a4;
        }
    }
    ctx->pc = 0x112388u;
    // 0x112388: 0xc043328  jal         func_10CCA0
    ctx->pc = 0x112388u;
    SET_GPR_U32(ctx, 31, 0x112390u);
    ctx->pc = 0x11238Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x112388u;
            // 0x11238c: 0x8e048748  lw          $a0, -0x78B8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294936392)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10CCA0u;
    if (runtime->hasFunction(0x10CCA0u)) {
        auto targetFn = runtime->lookupFunction(0x10CCA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x112390u; }
        if (ctx->pc != 0x112390u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        kofxiSyscallWaitSemaWrapper_0x10cca0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x112390u; }
        if (ctx->pc != 0x112390u) { return; }
    }
    ctx->pc = 0x112390u;
label_112390:
    // 0x112390: 0xae600004  sw          $zero, 0x4($s3)
    ctx->pc = 0x112390u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 0));
    // 0x112394: 0xc043320  jal         func_10CC80
    ctx->pc = 0x112394u;
    SET_GPR_U32(ctx, 31, 0x11239Cu);
    ctx->pc = 0x112398u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x112394u;
            // 0x112398: 0x8e048748  lw          $a0, -0x78B8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294936392)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10CC80u;
    if (runtime->hasFunction(0x10CC80u)) {
        auto targetFn = runtime->lookupFunction(0x10CC80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11239Cu; }
        if (ctx->pc != 0x11239Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010CC80_0x10cc80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11239Cu; }
        if (ctx->pc != 0x11239Cu) { return; }
    }
    ctx->pc = 0x11239Cu;
label_11239c:
    // 0x11239c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x11239Cu;
    {
        const bool branch_taken_0x11239c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1123A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11239Cu;
            // 0x1123a0: 0x8fa20030  lw          $v0, 0x30($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11239c) {
            ctx->pc = 0x1123D0u;
            goto label_1123d0;
        }
    }
    ctx->pc = 0x1123A4u;
label_1123a4:
    // 0x1123a4: 0x2a0882d  daddu       $s1, $s5, $zero
    ctx->pc = 0x1123a4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1123a8: 0xc043328  jal         func_10CCA0
    ctx->pc = 0x1123A8u;
    SET_GPR_U32(ctx, 31, 0x1123B0u);
    ctx->pc = 0x1123ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1123A8u;
            // 0x1123ac: 0x8e048748  lw          $a0, -0x78B8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294936392)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10CCA0u;
    if (runtime->hasFunction(0x10CCA0u)) {
        auto targetFn = runtime->lookupFunction(0x10CCA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1123B0u; }
        if (ctx->pc != 0x1123B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        kofxiSyscallWaitSemaWrapper_0x10cca0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1123B0u; }
        if (ctx->pc != 0x1123B0u) { return; }
    }
    ctx->pc = 0x1123B0u;
label_1123b0:
    // 0x1123b0: 0x8e630004  lw          $v1, 0x4($s3)
    ctx->pc = 0x1123b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x1123b4: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x1123b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1123b8: 0x8e048748  lw          $a0, -0x78B8($s0)
    ctx->pc = 0x1123b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294936392)));
    // 0x1123bc: 0x771825  or          $v1, $v1, $s7
    ctx->pc = 0x1123bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 23));
    // 0x1123c0: 0xae630004  sw          $v1, 0x4($s3)
    ctx->pc = 0x1123c0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 3));
    // 0x1123c4: 0xc043320  jal         func_10CC80
    ctx->pc = 0x1123C4u;
    SET_GPR_U32(ctx, 31, 0x1123CCu);
    ctx->pc = 0x1123C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1123C4u;
            // 0x1123c8: 0xae620000  sw          $v0, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10CC80u;
    if (runtime->hasFunction(0x10CC80u)) {
        auto targetFn = runtime->lookupFunction(0x10CC80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1123CCu; }
        if (ctx->pc != 0x1123CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010CC80_0x10cc80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1123CCu; }
        if (ctx->pc != 0x1123CCu) { return; }
    }
    ctx->pc = 0x1123CCu;
label_1123cc:
    // 0x1123cc: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x1123ccu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1123d0:
    // 0x1123d0: 0xdfbf00d0  ld          $ra, 0xD0($sp)
    ctx->pc = 0x1123d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x1123d4: 0xdfbe00c0  ld          $fp, 0xC0($sp)
    ctx->pc = 0x1123d4u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1123d8: 0xdfb700b0  ld          $s7, 0xB0($sp)
    ctx->pc = 0x1123d8u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1123dc: 0xdfb600a0  ld          $s6, 0xA0($sp)
    ctx->pc = 0x1123dcu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1123e0: 0xdfb50090  ld          $s5, 0x90($sp)
    ctx->pc = 0x1123e0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1123e4: 0xdfb40080  ld          $s4, 0x80($sp)
    ctx->pc = 0x1123e4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1123e8: 0xdfb30070  ld          $s3, 0x70($sp)
    ctx->pc = 0x1123e8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1123ec: 0xdfb20060  ld          $s2, 0x60($sp)
    ctx->pc = 0x1123ecu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1123f0: 0xdfb10050  ld          $s1, 0x50($sp)
    ctx->pc = 0x1123f0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1123f4: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x1123f4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1123f8: 0x3e00008  jr          $ra
    ctx->pc = 0x1123F8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1123FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1123F8u;
            // 0x1123fc: 0x27bd0150  addiu       $sp, $sp, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x112400u;
    ctx->pc = 0x112400u;
}
