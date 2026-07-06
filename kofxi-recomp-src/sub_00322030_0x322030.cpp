#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00322030
// Address: 0x322030 - 0x322180
void sub_00322030_0x322030(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00322030_0x322030");
#endif

    switch (ctx->pc) {
        case 0x322044u: goto label_322044;
        default: break;
    }

    ctx->pc = 0x322030u;

    // 0x322030: 0x3c0301dd  lui         $v1, 0x1DD
    ctx->pc = 0x322030u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)477 << 16));
    // 0x322034: 0x3c0401dd  lui         $a0, 0x1DD
    ctx->pc = 0x322034u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)477 << 16));
    // 0x322038: 0xa460f010  sh          $zero, -0xFF0($v1)
    ctx->pc = 0x322038u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4294963216), (uint16_t)GPR_U32(ctx, 0));
    // 0x32203c: 0x2484d810  addiu       $a0, $a0, -0x27F0
    ctx->pc = 0x32203cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294957072));
    // 0x322040: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x322040u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_322044:
    // 0x322044: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x322044u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x322048: 0x24a50008  addiu       $a1, $a1, 0x8
    ctx->pc = 0x322048u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    // 0x32204c: 0xac800014  sw          $zero, 0x14($a0)
    ctx->pc = 0x32204cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 0));
    // 0x322050: 0x28a30100  slti        $v1, $a1, 0x100
    ctx->pc = 0x322050u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)256) ? 1 : 0);
    // 0x322054: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x322054u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x322058: 0xac80000c  sw          $zero, 0xC($a0)
    ctx->pc = 0x322058u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
    // 0x32205c: 0xa4800008  sh          $zero, 0x8($a0)
    ctx->pc = 0x32205cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 8), (uint16_t)GPR_U32(ctx, 0));
    // 0x322060: 0xa4800010  sh          $zero, 0x10($a0)
    ctx->pc = 0x322060u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 16), (uint16_t)GPR_U32(ctx, 0));
    // 0x322064: 0xac800018  sw          $zero, 0x18($a0)
    ctx->pc = 0x322064u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 0));
    // 0x322068: 0xac80002c  sw          $zero, 0x2C($a0)
    ctx->pc = 0x322068u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 0));
    // 0x32206c: 0xac80001c  sw          $zero, 0x1C($a0)
    ctx->pc = 0x32206cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 0));
    // 0x322070: 0xac800024  sw          $zero, 0x24($a0)
    ctx->pc = 0x322070u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 0));
    // 0x322074: 0xa4800020  sh          $zero, 0x20($a0)
    ctx->pc = 0x322074u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 32), (uint16_t)GPR_U32(ctx, 0));
    // 0x322078: 0xa4800028  sh          $zero, 0x28($a0)
    ctx->pc = 0x322078u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 40), (uint16_t)GPR_U32(ctx, 0));
    // 0x32207c: 0xac800030  sw          $zero, 0x30($a0)
    ctx->pc = 0x32207cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 48), GPR_U32(ctx, 0));
    // 0x322080: 0xac800044  sw          $zero, 0x44($a0)
    ctx->pc = 0x322080u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 68), GPR_U32(ctx, 0));
    // 0x322084: 0xac800034  sw          $zero, 0x34($a0)
    ctx->pc = 0x322084u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 52), GPR_U32(ctx, 0));
    // 0x322088: 0xac80003c  sw          $zero, 0x3C($a0)
    ctx->pc = 0x322088u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 60), GPR_U32(ctx, 0));
    // 0x32208c: 0xa4800038  sh          $zero, 0x38($a0)
    ctx->pc = 0x32208cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 56), (uint16_t)GPR_U32(ctx, 0));
    // 0x322090: 0xa4800040  sh          $zero, 0x40($a0)
    ctx->pc = 0x322090u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 64), (uint16_t)GPR_U32(ctx, 0));
    // 0x322094: 0xac800048  sw          $zero, 0x48($a0)
    ctx->pc = 0x322094u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 72), GPR_U32(ctx, 0));
    // 0x322098: 0xac80005c  sw          $zero, 0x5C($a0)
    ctx->pc = 0x322098u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 92), GPR_U32(ctx, 0));
    // 0x32209c: 0xac80004c  sw          $zero, 0x4C($a0)
    ctx->pc = 0x32209cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 76), GPR_U32(ctx, 0));
    // 0x3220a0: 0xac800054  sw          $zero, 0x54($a0)
    ctx->pc = 0x3220a0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 84), GPR_U32(ctx, 0));
    // 0x3220a4: 0xa4800050  sh          $zero, 0x50($a0)
    ctx->pc = 0x3220a4u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 80), (uint16_t)GPR_U32(ctx, 0));
    // 0x3220a8: 0xa4800058  sh          $zero, 0x58($a0)
    ctx->pc = 0x3220a8u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 88), (uint16_t)GPR_U32(ctx, 0));
    // 0x3220ac: 0xac800060  sw          $zero, 0x60($a0)
    ctx->pc = 0x3220acu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 96), GPR_U32(ctx, 0));
    // 0x3220b0: 0xac800074  sw          $zero, 0x74($a0)
    ctx->pc = 0x3220b0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 116), GPR_U32(ctx, 0));
    // 0x3220b4: 0xac800064  sw          $zero, 0x64($a0)
    ctx->pc = 0x3220b4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 100), GPR_U32(ctx, 0));
    // 0x3220b8: 0xac80006c  sw          $zero, 0x6C($a0)
    ctx->pc = 0x3220b8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 108), GPR_U32(ctx, 0));
    // 0x3220bc: 0xa4800068  sh          $zero, 0x68($a0)
    ctx->pc = 0x3220bcu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 104), (uint16_t)GPR_U32(ctx, 0));
    // 0x3220c0: 0xa4800070  sh          $zero, 0x70($a0)
    ctx->pc = 0x3220c0u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 112), (uint16_t)GPR_U32(ctx, 0));
    // 0x3220c4: 0xac800078  sw          $zero, 0x78($a0)
    ctx->pc = 0x3220c4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 120), GPR_U32(ctx, 0));
    // 0x3220c8: 0xac80008c  sw          $zero, 0x8C($a0)
    ctx->pc = 0x3220c8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 140), GPR_U32(ctx, 0));
    // 0x3220cc: 0xac80007c  sw          $zero, 0x7C($a0)
    ctx->pc = 0x3220ccu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 124), GPR_U32(ctx, 0));
    // 0x3220d0: 0xac800084  sw          $zero, 0x84($a0)
    ctx->pc = 0x3220d0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 132), GPR_U32(ctx, 0));
    // 0x3220d4: 0xa4800080  sh          $zero, 0x80($a0)
    ctx->pc = 0x3220d4u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 128), (uint16_t)GPR_U32(ctx, 0));
    // 0x3220d8: 0xa4800088  sh          $zero, 0x88($a0)
    ctx->pc = 0x3220d8u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 136), (uint16_t)GPR_U32(ctx, 0));
    // 0x3220dc: 0xac800090  sw          $zero, 0x90($a0)
    ctx->pc = 0x3220dcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 144), GPR_U32(ctx, 0));
    // 0x3220e0: 0xac8000a4  sw          $zero, 0xA4($a0)
    ctx->pc = 0x3220e0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 164), GPR_U32(ctx, 0));
    // 0x3220e4: 0xac800094  sw          $zero, 0x94($a0)
    ctx->pc = 0x3220e4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 148), GPR_U32(ctx, 0));
    // 0x3220e8: 0xac80009c  sw          $zero, 0x9C($a0)
    ctx->pc = 0x3220e8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 156), GPR_U32(ctx, 0));
    // 0x3220ec: 0xa4800098  sh          $zero, 0x98($a0)
    ctx->pc = 0x3220ecu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 152), (uint16_t)GPR_U32(ctx, 0));
    // 0x3220f0: 0xa48000a0  sh          $zero, 0xA0($a0)
    ctx->pc = 0x3220f0u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 160), (uint16_t)GPR_U32(ctx, 0));
    // 0x3220f4: 0xac8000a8  sw          $zero, 0xA8($a0)
    ctx->pc = 0x3220f4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 168), GPR_U32(ctx, 0));
    // 0x3220f8: 0xac8000bc  sw          $zero, 0xBC($a0)
    ctx->pc = 0x3220f8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 188), GPR_U32(ctx, 0));
    // 0x3220fc: 0xac8000ac  sw          $zero, 0xAC($a0)
    ctx->pc = 0x3220fcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 172), GPR_U32(ctx, 0));
    // 0x322100: 0xac8000b4  sw          $zero, 0xB4($a0)
    ctx->pc = 0x322100u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 180), GPR_U32(ctx, 0));
    // 0x322104: 0xa48000b0  sh          $zero, 0xB0($a0)
    ctx->pc = 0x322104u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 176), (uint16_t)GPR_U32(ctx, 0));
    // 0x322108: 0xa48000b8  sh          $zero, 0xB8($a0)
    ctx->pc = 0x322108u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 184), (uint16_t)GPR_U32(ctx, 0));
    // 0x32210c: 0x1460ffcd  bnez        $v1, . + 4 + (-0x33 << 2)
    ctx->pc = 0x32210Cu;
    {
        const bool branch_taken_0x32210c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x322110u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x32210Cu;
            // 0x322110: 0x248400c0  addiu       $a0, $a0, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 192));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32210c) {
            ctx->pc = 0x322044u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_322044;
        }
    }
    ctx->pc = 0x322114u;
    // 0x322114: 0x3c0301dd  lui         $v1, 0x1DD
    ctx->pc = 0x322114u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)477 << 16));
    // 0x322118: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x322118u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x32211c: 0xac60f040  sw          $zero, -0xFC0($v1)
    ctx->pc = 0x32211cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294963264), GPR_U32(ctx, 0));
    // 0x322120: 0x3c0301dd  lui         $v1, 0x1DD
    ctx->pc = 0x322120u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)477 << 16));
    // 0x322124: 0xa064f044  sb          $a0, -0xFBC($v1)
    ctx->pc = 0x322124u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4294963268), (uint8_t)GPR_U32(ctx, 4));
    // 0x322128: 0x3c0301dd  lui         $v1, 0x1DD
    ctx->pc = 0x322128u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)477 << 16));
    // 0x32212c: 0xac60f028  sw          $zero, -0xFD8($v1)
    ctx->pc = 0x32212cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294963240), GPR_U32(ctx, 0));
    // 0x322130: 0x3c0301dd  lui         $v1, 0x1DD
    ctx->pc = 0x322130u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)477 << 16));
    // 0x322134: 0xac60f018  sw          $zero, -0xFE8($v1)
    ctx->pc = 0x322134u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294963224), GPR_U32(ctx, 0));
    // 0x322138: 0x3c0301dd  lui         $v1, 0x1DD
    ctx->pc = 0x322138u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)477 << 16));
    // 0x32213c: 0xac60f048  sw          $zero, -0xFB8($v1)
    ctx->pc = 0x32213cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294963272), GPR_U32(ctx, 0));
    // 0x322140: 0x3c0301dd  lui         $v1, 0x1DD
    ctx->pc = 0x322140u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)477 << 16));
    // 0x322144: 0xa064f04c  sb          $a0, -0xFB4($v1)
    ctx->pc = 0x322144u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4294963276), (uint8_t)GPR_U32(ctx, 4));
    // 0x322148: 0x3c0301dd  lui         $v1, 0x1DD
    ctx->pc = 0x322148u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)477 << 16));
    // 0x32214c: 0xac60f02c  sw          $zero, -0xFD4($v1)
    ctx->pc = 0x32214cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294963244), GPR_U32(ctx, 0));
    // 0x322150: 0x3c0301dd  lui         $v1, 0x1DD
    ctx->pc = 0x322150u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)477 << 16));
    // 0x322154: 0xac60f01c  sw          $zero, -0xFE4($v1)
    ctx->pc = 0x322154u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294963228), GPR_U32(ctx, 0));
    // 0x322158: 0x3c0301dd  lui         $v1, 0x1DD
    ctx->pc = 0x322158u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)477 << 16));
    // 0x32215c: 0xac60f050  sw          $zero, -0xFB0($v1)
    ctx->pc = 0x32215cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294963280), GPR_U32(ctx, 0));
    // 0x322160: 0x3c0301dd  lui         $v1, 0x1DD
    ctx->pc = 0x322160u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)477 << 16));
    // 0x322164: 0xa064f054  sb          $a0, -0xFAC($v1)
    ctx->pc = 0x322164u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4294963284), (uint8_t)GPR_U32(ctx, 4));
    // 0x322168: 0x3c0301dd  lui         $v1, 0x1DD
    ctx->pc = 0x322168u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)477 << 16));
    // 0x32216c: 0xac60f030  sw          $zero, -0xFD0($v1)
    ctx->pc = 0x32216cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294963248), GPR_U32(ctx, 0));
    // 0x322170: 0x3c0301dd  lui         $v1, 0x1DD
    ctx->pc = 0x322170u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)477 << 16));
    // 0x322174: 0x3e00008  jr          $ra
    ctx->pc = 0x322174u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x322178u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x322174u;
            // 0x322178: 0xac60f020  sw          $zero, -0xFE0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294963232), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x32217Cu;
    // 0x32217c: 0x0  nop
    ctx->pc = 0x32217cu;
    // NOP
    ctx->pc = 0x322180u;
}
