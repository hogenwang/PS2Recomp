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

// Function: sub_001A77F0
// Address: 0x1a77f0 - 0x1a79b0
void sub_001A77F0_0x1a77f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A77F0_0x1a77f0");
#endif

    switch (ctx->pc) {
        case 0x1a7890u: goto label_1a7890;
        case 0x1a798cu: goto label_1a798c;
        case 0x1a7998u: goto label_1a7998;
        case 0x1a79a4u: goto label_1a79a4;
        default: break;
    }

    ctx->pc = 0x1a77f0u;

    // 0x1a77f0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1a77f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1a77f4: 0x3c0201bf  lui         $v0, 0x1BF
    ctx->pc = 0x1a77f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)447 << 16));
    // 0x1a77f8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1a77f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1a77fc: 0x24048000  addiu       $a0, $zero, -0x8000
    ctx->pc = 0x1a77fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294934528));
    // 0x1a7800: 0x7c4031c0  sq          $zero, 0x31C0($v0)
    ctx->pc = 0x1a7800u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 12736), GPR_VEC(ctx, 0));
    // 0x1a7804: 0x64060004  daddiu      $a2, $zero, 0x4
    ctx->pc = 0x1a7804u;
    SET_GPR_S64(ctx, 6, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)4);
    // 0x1a7808: 0x3c0201bf  lui         $v0, 0x1BF
    ctx->pc = 0x1a7808u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)447 << 16));
    // 0x1a780c: 0x3c0301bf  lui         $v1, 0x1BF
    ctx->pc = 0x1a780cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)447 << 16));
    // 0x1a7810: 0x944731c0  lhu         $a3, 0x31C0($v0)
    ctx->pc = 0x1a7810u;
    SET_GPR_U32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 12736)));
    // 0x1a7814: 0x2409ff7f  addiu       $t1, $zero, -0x81
    ctx->pc = 0x1a7814u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967167));
    // 0x1a7818: 0x640a0080  daddiu      $t2, $zero, 0x80
    ctx->pc = 0x1a7818u;
    SET_GPR_S64(ctx, 10, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)128);
    // 0x1a781c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1a781cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a7820: 0xe42024  and         $a0, $a3, $a0
    ctx->pc = 0x1a7820u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) & GPR_U64(ctx, 4));
    // 0x1a7824: 0x3c0201bf  lui         $v0, 0x1BF
    ctx->pc = 0x1a7824u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)447 << 16));
    // 0x1a7828: 0x862025  or          $a0, $a0, $a2
    ctx->pc = 0x1a7828u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 6));
    // 0x1a782c: 0x64070010  daddiu      $a3, $zero, 0x10
    ctx->pc = 0x1a782cu;
    SET_GPR_S64(ctx, 7, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)16);
    // 0x1a7830: 0xa46431c0  sh          $a0, 0x31C0($v1)
    ctx->pc = 0x1a7830u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 12736), (uint16_t)GPR_U32(ctx, 4));
    // 0x1a7834: 0x2406ff0f  addiu       $a2, $zero, -0xF1
    ctx->pc = 0x1a7834u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967055));
    // 0x1a7838: 0x904b31c1  lbu         $t3, 0x31C1($v0)
    ctx->pc = 0x1a7838u;
    SET_GPR_U32(ctx, 11, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 12737)));
    // 0x1a783c: 0x3c0401bf  lui         $a0, 0x1BF
    ctx->pc = 0x1a783cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)447 << 16));
    // 0x1a7840: 0x3c0301bf  lui         $v1, 0x1BF
    ctx->pc = 0x1a7840u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)447 << 16));
    // 0x1a7844: 0x3c0201bf  lui         $v0, 0x1BF
    ctx->pc = 0x1a7844u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)447 << 16));
    // 0x1a7848: 0x1694824  and         $t1, $t3, $t1
    ctx->pc = 0x1a7848u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 11) & GPR_U64(ctx, 9));
    // 0x1a784c: 0x904831c7  lbu         $t0, 0x31C7($v0)
    ctx->pc = 0x1a784cu;
    SET_GPR_U32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 12743)));
    // 0x1a7850: 0x12a4825  or          $t1, $t1, $t2
    ctx->pc = 0x1a7850u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 10));
    // 0x1a7854: 0xa08931c1  sb          $t1, 0x31C1($a0)
    ctx->pc = 0x1a7854u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 12737), (uint8_t)GPR_U32(ctx, 9));
    // 0x1a7858: 0x1063024  and         $a2, $t0, $a2
    ctx->pc = 0x1a7858u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 8) & GPR_U64(ctx, 6));
    // 0x1a785c: 0x3c0201bf  lui         $v0, 0x1BF
    ctx->pc = 0x1a785cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)447 << 16));
    // 0x1a7860: 0xc72025  or          $a0, $a2, $a3
    ctx->pc = 0x1a7860u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) | GPR_U64(ctx, 7));
    // 0x1a7864: 0x904731c8  lbu         $a3, 0x31C8($v0)
    ctx->pc = 0x1a7864u;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 12744)));
    // 0x1a7868: 0x6406000e  daddiu      $a2, $zero, 0xE
    ctx->pc = 0x1a7868u;
    SET_GPR_S64(ctx, 6, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)14);
    // 0x1a786c: 0xa06431c7  sb          $a0, 0x31C7($v1)
    ctx->pc = 0x1a786cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 12743), (uint8_t)GPR_U32(ctx, 4));
    // 0x1a7870: 0x2403fff0  addiu       $v1, $zero, -0x10
    ctx->pc = 0x1a7870u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x1a7874: 0x3c0401bf  lui         $a0, 0x1BF
    ctx->pc = 0x1a7874u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)447 << 16));
    // 0x1a7878: 0xe31824  and         $v1, $a3, $v1
    ctx->pc = 0x1a7878u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & GPR_U64(ctx, 3));
    // 0x1a787c: 0x3c0201bf  lui         $v0, 0x1BF
    ctx->pc = 0x1a787cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)447 << 16));
    // 0x1a7880: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x1a7880u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x1a7884: 0x248431d0  addiu       $a0, $a0, 0x31D0
    ctx->pc = 0x1a7884u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12752));
    // 0x1a7888: 0xc04051a  jal         func_101468
    ctx->pc = 0x1A7888u;
    SET_GPR_U32(ctx, 31, 0x1A7890u);
    ctx->pc = 0x1A788Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A7888u;
    // 0x1a788c: 0xa04331c8  sb          $v1, 0x31C8($v0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 2), 12744), (uint8_t)GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x101468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101468u, 0x1A7888u, 0x1A7890u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A7890u;
label_1a7890:
    // 0x1a7890: 0x3c0201bf  lui         $v0, 0x1BF
    ctx->pc = 0x1a7890u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)447 << 16));
    // 0x1a7894: 0x30080003  andi        $t0, $zero, 0x3
    ctx->pc = 0x1a7894u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) & (uint64_t)(uint16_t)3);
    // 0x1a7898: 0x904631d0  lbu         $a2, 0x31D0($v0)
    ctx->pc = 0x1a7898u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 12752)));
    // 0x1a789c: 0x2403fffc  addiu       $v1, $zero, -0x4
    ctx->pc = 0x1a789cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
    // 0x1a78a0: 0x3c0401bf  lui         $a0, 0x1BF
    ctx->pc = 0x1a78a0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)447 << 16));
    // 0x1a78a4: 0x2405fff3  addiu       $a1, $zero, -0xD
    ctx->pc = 0x1a78a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967283));
    // 0x1a78a8: 0x64070004  daddiu      $a3, $zero, 0x4
    ctx->pc = 0x1a78a8u;
    SET_GPR_S64(ctx, 7, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)4);
    // 0x1a78ac: 0x240dffcf  addiu       $t5, $zero, -0x31
    ctx->pc = 0x1a78acu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967247));
    // 0x1a78b0: 0xc33024  and         $a2, $a2, $v1
    ctx->pc = 0x1a78b0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
    // 0x1a78b4: 0x3c0201bf  lui         $v0, 0x1BF
    ctx->pc = 0x1a78b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)447 << 16));
    // 0x1a78b8: 0xc83025  or          $a2, $a2, $t0
    ctx->pc = 0x1a78b8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 8));
    // 0x1a78bc: 0x87100  sll         $t6, $t0, 4
    ctx->pc = 0x1a78bcu;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 8), 4));
    // 0x1a78c0: 0xa08631d0  sb          $a2, 0x31D0($a0)
    ctx->pc = 0x1a78c0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 12752), (uint8_t)GPR_U32(ctx, 6));
    // 0x1a78c4: 0x3c0301bf  lui         $v1, 0x1BF
    ctx->pc = 0x1a78c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)447 << 16));
    // 0x1a78c8: 0x904231d0  lbu         $v0, 0x31D0($v0)
    ctx->pc = 0x1a78c8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 12752)));
    // 0x1a78cc: 0x3c0601bf  lui         $a2, 0x1BF
    ctx->pc = 0x1a78ccu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)447 << 16));
    // 0x1a78d0: 0x3c0a01bf  lui         $t2, 0x1BF
    ctx->pc = 0x1a78d0u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)447 << 16));
    // 0x1a78d4: 0x3c0901bf  lui         $t1, 0x1BF
    ctx->pc = 0x1a78d4u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)447 << 16));
    // 0x1a78d8: 0x240cff3f  addiu       $t4, $zero, -0xC1
    ctx->pc = 0x1a78d8u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967103));
    // 0x1a78dc: 0x64040040  daddiu      $a0, $zero, 0x40
    ctx->pc = 0x1a78dcu;
    SET_GPR_S64(ctx, 4, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)64);
    // 0x1a78e0: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x1a78e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x1a78e4: 0x3c0801bf  lui         $t0, 0x1BF
    ctx->pc = 0x1a78e4u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)447 << 16));
    // 0x1a78e8: 0x472825  or          $a1, $v0, $a3
    ctx->pc = 0x1a78e8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x1a78ec: 0xa06531d0  sb          $a1, 0x31D0($v1)
    ctx->pc = 0x1a78ecu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 12752), (uint8_t)GPR_U32(ctx, 5));
    // 0x1a78f0: 0x3c0201bf  lui         $v0, 0x1BF
    ctx->pc = 0x1a78f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)447 << 16));
    // 0x1a78f4: 0x90cf31d0  lbu         $t7, 0x31D0($a2)
    ctx->pc = 0x1a78f4u;
    SET_GPR_U32(ctx, 15, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 12752)));
    // 0x1a78f8: 0x3c0501bf  lui         $a1, 0x1BF
    ctx->pc = 0x1a78f8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)447 << 16));
    // 0x1a78fc: 0x90ab31e0  lbu         $t3, 0x31E0($a1)
    ctx->pc = 0x1a78fcu;
    SET_GPR_U32(ctx, 11, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 12768)));
    // 0x1a7900: 0x30030001  andi        $v1, $zero, 0x1
    ctx->pc = 0x1a7900u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) & (uint64_t)(uint16_t)1);
    // 0x1a7904: 0xa04031d4  sb          $zero, 0x31D4($v0)
    ctx->pc = 0x1a7904u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 12756), (uint8_t)GPR_U32(ctx, 0));
    // 0x1a7908: 0x3c0701bf  lui         $a3, 0x1BF
    ctx->pc = 0x1a7908u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)447 << 16));
    // 0x1a790c: 0x3c0601bf  lui         $a2, 0x1BF
    ctx->pc = 0x1a790cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)447 << 16));
    // 0x1a7910: 0x1ed6824  and         $t5, $t7, $t5
    ctx->pc = 0x1a7910u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 15) & GPR_U64(ctx, 13));
    // 0x1a7914: 0x2402fffe  addiu       $v0, $zero, -0x2
    ctx->pc = 0x1a7914u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x1a7918: 0xa0c031f0  sb          $zero, 0x31F0($a2)
    ctx->pc = 0x1a7918u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 12784), (uint8_t)GPR_U32(ctx, 0));
    // 0x1a791c: 0x1623024  and         $a2, $t3, $v0
    ctx->pc = 0x1a791cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 11) & GPR_U64(ctx, 2));
    // 0x1a7920: 0x3c0501bf  lui         $a1, 0x1BF
    ctx->pc = 0x1a7920u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)447 << 16));
    // 0x1a7924: 0x1ae6825  or          $t5, $t5, $t6
    ctx->pc = 0x1a7924u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) | GPR_U64(ctx, 14));
    // 0x1a7928: 0x90ab31f1  lbu         $t3, 0x31F1($a1)
    ctx->pc = 0x1a7928u;
    SET_GPR_U32(ctx, 11, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 12785)));
    // 0x1a792c: 0xa14d31d0  sb          $t5, 0x31D0($t2)
    ctx->pc = 0x1a792cu;
    WRITE8(ADD32(GPR_U32(ctx, 10), 12752), (uint8_t)GPR_U32(ctx, 13));
    // 0x1a7930: 0xc33025  or          $a2, $a2, $v1
    ctx->pc = 0x1a7930u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x1a7934: 0xa0e631e0  sb          $a2, 0x31E0($a3)
    ctx->pc = 0x1a7934u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 12768), (uint8_t)GPR_U32(ctx, 6));
    // 0x1a7938: 0x351c0  sll         $t2, $v1, 7
    ctx->pc = 0x1a7938u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 3), 7));
    // 0x1a793c: 0x912d31d0  lbu         $t5, 0x31D0($t1)
    ctx->pc = 0x1a793cu;
    SET_GPR_U32(ctx, 13, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 12752)));
    // 0x1a7940: 0x24070080  addiu       $a3, $zero, 0x80
    ctx->pc = 0x1a7940u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1a7944: 0x3c0501bf  lui         $a1, 0x1BF
    ctx->pc = 0x1a7944u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)447 << 16));
    // 0x1a7948: 0x3c0601bf  lui         $a2, 0x1BF
    ctx->pc = 0x1a7948u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)447 << 16));
    // 0x1a794c: 0xa0a731f4  sb          $a3, 0x31F4($a1)
    ctx->pc = 0x1a794cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 12788), (uint8_t)GPR_U32(ctx, 7));
    // 0x1a7950: 0x1ac2824  and         $a1, $t5, $t4
    ctx->pc = 0x1a7950u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 13) & GPR_U64(ctx, 12));
    // 0x1a7954: 0x2409ff7f  addiu       $t1, $zero, -0x81
    ctx->pc = 0x1a7954u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967167));
    // 0x1a7958: 0xa42825  or          $a1, $a1, $a0
    ctx->pc = 0x1a7958u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x1a795c: 0x1692024  and         $a0, $t3, $t1
    ctx->pc = 0x1a795cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 11) & GPR_U64(ctx, 9));
    // 0x1a7960: 0xa10531d0  sb          $a1, 0x31D0($t0)
    ctx->pc = 0x1a7960u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 12752), (uint8_t)GPR_U32(ctx, 5));
    // 0x1a7964: 0x8a2025  or          $a0, $a0, $t2
    ctx->pc = 0x1a7964u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 10));
    // 0x1a7968: 0x3c0501bf  lui         $a1, 0x1BF
    ctx->pc = 0x1a7968u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)447 << 16));
    // 0x1a796c: 0xa0c431f1  sb          $a0, 0x31F1($a2)
    ctx->pc = 0x1a796cu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 12785), (uint8_t)GPR_U32(ctx, 4));
    // 0x1a7970: 0x3c0401bf  lui         $a0, 0x1BF
    ctx->pc = 0x1a7970u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)447 << 16));
    // 0x1a7974: 0x90863200  lbu         $a2, 0x3200($a0)
    ctx->pc = 0x1a7974u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 12800)));
    // 0x1a7978: 0xc21024  and         $v0, $a2, $v0
    ctx->pc = 0x1a7978u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x1a797c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1a797cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a7980: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1a7980u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1a7984: 0xc0433b8  jal         func_10CEE0
    ctx->pc = 0x1A7984u;
    SET_GPR_U32(ctx, 31, 0x1A798Cu);
    ctx->pc = 0x1A7988u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A7984u;
    // 0x1a7988: 0xa0a23200  sb          $v0, 0x3200($a1) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 5), 12800), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CEE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CEE0u, 0x1A7984u, 0x1A798Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A798Cu;
label_1a798c:
    // 0x1a798c: 0x3c0401bf  lui         $a0, 0x1BF
    ctx->pc = 0x1a798cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)447 << 16));
    // 0x1a7990: 0xc040336  jal         func_100CD8
    ctx->pc = 0x1A7990u;
    SET_GPR_U32(ctx, 31, 0x1A7998u);
    ctx->pc = 0x1A7994u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A7990u;
    // 0x1a7994: 0x248431c0  addiu       $a0, $a0, 0x31C0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12736));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100CD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100CD8u, 0x1A7990u, 0x1A7998u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A7998u;
label_1a7998:
    // 0x1a7998: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1a7998u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a799c: 0xc040454  jal         func_101150
    ctx->pc = 0x1A799Cu;
    SET_GPR_U32(ctx, 31, 0x1A79A4u);
    ctx->pc = 0x1A79A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A799Cu;
    // 0x1a79a0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x101150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101150u, 0x1A799Cu, 0x1A79A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A79A4u;
label_1a79a4:
    // 0x1a79a4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1a79a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a79a8: 0x3e00008  jr          $ra
    ctx->pc = 0x1A79A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A79ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A79A8u;
        // 0x1a79ac: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A79A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A79B0u;
}
