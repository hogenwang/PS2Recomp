#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001A79B0
// Address: 0x1a79b0 - 0x1a7b70
void sub_001A79B0_0x1a79b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A79B0_0x1a79b0");
#endif

    switch (ctx->pc) {
        case 0x1a7a50u: goto label_1a7a50;
        case 0x1a7b4cu: goto label_1a7b4c;
        case 0x1a7b58u: goto label_1a7b58;
        case 0x1a7b64u: goto label_1a7b64;
        default: break;
    }

    ctx->pc = 0x1a79b0u;

    // 0x1a79b0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1a79b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1a79b4: 0x3c0201bf  lui         $v0, 0x1BF
    ctx->pc = 0x1a79b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)447 << 16));
    // 0x1a79b8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1a79b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1a79bc: 0x24048000  addiu       $a0, $zero, -0x8000
    ctx->pc = 0x1a79bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294934528));
    // 0x1a79c0: 0x7c4031c0  sq          $zero, 0x31C0($v0)
    ctx->pc = 0x1a79c0u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 12736), GPR_VEC(ctx, 0));
    // 0x1a79c4: 0x64060004  daddiu      $a2, $zero, 0x4
    ctx->pc = 0x1a79c4u;
    SET_GPR_S64(ctx, 6, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)4);
    // 0x1a79c8: 0x3c0201bf  lui         $v0, 0x1BF
    ctx->pc = 0x1a79c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)447 << 16));
    // 0x1a79cc: 0x3c0301bf  lui         $v1, 0x1BF
    ctx->pc = 0x1a79ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)447 << 16));
    // 0x1a79d0: 0x944731c0  lhu         $a3, 0x31C0($v0)
    ctx->pc = 0x1a79d0u;
    SET_GPR_U32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 12736)));
    // 0x1a79d4: 0x2409ff7f  addiu       $t1, $zero, -0x81
    ctx->pc = 0x1a79d4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967167));
    // 0x1a79d8: 0x640a0080  daddiu      $t2, $zero, 0x80
    ctx->pc = 0x1a79d8u;
    SET_GPR_S64(ctx, 10, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)128);
    // 0x1a79dc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1a79dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a79e0: 0xe42024  and         $a0, $a3, $a0
    ctx->pc = 0x1a79e0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) & GPR_U64(ctx, 4));
    // 0x1a79e4: 0x3c0201bf  lui         $v0, 0x1BF
    ctx->pc = 0x1a79e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)447 << 16));
    // 0x1a79e8: 0x862025  or          $a0, $a0, $a2
    ctx->pc = 0x1a79e8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 6));
    // 0x1a79ec: 0x64070010  daddiu      $a3, $zero, 0x10
    ctx->pc = 0x1a79ecu;
    SET_GPR_S64(ctx, 7, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)16);
    // 0x1a79f0: 0xa46431c0  sh          $a0, 0x31C0($v1)
    ctx->pc = 0x1a79f0u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 12736), (uint16_t)GPR_U32(ctx, 4));
    // 0x1a79f4: 0x2406ff0f  addiu       $a2, $zero, -0xF1
    ctx->pc = 0x1a79f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967055));
    // 0x1a79f8: 0x904b31c1  lbu         $t3, 0x31C1($v0)
    ctx->pc = 0x1a79f8u;
    SET_GPR_U32(ctx, 11, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 12737)));
    // 0x1a79fc: 0x3c0401bf  lui         $a0, 0x1BF
    ctx->pc = 0x1a79fcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)447 << 16));
    // 0x1a7a00: 0x3c0301bf  lui         $v1, 0x1BF
    ctx->pc = 0x1a7a00u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)447 << 16));
    // 0x1a7a04: 0x3c0201bf  lui         $v0, 0x1BF
    ctx->pc = 0x1a7a04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)447 << 16));
    // 0x1a7a08: 0x1694824  and         $t1, $t3, $t1
    ctx->pc = 0x1a7a08u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 11) & GPR_U64(ctx, 9));
    // 0x1a7a0c: 0x904831c7  lbu         $t0, 0x31C7($v0)
    ctx->pc = 0x1a7a0cu;
    SET_GPR_U32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 12743)));
    // 0x1a7a10: 0x12a4825  or          $t1, $t1, $t2
    ctx->pc = 0x1a7a10u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 10));
    // 0x1a7a14: 0xa08931c1  sb          $t1, 0x31C1($a0)
    ctx->pc = 0x1a7a14u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 12737), (uint8_t)GPR_U32(ctx, 9));
    // 0x1a7a18: 0x1063024  and         $a2, $t0, $a2
    ctx->pc = 0x1a7a18u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 8) & GPR_U64(ctx, 6));
    // 0x1a7a1c: 0x3c0201bf  lui         $v0, 0x1BF
    ctx->pc = 0x1a7a1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)447 << 16));
    // 0x1a7a20: 0xc72025  or          $a0, $a2, $a3
    ctx->pc = 0x1a7a20u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) | GPR_U64(ctx, 7));
    // 0x1a7a24: 0x904731c8  lbu         $a3, 0x31C8($v0)
    ctx->pc = 0x1a7a24u;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 12744)));
    // 0x1a7a28: 0x6406000e  daddiu      $a2, $zero, 0xE
    ctx->pc = 0x1a7a28u;
    SET_GPR_S64(ctx, 6, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)14);
    // 0x1a7a2c: 0xa06431c7  sb          $a0, 0x31C7($v1)
    ctx->pc = 0x1a7a2cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 12743), (uint8_t)GPR_U32(ctx, 4));
    // 0x1a7a30: 0x2403fff0  addiu       $v1, $zero, -0x10
    ctx->pc = 0x1a7a30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x1a7a34: 0x3c0401bf  lui         $a0, 0x1BF
    ctx->pc = 0x1a7a34u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)447 << 16));
    // 0x1a7a38: 0xe31824  and         $v1, $a3, $v1
    ctx->pc = 0x1a7a38u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & GPR_U64(ctx, 3));
    // 0x1a7a3c: 0x3c0201bf  lui         $v0, 0x1BF
    ctx->pc = 0x1a7a3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)447 << 16));
    // 0x1a7a40: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x1a7a40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x1a7a44: 0x248431d0  addiu       $a0, $a0, 0x31D0
    ctx->pc = 0x1a7a44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12752));
    // 0x1a7a48: 0xc04051a  jal         func_101468
    ctx->pc = 0x1A7A48u;
    SET_GPR_U32(ctx, 31, 0x1A7A50u);
    ctx->pc = 0x1A7A4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A7A48u;
            // 0x1a7a4c: 0xa04331c8  sb          $v1, 0x31C8($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 12744), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101468u;
    if (runtime->hasFunction(0x101468u)) {
        auto targetFn = runtime->lookupFunction(0x101468u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A7A50u; }
        if (ctx->pc != 0x1A7A50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00101468_0x101468(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A7A50u; }
        if (ctx->pc != 0x1A7A50u) { return; }
    }
    ctx->pc = 0x1A7A50u;
label_1a7a50:
    // 0x1a7a50: 0x3c0201bf  lui         $v0, 0x1BF
    ctx->pc = 0x1a7a50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)447 << 16));
    // 0x1a7a54: 0x30080003  andi        $t0, $zero, 0x3
    ctx->pc = 0x1a7a54u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) & (uint64_t)(uint16_t)3);
    // 0x1a7a58: 0x904631d0  lbu         $a2, 0x31D0($v0)
    ctx->pc = 0x1a7a58u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 12752)));
    // 0x1a7a5c: 0x2403fffc  addiu       $v1, $zero, -0x4
    ctx->pc = 0x1a7a5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
    // 0x1a7a60: 0x3c0401bf  lui         $a0, 0x1BF
    ctx->pc = 0x1a7a60u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)447 << 16));
    // 0x1a7a64: 0x2405fff3  addiu       $a1, $zero, -0xD
    ctx->pc = 0x1a7a64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967283));
    // 0x1a7a68: 0x64070008  daddiu      $a3, $zero, 0x8
    ctx->pc = 0x1a7a68u;
    SET_GPR_S64(ctx, 7, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)8);
    // 0x1a7a6c: 0x240dffcf  addiu       $t5, $zero, -0x31
    ctx->pc = 0x1a7a6cu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967247));
    // 0x1a7a70: 0xc33024  and         $a2, $a2, $v1
    ctx->pc = 0x1a7a70u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
    // 0x1a7a74: 0x3c0201bf  lui         $v0, 0x1BF
    ctx->pc = 0x1a7a74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)447 << 16));
    // 0x1a7a78: 0xc83025  or          $a2, $a2, $t0
    ctx->pc = 0x1a7a78u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 8));
    // 0x1a7a7c: 0x87100  sll         $t6, $t0, 4
    ctx->pc = 0x1a7a7cu;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 8), 4));
    // 0x1a7a80: 0xa08631d0  sb          $a2, 0x31D0($a0)
    ctx->pc = 0x1a7a80u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 12752), (uint8_t)GPR_U32(ctx, 6));
    // 0x1a7a84: 0x3c0301bf  lui         $v1, 0x1BF
    ctx->pc = 0x1a7a84u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)447 << 16));
    // 0x1a7a88: 0x904231d0  lbu         $v0, 0x31D0($v0)
    ctx->pc = 0x1a7a88u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 12752)));
    // 0x1a7a8c: 0x3c0601bf  lui         $a2, 0x1BF
    ctx->pc = 0x1a7a8cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)447 << 16));
    // 0x1a7a90: 0x3c0a01bf  lui         $t2, 0x1BF
    ctx->pc = 0x1a7a90u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)447 << 16));
    // 0x1a7a94: 0x3c0901bf  lui         $t1, 0x1BF
    ctx->pc = 0x1a7a94u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)447 << 16));
    // 0x1a7a98: 0x240cff3f  addiu       $t4, $zero, -0xC1
    ctx->pc = 0x1a7a98u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967103));
    // 0x1a7a9c: 0x64040040  daddiu      $a0, $zero, 0x40
    ctx->pc = 0x1a7a9cu;
    SET_GPR_S64(ctx, 4, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)64);
    // 0x1a7aa0: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x1a7aa0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x1a7aa4: 0x3c0801bf  lui         $t0, 0x1BF
    ctx->pc = 0x1a7aa4u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)447 << 16));
    // 0x1a7aa8: 0x472825  or          $a1, $v0, $a3
    ctx->pc = 0x1a7aa8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x1a7aac: 0xa06531d0  sb          $a1, 0x31D0($v1)
    ctx->pc = 0x1a7aacu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 12752), (uint8_t)GPR_U32(ctx, 5));
    // 0x1a7ab0: 0x3c0201bf  lui         $v0, 0x1BF
    ctx->pc = 0x1a7ab0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)447 << 16));
    // 0x1a7ab4: 0x90cf31d0  lbu         $t7, 0x31D0($a2)
    ctx->pc = 0x1a7ab4u;
    SET_GPR_U32(ctx, 15, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 12752)));
    // 0x1a7ab8: 0x3c0501bf  lui         $a1, 0x1BF
    ctx->pc = 0x1a7ab8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)447 << 16));
    // 0x1a7abc: 0x90ab31e0  lbu         $t3, 0x31E0($a1)
    ctx->pc = 0x1a7abcu;
    SET_GPR_U32(ctx, 11, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 12768)));
    // 0x1a7ac0: 0x30030001  andi        $v1, $zero, 0x1
    ctx->pc = 0x1a7ac0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) & (uint64_t)(uint16_t)1);
    // 0x1a7ac4: 0xa04031d4  sb          $zero, 0x31D4($v0)
    ctx->pc = 0x1a7ac4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 12756), (uint8_t)GPR_U32(ctx, 0));
    // 0x1a7ac8: 0x3c0701bf  lui         $a3, 0x1BF
    ctx->pc = 0x1a7ac8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)447 << 16));
    // 0x1a7acc: 0x3c0601bf  lui         $a2, 0x1BF
    ctx->pc = 0x1a7accu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)447 << 16));
    // 0x1a7ad0: 0x1ed6824  and         $t5, $t7, $t5
    ctx->pc = 0x1a7ad0u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 15) & GPR_U64(ctx, 13));
    // 0x1a7ad4: 0x2402fffe  addiu       $v0, $zero, -0x2
    ctx->pc = 0x1a7ad4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x1a7ad8: 0xa0c031f0  sb          $zero, 0x31F0($a2)
    ctx->pc = 0x1a7ad8u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 12784), (uint8_t)GPR_U32(ctx, 0));
    // 0x1a7adc: 0x1623024  and         $a2, $t3, $v0
    ctx->pc = 0x1a7adcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 11) & GPR_U64(ctx, 2));
    // 0x1a7ae0: 0x3c0501bf  lui         $a1, 0x1BF
    ctx->pc = 0x1a7ae0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)447 << 16));
    // 0x1a7ae4: 0x1ae6825  or          $t5, $t5, $t6
    ctx->pc = 0x1a7ae4u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) | GPR_U64(ctx, 14));
    // 0x1a7ae8: 0x90ab31f1  lbu         $t3, 0x31F1($a1)
    ctx->pc = 0x1a7ae8u;
    SET_GPR_U32(ctx, 11, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 12785)));
    // 0x1a7aec: 0xa14d31d0  sb          $t5, 0x31D0($t2)
    ctx->pc = 0x1a7aecu;
    WRITE8(ADD32(GPR_U32(ctx, 10), 12752), (uint8_t)GPR_U32(ctx, 13));
    // 0x1a7af0: 0xc33025  or          $a2, $a2, $v1
    ctx->pc = 0x1a7af0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x1a7af4: 0xa0e631e0  sb          $a2, 0x31E0($a3)
    ctx->pc = 0x1a7af4u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 12768), (uint8_t)GPR_U32(ctx, 6));
    // 0x1a7af8: 0x351c0  sll         $t2, $v1, 7
    ctx->pc = 0x1a7af8u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 3), 7));
    // 0x1a7afc: 0x912d31d0  lbu         $t5, 0x31D0($t1)
    ctx->pc = 0x1a7afcu;
    SET_GPR_U32(ctx, 13, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 12752)));
    // 0x1a7b00: 0x24070080  addiu       $a3, $zero, 0x80
    ctx->pc = 0x1a7b00u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1a7b04: 0x3c0501bf  lui         $a1, 0x1BF
    ctx->pc = 0x1a7b04u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)447 << 16));
    // 0x1a7b08: 0x3c0601bf  lui         $a2, 0x1BF
    ctx->pc = 0x1a7b08u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)447 << 16));
    // 0x1a7b0c: 0xa0a731f4  sb          $a3, 0x31F4($a1)
    ctx->pc = 0x1a7b0cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 12788), (uint8_t)GPR_U32(ctx, 7));
    // 0x1a7b10: 0x1ac2824  and         $a1, $t5, $t4
    ctx->pc = 0x1a7b10u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 13) & GPR_U64(ctx, 12));
    // 0x1a7b14: 0x2409ff7f  addiu       $t1, $zero, -0x81
    ctx->pc = 0x1a7b14u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967167));
    // 0x1a7b18: 0xa42825  or          $a1, $a1, $a0
    ctx->pc = 0x1a7b18u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x1a7b1c: 0x1692024  and         $a0, $t3, $t1
    ctx->pc = 0x1a7b1cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 11) & GPR_U64(ctx, 9));
    // 0x1a7b20: 0xa10531d0  sb          $a1, 0x31D0($t0)
    ctx->pc = 0x1a7b20u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 12752), (uint8_t)GPR_U32(ctx, 5));
    // 0x1a7b24: 0x8a2025  or          $a0, $a0, $t2
    ctx->pc = 0x1a7b24u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 10));
    // 0x1a7b28: 0x3c0501bf  lui         $a1, 0x1BF
    ctx->pc = 0x1a7b28u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)447 << 16));
    // 0x1a7b2c: 0xa0c431f1  sb          $a0, 0x31F1($a2)
    ctx->pc = 0x1a7b2cu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 12785), (uint8_t)GPR_U32(ctx, 4));
    // 0x1a7b30: 0x3c0401bf  lui         $a0, 0x1BF
    ctx->pc = 0x1a7b30u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)447 << 16));
    // 0x1a7b34: 0x90863200  lbu         $a2, 0x3200($a0)
    ctx->pc = 0x1a7b34u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 12800)));
    // 0x1a7b38: 0xc21024  and         $v0, $a2, $v0
    ctx->pc = 0x1a7b38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x1a7b3c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1a7b3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a7b40: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1a7b40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1a7b44: 0xc0433b8  jal         func_10CEE0
    ctx->pc = 0x1A7B44u;
    SET_GPR_U32(ctx, 31, 0x1A7B4Cu);
    ctx->pc = 0x1A7B48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A7B44u;
            // 0x1a7b48: 0xa0a23200  sb          $v0, 0x3200($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 12800), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10CEE0u;
    if (runtime->hasFunction(0x10CEE0u)) {
        auto targetFn = runtime->lookupFunction(0x10CEE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A7B4Cu; }
        if (ctx->pc != 0x1A7B4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010CEE0_0x10cee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A7B4Cu; }
        if (ctx->pc != 0x1A7B4Cu) { return; }
    }
    ctx->pc = 0x1A7B4Cu;
label_1a7b4c:
    // 0x1a7b4c: 0x3c0401bf  lui         $a0, 0x1BF
    ctx->pc = 0x1a7b4cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)447 << 16));
    // 0x1a7b50: 0xc040336  jal         func_100CD8
    ctx->pc = 0x1A7B50u;
    SET_GPR_U32(ctx, 31, 0x1A7B58u);
    ctx->pc = 0x1A7B54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A7B50u;
            // 0x1a7b54: 0x248431c0  addiu       $a0, $a0, 0x31C0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12736));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100CD8u;
    if (runtime->hasFunction(0x100CD8u)) {
        auto targetFn = runtime->lookupFunction(0x100CD8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A7B58u; }
        if (ctx->pc != 0x1A7B58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100CD8_0x100cd8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A7B58u; }
        if (ctx->pc != 0x1A7B58u) { return; }
    }
    ctx->pc = 0x1A7B58u;
label_1a7b58:
    // 0x1a7b58: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1a7b58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a7b5c: 0xc040454  jal         func_101150
    ctx->pc = 0x1A7B5Cu;
    SET_GPR_U32(ctx, 31, 0x1A7B64u);
    ctx->pc = 0x1A7B60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A7B5Cu;
            // 0x1a7b60: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101150u;
    if (runtime->hasFunction(0x101150u)) {
        auto targetFn = runtime->lookupFunction(0x101150u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A7B64u; }
        if (ctx->pc != 0x1A7B64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00101150_0x101150(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A7B64u; }
        if (ctx->pc != 0x1A7B64u) { return; }
    }
    ctx->pc = 0x1A7B64u;
label_1a7b64:
    // 0x1a7b64: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1a7b64u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a7b68: 0x3e00008  jr          $ra
    ctx->pc = 0x1A7B68u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A7B6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A7B68u;
            // 0x1a7b6c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1A7B70u;
    ctx->pc = 0x1a7b70u;
}
