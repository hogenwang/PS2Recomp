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

// Function: sub_0031F0A0
// Address: 0x31f0a0 - 0x31f1f0
void sub_0031F0A0_0x31f0a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0031F0A0_0x31f0a0");
#endif

    switch (ctx->pc) {
        case 0x31f1b0u: goto label_31f1b0;
        case 0x31f1c4u: goto label_31f1c4;
        case 0x31f1c8u: goto label_31f1c8;
        default: break;
    }

    ctx->pc = 0x31f0a0u;

    // 0x31f0a0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x31f0a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x31f0a4: 0x3c0201da  lui         $v0, 0x1DA
    ctx->pc = 0x31f0a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)474 << 16));
    // 0x31f0a8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x31f0a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x31f0ac: 0x24056c00  addiu       $a1, $zero, 0x6C00
    ctx->pc = 0x31f0acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 27648));
    // 0x31f0b0: 0x7c402a20  sq          $zero, 0x2A20($v0)
    ctx->pc = 0x31f0b0u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 10784), GPR_VEC(ctx, 0));
    // 0x31f0b4: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x31f0b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x31f0b8: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x31f0b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x31f0bc: 0x34430005  ori         $v1, $v0, 0x5
    ctx->pc = 0x31f0bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)5);
    // 0x31f0c0: 0x3c0201da  lui         $v0, 0x1DA
    ctx->pc = 0x31f0c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)474 << 16));
    // 0x31f0c4: 0xac432a20  sw          $v1, 0x2A20($v0)
    ctx->pc = 0x31f0c4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 10784), GPR_U32(ctx, 3));
    // 0x31f0c8: 0x3c024023  lui         $v0, 0x4023
    ctx->pc = 0x31f0c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16419 << 16));
    // 0x31f0cc: 0x34038001  ori         $v1, $zero, 0x8001
    ctx->pc = 0x31f0ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32769);
    // 0x31f0d0: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x31f0d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x31f0d4: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x31f0d4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
    // 0x31f0d8: 0x642025  or          $a0, $v1, $a0
    ctx->pc = 0x31f0d8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x31f0dc: 0x3c0201da  lui         $v0, 0x1DA
    ctx->pc = 0x31f0dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)474 << 16));
    // 0x31f0e0: 0xfc442a30  sd          $a0, 0x2A30($v0)
    ctx->pc = 0x31f0e0u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 10800), GPR_U64(ctx, 4));
    // 0x31f0e4: 0x24035151  addiu       $v1, $zero, 0x5151
    ctx->pc = 0x31f0e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20817));
    // 0x31f0e8: 0x3c0201da  lui         $v0, 0x1DA
    ctx->pc = 0x31f0e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)474 << 16));
    // 0x31f0ec: 0x3c0401da  lui         $a0, 0x1DA
    ctx->pc = 0x31f0ecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)474 << 16));
    // 0x31f0f0: 0xfc432a38  sd          $v1, 0x2A38($v0)
    ctx->pc = 0x31f0f0u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 10808), GPR_U64(ctx, 3));
    // 0x31f0f4: 0x3c0201da  lui         $v0, 0x1DA
    ctx->pc = 0x31f0f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)474 << 16));
    // 0x31f0f8: 0x24037200  addiu       $v1, $zero, 0x7200
    ctx->pc = 0x31f0f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 29184));
    // 0x31f0fc: 0xac402a40  sw          $zero, 0x2A40($v0)
    ctx->pc = 0x31f0fcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 10816), GPR_U32(ctx, 0));
    // 0x31f100: 0x3c0201da  lui         $v0, 0x1DA
    ctx->pc = 0x31f100u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)474 << 16));
    // 0x31f104: 0xac402a44  sw          $zero, 0x2A44($v0)
    ctx->pc = 0x31f104u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 10820), GPR_U32(ctx, 0));
    // 0x31f108: 0x3c0201da  lui         $v0, 0x1DA
    ctx->pc = 0x31f108u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)474 << 16));
    // 0x31f10c: 0xac402a48  sw          $zero, 0x2A48($v0)
    ctx->pc = 0x31f10cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 10824), GPR_U32(ctx, 0));
    // 0x31f110: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x31f110u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x31f114: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x31f114u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31f118: 0x3c0201da  lui         $v0, 0x1DA
    ctx->pc = 0x31f118u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)474 << 16));
    // 0x31f11c: 0xac452a50  sw          $a1, 0x2A50($v0)
    ctx->pc = 0x31f11cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 10832), GPR_U32(ctx, 5));
    // 0x31f120: 0x460c0002  mul.s       $f0, $f0, $f12
    ctx->pc = 0x31f120u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    // 0x31f124: 0x3c0201da  lui         $v0, 0x1DA
    ctx->pc = 0x31f124u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)474 << 16));
    // 0x31f128: 0x34059400  ori         $a1, $zero, 0x9400
    ctx->pc = 0x31f128u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)37888);
    // 0x31f12c: 0xac432a54  sw          $v1, 0x2A54($v0)
    ctx->pc = 0x31f12cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 10836), GPR_U32(ctx, 3));
    // 0x31f130: 0x3c0201da  lui         $v0, 0x1DA
    ctx->pc = 0x31f130u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)474 << 16));
    // 0x31f134: 0x3c0301da  lui         $v1, 0x1DA
    ctx->pc = 0x31f134u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)474 << 16));
    // 0x31f138: 0xac402a5c  sw          $zero, 0x2A5C($v0)
    ctx->pc = 0x31f138u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 10844), GPR_U32(ctx, 0));
    // 0x31f13c: 0x3c0201da  lui         $v0, 0x1DA
    ctx->pc = 0x31f13cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)474 << 16));
    // 0x31f140: 0xac662a58  sw          $a2, 0x2A58($v1)
    ctx->pc = 0x31f140u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 10840), GPR_U32(ctx, 6));
    // 0x31f144: 0xac402a60  sw          $zero, 0x2A60($v0)
    ctx->pc = 0x31f144u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 10848), GPR_U32(ctx, 0));
    // 0x31f148: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x31f148u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x31f14c: 0x3c0201da  lui         $v0, 0x1DA
    ctx->pc = 0x31f14cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)474 << 16));
    // 0x31f150: 0x3c0301da  lui         $v1, 0x1DA
    ctx->pc = 0x31f150u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)474 << 16));
    // 0x31f154: 0xac402a64  sw          $zero, 0x2A64($v0)
    ctx->pc = 0x31f154u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 10852), GPR_U32(ctx, 0));
    // 0x31f158: 0x3c0201da  lui         $v0, 0x1DA
    ctx->pc = 0x31f158u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)474 << 16));
    // 0x31f15c: 0xac402a68  sw          $zero, 0x2A68($v0)
    ctx->pc = 0x31f15cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 10856), GPR_U32(ctx, 0));
    // 0x31f160: 0x3c0201da  lui         $v0, 0x1DA
    ctx->pc = 0x31f160u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)474 << 16));
    // 0x31f164: 0xac452a70  sw          $a1, 0x2A70($v0)
    ctx->pc = 0x31f164u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 10864), GPR_U32(ctx, 5));
    // 0x31f168: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x31f168u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x31f16c: 0x0  nop
    ctx->pc = 0x31f16cu;
    // NOP
    // 0x31f170: 0xac822a4c  sw          $v0, 0x2A4C($a0)
    ctx->pc = 0x31f170u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 10828), GPR_U32(ctx, 2));
    // 0x31f174: 0xac622a6c  sw          $v0, 0x2A6C($v1)
    ctx->pc = 0x31f174u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 10860), GPR_U32(ctx, 2));
    // 0x31f178: 0x34048e00  ori         $a0, $zero, 0x8E00
    ctx->pc = 0x31f178u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)36352);
    // 0x31f17c: 0x3c0201da  lui         $v0, 0x1DA
    ctx->pc = 0x31f17cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)474 << 16));
    // 0x31f180: 0x3c037000  lui         $v1, 0x7000
    ctx->pc = 0x31f180u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28672 << 16));
    // 0x31f184: 0xac442a74  sw          $a0, 0x2A74($v0)
    ctx->pc = 0x31f184u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 10868), GPR_U32(ctx, 4));
    // 0x31f188: 0x3c0201da  lui         $v0, 0x1DA
    ctx->pc = 0x31f188u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)474 << 16));
    // 0x31f18c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x31f18cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31f190: 0xac462a78  sw          $a2, 0x2A78($v0)
    ctx->pc = 0x31f190u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 10872), GPR_U32(ctx, 6));
    // 0x31f194: 0x3c0201da  lui         $v0, 0x1DA
    ctx->pc = 0x31f194u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)474 << 16));
    // 0x31f198: 0xac402a7c  sw          $zero, 0x2A7C($v0)
    ctx->pc = 0x31f198u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 10876), GPR_U32(ctx, 0));
    // 0x31f19c: 0x3c0201da  lui         $v0, 0x1DA
    ctx->pc = 0x31f19cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)474 << 16));
    // 0x31f1a0: 0x7c402a80  sq          $zero, 0x2A80($v0)
    ctx->pc = 0x31f1a0u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 10880), GPR_VEC(ctx, 0));
    // 0x31f1a4: 0x3c0201da  lui         $v0, 0x1DA
    ctx->pc = 0x31f1a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)474 << 16));
    // 0x31f1a8: 0xc0433b8  jal         func_10CEE0
    ctx->pc = 0x31F1A8u;
    SET_GPR_U32(ctx, 31, 0x31F1B0u);
    ctx->pc = 0x31F1ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31F1A8u;
    // 0x31f1ac: 0xac432a80  sw          $v1, 0x2A80($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 10880), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CEE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CEE0u, 0x31F1A8u, 0x31F1B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31F1B0u;
label_31f1b0:
    // 0x31f1b0: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x31f1b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x31f1b4: 0x3c0501da  lui         $a1, 0x1DA
    ctx->pc = 0x31f1b4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)474 << 16));
    // 0x31f1b8: 0x8c44e688  lw          $a0, -0x1978($v0)
    ctx->pc = 0x31f1b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960776)));
    // 0x31f1bc: 0xc040a04  jal         func_102810
    ctx->pc = 0x31F1BCu;
    SET_GPR_U32(ctx, 31, 0x31F1C4u);
    ctx->pc = 0x31F1C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31F1BCu;
    // 0x31f1c0: 0x24a52a20  addiu       $a1, $a1, 0x2A20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 10784));
    ctx->in_delay_slot = false;
    ctx->pc = 0x102810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102810u, 0x31F1BCu, 0x31F1C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31F1C4u;
label_31f1c4:
    // 0x31f1c4: 0x3c031001  lui         $v1, 0x1001
    ctx->pc = 0x31f1c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4097 << 16));
label_31f1c8:
    // 0x31f1c8: 0x8c64a000  lw          $a0, -0x6000($v1)
    ctx->pc = 0x31f1c8u;
    SET_GPR_S32(ctx, 4, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 4294942720))); // MMIO: 0x1000a000
    // 0x31f1cc: 0x30840100  andi        $a0, $a0, 0x100
    ctx->pc = 0x31f1ccu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)256);
    // 0x31f1d0: 0x0  nop
    ctx->pc = 0x31f1d0u;
    // NOP
    // 0x31f1d4: 0x0  nop
    ctx->pc = 0x31f1d4u;
    // NOP
    // 0x31f1d8: 0x0  nop
    ctx->pc = 0x31f1d8u;
    // NOP
    // 0x31f1dc: 0x1480fffa  bnez        $a0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x31F1DCu;
    {
        const bool branch_taken_0x31f1dc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x31f1dc) {
            ctx->pc = 0x31F1C8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_31f1c8;
        }
    }
    ctx->pc = 0x31F1E4u;
    // 0x31f1e4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x31f1e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x31f1e8: 0x3e00008  jr          $ra
    ctx->pc = 0x31F1E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31F1ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31F1E8u;
        // 0x31f1ec: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31F1E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31F1F0u;
}
