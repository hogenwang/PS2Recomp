#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0024C110
// Address: 0x24c110 - 0x24c260
void sub_0024C110_0x24c110(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024C110_0x24c110");
#endif

    switch (ctx->pc) {
        case 0x24c110u: goto label_24c110;
        case 0x24c114u: goto label_24c114;
        case 0x24c118u: goto label_24c118;
        case 0x24c11cu: goto label_24c11c;
        case 0x24c120u: goto label_24c120;
        case 0x24c124u: goto label_24c124;
        case 0x24c128u: goto label_24c128;
        case 0x24c12cu: goto label_24c12c;
        case 0x24c130u: goto label_24c130;
        case 0x24c134u: goto label_24c134;
        case 0x24c138u: goto label_24c138;
        case 0x24c13cu: goto label_24c13c;
        case 0x24c140u: goto label_24c140;
        case 0x24c144u: goto label_24c144;
        case 0x24c148u: goto label_24c148;
        case 0x24c14cu: goto label_24c14c;
        case 0x24c150u: goto label_24c150;
        case 0x24c154u: goto label_24c154;
        case 0x24c158u: goto label_24c158;
        case 0x24c15cu: goto label_24c15c;
        case 0x24c160u: goto label_24c160;
        case 0x24c164u: goto label_24c164;
        case 0x24c168u: goto label_24c168;
        case 0x24c16cu: goto label_24c16c;
        case 0x24c170u: goto label_24c170;
        case 0x24c174u: goto label_24c174;
        case 0x24c178u: goto label_24c178;
        case 0x24c17cu: goto label_24c17c;
        case 0x24c180u: goto label_24c180;
        case 0x24c184u: goto label_24c184;
        case 0x24c188u: goto label_24c188;
        case 0x24c18cu: goto label_24c18c;
        case 0x24c190u: goto label_24c190;
        case 0x24c194u: goto label_24c194;
        case 0x24c198u: goto label_24c198;
        case 0x24c19cu: goto label_24c19c;
        case 0x24c1a0u: goto label_24c1a0;
        case 0x24c1a4u: goto label_24c1a4;
        case 0x24c1a8u: goto label_24c1a8;
        case 0x24c1acu: goto label_24c1ac;
        case 0x24c1b0u: goto label_24c1b0;
        case 0x24c1b4u: goto label_24c1b4;
        case 0x24c1b8u: goto label_24c1b8;
        case 0x24c1bcu: goto label_24c1bc;
        case 0x24c1c0u: goto label_24c1c0;
        case 0x24c1c4u: goto label_24c1c4;
        case 0x24c1c8u: goto label_24c1c8;
        case 0x24c1ccu: goto label_24c1cc;
        case 0x24c1d0u: goto label_24c1d0;
        case 0x24c1d4u: goto label_24c1d4;
        case 0x24c1d8u: goto label_24c1d8;
        case 0x24c1dcu: goto label_24c1dc;
        case 0x24c1e0u: goto label_24c1e0;
        case 0x24c1e4u: goto label_24c1e4;
        case 0x24c1e8u: goto label_24c1e8;
        case 0x24c1ecu: goto label_24c1ec;
        case 0x24c1f0u: goto label_24c1f0;
        case 0x24c1f4u: goto label_24c1f4;
        case 0x24c1f8u: goto label_24c1f8;
        case 0x24c1fcu: goto label_24c1fc;
        case 0x24c200u: goto label_24c200;
        case 0x24c204u: goto label_24c204;
        case 0x24c208u: goto label_24c208;
        case 0x24c20cu: goto label_24c20c;
        case 0x24c210u: goto label_24c210;
        case 0x24c214u: goto label_24c214;
        case 0x24c218u: goto label_24c218;
        case 0x24c21cu: goto label_24c21c;
        case 0x24c220u: goto label_24c220;
        case 0x24c224u: goto label_24c224;
        case 0x24c228u: goto label_24c228;
        case 0x24c22cu: goto label_24c22c;
        case 0x24c230u: goto label_24c230;
        case 0x24c234u: goto label_24c234;
        case 0x24c238u: goto label_24c238;
        case 0x24c23cu: goto label_24c23c;
        case 0x24c240u: goto label_24c240;
        case 0x24c244u: goto label_24c244;
        case 0x24c248u: goto label_24c248;
        case 0x24c24cu: goto label_24c24c;
        case 0x24c250u: goto label_24c250;
        case 0x24c254u: goto label_24c254;
        case 0x24c258u: goto label_24c258;
        case 0x24c25cu: goto label_24c25c;
        default: break;
    }

    ctx->pc = 0x24c110u;

label_24c110:
    // 0x24c110: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x24c110u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
label_24c114:
    // 0x24c114: 0xffbe00a0  sd          $fp, 0xA0($sp)
    ctx->pc = 0x24c114u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 30));
label_24c118:
    // 0x24c118: 0xffb60080  sd          $s6, 0x80($sp)
    ctx->pc = 0x24c118u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 22));
label_24c11c:
    // 0x24c11c: 0x80f02d  daddu       $fp, $a0, $zero
    ctx->pc = 0x24c11cu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_24c120:
    // 0x24c120: 0xffb50070  sd          $s5, 0x70($sp)
    ctx->pc = 0x24c120u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 21));
label_24c124:
    // 0x24c124: 0x140b02d  daddu       $s6, $t2, $zero
    ctx->pc = 0x24c124u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
label_24c128:
    // 0x24c128: 0xffb40060  sd          $s4, 0x60($sp)
    ctx->pc = 0x24c128u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 20));
label_24c12c:
    // 0x24c12c: 0x30d5ffff  andi        $s5, $a2, 0xFFFF
    ctx->pc = 0x24c12cu;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
label_24c130:
    // 0x24c130: 0xffbf00b0  sd          $ra, 0xB0($sp)
    ctx->pc = 0x24c130u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 31));
label_24c134:
    // 0x24c134: 0x3114ffff  andi        $s4, $t0, 0xFFFF
    ctx->pc = 0x24c134u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)65535);
label_24c138:
    // 0x24c138: 0xffb70090  sd          $s7, 0x90($sp)
    ctx->pc = 0x24c138u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 23));
label_24c13c:
    // 0x24c13c: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x24c13cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
label_24c140:
    // 0x24c140: 0xffb10030  sd          $s1, 0x30($sp)
    ctx->pc = 0x24c140u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 17));
label_24c144:
    // 0x24c144: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x24c144u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
label_24c148:
    // 0x24c148: 0xafa50000  sw          $a1, 0x0($sp)
    ctx->pc = 0x24c148u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
label_24c14c:
    // 0x24c14c: 0xafa70010  sw          $a3, 0x10($sp)
    ctx->pc = 0x24c14cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 7));
label_24c150:
    // 0x24c150: 0xafa90018  sw          $t1, 0x18($sp)
    ctx->pc = 0x24c150u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 9));
label_24c154:
    // 0x24c154: 0xffb30050  sd          $s3, 0x50($sp)
    ctx->pc = 0x24c154u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 19));
label_24c158:
    // 0x24c158: 0x8fb30000  lw          $s3, 0x0($sp)
    ctx->pc = 0x24c158u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_24c15c:
    // 0x24c15c: 0xc08a254  jal         func_228950
label_24c160:
    if (ctx->pc == 0x24C160u) {
        ctx->pc = 0x24C160u;
            // 0x24c160: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x24C164u;
        goto label_24c164;
    }
    ctx->pc = 0x24C15Cu;
    SET_GPR_U32(ctx, 31, 0x24C164u);
    ctx->pc = 0x24C160u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24C15Cu;
            // 0x24c160: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x228950u;
    if (runtime->hasFunction(0x228950u)) {
        auto targetFn = runtime->lookupFunction(0x228950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24C164u; }
        if (ctx->pc != 0x24C164u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00228950_0x228950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24C164u; }
        if (ctx->pc != 0x24C164u) { return; }
    }
    ctx->pc = 0x24C164u;
label_24c164:
    // 0x24c164: 0x12620032  beq         $s3, $v0, . + 4 + (0x32 << 2)
label_24c168:
    if (ctx->pc == 0x24C168u) {
        ctx->pc = 0x24C168u;
            // 0x24c168: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x24C16Cu;
        goto label_24c16c;
    }
    ctx->pc = 0x24C164u;
    {
        const bool branch_taken_0x24c164 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        ctx->pc = 0x24C168u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24C164u;
            // 0x24c168: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24c164) {
            ctx->pc = 0x24C230u;
            goto label_24c230;
        }
    }
    ctx->pc = 0x24C16Cu;
label_24c16c:
    // 0x24c16c: 0x56c00003  bnel        $s6, $zero, . + 4 + (0x3 << 2)
label_24c170:
    if (ctx->pc == 0x24C170u) {
        ctx->pc = 0x24C170u;
            // 0x24c170: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x24C174u;
        goto label_24c174;
    }
    ctx->pc = 0x24C16Cu;
    {
        const bool branch_taken_0x24c16c = (GPR_U64(ctx, 22) != GPR_U64(ctx, 0));
        if (branch_taken_0x24c16c) {
            ctx->pc = 0x24C170u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x24C16Cu;
            // 0x24c170: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x24C17Cu;
            goto label_24c17c;
        }
    }
    ctx->pc = 0x24C174u;
label_24c174:
    // 0x24c174: 0x1000002f  b           . + 4 + (0x2F << 2)
label_24c178:
    if (ctx->pc == 0x24C178u) {
        ctx->pc = 0x24C178u;
            // 0x24c178: 0xdfbf00b0  ld          $ra, 0xB0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->pc = 0x24C17Cu;
        goto label_24c17c;
    }
    ctx->pc = 0x24C174u;
    {
        const bool branch_taken_0x24c174 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24C178u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24C174u;
            // 0x24c178: 0xdfbf00b0  ld          $ra, 0xB0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24c174) {
            ctx->pc = 0x24C234u;
            goto label_24c234;
        }
    }
    ctx->pc = 0x24C17Cu;
label_24c17c:
    // 0x24c17c: 0xc08b5fe  jal         func_22D7F8
label_24c180:
    if (ctx->pc == 0x24C180u) {
        ctx->pc = 0x24C180u;
            // 0x24c180: 0xb82d  daddu       $s7, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x24C184u;
        goto label_24c184;
    }
    ctx->pc = 0x24C17Cu;
    SET_GPR_U32(ctx, 31, 0x24C184u);
    ctx->pc = 0x24C180u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24C17Cu;
            // 0x24c180: 0xb82d  daddu       $s7, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22D7F8u;
    if (runtime->hasFunction(0x22D7F8u)) {
        auto targetFn = runtime->lookupFunction(0x22D7F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24C184u; }
        if (ctx->pc != 0x24C184u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022D7F8_0x22d7f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24C184u; }
        if (ctx->pc != 0x24C184u) { return; }
    }
    ctx->pc = 0x24C184u;
label_24c184:
    // 0x24c184: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x24c184u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_24c188:
    // 0x24c188: 0xc08b5fe  jal         func_22D7F8
label_24c18c:
    if (ctx->pc == 0x24C18Cu) {
        ctx->pc = 0x24C18Cu;
            // 0x24c18c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x24C190u;
        goto label_24c190;
    }
    ctx->pc = 0x24C188u;
    SET_GPR_U32(ctx, 31, 0x24C190u);
    ctx->pc = 0x24C18Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24C188u;
            // 0x24c18c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22D7F8u;
    if (runtime->hasFunction(0x22D7F8u)) {
        auto targetFn = runtime->lookupFunction(0x22D7F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24C190u; }
        if (ctx->pc != 0x24C190u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022D7F8_0x22d7f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24C190u; }
        if (ctx->pc != 0x24C190u) { return; }
    }
    ctx->pc = 0x24C190u;
label_24c190:
    // 0x24c190: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x24c190u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_24c194:
    // 0x24c194: 0xc08b60c  jal         func_22D830
label_24c198:
    if (ctx->pc == 0x24C198u) {
        ctx->pc = 0x24C198u;
            // 0x24c198: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x24C19Cu;
        goto label_24c19c;
    }
    ctx->pc = 0x24C194u;
    SET_GPR_U32(ctx, 31, 0x24C19Cu);
    ctx->pc = 0x24C198u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24C194u;
            // 0x24c198: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22D830u;
    if (runtime->hasFunction(0x22D830u)) {
        auto targetFn = runtime->lookupFunction(0x22D830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24C19Cu; }
        if (ctx->pc != 0x24C19Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022D830_0x22d830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24C19Cu; }
        if (ctx->pc != 0x24C19Cu) { return; }
    }
    ctx->pc = 0x24C19Cu;
label_24c19c:
    // 0x24c19c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x24c19cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_24c1a0:
    // 0x24c1a0: 0xc08b60c  jal         func_22D830
label_24c1a4:
    if (ctx->pc == 0x24C1A4u) {
        ctx->pc = 0x24C1A4u;
            // 0x24c1a4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x24C1A8u;
        goto label_24c1a8;
    }
    ctx->pc = 0x24C1A0u;
    SET_GPR_U32(ctx, 31, 0x24C1A8u);
    ctx->pc = 0x24C1A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24C1A0u;
            // 0x24c1a4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22D830u;
    if (runtime->hasFunction(0x22D830u)) {
        auto targetFn = runtime->lookupFunction(0x22D830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24C1A8u; }
        if (ctx->pc != 0x24C1A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022D830_0x22d830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24C1A8u; }
        if (ctx->pc != 0x24C1A8u) { return; }
    }
    ctx->pc = 0x24C1A8u;
label_24c1a8:
    // 0x24c1a8: 0x2228821  addu        $s1, $s1, $v0
    ctx->pc = 0x24c1a8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_24c1ac:
    // 0x24c1ac: 0x2128021  addu        $s0, $s0, $s2
    ctx->pc = 0x24c1acu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
label_24c1b0:
    // 0x24c1b0: 0x8fc30018  lw          $v1, 0x18($fp)
    ctx->pc = 0x24c1b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 24)));
label_24c1b4:
    // 0x24c1b4: 0x2118021  addu        $s0, $s0, $s1
    ctx->pc = 0x24c1b4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
label_24c1b8:
    // 0x24c1b8: 0x8fc2000c  lw          $v0, 0xC($fp)
    ctx->pc = 0x24c1b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 12)));
label_24c1bc:
    // 0x24c1bc: 0x2038024  and         $s0, $s0, $v1
    ctx->pc = 0x24c1bcu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & GPR_U64(ctx, 3));
label_24c1c0:
    // 0x24c1c0: 0x108080  sll         $s0, $s0, 2
    ctx->pc = 0x24c1c0u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_24c1c4:
    // 0x24c1c4: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x24c1c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_24c1c8:
    // 0x24c1c8: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x24c1c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_24c1cc:
    // 0x24c1cc: 0x10800018  beqz        $a0, . + 4 + (0x18 << 2)
label_24c1d0:
    if (ctx->pc == 0x24C1D0u) {
        ctx->pc = 0x24C1D0u;
            // 0x24c1d0: 0x2e0102d  daddu       $v0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x24C1D4u;
        goto label_24c1d4;
    }
    ctx->pc = 0x24C1CCu;
    {
        const bool branch_taken_0x24c1cc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x24C1D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24C1CCu;
            // 0x24c1d0: 0x2e0102d  daddu       $v0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24c1cc) {
            ctx->pc = 0x24C230u;
            goto label_24c230;
        }
    }
    ctx->pc = 0x24C1D4u;
label_24c1d4:
    // 0x24c1d4: 0x10000003  b           . + 4 + (0x3 << 2)
label_24c1d8:
    if (ctx->pc == 0x24C1D8u) {
        ctx->pc = 0x24C1D8u;
            // 0x24c1d8: 0x8c820048  lw          $v0, 0x48($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
        ctx->pc = 0x24C1DCu;
        goto label_24c1dc;
    }
    ctx->pc = 0x24C1D4u;
    {
        const bool branch_taken_0x24c1d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24C1D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24C1D4u;
            // 0x24c1d8: 0x8c820048  lw          $v0, 0x48($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24c1d4) {
            ctx->pc = 0x24C1E4u;
            goto label_24c1e4;
        }
    }
    ctx->pc = 0x24C1DCu;
label_24c1dc:
    // 0x24c1dc: 0x0  nop
    ctx->pc = 0x24c1dcu;
    // NOP
label_24c1e0:
    // 0x24c1e0: 0x8fb30000  lw          $s3, 0x0($sp)
    ctx->pc = 0x24c1e0u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_24c1e4:
    // 0x24c1e4: 0x1453000e  bne         $v0, $s3, . + 4 + (0xE << 2)
label_24c1e8:
    if (ctx->pc == 0x24C1E8u) {
        ctx->pc = 0x24C1E8u;
            // 0x24c1e8: 0x8c900000  lw          $s0, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->pc = 0x24C1ECu;
        goto label_24c1ec;
    }
    ctx->pc = 0x24C1E4u;
    {
        const bool branch_taken_0x24c1e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 19));
        ctx->pc = 0x24C1E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24C1E4u;
            // 0x24c1e8: 0x8c900000  lw          $s0, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24c1e4) {
            ctx->pc = 0x24C220u;
            goto label_24c220;
        }
    }
    ctx->pc = 0x24C1ECu;
label_24c1ec:
    // 0x24c1ec: 0x94820018  lhu         $v0, 0x18($a0)
    ctx->pc = 0x24c1ecu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 24)));
label_24c1f0:
    // 0x24c1f0: 0x5455000c  bnel        $v0, $s5, . + 4 + (0xC << 2)
label_24c1f4:
    if (ctx->pc == 0x24C1F4u) {
        ctx->pc = 0x24C1F4u;
            // 0x24c1f4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x24C1F8u;
        goto label_24c1f8;
    }
    ctx->pc = 0x24C1F0u;
    {
        const bool branch_taken_0x24c1f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 21));
        if (branch_taken_0x24c1f0) {
            ctx->pc = 0x24C1F4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x24C1F0u;
            // 0x24c1f4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x24C224u;
            goto label_24c224;
        }
    }
    ctx->pc = 0x24C1F8u;
label_24c1f8:
    // 0x24c1f8: 0x9482001a  lhu         $v0, 0x1A($a0)
    ctx->pc = 0x24c1f8u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 26)));
label_24c1fc:
    // 0x24c1fc: 0x54540009  bnel        $v0, $s4, . + 4 + (0x9 << 2)
label_24c200:
    if (ctx->pc == 0x24C200u) {
        ctx->pc = 0x24C200u;
            // 0x24c200: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x24C204u;
        goto label_24c204;
    }
    ctx->pc = 0x24C1FCu;
    {
        const bool branch_taken_0x24c1fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 20));
        if (branch_taken_0x24c1fc) {
            ctx->pc = 0x24C200u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x24C1FCu;
            // 0x24c200: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x24C224u;
            goto label_24c224;
        }
    }
    ctx->pc = 0x24C204u;
label_24c204:
    // 0x24c204: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x24c204u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_24c208:
    // 0x24c208: 0x8c820044  lw          $v0, 0x44($a0)
    ctx->pc = 0x24c208u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 68)));
label_24c20c:
    // 0x24c20c: 0x54430005  bnel        $v0, $v1, . + 4 + (0x5 << 2)
label_24c210:
    if (ctx->pc == 0x24C210u) {
        ctx->pc = 0x24C210u;
            // 0x24c210: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x24C214u;
        goto label_24c214;
    }
    ctx->pc = 0x24C20Cu;
    {
        const bool branch_taken_0x24c20c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x24c20c) {
            ctx->pc = 0x24C210u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x24C20Cu;
            // 0x24c210: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x24C224u;
            goto label_24c224;
        }
    }
    ctx->pc = 0x24C214u;
label_24c214:
    // 0x24c214: 0x8fa50018  lw          $a1, 0x18($sp)
    ctx->pc = 0x24c214u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_24c218:
    // 0x24c218: 0x2c0f809  jalr        $s6
label_24c21c:
    if (ctx->pc == 0x24C21Cu) {
        ctx->pc = 0x24C21Cu;
            // 0x24c21c: 0x26f70001  addiu       $s7, $s7, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
        ctx->pc = 0x24C220u;
        goto label_24c220;
    }
    ctx->pc = 0x24C218u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 22);
        SET_GPR_U32(ctx, 31, 0x24C220u);
        ctx->pc = 0x24C21Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24C218u;
            // 0x24c21c: 0x26f70001  addiu       $s7, $s7, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x24C220u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x24C220u; }
            if (ctx->pc != 0x24C220u) { return; }
        }
        }
    }
    ctx->pc = 0x24C220u;
label_24c220:
    // 0x24c220: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x24c220u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_24c224:
    // 0x24c224: 0x5480ffee  bnel        $a0, $zero, . + 4 + (-0x12 << 2)
label_24c228:
    if (ctx->pc == 0x24C228u) {
        ctx->pc = 0x24C228u;
            // 0x24c228: 0x8c820048  lw          $v0, 0x48($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
        ctx->pc = 0x24C22Cu;
        goto label_24c22c;
    }
    ctx->pc = 0x24C224u;
    {
        const bool branch_taken_0x24c224 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x24c224) {
            ctx->pc = 0x24C228u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x24C224u;
            // 0x24c228: 0x8c820048  lw          $v0, 0x48($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x24C1E0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_24c1e0;
        }
    }
    ctx->pc = 0x24C22Cu;
label_24c22c:
    // 0x24c22c: 0x2e0102d  daddu       $v0, $s7, $zero
    ctx->pc = 0x24c22cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_24c230:
    // 0x24c230: 0xdfbf00b0  ld          $ra, 0xB0($sp)
    ctx->pc = 0x24c230u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 176)));
label_24c234:
    // 0x24c234: 0xdfbe00a0  ld          $fp, 0xA0($sp)
    ctx->pc = 0x24c234u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_24c238:
    // 0x24c238: 0xdfb70090  ld          $s7, 0x90($sp)
    ctx->pc = 0x24c238u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_24c23c:
    // 0x24c23c: 0xdfb60080  ld          $s6, 0x80($sp)
    ctx->pc = 0x24c23cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_24c240:
    // 0x24c240: 0xdfb50070  ld          $s5, 0x70($sp)
    ctx->pc = 0x24c240u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_24c244:
    // 0x24c244: 0xdfb40060  ld          $s4, 0x60($sp)
    ctx->pc = 0x24c244u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_24c248:
    // 0x24c248: 0xdfb30050  ld          $s3, 0x50($sp)
    ctx->pc = 0x24c248u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_24c24c:
    // 0x24c24c: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x24c24cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_24c250:
    // 0x24c250: 0xdfb10030  ld          $s1, 0x30($sp)
    ctx->pc = 0x24c250u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_24c254:
    // 0x24c254: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x24c254u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_24c258:
    // 0x24c258: 0x3e00008  jr          $ra
label_24c25c:
    if (ctx->pc == 0x24C25Cu) {
        ctx->pc = 0x24C25Cu;
            // 0x24c25c: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->pc = 0x24C260u;
        goto label_fallthrough_0x24c258;
    }
    ctx->pc = 0x24C258u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24C25Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24C258u;
            // 0x24c25c: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x24c258:
    ctx->pc = 0x24C260u;
    ctx->pc = 0x24c260u;
}
