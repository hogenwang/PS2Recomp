#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001641B0
// Address: 0x1641b0 - 0x1644c0
void sub_001641B0_0x1641b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001641B0_0x1641b0");
#endif

    switch (ctx->pc) {
        case 0x1641f4u: goto label_1641f4;
        case 0x164278u: goto label_164278;
        case 0x164310u: goto label_164310;
        case 0x16431cu: goto label_16431c;
        case 0x164328u: goto label_164328;
        case 0x164334u: goto label_164334;
        case 0x16434cu: goto label_16434c;
        case 0x1643b0u: goto label_1643b0;
        case 0x1643bcu: goto label_1643bc;
        case 0x1643c8u: goto label_1643c8;
        case 0x1643e0u: goto label_1643e0;
        case 0x164420u: goto label_164420;
        case 0x164480u: goto label_164480;
        case 0x164488u: goto label_164488;
        case 0x164490u: goto label_164490;
        default: break;
    }

    ctx->pc = 0x1641b0u;

    // 0x1641b0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1641b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1641b4: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x1641b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x1641b8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1641b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1641bc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1641bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1641c0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1641c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1641c4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1641c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1641c8: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1641c8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1641cc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1641ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1641d0: 0x8c900010  lw          $s0, 0x10($a0)
    ctx->pc = 0x1641d0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1641d4: 0x1240007e  beqz        $s2, . + 4 + (0x7E << 2)
    ctx->pc = 0x1641D4u;
    {
        const bool branch_taken_0x1641d4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x1641D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1641D4u;
            // 0x1641d8: 0xc0882d  daddu       $s1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1641d4) {
            ctx->pc = 0x1643D0u;
            goto label_1643d0;
        }
    }
    ctx->pc = 0x1641DCu;
    // 0x1641dc: 0x8e4200dc  lw          $v0, 0xDC($s2)
    ctx->pc = 0x1641dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 220)));
    // 0x1641e0: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1641e0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1641e4: 0x964500ea  lhu         $a1, 0xEA($s2)
    ctx->pc = 0x1641e4u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 234)));
    // 0x1641e8: 0x3042003f  andi        $v0, $v0, 0x3F
    ctx->pc = 0x1641e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)63);
    // 0x1641ec: 0xc062734  jal         func_189CD0
    ctx->pc = 0x1641ECu;
    SET_GPR_U32(ctx, 31, 0x1641F4u);
    ctx->pc = 0x1641F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1641ECu;
            // 0x1641f0: 0x512025  or          $a0, $v0, $s1 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
        ctx->in_delay_slot = false;
    ctx->pc = 0x189CD0u;
    if (runtime->hasFunction(0x189CD0u)) {
        auto targetFn = runtime->lookupFunction(0x189CD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1641F4u; }
        if (ctx->pc != 0x1641F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00189CD0_0x189cd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1641F4u; }
        if (ctx->pc != 0x1641F4u) { return; }
    }
    ctx->pc = 0x1641F4u;
label_1641f4:
    // 0x1641f4: 0x8e4400e4  lw          $a0, 0xE4($s2)
    ctx->pc = 0x1641f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 228)));
    // 0x1641f8: 0x3c023a83  lui         $v0, 0x3A83
    ctx->pc = 0x1641f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)14979 << 16));
    // 0x1641fc: 0x3443126f  ori         $v1, $v0, 0x126F
    ctx->pc = 0x1641fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4719);
    // 0x164200: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x164200u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x164204: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x164204u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x164208: 0x3084003f  andi        $a0, $a0, 0x3F
    ctx->pc = 0x164208u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)63);
    // 0x16420c: 0x911825  or          $v1, $a0, $s1
    ctx->pc = 0x16420cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 17));
    // 0x164210: 0xae0400e4  sw          $a0, 0xE4($s0)
    ctx->pc = 0x164210u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 228), GPR_U32(ctx, 4));
    // 0x164214: 0xae0300e4  sw          $v1, 0xE4($s0)
    ctx->pc = 0x164214u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 228), GPR_U32(ctx, 3));
    // 0x164218: 0x924305f1  lbu         $v1, 0x5F1($s2)
    ctx->pc = 0x164218u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1521)));
    // 0x16421c: 0xa20305f1  sb          $v1, 0x5F1($s0)
    ctx->pc = 0x16421cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1521), (uint8_t)GPR_U32(ctx, 3));
    // 0x164220: 0xc6410090  lwc1        $f1, 0x90($s2)
    ctx->pc = 0x164220u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x164224: 0xe6010090  swc1        $f1, 0x90($s0)
    ctx->pc = 0x164224u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 144), bits); }
    // 0x164228: 0xc6410094  lwc1        $f1, 0x94($s2)
    ctx->pc = 0x164228u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x16422c: 0xe6010094  swc1        $f1, 0x94($s0)
    ctx->pc = 0x16422cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 148), bits); }
    // 0x164230: 0x9243008c  lbu         $v1, 0x8C($s2)
    ctx->pc = 0x164230u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 140)));
    // 0x164234: 0xa203008c  sb          $v1, 0x8C($s0)
    ctx->pc = 0x164234u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 140), (uint8_t)GPR_U32(ctx, 3));
    // 0x164238: 0x9203008c  lbu         $v1, 0x8C($s0)
    ctx->pc = 0x164238u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 140)));
    // 0x16423c: 0x3463003c  ori         $v1, $v1, 0x3C
    ctx->pc = 0x16423cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)60);
    // 0x164240: 0xa203008c  sb          $v1, 0x8C($s0)
    ctx->pc = 0x164240u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 140), (uint8_t)GPR_U32(ctx, 3));
    // 0x164244: 0x86430000  lh          $v1, 0x0($s2)
    ctx->pc = 0x164244u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x164248: 0xa6030000  sh          $v1, 0x0($s0)
    ctx->pc = 0x164248u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x16424c: 0x86430002  lh          $v1, 0x2($s2)
    ctx->pc = 0x16424cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 2)));
    // 0x164250: 0xa6030002  sh          $v1, 0x2($s0)
    ctx->pc = 0x164250u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2), (uint16_t)GPR_U32(ctx, 3));
    // 0x164254: 0xae000048  sw          $zero, 0x48($s0)
    ctx->pc = 0x164254u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 0));
    // 0x164258: 0xae00004c  sw          $zero, 0x4C($s0)
    ctx->pc = 0x164258u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 76), GPR_U32(ctx, 0));
    // 0x16425c: 0xc6410004  lwc1        $f1, 0x4($s2)
    ctx->pc = 0x16425cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x164260: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x164260u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x164264: 0xe6000004  swc1        $f0, 0x4($s0)
    ctx->pc = 0x164264u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x164268: 0xa2020008  sb          $v0, 0x8($s0)
    ctx->pc = 0x164268u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 8), (uint8_t)GPR_U32(ctx, 2));
    // 0x16426c: 0x92050008  lbu         $a1, 0x8($s0)
    ctx->pc = 0x16426cu;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x164270: 0xc04be70  jal         func_12F9C0
    ctx->pc = 0x164270u;
    SET_GPR_U32(ctx, 31, 0x164278u);
    ctx->pc = 0x164274u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x164270u;
            // 0x164274: 0x8e0400dc  lw          $a0, 0xDC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 220)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12F9C0u;
    if (runtime->hasFunction(0x12F9C0u)) {
        auto targetFn = runtime->lookupFunction(0x12F9C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x164278u; }
        if (ctx->pc != 0x164278u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012F9C0_0x12f9c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x164278u; }
        if (ctx->pc != 0x164278u) { return; }
    }
    ctx->pc = 0x164278u;
label_164278:
    // 0x164278: 0xe6000004  swc1        $f0, 0x4($s0)
    ctx->pc = 0x164278u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x16427c: 0x964205e2  lhu         $v0, 0x5E2($s2)
    ctx->pc = 0x16427cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 1506)));
    // 0x164280: 0xa60205e2  sh          $v0, 0x5E2($s0)
    ctx->pc = 0x164280u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1506), (uint16_t)GPR_U32(ctx, 2));
    // 0x164284: 0x8e42009c  lw          $v0, 0x9C($s2)
    ctx->pc = 0x164284u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 156)));
    // 0x164288: 0xae02009c  sw          $v0, 0x9C($s0)
    ctx->pc = 0x164288u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 156), GPR_U32(ctx, 2));
    // 0x16428c: 0x8e4200a0  lw          $v0, 0xA0($s2)
    ctx->pc = 0x16428cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 160)));
    // 0x164290: 0xae0200a0  sw          $v0, 0xA0($s0)
    ctx->pc = 0x164290u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 2));
    // 0x164294: 0xae0000a4  sw          $zero, 0xA4($s0)
    ctx->pc = 0x164294u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 164), GPR_U32(ctx, 0));
    // 0x164298: 0x8e4200a8  lw          $v0, 0xA8($s2)
    ctx->pc = 0x164298u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 168)));
    // 0x16429c: 0xae0200a8  sw          $v0, 0xA8($s0)
    ctx->pc = 0x16429cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 168), GPR_U32(ctx, 2));
    // 0x1642a0: 0x8e4200b4  lw          $v0, 0xB4($s2)
    ctx->pc = 0x1642a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 180)));
    // 0x1642a4: 0xae0200b4  sw          $v0, 0xB4($s0)
    ctx->pc = 0x1642a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 180), GPR_U32(ctx, 2));
    // 0x1642a8: 0x8e4200c4  lw          $v0, 0xC4($s2)
    ctx->pc = 0x1642a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 196)));
    // 0x1642ac: 0xae0200c4  sw          $v0, 0xC4($s0)
    ctx->pc = 0x1642acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 196), GPR_U32(ctx, 2));
    // 0x1642b0: 0x8e4200b8  lw          $v0, 0xB8($s2)
    ctx->pc = 0x1642b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 184)));
    // 0x1642b4: 0xae0200b8  sw          $v0, 0xB8($s0)
    ctx->pc = 0x1642b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 184), GPR_U32(ctx, 2));
    // 0x1642b8: 0x8e4200c8  lw          $v0, 0xC8($s2)
    ctx->pc = 0x1642b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 200)));
    // 0x1642bc: 0xae0200c8  sw          $v0, 0xC8($s0)
    ctx->pc = 0x1642bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 200), GPR_U32(ctx, 2));
    // 0x1642c0: 0x8e4200bc  lw          $v0, 0xBC($s2)
    ctx->pc = 0x1642c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 188)));
    // 0x1642c4: 0xae0200bc  sw          $v0, 0xBC($s0)
    ctx->pc = 0x1642c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 188), GPR_U32(ctx, 2));
    // 0x1642c8: 0x8e4200cc  lw          $v0, 0xCC($s2)
    ctx->pc = 0x1642c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 204)));
    // 0x1642cc: 0xae0200cc  sw          $v0, 0xCC($s0)
    ctx->pc = 0x1642ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 204), GPR_U32(ctx, 2));
    // 0x1642d0: 0x8e4200c0  lw          $v0, 0xC0($s2)
    ctx->pc = 0x1642d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 192)));
    // 0x1642d4: 0xae0200c0  sw          $v0, 0xC0($s0)
    ctx->pc = 0x1642d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 192), GPR_U32(ctx, 2));
    // 0x1642d8: 0x8e4200d0  lw          $v0, 0xD0($s2)
    ctx->pc = 0x1642d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 208)));
    // 0x1642dc: 0xae0200d0  sw          $v0, 0xD0($s0)
    ctx->pc = 0x1642dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 208), GPR_U32(ctx, 2));
    // 0x1642e0: 0x8e4200ac  lw          $v0, 0xAC($s2)
    ctx->pc = 0x1642e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 172)));
    // 0x1642e4: 0xae0200ac  sw          $v0, 0xAC($s0)
    ctx->pc = 0x1642e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 172), GPR_U32(ctx, 2));
    // 0x1642e8: 0x864200d4  lh          $v0, 0xD4($s2)
    ctx->pc = 0x1642e8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 212)));
    // 0x1642ec: 0xa60200d4  sh          $v0, 0xD4($s0)
    ctx->pc = 0x1642ecu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 212), (uint16_t)GPR_U32(ctx, 2));
    // 0x1642f0: 0x864200d6  lh          $v0, 0xD6($s2)
    ctx->pc = 0x1642f0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 214)));
    // 0x1642f4: 0xa60200d6  sh          $v0, 0xD6($s0)
    ctx->pc = 0x1642f4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 214), (uint16_t)GPR_U32(ctx, 2));
    // 0x1642f8: 0x924200d8  lbu         $v0, 0xD8($s2)
    ctx->pc = 0x1642f8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 216)));
    // 0x1642fc: 0xa20200d8  sb          $v0, 0xD8($s0)
    ctx->pc = 0x1642fcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 216), (uint8_t)GPR_U32(ctx, 2));
    // 0x164300: 0x924200d9  lbu         $v0, 0xD9($s2)
    ctx->pc = 0x164300u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 217)));
    // 0x164304: 0xa20200d9  sb          $v0, 0xD9($s0)
    ctx->pc = 0x164304u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 217), (uint8_t)GPR_U32(ctx, 2));
    // 0x164308: 0xc04ba30  jal         func_12E8C0
    ctx->pc = 0x164308u;
    SET_GPR_U32(ctx, 31, 0x164310u);
    ctx->pc = 0x16430Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x164308u;
            // 0x16430c: 0x8e4400dc  lw          $a0, 0xDC($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 220)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12E8C0u;
    if (runtime->hasFunction(0x12E8C0u)) {
        auto targetFn = runtime->lookupFunction(0x12E8C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x164310u; }
        if (ctx->pc != 0x164310u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012E8C0_0x12e8c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x164310u; }
        if (ctx->pc != 0x164310u) { return; }
    }
    ctx->pc = 0x164310u;
label_164310:
    // 0x164310: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x164310u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x164314: 0xc04ba3c  jal         func_12E8F0
    ctx->pc = 0x164314u;
    SET_GPR_U32(ctx, 31, 0x16431Cu);
    ctx->pc = 0x164318u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x164314u;
            // 0x164318: 0x2604028c  addiu       $a0, $s0, 0x28C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 652));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12E8F0u;
    if (runtime->hasFunction(0x12E8F0u)) {
        auto targetFn = runtime->lookupFunction(0x12E8F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16431Cu; }
        if (ctx->pc != 0x16431Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012E8F0_0x12e8f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16431Cu; }
        if (ctx->pc != 0x16431Cu) { return; }
    }
    ctx->pc = 0x16431Cu;
label_16431c:
    // 0x16431c: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x16431cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x164320: 0x240982d  daddu       $s3, $s2, $zero
    ctx->pc = 0x164320u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x164324: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x164324u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_164328:
    // 0x164328: 0x2624029c  addiu       $a0, $s1, 0x29C
    ctx->pc = 0x164328u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 668));
    // 0x16432c: 0xc05cee4  jal         func_173B90
    ctx->pc = 0x16432Cu;
    SET_GPR_U32(ctx, 31, 0x164334u);
    ctx->pc = 0x164330u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16432Cu;
            // 0x164330: 0x2665029c  addiu       $a1, $s3, 0x29C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 668));
        ctx->in_delay_slot = false;
    ctx->pc = 0x173B90u;
    if (runtime->hasFunction(0x173B90u)) {
        auto targetFn = runtime->lookupFunction(0x173B90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x164334u; }
        if (ctx->pc != 0x164334u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00173B90_0x173b90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x164334u; }
        if (ctx->pc != 0x164334u) { return; }
    }
    ctx->pc = 0x164334u;
label_164334:
    // 0x164334: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x164334u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x164338: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x164338u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16433c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x16433cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x164340: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x164340u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x164344: 0xc058070  jal         func_1601C0
    ctx->pc = 0x164344u;
    SET_GPR_U32(ctx, 31, 0x16434Cu);
    ctx->pc = 0x164348u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x164344u;
            // 0x164348: 0x262802b4  addiu       $t0, $s1, 0x2B4 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 17), 692));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1601C0u;
    if (runtime->hasFunction(0x1601C0u)) {
        auto targetFn = runtime->lookupFunction(0x1601C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16434Cu; }
        if (ctx->pc != 0x16434Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001601C0_0x1601c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16434Cu; }
        if (ctx->pc != 0x16434Cu) { return; }
    }
    ctx->pc = 0x16434Cu;
label_16434c:
    // 0x16434c: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x16434cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x164350: 0x26730028  addiu       $s3, $s3, 0x28
    ctx->pc = 0x164350u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 40));
    // 0x164354: 0x2a820003  slti        $v0, $s4, 0x3
    ctx->pc = 0x164354u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x164358: 0x1440fff3  bnez        $v0, . + 4 + (-0xD << 2)
    ctx->pc = 0x164358u;
    {
        const bool branch_taken_0x164358 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x16435Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x164358u;
            // 0x16435c: 0x26310028  addiu       $s1, $s1, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x164358) {
            ctx->pc = 0x164328u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_164328;
        }
    }
    ctx->pc = 0x164360u;
    // 0x164360: 0xae1205f4  sw          $s2, 0x5F4($s0)
    ctx->pc = 0x164360u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1524), GPR_U32(ctx, 18));
    // 0x164364: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x164364u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
    // 0x164368: 0x8e0400dc  lw          $a0, 0xDC($s0)
    ctx->pc = 0x164368u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 220)));
    // 0x16436c: 0x34423c00  ori         $v0, $v0, 0x3C00
    ctx->pc = 0x16436cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)15360);
    // 0x164370: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x164370u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x164374: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x164374u;
    {
        const bool branch_taken_0x164374 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x164374) {
            ctx->pc = 0x164378u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x164374u;
            // 0x164378: 0x3c0201e0  lui         $v0, 0x1E0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x164398u;
            goto label_164398;
        }
    }
    ctx->pc = 0x16437Cu;
    // 0x16437c: 0x960305e2  lhu         $v1, 0x5E2($s0)
    ctx->pc = 0x16437cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 1506)));
    // 0x164380: 0x30628000  andi        $v0, $v1, 0x8000
    ctx->pc = 0x164380u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32768);
    // 0x164384: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x164384u;
    {
        const bool branch_taken_0x164384 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x164384) {
            ctx->pc = 0x164394u;
            goto label_164394;
        }
    }
    ctx->pc = 0x16438Cu;
    // 0x16438c: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x16438Cu;
    {
        const bool branch_taken_0x16438c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x164390u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16438Cu;
            // 0x164390: 0x3064003f  andi        $a0, $v1, 0x3F (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)63);
        ctx->in_delay_slot = false;
        if (branch_taken_0x16438c) {
            ctx->pc = 0x1643B4u;
            goto label_1643b4;
        }
    }
    ctx->pc = 0x164394u;
label_164394:
    // 0x164394: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x164394u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
label_164398:
    // 0x164398: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x164398u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x16439c: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x16439cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x1643a0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1643A0u;
    {
        const bool branch_taken_0x1643a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1643a0) {
            ctx->pc = 0x1643B4u;
            goto label_1643b4;
        }
    }
    ctx->pc = 0x1643A8u;
    // 0x1643a8: 0xc0627f8  jal         func_189FE0
    ctx->pc = 0x1643A8u;
    SET_GPR_U32(ctx, 31, 0x1643B0u);
    ctx->pc = 0x189FE0u;
    if (runtime->hasFunction(0x189FE0u)) {
        auto targetFn = runtime->lookupFunction(0x189FE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1643B0u; }
        if (ctx->pc != 0x1643B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00189FE0_0x189fe0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1643B0u; }
        if (ctx->pc != 0x1643B0u) { return; }
    }
    ctx->pc = 0x1643B0u;
label_1643b0:
    // 0x1643b0: 0x8c4400dc  lw          $a0, 0xDC($v0)
    ctx->pc = 0x1643b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 220)));
label_1643b4:
    // 0x1643b4: 0xc04ba30  jal         func_12E8C0
    ctx->pc = 0x1643B4u;
    SET_GPR_U32(ctx, 31, 0x1643BCu);
    ctx->pc = 0x12E8C0u;
    if (runtime->hasFunction(0x12E8C0u)) {
        auto targetFn = runtime->lookupFunction(0x12E8C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1643BCu; }
        if (ctx->pc != 0x1643BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012E8C0_0x12e8c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1643BCu; }
        if (ctx->pc != 0x1643BCu) { return; }
    }
    ctx->pc = 0x1643BCu;
label_1643bc:
    // 0x1643bc: 0x2604028c  addiu       $a0, $s0, 0x28C
    ctx->pc = 0x1643bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 652));
    // 0x1643c0: 0xc04ba3c  jal         func_12E8F0
    ctx->pc = 0x1643C0u;
    SET_GPR_U32(ctx, 31, 0x1643C8u);
    ctx->pc = 0x1643C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1643C0u;
            // 0x1643c4: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12E8F0u;
    if (runtime->hasFunction(0x12E8F0u)) {
        auto targetFn = runtime->lookupFunction(0x12E8F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1643C8u; }
        if (ctx->pc != 0x1643C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012E8F0_0x12e8f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1643C8u; }
        if (ctx->pc != 0x1643C8u) { return; }
    }
    ctx->pc = 0x1643C8u;
label_1643c8:
    // 0x1643c8: 0x10000033  b           . + 4 + (0x33 << 2)
    ctx->pc = 0x1643C8u;
    {
        const bool branch_taken_0x1643c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1643CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1643C8u;
            // 0x1643cc: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1643c8) {
            ctx->pc = 0x164498u;
            goto label_164498;
        }
    }
    ctx->pc = 0x1643D0u;
label_1643d0:
    // 0x1643d0: 0x3c040001  lui         $a0, 0x1
    ctx->pc = 0x1643d0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1 << 16));
    // 0x1643d4: 0x24050030  addiu       $a1, $zero, 0x30
    ctx->pc = 0x1643d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x1643d8: 0xc062734  jal         func_189CD0
    ctx->pc = 0x1643D8u;
    SET_GPR_U32(ctx, 31, 0x1643E0u);
    ctx->pc = 0x1643DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1643D8u;
            // 0x1643dc: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x189CD0u;
    if (runtime->hasFunction(0x189CD0u)) {
        auto targetFn = runtime->lookupFunction(0x189CD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1643E0u; }
        if (ctx->pc != 0x1643E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00189CD0_0x189cd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1643E0u; }
        if (ctx->pc != 0x1643E0u) { return; }
    }
    ctx->pc = 0x1643E0u;
label_1643e0:
    // 0x1643e0: 0xa20005f1  sb          $zero, 0x5F1($s0)
    ctx->pc = 0x1643e0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1521), (uint8_t)GPR_U32(ctx, 0));
    // 0x1643e4: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x1643e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x1643e8: 0xae020090  sw          $v0, 0x90($s0)
    ctx->pc = 0x1643e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 144), GPR_U32(ctx, 2));
    // 0x1643ec: 0x24040140  addiu       $a0, $zero, 0x140
    ctx->pc = 0x1643ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
    // 0x1643f0: 0xae020094  sw          $v0, 0x94($s0)
    ctx->pc = 0x1643f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 148), GPR_U32(ctx, 2));
    // 0x1643f4: 0x240300f0  addiu       $v1, $zero, 0xF0
    ctx->pc = 0x1643f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 240));
    // 0x1643f8: 0xa200008c  sb          $zero, 0x8C($s0)
    ctx->pc = 0x1643f8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 140), (uint8_t)GPR_U32(ctx, 0));
    // 0x1643fc: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x1643fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x164400: 0xa6040000  sh          $a0, 0x0($s0)
    ctx->pc = 0x164400u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 4));
    // 0x164404: 0xa6030002  sh          $v1, 0x2($s0)
    ctx->pc = 0x164404u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2), (uint16_t)GPR_U32(ctx, 3));
    // 0x164408: 0xae000048  sw          $zero, 0x48($s0)
    ctx->pc = 0x164408u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 0));
    // 0x16440c: 0xae00004c  sw          $zero, 0x4C($s0)
    ctx->pc = 0x16440cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 76), GPR_U32(ctx, 0));
    // 0x164410: 0xa2020008  sb          $v0, 0x8($s0)
    ctx->pc = 0x164410u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 8), (uint8_t)GPR_U32(ctx, 2));
    // 0x164414: 0x92050008  lbu         $a1, 0x8($s0)
    ctx->pc = 0x164414u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x164418: 0xc04be70  jal         func_12F9C0
    ctx->pc = 0x164418u;
    SET_GPR_U32(ctx, 31, 0x164420u);
    ctx->pc = 0x16441Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x164418u;
            // 0x16441c: 0x8e0400dc  lw          $a0, 0xDC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 220)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12F9C0u;
    if (runtime->hasFunction(0x12F9C0u)) {
        auto targetFn = runtime->lookupFunction(0x12F9C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x164420u; }
        if (ctx->pc != 0x164420u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012F9C0_0x12f9c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x164420u; }
        if (ctx->pc != 0x164420u) { return; }
    }
    ctx->pc = 0x164420u;
label_164420:
    // 0x164420: 0xe6000004  swc1        $f0, 0x4($s0)
    ctx->pc = 0x164420u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x164424: 0x24020026  addiu       $v0, $zero, 0x26
    ctx->pc = 0x164424u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
    // 0x164428: 0xa2020298  sb          $v0, 0x298($s0)
    ctx->pc = 0x164428u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 664), (uint8_t)GPR_U32(ctx, 2));
    // 0x16442c: 0x3c03003d  lui         $v1, 0x3D
    ctx->pc = 0x16442cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)61 << 16));
    // 0x164430: 0x24630a18  addiu       $v1, $v1, 0xA18
    ctx->pc = 0x164430u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2584));
    // 0x164434: 0xae0000a4  sw          $zero, 0xA4($s0)
    ctx->pc = 0x164434u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 164), GPR_U32(ctx, 0));
    // 0x164438: 0xae0300a0  sw          $v1, 0xA0($s0)
    ctx->pc = 0x164438u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 3));
    // 0x16443c: 0x3c0200ff  lui         $v0, 0xFF
    ctx->pc = 0x16443cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)255 << 16));
    // 0x164440: 0x3443ffff  ori         $v1, $v0, 0xFFFF
    ctx->pc = 0x164440u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x164444: 0xae00009c  sw          $zero, 0x9C($s0)
    ctx->pc = 0x164444u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 156), GPR_U32(ctx, 0));
    // 0x164448: 0xae0300b4  sw          $v1, 0xB4($s0)
    ctx->pc = 0x164448u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 180), GPR_U32(ctx, 3));
    // 0x16444c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x16444cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x164450: 0xae0000c4  sw          $zero, 0xC4($s0)
    ctx->pc = 0x164450u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 196), GPR_U32(ctx, 0));
    // 0x164454: 0x2604029c  addiu       $a0, $s0, 0x29C
    ctx->pc = 0x164454u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 668));
    // 0x164458: 0xae0300b8  sw          $v1, 0xB8($s0)
    ctx->pc = 0x164458u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 184), GPR_U32(ctx, 3));
    // 0x16445c: 0xae0000c8  sw          $zero, 0xC8($s0)
    ctx->pc = 0x16445cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 200), GPR_U32(ctx, 0));
    // 0x164460: 0xae0300bc  sw          $v1, 0xBC($s0)
    ctx->pc = 0x164460u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 188), GPR_U32(ctx, 3));
    // 0x164464: 0xae0000cc  sw          $zero, 0xCC($s0)
    ctx->pc = 0x164464u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 204), GPR_U32(ctx, 0));
    // 0x164468: 0xae0300c0  sw          $v1, 0xC0($s0)
    ctx->pc = 0x164468u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 192), GPR_U32(ctx, 3));
    // 0x16446c: 0xae0000d0  sw          $zero, 0xD0($s0)
    ctx->pc = 0x16446cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 208), GPR_U32(ctx, 0));
    // 0x164470: 0xae0000ac  sw          $zero, 0xAC($s0)
    ctx->pc = 0x164470u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 172), GPR_U32(ctx, 0));
    // 0x164474: 0xa20000d9  sb          $zero, 0xD9($s0)
    ctx->pc = 0x164474u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 217), (uint8_t)GPR_U32(ctx, 0));
    // 0x164478: 0xc05cecc  jal         func_173B30
    ctx->pc = 0x164478u;
    SET_GPR_U32(ctx, 31, 0x164480u);
    ctx->pc = 0x16447Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x164478u;
            // 0x16447c: 0xae0200a8  sw          $v0, 0xA8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 168), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x173B30u;
    if (runtime->hasFunction(0x173B30u)) {
        auto targetFn = runtime->lookupFunction(0x173B30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x164480u; }
        if (ctx->pc != 0x164480u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00173B30_0x173b30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x164480u; }
        if (ctx->pc != 0x164480u) { return; }
    }
    ctx->pc = 0x164480u;
label_164480:
    // 0x164480: 0xc05cecc  jal         func_173B30
    ctx->pc = 0x164480u;
    SET_GPR_U32(ctx, 31, 0x164488u);
    ctx->pc = 0x164484u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x164480u;
            // 0x164484: 0x260402c4  addiu       $a0, $s0, 0x2C4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 708));
        ctx->in_delay_slot = false;
    ctx->pc = 0x173B30u;
    if (runtime->hasFunction(0x173B30u)) {
        auto targetFn = runtime->lookupFunction(0x173B30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x164488u; }
        if (ctx->pc != 0x164488u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00173B30_0x173b30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x164488u; }
        if (ctx->pc != 0x164488u) { return; }
    }
    ctx->pc = 0x164488u;
label_164488:
    // 0x164488: 0xc05cecc  jal         func_173B30
    ctx->pc = 0x164488u;
    SET_GPR_U32(ctx, 31, 0x164490u);
    ctx->pc = 0x16448Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x164488u;
            // 0x16448c: 0x260402ec  addiu       $a0, $s0, 0x2EC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 748));
        ctx->in_delay_slot = false;
    ctx->pc = 0x173B30u;
    if (runtime->hasFunction(0x173B30u)) {
        auto targetFn = runtime->lookupFunction(0x173B30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x164490u; }
        if (ctx->pc != 0x164490u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00173B30_0x173b30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x164490u; }
        if (ctx->pc != 0x164490u) { return; }
    }
    ctx->pc = 0x164490u;
label_164490:
    // 0x164490: 0xae0005f4  sw          $zero, 0x5F4($s0)
    ctx->pc = 0x164490u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1524), GPR_U32(ctx, 0));
    // 0x164494: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x164494u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_164498:
    // 0x164498: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x164498u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x16449c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x16449cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1644a0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1644a0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1644a4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1644a4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1644a8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1644a8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1644ac: 0x3e00008  jr          $ra
    ctx->pc = 0x1644ACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1644B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1644ACu;
            // 0x1644b0: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1644B4u;
    // 0x1644b4: 0x0  nop
    ctx->pc = 0x1644b4u;
    // NOP
    // 0x1644b8: 0x0  nop
    ctx->pc = 0x1644b8u;
    // NOP
    // 0x1644bc: 0x0  nop
    ctx->pc = 0x1644bcu;
    // NOP
    ctx->pc = 0x1644c0u;
}
