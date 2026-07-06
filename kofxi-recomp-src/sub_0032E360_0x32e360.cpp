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

// Function: sub_0032E360
// Address: 0x32e360 - 0x32e5e0
void sub_0032E360_0x32e360(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0032E360_0x32e360");
#endif

    switch (ctx->pc) {
        case 0x32e59cu: goto label_32e59c;
        case 0x32e5b0u: goto label_32e5b0;
        case 0x32e5b4u: goto label_32e5b4;
        default: break;
    }

    ctx->pc = 0x32e360u;

    // 0x32e360: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x32e360u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x32e364: 0x41100  sll         $v0, $a0, 4
    ctx->pc = 0x32e364u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x32e368: 0x3c0c01de  lui         $t4, 0x1DE
    ctx->pc = 0x32e368u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)478 << 16));
    // 0x32e36c: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x32e36cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x32e370: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x32e370u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x32e374: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x32e374u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x32e378: 0x258ce510  addiu       $t4, $t4, -0x1AF0
    ctx->pc = 0x32e378u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 4294960400));
    // 0x32e37c: 0x24426c00  addiu       $v0, $v0, 0x6C00
    ctx->pc = 0x32e37cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 27648));
    // 0x32e380: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x32e380u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x32e384: 0xad820090  sw          $v0, 0x90($t4)
    ctx->pc = 0x32e384u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 144), GPR_U32(ctx, 2));
    // 0x32e388: 0x641025  or          $v0, $v1, $a0
    ctx->pc = 0x32e388u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x32e38c: 0xfd830040  sd          $v1, 0x40($t4)
    ctx->pc = 0x32e38cu;
    WRITE64(ADD32(GPR_U32(ctx, 12), 64), GPR_U64(ctx, 3));
    // 0x32e390: 0xfd820000  sd          $v0, 0x0($t4)
    ctx->pc = 0x32e390u;
    WRITE64(ADD32(GPR_U32(ctx, 12), 0), GPR_U64(ctx, 2));
    // 0x32e394: 0x2402000e  addiu       $v0, $zero, 0xE
    ctx->pc = 0x32e394u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x32e398: 0xad890074  sw          $t1, 0x74($t4)
    ctx->pc = 0x32e398u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 116), GPR_U32(ctx, 9));
    // 0x32e39c: 0xfd820008  sd          $v0, 0x8($t4)
    ctx->pc = 0x32e39cu;
    WRITE64(ADD32(GPR_U32(ctx, 12), 8), GPR_U64(ctx, 2));
    // 0x32e3a0: 0x2402003f  addiu       $v0, $zero, 0x3F
    ctx->pc = 0x32e3a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x32e3a4: 0xad880070  sw          $t0, 0x70($t4)
    ctx->pc = 0x32e3a4u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 112), GPR_U32(ctx, 8));
    // 0x32e3a8: 0xfd820018  sd          $v0, 0x18($t4)
    ctx->pc = 0x32e3a8u;
    WRITE64(ADD32(GPR_U32(ctx, 12), 24), GPR_U64(ctx, 2));
    // 0x32e3ac: 0x3c022007  lui         $v0, 0x2007
    ctx->pc = 0x32e3acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8199 << 16));
    // 0x32e3b0: 0xfd800010  sd          $zero, 0x10($t4)
    ctx->pc = 0x32e3b0u;
    WRITE64(ADD32(GPR_U32(ctx, 12), 16), GPR_U64(ctx, 0));
    // 0x32e3b4: 0x3442d006  ori         $v0, $v0, 0xD006
    ctx->pc = 0x32e3b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)53254);
    // 0x32e3b8: 0xad800078  sw          $zero, 0x78($t4)
    ctx->pc = 0x32e3b8u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 120), GPR_U32(ctx, 0));
    // 0x32e3bc: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x32e3bcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
    // 0x32e3c0: 0xad80007c  sw          $zero, 0x7C($t4)
    ctx->pc = 0x32e3c0u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 124), GPR_U32(ctx, 0));
    // 0x32e3c4: 0x3c026542  lui         $v0, 0x6542
    ctx->pc = 0x32e3c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)25922 << 16));
    // 0x32e3c8: 0x34433480  ori         $v1, $v0, 0x3480
    ctx->pc = 0x32e3c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13440);
    // 0x32e3cc: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x32e3ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x32e3d0: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x32e3d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x32e3d4: 0xfd820028  sd          $v0, 0x28($t4)
    ctx->pc = 0x32e3d4u;
    WRITE64(ADD32(GPR_U32(ctx, 12), 40), GPR_U64(ctx, 2));
    // 0x32e3d8: 0x24020060  addiu       $v0, $zero, 0x60
    ctx->pc = 0x32e3d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x32e3dc: 0xfd830020  sd          $v1, 0x20($t4)
    ctx->pc = 0x32e3dcu;
    WRITE64(ADD32(GPR_U32(ctx, 12), 32), GPR_U64(ctx, 3));
    // 0x32e3e0: 0xfd820030  sd          $v0, 0x30($t4)
    ctx->pc = 0x32e3e0u;
    WRITE64(ADD32(GPR_U32(ctx, 12), 48), GPR_U64(ctx, 2));
    // 0x32e3e4: 0x34038001  ori         $v1, $zero, 0x8001
    ctx->pc = 0x32e3e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32769);
    // 0x32e3e8: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x32e3e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x32e3ec: 0xfd820038  sd          $v0, 0x38($t4)
    ctx->pc = 0x32e3ecu;
    WRITE64(ADD32(GPR_U32(ctx, 12), 56), GPR_U64(ctx, 2));
    // 0x32e3f0: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x32e3f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x32e3f4: 0xfd820048  sd          $v0, 0x48($t4)
    ctx->pc = 0x32e3f4u;
    WRITE64(ADD32(GPR_U32(ctx, 12), 72), GPR_U64(ctx, 2));
    // 0x32e3f8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x32e3f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x32e3fc: 0xfd820050  sd          $v0, 0x50($t4)
    ctx->pc = 0x32e3fcu;
    WRITE64(ADD32(GPR_U32(ctx, 12), 80), GPR_U64(ctx, 2));
    // 0x32e400: 0x24020046  addiu       $v0, $zero, 0x46
    ctx->pc = 0x32e400u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 70));
    // 0x32e404: 0xfd820058  sd          $v0, 0x58($t4)
    ctx->pc = 0x32e404u;
    WRITE64(ADD32(GPR_U32(ctx, 12), 88), GPR_U64(ctx, 2));
    // 0x32e408: 0x3c0260ab  lui         $v0, 0x60AB
    ctx->pc = 0x32e408u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)24747 << 16));
    // 0x32e40c: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x32e40cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x32e410: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x32e410u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
    // 0x32e414: 0x642025  or          $a0, $v1, $a0
    ctx->pc = 0x32e414u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x32e418: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x32e418u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x32e41c: 0x34433513  ori         $v1, $v0, 0x3513
    ctx->pc = 0x32e41cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13587);
    // 0x32e420: 0xfd840060  sd          $a0, 0x60($t4)
    ctx->pc = 0x32e420u;
    WRITE64(ADD32(GPR_U32(ctx, 12), 96), GPR_U64(ctx, 4));
    // 0x32e424: 0x3c02009d  lui         $v0, 0x9D
    ctx->pc = 0x32e424u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)157 << 16));
    // 0x32e428: 0xfd830068  sd          $v1, 0x68($t4)
    ctx->pc = 0x32e428u;
    WRITE64(ADD32(GPR_U32(ctx, 12), 104), GPR_U64(ctx, 3));
    // 0x32e42c: 0x9049b280  lbu         $t1, -0x4D80($v0)
    ctx->pc = 0x32e42cu;
    SET_GPR_U32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294947456)));
    // 0x32e430: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x32e430u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x32e434: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x32e434u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x32e438: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x32e438u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x32e43c: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x32e43cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x32e440: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x32e440u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x32e444: 0xad840084  sw          $a0, 0x84($t4)
    ctx->pc = 0x32e444u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 132), GPR_U32(ctx, 4));
    // 0x32e448: 0x24480008  addiu       $t0, $v0, 0x8
    ctx->pc = 0x32e448u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x32e44c: 0xad830088  sw          $v1, 0x88($t4)
    ctx->pc = 0x32e44cu;
    WRITE32(ADD32(GPR_U32(ctx, 12), 136), GPR_U32(ctx, 3));
    // 0x32e450: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x32e450u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x32e454: 0xad880080  sw          $t0, 0x80($t4)
    ctx->pc = 0x32e454u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 128), GPR_U32(ctx, 8));
    // 0x32e458: 0x11200015  beqz        $t1, . + 4 + (0x15 << 2)
    ctx->pc = 0x32E458u;
    {
        const bool branch_taken_0x32e458 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x32E45Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32E458u;
        // 0x32e45c: 0xad82008c  sw          $v0, 0x8C($t4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 12), 140), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32e458) {
            ctx->pc = 0x32E4B0u;
            goto label_32e4b0;
        }
    }
    ctx->pc = 0x32E460u;
    // 0x32e460: 0x54900  sll         $t1, $a1, 4
    ctx->pc = 0x32e460u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x32e464: 0x252d7000  addiu       $t5, $t1, 0x7000
    ctx->pc = 0x32e464u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 9), 28672));
    // 0x32e468: 0x3c058888  lui         $a1, 0x8888
    ctx->pc = 0x32e468u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34952 << 16));
    // 0x32e46c: 0x25ae8000  addiu       $t6, $t5, -0x8000
    ctx->pc = 0x32e46cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 13), 4294934528));
    // 0x32e470: 0x34a98889  ori         $t1, $a1, 0x8889
    ctx->pc = 0x32e470u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)34953);
    // 0x32e474: 0xe68c0  sll         $t5, $t6, 3
    ctx->pc = 0x32e474u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 14), 3));
    // 0x32e478: 0x2405fff0  addiu       $a1, $zero, -0x10
    ctx->pc = 0x32e478u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x32e47c: 0x1ae6823  subu        $t5, $t5, $t6
    ctx->pc = 0x32e47cu;
    SET_GPR_S32(ctx, 13, (int32_t)SUB32(GPR_U32(ctx, 13), GPR_U32(ctx, 14)));
    // 0x32e480: 0xd7180  sll         $t6, $t5, 6
    ctx->pc = 0x32e480u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 13), 6));
    // 0x32e484: 0x12e0018  mult        $zero, $t1, $t6
    ctx->pc = 0x32e484u;
    { int64_t result = (int64_t)GPR_S32(ctx, 9) * (int64_t)GPR_S32(ctx, 14); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x32e488: 0xe6fc2  srl         $t5, $t6, 31
    ctx->pc = 0x32e488u;
    SET_GPR_S32(ctx, 13, (int32_t)SRL32(GPR_U32(ctx, 14), 31));
    // 0x32e48c: 0x0  nop
    ctx->pc = 0x32e48cu;
    // NOP
    // 0x32e490: 0x4810  mfhi        $t1
    ctx->pc = 0x32e490u;
    SET_GPR_U64(ctx, 9, ctx->hi);
    // 0x32e494: 0x12e4821  addu        $t1, $t1, $t6
    ctx->pc = 0x32e494u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 14)));
    // 0x32e498: 0x94a03  sra         $t1, $t1, 8
    ctx->pc = 0x32e498u;
    SET_GPR_S32(ctx, 9, SRA32(GPR_S32(ctx, 9), 8));
    // 0x32e49c: 0x12d4821  addu        $t1, $t1, $t5
    ctx->pc = 0x32e49cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 13)));
    // 0x32e4a0: 0x25297fff  addiu       $t1, $t1, 0x7FFF
    ctx->pc = 0x32e4a0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 32767));
    // 0x32e4a4: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x32e4a4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x32e4a8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x32E4A8u;
    {
        const bool branch_taken_0x32e4a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32E4ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32E4A8u;
        // 0x32e4ac: 0x1252824  and         $a1, $t1, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 9) & GPR_U64(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32e4a8) {
            ctx->pc = 0x32E4B8u;
            goto label_32e4b8;
        }
    }
    ctx->pc = 0x32E4B0u;
label_32e4b0:
    // 0x32e4b0: 0x52900  sll         $a1, $a1, 4
    ctx->pc = 0x32e4b0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x32e4b4: 0x24a57000  addiu       $a1, $a1, 0x7000
    ctx->pc = 0x32e4b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 28672));
label_32e4b8:
    // 0x32e4b8: 0xad850094  sw          $a1, 0x94($t4)
    ctx->pc = 0x32e4b8u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 148), GPR_U32(ctx, 5));
    // 0x32e4bc: 0x62900  sll         $a1, $a2, 4
    ctx->pc = 0x32e4bcu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x32e4c0: 0xad8200bc  sw          $v0, 0xBC($t4)
    ctx->pc = 0x32e4c0u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 188), GPR_U32(ctx, 2));
    // 0x32e4c4: 0x24a66c00  addiu       $a2, $a1, 0x6C00
    ctx->pc = 0x32e4c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 27648));
    // 0x32e4c8: 0xad8a00a0  sw          $t2, 0xA0($t4)
    ctx->pc = 0x32e4c8u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 160), GPR_U32(ctx, 10));
    // 0x32e4cc: 0x2405a833  addiu       $a1, $zero, -0x57CD
    ctx->pc = 0x32e4ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294944819));
    // 0x32e4d0: 0xad8b00a4  sw          $t3, 0xA4($t4)
    ctx->pc = 0x32e4d0u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 164), GPR_U32(ctx, 11));
    // 0x32e4d4: 0xad850098  sw          $a1, 0x98($t4)
    ctx->pc = 0x32e4d4u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 152), GPR_U32(ctx, 5));
    // 0x32e4d8: 0x3c05009d  lui         $a1, 0x9D
    ctx->pc = 0x32e4d8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)157 << 16));
    // 0x32e4dc: 0xad8800b0  sw          $t0, 0xB0($t4)
    ctx->pc = 0x32e4dcu;
    WRITE32(ADD32(GPR_U32(ctx, 12), 176), GPR_U32(ctx, 8));
    // 0x32e4e0: 0x90a2b280  lbu         $v0, -0x4D80($a1)
    ctx->pc = 0x32e4e0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 4294947456)));
    // 0x32e4e4: 0xad8400b4  sw          $a0, 0xB4($t4)
    ctx->pc = 0x32e4e4u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 180), GPR_U32(ctx, 4));
    // 0x32e4e8: 0xad8300b8  sw          $v1, 0xB8($t4)
    ctx->pc = 0x32e4e8u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 184), GPR_U32(ctx, 3));
    // 0x32e4ec: 0xad8600c0  sw          $a2, 0xC0($t4)
    ctx->pc = 0x32e4ecu;
    WRITE32(ADD32(GPR_U32(ctx, 12), 192), GPR_U32(ctx, 6));
    // 0x32e4f0: 0xad80009c  sw          $zero, 0x9C($t4)
    ctx->pc = 0x32e4f0u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 156), GPR_U32(ctx, 0));
    // 0x32e4f4: 0xad8000a8  sw          $zero, 0xA8($t4)
    ctx->pc = 0x32e4f4u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 168), GPR_U32(ctx, 0));
    // 0x32e4f8: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x32E4F8u;
    {
        const bool branch_taken_0x32e4f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x32E4FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32E4F8u;
        // 0x32e4fc: 0xad8000ac  sw          $zero, 0xAC($t4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 12), 172), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32e4f8) {
            ctx->pc = 0x32E550u;
            goto label_32e550;
        }
    }
    ctx->pc = 0x32E500u;
    // 0x32e500: 0x71900  sll         $v1, $a3, 4
    ctx->pc = 0x32e500u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
    // 0x32e504: 0x3c028888  lui         $v0, 0x8888
    ctx->pc = 0x32e504u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34952 << 16));
    // 0x32e508: 0x24647000  addiu       $a0, $v1, 0x7000
    ctx->pc = 0x32e508u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 28672));
    // 0x32e50c: 0x24858000  addiu       $a1, $a0, -0x8000
    ctx->pc = 0x32e50cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 4294934528));
    // 0x32e510: 0x34438889  ori         $v1, $v0, 0x8889
    ctx->pc = 0x32e510u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34953);
    // 0x32e514: 0x520c0  sll         $a0, $a1, 3
    ctx->pc = 0x32e514u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x32e518: 0x2402fff0  addiu       $v0, $zero, -0x10
    ctx->pc = 0x32e518u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x32e51c: 0x852023  subu        $a0, $a0, $a1
    ctx->pc = 0x32e51cu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x32e520: 0x42980  sll         $a1, $a0, 6
    ctx->pc = 0x32e520u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 6));
    // 0x32e524: 0x650018  mult        $zero, $v1, $a1
    ctx->pc = 0x32e524u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x32e528: 0x527c2  srl         $a0, $a1, 31
    ctx->pc = 0x32e528u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 5), 31));
    // 0x32e52c: 0x0  nop
    ctx->pc = 0x32e52cu;
    // NOP
    // 0x32e530: 0x1810  mfhi        $v1
    ctx->pc = 0x32e530u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x32e534: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x32e534u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x32e538: 0x31a03  sra         $v1, $v1, 8
    ctx->pc = 0x32e538u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 8));
    // 0x32e53c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x32e53cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x32e540: 0x24637fff  addiu       $v1, $v1, 0x7FFF
    ctx->pc = 0x32e540u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32767));
    // 0x32e544: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x32e544u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x32e548: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x32E548u;
    {
        const bool branch_taken_0x32e548 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32E54Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32E548u;
        // 0x32e54c: 0x621024  and         $v0, $v1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32e548) {
            ctx->pc = 0x32E558u;
            goto label_32e558;
        }
    }
    ctx->pc = 0x32E550u;
label_32e550:
    // 0x32e550: 0x71100  sll         $v0, $a3, 4
    ctx->pc = 0x32e550u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
    // 0x32e554: 0x24427000  addiu       $v0, $v0, 0x7000
    ctx->pc = 0x32e554u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 28672));
label_32e558:
    // 0x32e558: 0xad8200c4  sw          $v0, 0xC4($t4)
    ctx->pc = 0x32e558u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 196), GPR_U32(ctx, 2));
    // 0x32e55c: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x32e55cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x32e560: 0x2402a833  addiu       $v0, $zero, -0x57CD
    ctx->pc = 0x32e560u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294944819));
    // 0x32e564: 0x3464000d  ori         $a0, $v1, 0xD
    ctx->pc = 0x32e564u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)13);
    // 0x32e568: 0xad8200c8  sw          $v0, 0xC8($t4)
    ctx->pc = 0x32e568u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 200), GPR_U32(ctx, 2));
    // 0x32e56c: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x32e56cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x32e570: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x32e570u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x32e574: 0xad8000cc  sw          $zero, 0xCC($t4)
    ctx->pc = 0x32e574u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 204), GPR_U32(ctx, 0));
    // 0x32e578: 0x7c40e500  sq          $zero, -0x1B00($v0)
    ctx->pc = 0x32e578u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 4294960384), GPR_VEC(ctx, 0));
    // 0x32e57c: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x32e57cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x32e580: 0xac64e500  sw          $a0, -0x1B00($v1)
    ctx->pc = 0x32e580u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960384), GPR_U32(ctx, 4));
    // 0x32e584: 0x7c40e5e0  sq          $zero, -0x1A20($v0)
    ctx->pc = 0x32e584u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 4294960608), GPR_VEC(ctx, 0));
    // 0x32e588: 0x3c037000  lui         $v1, 0x7000
    ctx->pc = 0x32e588u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28672 << 16));
    // 0x32e58c: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x32e58cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x32e590: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x32e590u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32e594: 0xc0433b8  jal         func_10CEE0
    ctx->pc = 0x32E594u;
    SET_GPR_U32(ctx, 31, 0x32E59Cu);
    ctx->pc = 0x32E598u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32E594u;
    // 0x32e598: 0xac43e5e0  sw          $v1, -0x1A20($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960608), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CEE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CEE0u, 0x32E594u, 0x32E59Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32E59Cu;
label_32e59c:
    // 0x32e59c: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x32e59cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x32e5a0: 0x3c0501de  lui         $a1, 0x1DE
    ctx->pc = 0x32e5a0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)478 << 16));
    // 0x32e5a4: 0x8c44e688  lw          $a0, -0x1978($v0)
    ctx->pc = 0x32e5a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960776)));
    // 0x32e5a8: 0xc040a04  jal         func_102810
    ctx->pc = 0x32E5A8u;
    SET_GPR_U32(ctx, 31, 0x32E5B0u);
    ctx->pc = 0x32E5ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32E5A8u;
    // 0x32e5ac: 0x24a5e500  addiu       $a1, $a1, -0x1B00 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294960384));
    ctx->in_delay_slot = false;
    ctx->pc = 0x102810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102810u, 0x32E5A8u, 0x32E5B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32E5B0u;
label_32e5b0:
    // 0x32e5b0: 0x3c031001  lui         $v1, 0x1001
    ctx->pc = 0x32e5b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4097 << 16));
label_32e5b4:
    // 0x32e5b4: 0x8c64a000  lw          $a0, -0x6000($v1)
    ctx->pc = 0x32e5b4u;
    SET_GPR_S32(ctx, 4, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 4294942720))); // MMIO: 0x1000a000
    // 0x32e5b8: 0x30840100  andi        $a0, $a0, 0x100
    ctx->pc = 0x32e5b8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)256);
    // 0x32e5bc: 0x0  nop
    ctx->pc = 0x32e5bcu;
    // NOP
    // 0x32e5c0: 0x0  nop
    ctx->pc = 0x32e5c0u;
    // NOP
    // 0x32e5c4: 0x0  nop
    ctx->pc = 0x32e5c4u;
    // NOP
    // 0x32e5c8: 0x1480fffa  bnez        $a0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x32E5C8u;
    {
        const bool branch_taken_0x32e5c8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x32e5c8) {
            ctx->pc = 0x32E5B4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_32e5b4;
        }
    }
    ctx->pc = 0x32E5D0u;
    // 0x32e5d0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x32e5d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x32e5d4: 0x3e00008  jr          $ra
    ctx->pc = 0x32E5D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32E5D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32E5D4u;
        // 0x32e5d8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32E5D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32E5DCu;
    // 0x32e5dc: 0x0  nop
    ctx->pc = 0x32e5dcu;
    // NOP
}
