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

// Function: sub_0032E0F0
// Address: 0x32e0f0 - 0x32e360
void sub_0032E0F0_0x32e0f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0032E0F0_0x32e0f0");
#endif

    switch (ctx->pc) {
        case 0x32e314u: goto label_32e314;
        case 0x32e328u: goto label_32e328;
        case 0x32e32cu: goto label_32e32c;
        default: break;
    }

    ctx->pc = 0x32e0f0u;

    // 0x32e0f0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x32e0f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x32e0f4: 0x41100  sll         $v0, $a0, 4
    ctx->pc = 0x32e0f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x32e0f8: 0x3c0c01de  lui         $t4, 0x1DE
    ctx->pc = 0x32e0f8u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)478 << 16));
    // 0x32e0fc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x32e0fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x32e100: 0x258ce510  addiu       $t4, $t4, -0x1AF0
    ctx->pc = 0x32e100u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 4294960400));
    // 0x32e104: 0x24426c00  addiu       $v0, $v0, 0x6C00
    ctx->pc = 0x32e104u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 27648));
    // 0x32e108: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x32e108u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x32e10c: 0xad820080  sw          $v0, 0x80($t4)
    ctx->pc = 0x32e10cu;
    WRITE32(ADD32(GPR_U32(ctx, 12), 128), GPR_U32(ctx, 2));
    // 0x32e110: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x32e110u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x32e114: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x32e114u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x32e118: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x32e118u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x32e11c: 0xad880060  sw          $t0, 0x60($t4)
    ctx->pc = 0x32e11cu;
    WRITE32(ADD32(GPR_U32(ctx, 12), 96), GPR_U32(ctx, 8));
    // 0x32e120: 0xfd820000  sd          $v0, 0x0($t4)
    ctx->pc = 0x32e120u;
    WRITE64(ADD32(GPR_U32(ctx, 12), 0), GPR_U64(ctx, 2));
    // 0x32e124: 0x3c036542  lui         $v1, 0x6542
    ctx->pc = 0x32e124u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)25922 << 16));
    // 0x32e128: 0x2402000e  addiu       $v0, $zero, 0xE
    ctx->pc = 0x32e128u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x32e12c: 0x8fa80010  lw          $t0, 0x10($sp)
    ctx->pc = 0x32e12cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x32e130: 0xfd820008  sd          $v0, 0x8($t4)
    ctx->pc = 0x32e130u;
    WRITE64(ADD32(GPR_U32(ctx, 12), 8), GPR_U64(ctx, 2));
    // 0x32e134: 0x2402003f  addiu       $v0, $zero, 0x3F
    ctx->pc = 0x32e134u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x32e138: 0xad890064  sw          $t1, 0x64($t4)
    ctx->pc = 0x32e138u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 100), GPR_U32(ctx, 9));
    // 0x32e13c: 0xfd820018  sd          $v0, 0x18($t4)
    ctx->pc = 0x32e13cu;
    WRITE64(ADD32(GPR_U32(ctx, 12), 24), GPR_U64(ctx, 2));
    // 0x32e140: 0x3c022007  lui         $v0, 0x2007
    ctx->pc = 0x32e140u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8199 << 16));
    // 0x32e144: 0xfd800010  sd          $zero, 0x10($t4)
    ctx->pc = 0x32e144u;
    WRITE64(ADD32(GPR_U32(ctx, 12), 16), GPR_U64(ctx, 0));
    // 0x32e148: 0x3442d006  ori         $v0, $v0, 0xD006
    ctx->pc = 0x32e148u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)53254);
    // 0x32e14c: 0xad800068  sw          $zero, 0x68($t4)
    ctx->pc = 0x32e14cu;
    WRITE32(ADD32(GPR_U32(ctx, 12), 104), GPR_U32(ctx, 0));
    // 0x32e150: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x32e150u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
    // 0x32e154: 0xad80006c  sw          $zero, 0x6C($t4)
    ctx->pc = 0x32e154u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 108), GPR_U32(ctx, 0));
    // 0x32e158: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x32e158u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x32e15c: 0xad880070  sw          $t0, 0x70($t4)
    ctx->pc = 0x32e15cu;
    WRITE32(ADD32(GPR_U32(ctx, 12), 112), GPR_U32(ctx, 8));
    // 0x32e160: 0xfd820028  sd          $v0, 0x28($t4)
    ctx->pc = 0x32e160u;
    WRITE64(ADD32(GPR_U32(ctx, 12), 40), GPR_U64(ctx, 2));
    // 0x32e164: 0x34623480  ori         $v0, $v1, 0x3480
    ctx->pc = 0x32e164u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)13440);
    // 0x32e168: 0x441825  or          $v1, $v0, $a0
    ctx->pc = 0x32e168u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x32e16c: 0x24020060  addiu       $v0, $zero, 0x60
    ctx->pc = 0x32e16cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x32e170: 0xfd830020  sd          $v1, 0x20($t4)
    ctx->pc = 0x32e170u;
    WRITE64(ADD32(GPR_U32(ctx, 12), 32), GPR_U64(ctx, 3));
    // 0x32e174: 0xfd820030  sd          $v0, 0x30($t4)
    ctx->pc = 0x32e174u;
    WRITE64(ADD32(GPR_U32(ctx, 12), 48), GPR_U64(ctx, 2));
    // 0x32e178: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x32e178u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x32e17c: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x32e17cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x32e180: 0xfd830038  sd          $v1, 0x38($t4)
    ctx->pc = 0x32e180u;
    WRITE64(ADD32(GPR_U32(ctx, 12), 56), GPR_U64(ctx, 3));
    // 0x32e184: 0xfd820040  sd          $v0, 0x40($t4)
    ctx->pc = 0x32e184u;
    WRITE64(ADD32(GPR_U32(ctx, 12), 64), GPR_U64(ctx, 2));
    // 0x32e188: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x32e188u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x32e18c: 0x3c0260ab  lui         $v0, 0x60AB
    ctx->pc = 0x32e18cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)24747 << 16));
    // 0x32e190: 0xfd830048  sd          $v1, 0x48($t4)
    ctx->pc = 0x32e190u;
    WRITE64(ADD32(GPR_U32(ctx, 12), 72), GPR_U64(ctx, 3));
    // 0x32e194: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x32e194u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x32e198: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x32e198u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x32e19c: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x32e19cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x32e1a0: 0x34028001  ori         $v0, $zero, 0x8001
    ctx->pc = 0x32e1a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32769);
    // 0x32e1a4: 0x431825  or          $v1, $v0, $v1
    ctx->pc = 0x32e1a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x32e1a8: 0xad840074  sw          $a0, 0x74($t4)
    ctx->pc = 0x32e1a8u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 116), GPR_U32(ctx, 4));
    // 0x32e1ac: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x32e1acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x32e1b0: 0xfd830050  sd          $v1, 0x50($t4)
    ctx->pc = 0x32e1b0u;
    WRITE64(ADD32(GPR_U32(ctx, 12), 80), GPR_U64(ctx, 3));
    // 0x32e1b4: 0x34423513  ori         $v0, $v0, 0x3513
    ctx->pc = 0x32e1b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13587);
    // 0x32e1b8: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x32e1b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x32e1bc: 0xfd820058  sd          $v0, 0x58($t4)
    ctx->pc = 0x32e1bcu;
    WRITE64(ADD32(GPR_U32(ctx, 12), 88), GPR_U64(ctx, 2));
    // 0x32e1c0: 0x3c02009d  lui         $v0, 0x9D
    ctx->pc = 0x32e1c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)157 << 16));
    // 0x32e1c4: 0x9049b280  lbu         $t1, -0x4D80($v0)
    ctx->pc = 0x32e1c4u;
    SET_GPR_U32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294947456)));
    // 0x32e1c8: 0xad830078  sw          $v1, 0x78($t4)
    ctx->pc = 0x32e1c8u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 120), GPR_U32(ctx, 3));
    // 0x32e1cc: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x32e1ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x32e1d0: 0x11200015  beqz        $t1, . + 4 + (0x15 << 2)
    ctx->pc = 0x32E1D0u;
    {
        const bool branch_taken_0x32e1d0 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x32E1D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32E1D0u;
        // 0x32e1d4: 0xad82007c  sw          $v0, 0x7C($t4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 12), 124), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32e1d0) {
            ctx->pc = 0x32E228u;
            goto label_32e228;
        }
    }
    ctx->pc = 0x32E1D8u;
    // 0x32e1d8: 0x54900  sll         $t1, $a1, 4
    ctx->pc = 0x32e1d8u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x32e1dc: 0x252d7000  addiu       $t5, $t1, 0x7000
    ctx->pc = 0x32e1dcu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 9), 28672));
    // 0x32e1e0: 0x3c058888  lui         $a1, 0x8888
    ctx->pc = 0x32e1e0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34952 << 16));
    // 0x32e1e4: 0x25ae8000  addiu       $t6, $t5, -0x8000
    ctx->pc = 0x32e1e4u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 13), 4294934528));
    // 0x32e1e8: 0x34a98889  ori         $t1, $a1, 0x8889
    ctx->pc = 0x32e1e8u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)34953);
    // 0x32e1ec: 0xe68c0  sll         $t5, $t6, 3
    ctx->pc = 0x32e1ecu;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 14), 3));
    // 0x32e1f0: 0x2405fff0  addiu       $a1, $zero, -0x10
    ctx->pc = 0x32e1f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x32e1f4: 0x1ae6823  subu        $t5, $t5, $t6
    ctx->pc = 0x32e1f4u;
    SET_GPR_S32(ctx, 13, (int32_t)SUB32(GPR_U32(ctx, 13), GPR_U32(ctx, 14)));
    // 0x32e1f8: 0xd7180  sll         $t6, $t5, 6
    ctx->pc = 0x32e1f8u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 13), 6));
    // 0x32e1fc: 0x12e0018  mult        $zero, $t1, $t6
    ctx->pc = 0x32e1fcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 9) * (int64_t)GPR_S32(ctx, 14); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x32e200: 0xe6fc2  srl         $t5, $t6, 31
    ctx->pc = 0x32e200u;
    SET_GPR_S32(ctx, 13, (int32_t)SRL32(GPR_U32(ctx, 14), 31));
    // 0x32e204: 0x0  nop
    ctx->pc = 0x32e204u;
    // NOP
    // 0x32e208: 0x4810  mfhi        $t1
    ctx->pc = 0x32e208u;
    SET_GPR_U64(ctx, 9, ctx->hi);
    // 0x32e20c: 0x12e4821  addu        $t1, $t1, $t6
    ctx->pc = 0x32e20cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 14)));
    // 0x32e210: 0x94a03  sra         $t1, $t1, 8
    ctx->pc = 0x32e210u;
    SET_GPR_S32(ctx, 9, SRA32(GPR_S32(ctx, 9), 8));
    // 0x32e214: 0x12d4821  addu        $t1, $t1, $t5
    ctx->pc = 0x32e214u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 13)));
    // 0x32e218: 0x25297fff  addiu       $t1, $t1, 0x7FFF
    ctx->pc = 0x32e218u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 32767));
    // 0x32e21c: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x32e21cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x32e220: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x32E220u;
    {
        const bool branch_taken_0x32e220 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32E224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32E220u;
        // 0x32e224: 0x1252824  and         $a1, $t1, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 9) & GPR_U64(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32e220) {
            ctx->pc = 0x32E230u;
            goto label_32e230;
        }
    }
    ctx->pc = 0x32E228u;
label_32e228:
    // 0x32e228: 0x52900  sll         $a1, $a1, 4
    ctx->pc = 0x32e228u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x32e22c: 0x24a57000  addiu       $a1, $a1, 0x7000
    ctx->pc = 0x32e22cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 28672));
label_32e230:
    // 0x32e230: 0xad850084  sw          $a1, 0x84($t4)
    ctx->pc = 0x32e230u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 132), GPR_U32(ctx, 5));
    // 0x32e234: 0x62900  sll         $a1, $a2, 4
    ctx->pc = 0x32e234u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x32e238: 0xad8200ac  sw          $v0, 0xAC($t4)
    ctx->pc = 0x32e238u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 172), GPR_U32(ctx, 2));
    // 0x32e23c: 0x24a66c00  addiu       $a2, $a1, 0x6C00
    ctx->pc = 0x32e23cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 27648));
    // 0x32e240: 0xad8a0090  sw          $t2, 0x90($t4)
    ctx->pc = 0x32e240u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 144), GPR_U32(ctx, 10));
    // 0x32e244: 0x2405a833  addiu       $a1, $zero, -0x57CD
    ctx->pc = 0x32e244u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294944819));
    // 0x32e248: 0xad8b0094  sw          $t3, 0x94($t4)
    ctx->pc = 0x32e248u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 148), GPR_U32(ctx, 11));
    // 0x32e24c: 0xad850088  sw          $a1, 0x88($t4)
    ctx->pc = 0x32e24cu;
    WRITE32(ADD32(GPR_U32(ctx, 12), 136), GPR_U32(ctx, 5));
    // 0x32e250: 0x3c05009d  lui         $a1, 0x9D
    ctx->pc = 0x32e250u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)157 << 16));
    // 0x32e254: 0xad8800a0  sw          $t0, 0xA0($t4)
    ctx->pc = 0x32e254u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 160), GPR_U32(ctx, 8));
    // 0x32e258: 0x90a2b280  lbu         $v0, -0x4D80($a1)
    ctx->pc = 0x32e258u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 4294947456)));
    // 0x32e25c: 0xad8400a4  sw          $a0, 0xA4($t4)
    ctx->pc = 0x32e25cu;
    WRITE32(ADD32(GPR_U32(ctx, 12), 164), GPR_U32(ctx, 4));
    // 0x32e260: 0xad8300a8  sw          $v1, 0xA8($t4)
    ctx->pc = 0x32e260u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 168), GPR_U32(ctx, 3));
    // 0x32e264: 0xad8600b0  sw          $a2, 0xB0($t4)
    ctx->pc = 0x32e264u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 176), GPR_U32(ctx, 6));
    // 0x32e268: 0xad80008c  sw          $zero, 0x8C($t4)
    ctx->pc = 0x32e268u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 140), GPR_U32(ctx, 0));
    // 0x32e26c: 0xad800098  sw          $zero, 0x98($t4)
    ctx->pc = 0x32e26cu;
    WRITE32(ADD32(GPR_U32(ctx, 12), 152), GPR_U32(ctx, 0));
    // 0x32e270: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x32E270u;
    {
        const bool branch_taken_0x32e270 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x32E274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32E270u;
        // 0x32e274: 0xad80009c  sw          $zero, 0x9C($t4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 12), 156), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32e270) {
            ctx->pc = 0x32E2C8u;
            goto label_32e2c8;
        }
    }
    ctx->pc = 0x32E278u;
    // 0x32e278: 0x71900  sll         $v1, $a3, 4
    ctx->pc = 0x32e278u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
    // 0x32e27c: 0x3c028888  lui         $v0, 0x8888
    ctx->pc = 0x32e27cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34952 << 16));
    // 0x32e280: 0x24647000  addiu       $a0, $v1, 0x7000
    ctx->pc = 0x32e280u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 28672));
    // 0x32e284: 0x24858000  addiu       $a1, $a0, -0x8000
    ctx->pc = 0x32e284u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 4294934528));
    // 0x32e288: 0x34438889  ori         $v1, $v0, 0x8889
    ctx->pc = 0x32e288u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34953);
    // 0x32e28c: 0x520c0  sll         $a0, $a1, 3
    ctx->pc = 0x32e28cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x32e290: 0x2402fff0  addiu       $v0, $zero, -0x10
    ctx->pc = 0x32e290u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x32e294: 0x852023  subu        $a0, $a0, $a1
    ctx->pc = 0x32e294u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x32e298: 0x42980  sll         $a1, $a0, 6
    ctx->pc = 0x32e298u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 6));
    // 0x32e29c: 0x650018  mult        $zero, $v1, $a1
    ctx->pc = 0x32e29cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x32e2a0: 0x527c2  srl         $a0, $a1, 31
    ctx->pc = 0x32e2a0u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 5), 31));
    // 0x32e2a4: 0x0  nop
    ctx->pc = 0x32e2a4u;
    // NOP
    // 0x32e2a8: 0x1810  mfhi        $v1
    ctx->pc = 0x32e2a8u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x32e2ac: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x32e2acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x32e2b0: 0x31a03  sra         $v1, $v1, 8
    ctx->pc = 0x32e2b0u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 8));
    // 0x32e2b4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x32e2b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x32e2b8: 0x24637fff  addiu       $v1, $v1, 0x7FFF
    ctx->pc = 0x32e2b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32767));
    // 0x32e2bc: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x32e2bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x32e2c0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x32E2C0u;
    {
        const bool branch_taken_0x32e2c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32E2C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32E2C0u;
        // 0x32e2c4: 0x621024  and         $v0, $v1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32e2c0) {
            ctx->pc = 0x32E2D0u;
            goto label_32e2d0;
        }
    }
    ctx->pc = 0x32E2C8u;
label_32e2c8:
    // 0x32e2c8: 0x71100  sll         $v0, $a3, 4
    ctx->pc = 0x32e2c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
    // 0x32e2cc: 0x24427000  addiu       $v0, $v0, 0x7000
    ctx->pc = 0x32e2ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 28672));
label_32e2d0:
    // 0x32e2d0: 0xad8200b4  sw          $v0, 0xB4($t4)
    ctx->pc = 0x32e2d0u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 180), GPR_U32(ctx, 2));
    // 0x32e2d4: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x32e2d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x32e2d8: 0x2402a833  addiu       $v0, $zero, -0x57CD
    ctx->pc = 0x32e2d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294944819));
    // 0x32e2dc: 0x3464000c  ori         $a0, $v1, 0xC
    ctx->pc = 0x32e2dcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)12);
    // 0x32e2e0: 0xad8200b8  sw          $v0, 0xB8($t4)
    ctx->pc = 0x32e2e0u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 184), GPR_U32(ctx, 2));
    // 0x32e2e4: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x32e2e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x32e2e8: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x32e2e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x32e2ec: 0xad8000bc  sw          $zero, 0xBC($t4)
    ctx->pc = 0x32e2ecu;
    WRITE32(ADD32(GPR_U32(ctx, 12), 188), GPR_U32(ctx, 0));
    // 0x32e2f0: 0x7c40e500  sq          $zero, -0x1B00($v0)
    ctx->pc = 0x32e2f0u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 4294960384), GPR_VEC(ctx, 0));
    // 0x32e2f4: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x32e2f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x32e2f8: 0xac64e500  sw          $a0, -0x1B00($v1)
    ctx->pc = 0x32e2f8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960384), GPR_U32(ctx, 4));
    // 0x32e2fc: 0x7c40e5d0  sq          $zero, -0x1A30($v0)
    ctx->pc = 0x32e2fcu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 4294960592), GPR_VEC(ctx, 0));
    // 0x32e300: 0x3c037000  lui         $v1, 0x7000
    ctx->pc = 0x32e300u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28672 << 16));
    // 0x32e304: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x32e304u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x32e308: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x32e308u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32e30c: 0xc0433b8  jal         func_10CEE0
    ctx->pc = 0x32E30Cu;
    SET_GPR_U32(ctx, 31, 0x32E314u);
    ctx->pc = 0x32E310u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32E30Cu;
    // 0x32e310: 0xac43e5d0  sw          $v1, -0x1A30($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960592), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CEE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CEE0u, 0x32E30Cu, 0x32E314u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32E314u;
label_32e314:
    // 0x32e314: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x32e314u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x32e318: 0x3c0501de  lui         $a1, 0x1DE
    ctx->pc = 0x32e318u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)478 << 16));
    // 0x32e31c: 0x8c44e688  lw          $a0, -0x1978($v0)
    ctx->pc = 0x32e31cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960776)));
    // 0x32e320: 0xc040a04  jal         func_102810
    ctx->pc = 0x32E320u;
    SET_GPR_U32(ctx, 31, 0x32E328u);
    ctx->pc = 0x32E324u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32E320u;
    // 0x32e324: 0x24a5e500  addiu       $a1, $a1, -0x1B00 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294960384));
    ctx->in_delay_slot = false;
    ctx->pc = 0x102810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102810u, 0x32E320u, 0x32E328u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32E328u;
label_32e328:
    // 0x32e328: 0x3c031001  lui         $v1, 0x1001
    ctx->pc = 0x32e328u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4097 << 16));
label_32e32c:
    // 0x32e32c: 0x8c64a000  lw          $a0, -0x6000($v1)
    ctx->pc = 0x32e32cu;
    SET_GPR_S32(ctx, 4, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 4294942720))); // MMIO: 0x1000a000
    // 0x32e330: 0x30840100  andi        $a0, $a0, 0x100
    ctx->pc = 0x32e330u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)256);
    // 0x32e334: 0x0  nop
    ctx->pc = 0x32e334u;
    // NOP
    // 0x32e338: 0x0  nop
    ctx->pc = 0x32e338u;
    // NOP
    // 0x32e33c: 0x0  nop
    ctx->pc = 0x32e33cu;
    // NOP
    // 0x32e340: 0x1480fffa  bnez        $a0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x32E340u;
    {
        const bool branch_taken_0x32e340 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x32e340) {
            ctx->pc = 0x32E32Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_32e32c;
        }
    }
    ctx->pc = 0x32E348u;
    // 0x32e348: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x32e348u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x32e34c: 0x3e00008  jr          $ra
    ctx->pc = 0x32E34Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32E350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32E34Cu;
        // 0x32e350: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32E34Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32E354u;
    // 0x32e354: 0x0  nop
    ctx->pc = 0x32e354u;
    // NOP
    // 0x32e358: 0x0  nop
    ctx->pc = 0x32e358u;
    // NOP
    // 0x32e35c: 0x0  nop
    ctx->pc = 0x32e35cu;
    // NOP
}
