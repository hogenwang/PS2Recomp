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

// Function: sub_0032F250
// Address: 0x32f250 - 0x32f4b0
void sub_0032F250_0x32f250(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0032F250_0x32f250");
#endif

    switch (ctx->pc) {
        case 0x32f470u: goto label_32f470;
        case 0x32f484u: goto label_32f484;
        case 0x32f488u: goto label_32f488;
        default: break;
    }

    ctx->pc = 0x32f250u;

    // 0x32f250: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x32f250u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x32f254: 0x41100  sll         $v0, $a0, 4
    ctx->pc = 0x32f254u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x32f258: 0x3c0c01de  lui         $t4, 0x1DE
    ctx->pc = 0x32f258u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)478 << 16));
    // 0x32f25c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x32f25cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x32f260: 0x258ce510  addiu       $t4, $t4, -0x1AF0
    ctx->pc = 0x32f260u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 4294960400));
    // 0x32f264: 0x24426c00  addiu       $v0, $v0, 0x6C00
    ctx->pc = 0x32f264u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 27648));
    // 0x32f268: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x32f268u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x32f26c: 0xad820080  sw          $v0, 0x80($t4)
    ctx->pc = 0x32f26cu;
    WRITE32(ADD32(GPR_U32(ctx, 12), 128), GPR_U32(ctx, 2));
    // 0x32f270: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x32f270u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x32f274: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x32f274u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x32f278: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x32f278u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x32f27c: 0xad880060  sw          $t0, 0x60($t4)
    ctx->pc = 0x32f27cu;
    WRITE32(ADD32(GPR_U32(ctx, 12), 96), GPR_U32(ctx, 8));
    // 0x32f280: 0xfd820000  sd          $v0, 0x0($t4)
    ctx->pc = 0x32f280u;
    WRITE64(ADD32(GPR_U32(ctx, 12), 0), GPR_U64(ctx, 2));
    // 0x32f284: 0x2402000e  addiu       $v0, $zero, 0xE
    ctx->pc = 0x32f284u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x32f288: 0x8fa80010  lw          $t0, 0x10($sp)
    ctx->pc = 0x32f288u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x32f28c: 0xfd820008  sd          $v0, 0x8($t4)
    ctx->pc = 0x32f28cu;
    WRITE64(ADD32(GPR_U32(ctx, 12), 8), GPR_U64(ctx, 2));
    // 0x32f290: 0x2402003f  addiu       $v0, $zero, 0x3F
    ctx->pc = 0x32f290u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x32f294: 0xad890064  sw          $t1, 0x64($t4)
    ctx->pc = 0x32f294u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 100), GPR_U32(ctx, 9));
    // 0x32f298: 0xfd820018  sd          $v0, 0x18($t4)
    ctx->pc = 0x32f298u;
    WRITE64(ADD32(GPR_U32(ctx, 12), 24), GPR_U64(ctx, 2));
    // 0x32f29c: 0x3c022007  lui         $v0, 0x2007
    ctx->pc = 0x32f29cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8199 << 16));
    // 0x32f2a0: 0xfd800010  sd          $zero, 0x10($t4)
    ctx->pc = 0x32f2a0u;
    WRITE64(ADD32(GPR_U32(ctx, 12), 16), GPR_U64(ctx, 0));
    // 0x32f2a4: 0x3442d006  ori         $v0, $v0, 0xD006
    ctx->pc = 0x32f2a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)53254);
    // 0x32f2a8: 0xfd800030  sd          $zero, 0x30($t4)
    ctx->pc = 0x32f2a8u;
    WRITE64(ADD32(GPR_U32(ctx, 12), 48), GPR_U64(ctx, 0));
    // 0x32f2ac: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x32f2acu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
    // 0x32f2b0: 0xad800068  sw          $zero, 0x68($t4)
    ctx->pc = 0x32f2b0u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 104), GPR_U32(ctx, 0));
    // 0x32f2b4: 0x3c026542  lui         $v0, 0x6542
    ctx->pc = 0x32f2b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)25922 << 16));
    // 0x32f2b8: 0xad80006c  sw          $zero, 0x6C($t4)
    ctx->pc = 0x32f2b8u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 108), GPR_U32(ctx, 0));
    // 0x32f2bc: 0x34433480  ori         $v1, $v0, 0x3480
    ctx->pc = 0x32f2bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13440);
    // 0x32f2c0: 0xad880070  sw          $t0, 0x70($t4)
    ctx->pc = 0x32f2c0u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 112), GPR_U32(ctx, 8));
    // 0x32f2c4: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x32f2c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x32f2c8: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x32f2c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x32f2cc: 0xfd820028  sd          $v0, 0x28($t4)
    ctx->pc = 0x32f2ccu;
    WRITE64(ADD32(GPR_U32(ctx, 12), 40), GPR_U64(ctx, 2));
    // 0x32f2d0: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x32f2d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x32f2d4: 0xfd830020  sd          $v1, 0x20($t4)
    ctx->pc = 0x32f2d4u;
    WRITE64(ADD32(GPR_U32(ctx, 12), 32), GPR_U64(ctx, 3));
    // 0x32f2d8: 0xfd820038  sd          $v0, 0x38($t4)
    ctx->pc = 0x32f2d8u;
    WRITE64(ADD32(GPR_U32(ctx, 12), 56), GPR_U64(ctx, 2));
    // 0x32f2dc: 0x34038001  ori         $v1, $zero, 0x8001
    ctx->pc = 0x32f2dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32769);
    // 0x32f2e0: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x32f2e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x32f2e4: 0xfd820040  sd          $v0, 0x40($t4)
    ctx->pc = 0x32f2e4u;
    WRITE64(ADD32(GPR_U32(ctx, 12), 64), GPR_U64(ctx, 2));
    // 0x32f2e8: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x32f2e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x32f2ec: 0xfd820048  sd          $v0, 0x48($t4)
    ctx->pc = 0x32f2ecu;
    WRITE64(ADD32(GPR_U32(ctx, 12), 72), GPR_U64(ctx, 2));
    // 0x32f2f0: 0x3c0260ab  lui         $v0, 0x60AB
    ctx->pc = 0x32f2f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)24747 << 16));
    // 0x32f2f4: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x32f2f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x32f2f8: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x32f2f8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
    // 0x32f2fc: 0x642025  or          $a0, $v1, $a0
    ctx->pc = 0x32f2fcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x32f300: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x32f300u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x32f304: 0x34433513  ori         $v1, $v0, 0x3513
    ctx->pc = 0x32f304u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13587);
    // 0x32f308: 0xfd840050  sd          $a0, 0x50($t4)
    ctx->pc = 0x32f308u;
    WRITE64(ADD32(GPR_U32(ctx, 12), 80), GPR_U64(ctx, 4));
    // 0x32f30c: 0x3c02009d  lui         $v0, 0x9D
    ctx->pc = 0x32f30cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)157 << 16));
    // 0x32f310: 0xfd830058  sd          $v1, 0x58($t4)
    ctx->pc = 0x32f310u;
    WRITE64(ADD32(GPR_U32(ctx, 12), 88), GPR_U64(ctx, 3));
    // 0x32f314: 0x9049b280  lbu         $t1, -0x4D80($v0)
    ctx->pc = 0x32f314u;
    SET_GPR_U32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294947456)));
    // 0x32f318: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x32f318u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x32f31c: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x32f31cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x32f320: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x32f320u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x32f324: 0xad840074  sw          $a0, 0x74($t4)
    ctx->pc = 0x32f324u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 116), GPR_U32(ctx, 4));
    // 0x32f328: 0xad830078  sw          $v1, 0x78($t4)
    ctx->pc = 0x32f328u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 120), GPR_U32(ctx, 3));
    // 0x32f32c: 0x11200015  beqz        $t1, . + 4 + (0x15 << 2)
    ctx->pc = 0x32F32Cu;
    {
        const bool branch_taken_0x32f32c = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x32F330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32F32Cu;
        // 0x32f330: 0xad82007c  sw          $v0, 0x7C($t4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 12), 124), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32f32c) {
            ctx->pc = 0x32F384u;
            goto label_32f384;
        }
    }
    ctx->pc = 0x32F334u;
    // 0x32f334: 0x54900  sll         $t1, $a1, 4
    ctx->pc = 0x32f334u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x32f338: 0x252d7000  addiu       $t5, $t1, 0x7000
    ctx->pc = 0x32f338u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 9), 28672));
    // 0x32f33c: 0x3c058888  lui         $a1, 0x8888
    ctx->pc = 0x32f33cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34952 << 16));
    // 0x32f340: 0x25ae8000  addiu       $t6, $t5, -0x8000
    ctx->pc = 0x32f340u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 13), 4294934528));
    // 0x32f344: 0x34a98889  ori         $t1, $a1, 0x8889
    ctx->pc = 0x32f344u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)34953);
    // 0x32f348: 0xe68c0  sll         $t5, $t6, 3
    ctx->pc = 0x32f348u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 14), 3));
    // 0x32f34c: 0x2405fff0  addiu       $a1, $zero, -0x10
    ctx->pc = 0x32f34cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x32f350: 0x1ae6823  subu        $t5, $t5, $t6
    ctx->pc = 0x32f350u;
    SET_GPR_S32(ctx, 13, (int32_t)SUB32(GPR_U32(ctx, 13), GPR_U32(ctx, 14)));
    // 0x32f354: 0xd7180  sll         $t6, $t5, 6
    ctx->pc = 0x32f354u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 13), 6));
    // 0x32f358: 0x12e0018  mult        $zero, $t1, $t6
    ctx->pc = 0x32f358u;
    { int64_t result = (int64_t)GPR_S32(ctx, 9) * (int64_t)GPR_S32(ctx, 14); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x32f35c: 0xe6fc2  srl         $t5, $t6, 31
    ctx->pc = 0x32f35cu;
    SET_GPR_S32(ctx, 13, (int32_t)SRL32(GPR_U32(ctx, 14), 31));
    // 0x32f360: 0x0  nop
    ctx->pc = 0x32f360u;
    // NOP
    // 0x32f364: 0x4810  mfhi        $t1
    ctx->pc = 0x32f364u;
    SET_GPR_U64(ctx, 9, ctx->hi);
    // 0x32f368: 0x12e4821  addu        $t1, $t1, $t6
    ctx->pc = 0x32f368u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 14)));
    // 0x32f36c: 0x94a03  sra         $t1, $t1, 8
    ctx->pc = 0x32f36cu;
    SET_GPR_S32(ctx, 9, SRA32(GPR_S32(ctx, 9), 8));
    // 0x32f370: 0x12d4821  addu        $t1, $t1, $t5
    ctx->pc = 0x32f370u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 13)));
    // 0x32f374: 0x25297fff  addiu       $t1, $t1, 0x7FFF
    ctx->pc = 0x32f374u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 32767));
    // 0x32f378: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x32f378u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x32f37c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x32F37Cu;
    {
        const bool branch_taken_0x32f37c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32F380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32F37Cu;
        // 0x32f380: 0x1252824  and         $a1, $t1, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 9) & GPR_U64(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32f37c) {
            ctx->pc = 0x32F38Cu;
            goto label_32f38c;
        }
    }
    ctx->pc = 0x32F384u;
label_32f384:
    // 0x32f384: 0x52900  sll         $a1, $a1, 4
    ctx->pc = 0x32f384u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x32f388: 0x24a57000  addiu       $a1, $a1, 0x7000
    ctx->pc = 0x32f388u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 28672));
label_32f38c:
    // 0x32f38c: 0xad850084  sw          $a1, 0x84($t4)
    ctx->pc = 0x32f38cu;
    WRITE32(ADD32(GPR_U32(ctx, 12), 132), GPR_U32(ctx, 5));
    // 0x32f390: 0x62900  sll         $a1, $a2, 4
    ctx->pc = 0x32f390u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x32f394: 0xad8200ac  sw          $v0, 0xAC($t4)
    ctx->pc = 0x32f394u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 172), GPR_U32(ctx, 2));
    // 0x32f398: 0x24a66c00  addiu       $a2, $a1, 0x6C00
    ctx->pc = 0x32f398u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 27648));
    // 0x32f39c: 0xad8a0090  sw          $t2, 0x90($t4)
    ctx->pc = 0x32f39cu;
    WRITE32(ADD32(GPR_U32(ctx, 12), 144), GPR_U32(ctx, 10));
    // 0x32f3a0: 0x2405a833  addiu       $a1, $zero, -0x57CD
    ctx->pc = 0x32f3a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294944819));
    // 0x32f3a4: 0xad8b0094  sw          $t3, 0x94($t4)
    ctx->pc = 0x32f3a4u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 148), GPR_U32(ctx, 11));
    // 0x32f3a8: 0xad850088  sw          $a1, 0x88($t4)
    ctx->pc = 0x32f3a8u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 136), GPR_U32(ctx, 5));
    // 0x32f3ac: 0x3c05009d  lui         $a1, 0x9D
    ctx->pc = 0x32f3acu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)157 << 16));
    // 0x32f3b0: 0xad8800a0  sw          $t0, 0xA0($t4)
    ctx->pc = 0x32f3b0u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 160), GPR_U32(ctx, 8));
    // 0x32f3b4: 0x90a2b280  lbu         $v0, -0x4D80($a1)
    ctx->pc = 0x32f3b4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 4294947456)));
    // 0x32f3b8: 0xad8400a4  sw          $a0, 0xA4($t4)
    ctx->pc = 0x32f3b8u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 164), GPR_U32(ctx, 4));
    // 0x32f3bc: 0xad8300a8  sw          $v1, 0xA8($t4)
    ctx->pc = 0x32f3bcu;
    WRITE32(ADD32(GPR_U32(ctx, 12), 168), GPR_U32(ctx, 3));
    // 0x32f3c0: 0xad8600b0  sw          $a2, 0xB0($t4)
    ctx->pc = 0x32f3c0u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 176), GPR_U32(ctx, 6));
    // 0x32f3c4: 0xad80008c  sw          $zero, 0x8C($t4)
    ctx->pc = 0x32f3c4u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 140), GPR_U32(ctx, 0));
    // 0x32f3c8: 0xad800098  sw          $zero, 0x98($t4)
    ctx->pc = 0x32f3c8u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 152), GPR_U32(ctx, 0));
    // 0x32f3cc: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x32F3CCu;
    {
        const bool branch_taken_0x32f3cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x32F3D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32F3CCu;
        // 0x32f3d0: 0xad80009c  sw          $zero, 0x9C($t4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 12), 156), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32f3cc) {
            ctx->pc = 0x32F424u;
            goto label_32f424;
        }
    }
    ctx->pc = 0x32F3D4u;
    // 0x32f3d4: 0x71900  sll         $v1, $a3, 4
    ctx->pc = 0x32f3d4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
    // 0x32f3d8: 0x3c028888  lui         $v0, 0x8888
    ctx->pc = 0x32f3d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34952 << 16));
    // 0x32f3dc: 0x24647000  addiu       $a0, $v1, 0x7000
    ctx->pc = 0x32f3dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 28672));
    // 0x32f3e0: 0x24858000  addiu       $a1, $a0, -0x8000
    ctx->pc = 0x32f3e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 4294934528));
    // 0x32f3e4: 0x34438889  ori         $v1, $v0, 0x8889
    ctx->pc = 0x32f3e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34953);
    // 0x32f3e8: 0x520c0  sll         $a0, $a1, 3
    ctx->pc = 0x32f3e8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x32f3ec: 0x2402fff0  addiu       $v0, $zero, -0x10
    ctx->pc = 0x32f3ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x32f3f0: 0x852023  subu        $a0, $a0, $a1
    ctx->pc = 0x32f3f0u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x32f3f4: 0x42980  sll         $a1, $a0, 6
    ctx->pc = 0x32f3f4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 6));
    // 0x32f3f8: 0x650018  mult        $zero, $v1, $a1
    ctx->pc = 0x32f3f8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x32f3fc: 0x527c2  srl         $a0, $a1, 31
    ctx->pc = 0x32f3fcu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 5), 31));
    // 0x32f400: 0x0  nop
    ctx->pc = 0x32f400u;
    // NOP
    // 0x32f404: 0x1810  mfhi        $v1
    ctx->pc = 0x32f404u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x32f408: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x32f408u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x32f40c: 0x31a03  sra         $v1, $v1, 8
    ctx->pc = 0x32f40cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 8));
    // 0x32f410: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x32f410u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x32f414: 0x24637fff  addiu       $v1, $v1, 0x7FFF
    ctx->pc = 0x32f414u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32767));
    // 0x32f418: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x32f418u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x32f41c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x32F41Cu;
    {
        const bool branch_taken_0x32f41c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32F420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32F41Cu;
        // 0x32f420: 0x621024  and         $v0, $v1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32f41c) {
            ctx->pc = 0x32F42Cu;
            goto label_32f42c;
        }
    }
    ctx->pc = 0x32F424u;
label_32f424:
    // 0x32f424: 0x71100  sll         $v0, $a3, 4
    ctx->pc = 0x32f424u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
    // 0x32f428: 0x24427000  addiu       $v0, $v0, 0x7000
    ctx->pc = 0x32f428u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 28672));
label_32f42c:
    // 0x32f42c: 0xad8200b4  sw          $v0, 0xB4($t4)
    ctx->pc = 0x32f42cu;
    WRITE32(ADD32(GPR_U32(ctx, 12), 180), GPR_U32(ctx, 2));
    // 0x32f430: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x32f430u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x32f434: 0x2402a833  addiu       $v0, $zero, -0x57CD
    ctx->pc = 0x32f434u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294944819));
    // 0x32f438: 0x3464000c  ori         $a0, $v1, 0xC
    ctx->pc = 0x32f438u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)12);
    // 0x32f43c: 0xad8200b8  sw          $v0, 0xB8($t4)
    ctx->pc = 0x32f43cu;
    WRITE32(ADD32(GPR_U32(ctx, 12), 184), GPR_U32(ctx, 2));
    // 0x32f440: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x32f440u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x32f444: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x32f444u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x32f448: 0xad8000bc  sw          $zero, 0xBC($t4)
    ctx->pc = 0x32f448u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 188), GPR_U32(ctx, 0));
    // 0x32f44c: 0x7c40e500  sq          $zero, -0x1B00($v0)
    ctx->pc = 0x32f44cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 4294960384), GPR_VEC(ctx, 0));
    // 0x32f450: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x32f450u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x32f454: 0xac64e500  sw          $a0, -0x1B00($v1)
    ctx->pc = 0x32f454u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960384), GPR_U32(ctx, 4));
    // 0x32f458: 0x7c40e5d0  sq          $zero, -0x1A30($v0)
    ctx->pc = 0x32f458u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 4294960592), GPR_VEC(ctx, 0));
    // 0x32f45c: 0x3c037000  lui         $v1, 0x7000
    ctx->pc = 0x32f45cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28672 << 16));
    // 0x32f460: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x32f460u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x32f464: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x32f464u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32f468: 0xc0433b8  jal         func_10CEE0
    ctx->pc = 0x32F468u;
    SET_GPR_U32(ctx, 31, 0x32F470u);
    ctx->pc = 0x32F46Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32F468u;
    // 0x32f46c: 0xac43e5d0  sw          $v1, -0x1A30($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960592), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CEE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CEE0u, 0x32F468u, 0x32F470u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32F470u;
label_32f470:
    // 0x32f470: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x32f470u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x32f474: 0x3c0501de  lui         $a1, 0x1DE
    ctx->pc = 0x32f474u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)478 << 16));
    // 0x32f478: 0x8c44e688  lw          $a0, -0x1978($v0)
    ctx->pc = 0x32f478u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960776)));
    // 0x32f47c: 0xc040a04  jal         func_102810
    ctx->pc = 0x32F47Cu;
    SET_GPR_U32(ctx, 31, 0x32F484u);
    ctx->pc = 0x32F480u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32F47Cu;
    // 0x32f480: 0x24a5e500  addiu       $a1, $a1, -0x1B00 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294960384));
    ctx->in_delay_slot = false;
    ctx->pc = 0x102810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102810u, 0x32F47Cu, 0x32F484u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32F484u;
label_32f484:
    // 0x32f484: 0x3c031001  lui         $v1, 0x1001
    ctx->pc = 0x32f484u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4097 << 16));
label_32f488:
    // 0x32f488: 0x8c64a000  lw          $a0, -0x6000($v1)
    ctx->pc = 0x32f488u;
    SET_GPR_S32(ctx, 4, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 4294942720))); // MMIO: 0x1000a000
    // 0x32f48c: 0x30840100  andi        $a0, $a0, 0x100
    ctx->pc = 0x32f48cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)256);
    // 0x32f490: 0x0  nop
    ctx->pc = 0x32f490u;
    // NOP
    // 0x32f494: 0x0  nop
    ctx->pc = 0x32f494u;
    // NOP
    // 0x32f498: 0x0  nop
    ctx->pc = 0x32f498u;
    // NOP
    // 0x32f49c: 0x1480fffa  bnez        $a0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x32F49Cu;
    {
        const bool branch_taken_0x32f49c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x32f49c) {
            ctx->pc = 0x32F488u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_32f488;
        }
    }
    ctx->pc = 0x32F4A4u;
    // 0x32f4a4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x32f4a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x32f4a8: 0x3e00008  jr          $ra
    ctx->pc = 0x32F4A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32F4ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32F4A8u;
        // 0x32f4ac: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32F4A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32F4B0u;
}
