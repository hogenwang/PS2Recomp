#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0011F208
// Address: 0x11f208 - 0x11f348
void sub_0011F208_0x11f208(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0011F208_0x11f208");
#endif

    switch (ctx->pc) {
        case 0x11f264u: goto label_11f264;
        case 0x11f288u: goto label_11f288;
        case 0x11f2b8u: goto label_11f2b8;
        case 0x11f2c8u: goto label_11f2c8;
        case 0x11f2f8u: goto label_11f2f8;
        case 0x11f308u: goto label_11f308;
        default: break;
    }

    ctx->pc = 0x11f208u;

    // 0x11f208: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x11f208u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x11f20c: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x11f20cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x11f210: 0xffb70080  sd          $s7, 0x80($sp)
    ctx->pc = 0x11f210u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 23));
    // 0x11f214: 0xffb60070  sd          $s6, 0x70($sp)
    ctx->pc = 0x11f214u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 22));
    // 0x11f218: 0x2457de00  addiu       $s7, $v0, -0x2200
    ctx->pc = 0x11f218u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958592));
    // 0x11f21c: 0xffb50060  sd          $s5, 0x60($sp)
    ctx->pc = 0x11f21cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 21));
    // 0x11f220: 0xe0b02d  daddu       $s6, $a3, $zero
    ctx->pc = 0x11f220u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11f224: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x11f224u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x11f228: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x11f228u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11f22c: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x11f22cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x11f230: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x11f230u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11f234: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x11f234u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x11f238: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x11f238u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x11f23c: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x11f23cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x11f240: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x11f240u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x11f244: 0x8ee20024  lw          $v0, 0x24($s7)
    ctx->pc = 0x11f244u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 36)));
    // 0x11f248: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x11F248u;
    {
        const bool branch_taken_0x11f248 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11F24Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11F248u;
            // 0x11f24c: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f248) {
            ctx->pc = 0x11F258u;
            goto label_11f258;
        }
    }
    ctx->pc = 0x11F250u;
    // 0x11f250: 0x10000032  b           . + 4 + (0x32 << 2)
    ctx->pc = 0x11F250u;
    {
        const bool branch_taken_0x11f250 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11F254u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11F250u;
            // 0x11f254: 0x2402ff9c  addiu       $v0, $zero, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967196));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f250) {
            ctx->pc = 0x11F31Cu;
            goto label_11f31c;
        }
    }
    ctx->pc = 0x11F258u;
label_11f258:
    // 0x11f258: 0x3c130036  lui         $s3, 0x36
    ctx->pc = 0x11f258u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)54 << 16));
    // 0x11f25c: 0xc04332c  jal         func_10CCB0
    ctx->pc = 0x11F25Cu;
    SET_GPR_U32(ctx, 31, 0x11F264u);
    ctx->pc = 0x11F260u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11F25Cu;
            // 0x11f260: 0x8e64b9dc  lw          $a0, -0x4624($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294949340)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10CCB0u;
    if (runtime->hasFunction(0x10CCB0u)) {
        auto targetFn = runtime->lookupFunction(0x10CCB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11F264u; }
        if (ctx->pc != 0x11F264u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010CCB0_0x10ccb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11F264u; }
        if (ctx->pc != 0x11F264u) { return; }
    }
    ctx->pc = 0x11F264u;
label_11f264:
    // 0x11f264: 0x440002d  bltz        $v0, . + 4 + (0x2D << 2)
    ctx->pc = 0x11F264u;
    {
        const bool branch_taken_0x11f264 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x11F268u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11F264u;
            // 0x11f268: 0x2402ff38  addiu       $v0, $zero, -0xC8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967096));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f264) {
            ctx->pc = 0x11F31Cu;
            goto label_11f31c;
        }
    }
    ctx->pc = 0x11F26Cu;
    // 0x11f26c: 0x12400004  beqz        $s2, . + 4 + (0x4 << 2)
    ctx->pc = 0x11F26Cu;
    {
        const bool branch_taken_0x11f26c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x11f26c) {
            ctx->pc = 0x11F280u;
            goto label_11f280;
        }
    }
    ctx->pc = 0x11F274u;
    // 0x11f274: 0x82420000  lb          $v0, 0x0($s2)
    ctx->pc = 0x11f274u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x11f278: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x11F278u;
    {
        const bool branch_taken_0x11f278 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11F27Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11F278u;
            // 0x11f27c: 0x3c020041  lui         $v0, 0x41 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f278) {
            ctx->pc = 0x11F290u;
            goto label_11f290;
        }
    }
    ctx->pc = 0x11F280u;
label_11f280:
    // 0x11f280: 0xc043320  jal         func_10CC80
    ctx->pc = 0x11F280u;
    SET_GPR_U32(ctx, 31, 0x11F288u);
    ctx->pc = 0x11F284u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11F280u;
            // 0x11f284: 0x8e64b9dc  lw          $a0, -0x4624($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294949340)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10CC80u;
    if (runtime->hasFunction(0x10CC80u)) {
        auto targetFn = runtime->lookupFunction(0x10CC80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11F288u; }
        if (ctx->pc != 0x11F288u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010CC80_0x10cc80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11F288u; }
        if (ctx->pc != 0x11F288u) { return; }
    }
    ctx->pc = 0x11F288u;
label_11f288:
    // 0x11f288: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x11F288u;
    {
        const bool branch_taken_0x11f288 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11F28Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11F288u;
            // 0x11f28c: 0x2402ff2e  addiu       $v0, $zero, -0xD2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967086));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f288) {
            ctx->pc = 0x11F31Cu;
            goto label_11f31c;
        }
    }
    ctx->pc = 0x11F290u;
label_11f290:
    // 0x11f290: 0x3c100041  lui         $s0, 0x41
    ctx->pc = 0x11f290u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)65 << 16));
    // 0x11f294: 0x2451deb0  addiu       $s1, $v0, -0x2150
    ctx->pc = 0x11f294u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958768));
    // 0x11f298: 0x2610e3c0  addiu       $s0, $s0, -0x1C40
    ctx->pc = 0x11f298u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294960064));
    // 0x11f29c: 0xac54deb0  sw          $s4, -0x2150($v0)
    ctx->pc = 0x11f29cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294958768), GPR_U32(ctx, 20));
    // 0x11f2a0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x11f2a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11f2a4: 0xae350004  sw          $s5, 0x4($s1)
    ctx->pc = 0x11f2a4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 21));
    // 0x11f2a8: 0x26240014  addiu       $a0, $s1, 0x14
    ctx->pc = 0x11f2a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 20));
    // 0x11f2ac: 0xae300010  sw          $s0, 0x10($s1)
    ctx->pc = 0x11f2acu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 16));
    // 0x11f2b0: 0xc04a966  jal         func_12A598
    ctx->pc = 0x11F2B0u;
    SET_GPR_U32(ctx, 31, 0x11F2B8u);
    ctx->pc = 0x11F2B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11F2B0u;
            // 0x11f2b4: 0x240603ff  addiu       $a2, $zero, 0x3FF (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1023));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12A598u;
    if (runtime->hasFunction(0x12A598u)) {
        auto targetFn = runtime->lookupFunction(0x12A598u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11F2B8u; }
        if (ctx->pc != 0x11F2B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012A598_0x12a598(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11F2B8u; }
        if (ctx->pc != 0x11F2B8u) { return; }
    }
    ctx->pc = 0x11F2B8u;
label_11f2b8:
    // 0x11f2b8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11f2b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11f2bc: 0xa2200413  sb          $zero, 0x413($s1)
    ctx->pc = 0x11f2bcu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1043), (uint8_t)GPR_U32(ctx, 0));
    // 0x11f2c0: 0xc0440be  jal         func_1102F8
    ctx->pc = 0x11F2C0u;
    SET_GPR_U32(ctx, 31, 0x11F2C8u);
    ctx->pc = 0x11F2C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11F2C0u;
            // 0x11f2c4: 0x24050400  addiu       $a1, $zero, 0x400 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1102F8u;
    if (runtime->hasFunction(0x1102F8u)) {
        auto targetFn = runtime->lookupFunction(0x1102F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11F2C8u; }
        if (ctx->pc != 0x11F2C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001102F8_0x1102f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11F2C8u; }
        if (ctx->pc != 0x11F2C8u) { return; }
    }
    ctx->pc = 0x11F2C8u;
label_11f2c8:
    // 0x11f2c8: 0x3c090041  lui         $t1, 0x41
    ctx->pc = 0x11f2c8u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)65 << 16));
    // 0x11f2cc: 0x3c0b0012  lui         $t3, 0x12
    ctx->pc = 0x11f2ccu;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)18 << 16));
    // 0x11f2d0: 0xafb60000  sw          $s6, 0x0($sp)
    ctx->pc = 0x11f2d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 22));
    // 0x11f2d4: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x11f2d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11f2d8: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x11f2d8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11f2dc: 0x2529f3c0  addiu       $t1, $t1, -0xC40
    ctx->pc = 0x11f2dcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294964160));
    // 0x11f2e0: 0x256bf178  addiu       $t3, $t3, -0xE88
    ctx->pc = 0x11f2e0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294963576));
    // 0x11f2e4: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x11f2e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x11f2e8: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x11f2e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11f2ec: 0x24080414  addiu       $t0, $zero, 0x414
    ctx->pc = 0x11f2ecu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1044));
    // 0x11f2f0: 0xc04434c  jal         func_110D30
    ctx->pc = 0x11F2F0u;
    SET_GPR_U32(ctx, 31, 0x11F2F8u);
    ctx->pc = 0x11F2F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11F2F0u;
            // 0x11f2f4: 0x240a0004  addiu       $t2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x110D30u;
    if (runtime->hasFunction(0x110D30u)) {
        auto targetFn = runtime->lookupFunction(0x110D30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11F2F8u; }
        if (ctx->pc != 0x11F2F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        kofxiSifRpcCallPacket_0x110d30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11F2F8u; }
        if (ctx->pc != 0x11F2F8u) { return; }
    }
    ctx->pc = 0x11F2F8u;
label_11f2f8:
    // 0x11f2f8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x11F2F8u;
    {
        const bool branch_taken_0x11f2f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11F2FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11F2F8u;
            // 0x11f2fc: 0x2402000c  addiu       $v0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f2f8) {
            ctx->pc = 0x11F310u;
            goto label_11f310;
        }
    }
    ctx->pc = 0x11F300u;
    // 0x11f300: 0xc043320  jal         func_10CC80
    ctx->pc = 0x11F300u;
    SET_GPR_U32(ctx, 31, 0x11F308u);
    ctx->pc = 0x11F304u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11F300u;
            // 0x11f304: 0x8e64b9dc  lw          $a0, -0x4624($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294949340)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10CC80u;
    if (runtime->hasFunction(0x10CC80u)) {
        auto targetFn = runtime->lookupFunction(0x10CC80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11F308u; }
        if (ctx->pc != 0x11F308u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010CC80_0x10cc80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11F308u; }
        if (ctx->pc != 0x11F308u) { return; }
    }
    ctx->pc = 0x11F308u;
label_11f308:
    // 0x11f308: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x11F308u;
    {
        const bool branch_taken_0x11f308 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11F30Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11F308u;
            // 0x11f30c: 0x2402ffa5  addiu       $v0, $zero, -0x5B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967205));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f308) {
            ctx->pc = 0x11F31Cu;
            goto label_11f31c;
        }
    }
    ctx->pc = 0x11F310u;
label_11f310:
    // 0x11f310: 0x3c030036  lui         $v1, 0x36
    ctx->pc = 0x11f310u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)54 << 16));
    // 0x11f314: 0xac62b9d8  sw          $v0, -0x4628($v1)
    ctx->pc = 0x11f314u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294949336), GPR_U32(ctx, 2));
    // 0x11f318: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x11f318u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_11f31c:
    // 0x11f31c: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x11f31cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x11f320: 0xdfb70080  ld          $s7, 0x80($sp)
    ctx->pc = 0x11f320u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x11f324: 0xdfb60070  ld          $s6, 0x70($sp)
    ctx->pc = 0x11f324u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x11f328: 0xdfb50060  ld          $s5, 0x60($sp)
    ctx->pc = 0x11f328u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x11f32c: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x11f32cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x11f330: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x11f330u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x11f334: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x11f334u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x11f338: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x11f338u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x11f33c: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x11f33cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11f340: 0x3e00008  jr          $ra
    ctx->pc = 0x11F340u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11F344u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11F340u;
            // 0x11f344: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x11F348u;
    ctx->pc = 0x11f348u;
}
