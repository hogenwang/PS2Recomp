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

// Function: sub_00309A20
// Address: 0x309a20 - 0x309ca0
void sub_00309A20_0x309a20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00309A20_0x309a20");
#endif

    switch (ctx->pc) {
        case 0x309a40u: goto label_309a40;
        default: break;
    }

    ctx->pc = 0x309a20u;

    // 0x309a20: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x309a20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x309a24: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x309a24u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x309a28: 0x3c0501d3  lui         $a1, 0x1D3
    ctx->pc = 0x309a28u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)467 << 16));
    // 0x309a2c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x309a2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x309a30: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x309a30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x309a34: 0x24a51f00  addiu       $a1, $a1, 0x1F00
    ctx->pc = 0x309a34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 7936));
    // 0x309a38: 0xc0c275c  jal         func_309D70
    ctx->pc = 0x309A38u;
    SET_GPR_U32(ctx, 31, 0x309A40u);
    ctx->pc = 0x309A3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x309A38u;
    // 0x309a3c: 0x24070008  addiu       $a3, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x309D70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x309D70u, 0x309A38u, 0x309A40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x309A40u;
label_309a40:
    // 0x309a40: 0xc7a20010  lwc1        $f2, 0x10($sp)
    ctx->pc = 0x309a40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x309a44: 0x3c0244d8  lui         $v0, 0x44D8
    ctx->pc = 0x309a44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17624 << 16));
    // 0x309a48: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x309a48u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x309a4c: 0x0  nop
    ctx->pc = 0x309a4cu;
    // NOP
    // 0x309a50: 0x46011034  c.lt.s      $f2, $f1
    ctx->pc = 0x309a50u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x309a54: 0x45020020  bc1fl       . + 4 + (0x20 << 2)
    ctx->pc = 0x309A54u;
    {
        const bool branch_taken_0x309a54 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x309a54) {
            ctx->pc = 0x309A58u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x309A54u;
            // 0x309a58: 0x3c024514  lui         $v0, 0x4514 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17684 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x309AD8u;
            goto label_309ad8;
        }
    }
    ctx->pc = 0x309A5Cu;
    // 0x309a5c: 0xc7a00020  lwc1        $f0, 0x20($sp)
    ctx->pc = 0x309a5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x309a60: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x309a60u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x309a64: 0x4500001b  bc1f        . + 4 + (0x1B << 2)
    ctx->pc = 0x309A64u;
    {
        const bool branch_taken_0x309a64 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x309a64) {
            ctx->pc = 0x309AD4u;
            goto label_309ad4;
        }
    }
    ctx->pc = 0x309A6Cu;
    // 0x309a6c: 0xc7a00030  lwc1        $f0, 0x30($sp)
    ctx->pc = 0x309a6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x309a70: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x309a70u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x309a74: 0x45000017  bc1f        . + 4 + (0x17 << 2)
    ctx->pc = 0x309A74u;
    {
        const bool branch_taken_0x309a74 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x309a74) {
            ctx->pc = 0x309AD4u;
            goto label_309ad4;
        }
    }
    ctx->pc = 0x309A7Cu;
    // 0x309a7c: 0xc7a00040  lwc1        $f0, 0x40($sp)
    ctx->pc = 0x309a7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x309a80: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x309a80u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x309a84: 0x45000013  bc1f        . + 4 + (0x13 << 2)
    ctx->pc = 0x309A84u;
    {
        const bool branch_taken_0x309a84 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x309a84) {
            ctx->pc = 0x309AD4u;
            goto label_309ad4;
        }
    }
    ctx->pc = 0x309A8Cu;
    // 0x309a8c: 0xc7a00050  lwc1        $f0, 0x50($sp)
    ctx->pc = 0x309a8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x309a90: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x309a90u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x309a94: 0x4500000f  bc1f        . + 4 + (0xF << 2)
    ctx->pc = 0x309A94u;
    {
        const bool branch_taken_0x309a94 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x309a94) {
            ctx->pc = 0x309AD4u;
            goto label_309ad4;
        }
    }
    ctx->pc = 0x309A9Cu;
    // 0x309a9c: 0xc7a00060  lwc1        $f0, 0x60($sp)
    ctx->pc = 0x309a9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x309aa0: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x309aa0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x309aa4: 0x4500000b  bc1f        . + 4 + (0xB << 2)
    ctx->pc = 0x309AA4u;
    {
        const bool branch_taken_0x309aa4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x309aa4) {
            ctx->pc = 0x309AD4u;
            goto label_309ad4;
        }
    }
    ctx->pc = 0x309AACu;
    // 0x309aac: 0xc7a00070  lwc1        $f0, 0x70($sp)
    ctx->pc = 0x309aacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x309ab0: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x309ab0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x309ab4: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x309AB4u;
    {
        const bool branch_taken_0x309ab4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x309ab4) {
            ctx->pc = 0x309AD4u;
            goto label_309ad4;
        }
    }
    ctx->pc = 0x309ABCu;
    // 0x309abc: 0xc7a00080  lwc1        $f0, 0x80($sp)
    ctx->pc = 0x309abcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x309ac0: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x309ac0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x309ac4: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x309AC4u;
    {
        const bool branch_taken_0x309ac4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x309ac4) {
            ctx->pc = 0x309AD4u;
            goto label_309ad4;
        }
    }
    ctx->pc = 0x309ACCu;
    // 0x309acc: 0x1000006f  b           . + 4 + (0x6F << 2)
    ctx->pc = 0x309ACCu;
    {
        const bool branch_taken_0x309acc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x309AD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x309ACCu;
        // 0x309ad0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x309acc) {
            ctx->pc = 0x309C8Cu;
            goto label_309c8c;
        }
    }
    ctx->pc = 0x309AD4u;
label_309ad4:
    // 0x309ad4: 0x3c024514  lui         $v0, 0x4514
    ctx->pc = 0x309ad4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17684 << 16));
label_309ad8:
    // 0x309ad8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x309ad8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x309adc: 0x0  nop
    ctx->pc = 0x309adcu;
    // NOP
    // 0x309ae0: 0x46011036  c.le.s      $f2, $f1
    ctx->pc = 0x309ae0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x309ae4: 0x45030020  bc1tl       . + 4 + (0x20 << 2)
    ctx->pc = 0x309AE4u;
    {
        const bool branch_taken_0x309ae4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x309ae4) {
            ctx->pc = 0x309AE8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x309AE4u;
            // 0x309ae8: 0xc7a20014  lwc1        $f2, 0x14($sp) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x309B68u;
            goto label_309b68;
        }
    }
    ctx->pc = 0x309AECu;
    // 0x309aec: 0xc7a00020  lwc1        $f0, 0x20($sp)
    ctx->pc = 0x309aecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x309af0: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x309af0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x309af4: 0x4501001b  bc1t        . + 4 + (0x1B << 2)
    ctx->pc = 0x309AF4u;
    {
        const bool branch_taken_0x309af4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x309af4) {
            ctx->pc = 0x309B64u;
            goto label_309b64;
        }
    }
    ctx->pc = 0x309AFCu;
    // 0x309afc: 0xc7a00030  lwc1        $f0, 0x30($sp)
    ctx->pc = 0x309afcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x309b00: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x309b00u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x309b04: 0x45010017  bc1t        . + 4 + (0x17 << 2)
    ctx->pc = 0x309B04u;
    {
        const bool branch_taken_0x309b04 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x309b04) {
            ctx->pc = 0x309B64u;
            goto label_309b64;
        }
    }
    ctx->pc = 0x309B0Cu;
    // 0x309b0c: 0xc7a00040  lwc1        $f0, 0x40($sp)
    ctx->pc = 0x309b0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x309b10: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x309b10u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x309b14: 0x45010013  bc1t        . + 4 + (0x13 << 2)
    ctx->pc = 0x309B14u;
    {
        const bool branch_taken_0x309b14 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x309b14) {
            ctx->pc = 0x309B64u;
            goto label_309b64;
        }
    }
    ctx->pc = 0x309B1Cu;
    // 0x309b1c: 0xc7a00050  lwc1        $f0, 0x50($sp)
    ctx->pc = 0x309b1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x309b20: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x309b20u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x309b24: 0x4501000f  bc1t        . + 4 + (0xF << 2)
    ctx->pc = 0x309B24u;
    {
        const bool branch_taken_0x309b24 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x309b24) {
            ctx->pc = 0x309B64u;
            goto label_309b64;
        }
    }
    ctx->pc = 0x309B2Cu;
    // 0x309b2c: 0xc7a00060  lwc1        $f0, 0x60($sp)
    ctx->pc = 0x309b2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x309b30: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x309b30u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x309b34: 0x4501000b  bc1t        . + 4 + (0xB << 2)
    ctx->pc = 0x309B34u;
    {
        const bool branch_taken_0x309b34 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x309b34) {
            ctx->pc = 0x309B64u;
            goto label_309b64;
        }
    }
    ctx->pc = 0x309B3Cu;
    // 0x309b3c: 0xc7a00070  lwc1        $f0, 0x70($sp)
    ctx->pc = 0x309b3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x309b40: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x309b40u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x309b44: 0x45010007  bc1t        . + 4 + (0x7 << 2)
    ctx->pc = 0x309B44u;
    {
        const bool branch_taken_0x309b44 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x309b44) {
            ctx->pc = 0x309B64u;
            goto label_309b64;
        }
    }
    ctx->pc = 0x309B4Cu;
    // 0x309b4c: 0xc7a00080  lwc1        $f0, 0x80($sp)
    ctx->pc = 0x309b4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x309b50: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x309b50u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x309b54: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x309B54u;
    {
        const bool branch_taken_0x309b54 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x309b54) {
            ctx->pc = 0x309B64u;
            goto label_309b64;
        }
    }
    ctx->pc = 0x309B5Cu;
    // 0x309b5c: 0x1000004b  b           . + 4 + (0x4B << 2)
    ctx->pc = 0x309B5Cu;
    {
        const bool branch_taken_0x309b5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x309B60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x309B5Cu;
        // 0x309b60: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x309b5c) {
            ctx->pc = 0x309C8Cu;
            goto label_309c8c;
        }
    }
    ctx->pc = 0x309B64u;
label_309b64:
    // 0x309b64: 0xc7a20014  lwc1        $f2, 0x14($sp)
    ctx->pc = 0x309b64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_309b68:
    // 0x309b68: 0x3c02450e  lui         $v0, 0x450E
    ctx->pc = 0x309b68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17678 << 16));
    // 0x309b6c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x309b6cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x309b70: 0x0  nop
    ctx->pc = 0x309b70u;
    // NOP
    // 0x309b74: 0x46011036  c.le.s      $f2, $f1
    ctx->pc = 0x309b74u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x309b78: 0x45030020  bc1tl       . + 4 + (0x20 << 2)
    ctx->pc = 0x309B78u;
    {
        const bool branch_taken_0x309b78 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x309b78) {
            ctx->pc = 0x309B7Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x309B78u;
            // 0x309b7c: 0x3c0244e4  lui         $v0, 0x44E4 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17636 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x309BFCu;
            goto label_309bfc;
        }
    }
    ctx->pc = 0x309B80u;
    // 0x309b80: 0xc7a00024  lwc1        $f0, 0x24($sp)
    ctx->pc = 0x309b80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x309b84: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x309b84u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x309b88: 0x4501001b  bc1t        . + 4 + (0x1B << 2)
    ctx->pc = 0x309B88u;
    {
        const bool branch_taken_0x309b88 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x309b88) {
            ctx->pc = 0x309BF8u;
            goto label_309bf8;
        }
    }
    ctx->pc = 0x309B90u;
    // 0x309b90: 0xc7a00034  lwc1        $f0, 0x34($sp)
    ctx->pc = 0x309b90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x309b94: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x309b94u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x309b98: 0x45010017  bc1t        . + 4 + (0x17 << 2)
    ctx->pc = 0x309B98u;
    {
        const bool branch_taken_0x309b98 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x309b98) {
            ctx->pc = 0x309BF8u;
            goto label_309bf8;
        }
    }
    ctx->pc = 0x309BA0u;
    // 0x309ba0: 0xc7a00044  lwc1        $f0, 0x44($sp)
    ctx->pc = 0x309ba0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x309ba4: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x309ba4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x309ba8: 0x45010013  bc1t        . + 4 + (0x13 << 2)
    ctx->pc = 0x309BA8u;
    {
        const bool branch_taken_0x309ba8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x309ba8) {
            ctx->pc = 0x309BF8u;
            goto label_309bf8;
        }
    }
    ctx->pc = 0x309BB0u;
    // 0x309bb0: 0xc7a00054  lwc1        $f0, 0x54($sp)
    ctx->pc = 0x309bb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x309bb4: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x309bb4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x309bb8: 0x4501000f  bc1t        . + 4 + (0xF << 2)
    ctx->pc = 0x309BB8u;
    {
        const bool branch_taken_0x309bb8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x309bb8) {
            ctx->pc = 0x309BF8u;
            goto label_309bf8;
        }
    }
    ctx->pc = 0x309BC0u;
    // 0x309bc0: 0xc7a00064  lwc1        $f0, 0x64($sp)
    ctx->pc = 0x309bc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x309bc4: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x309bc4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x309bc8: 0x4501000b  bc1t        . + 4 + (0xB << 2)
    ctx->pc = 0x309BC8u;
    {
        const bool branch_taken_0x309bc8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x309bc8) {
            ctx->pc = 0x309BF8u;
            goto label_309bf8;
        }
    }
    ctx->pc = 0x309BD0u;
    // 0x309bd0: 0xc7a00074  lwc1        $f0, 0x74($sp)
    ctx->pc = 0x309bd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x309bd4: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x309bd4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x309bd8: 0x45010007  bc1t        . + 4 + (0x7 << 2)
    ctx->pc = 0x309BD8u;
    {
        const bool branch_taken_0x309bd8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x309bd8) {
            ctx->pc = 0x309BF8u;
            goto label_309bf8;
        }
    }
    ctx->pc = 0x309BE0u;
    // 0x309be0: 0xc7a00084  lwc1        $f0, 0x84($sp)
    ctx->pc = 0x309be0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x309be4: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x309be4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x309be8: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x309BE8u;
    {
        const bool branch_taken_0x309be8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x309be8) {
            ctx->pc = 0x309BF8u;
            goto label_309bf8;
        }
    }
    ctx->pc = 0x309BF0u;
    // 0x309bf0: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x309BF0u;
    {
        const bool branch_taken_0x309bf0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x309BF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x309BF0u;
        // 0x309bf4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x309bf0) {
            ctx->pc = 0x309C8Cu;
            goto label_309c8c;
        }
    }
    ctx->pc = 0x309BF8u;
label_309bf8:
    // 0x309bf8: 0x3c0244e4  lui         $v0, 0x44E4
    ctx->pc = 0x309bf8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17636 << 16));
label_309bfc:
    // 0x309bfc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x309bfcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x309c00: 0x0  nop
    ctx->pc = 0x309c00u;
    // NOP
    // 0x309c04: 0x46011034  c.lt.s      $f2, $f1
    ctx->pc = 0x309c04u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x309c08: 0x45020020  bc1fl       . + 4 + (0x20 << 2)
    ctx->pc = 0x309C08u;
    {
        const bool branch_taken_0x309c08 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x309c08) {
            ctx->pc = 0x309C0Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x309C08u;
            // 0x309c0c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x309C8Cu;
            goto label_309c8c;
        }
    }
    ctx->pc = 0x309C10u;
    // 0x309c10: 0xc7a00024  lwc1        $f0, 0x24($sp)
    ctx->pc = 0x309c10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x309c14: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x309c14u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x309c18: 0x4500001b  bc1f        . + 4 + (0x1B << 2)
    ctx->pc = 0x309C18u;
    {
        const bool branch_taken_0x309c18 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x309c18) {
            ctx->pc = 0x309C88u;
            goto label_309c88;
        }
    }
    ctx->pc = 0x309C20u;
    // 0x309c20: 0xc7a00034  lwc1        $f0, 0x34($sp)
    ctx->pc = 0x309c20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x309c24: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x309c24u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x309c28: 0x45000017  bc1f        . + 4 + (0x17 << 2)
    ctx->pc = 0x309C28u;
    {
        const bool branch_taken_0x309c28 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x309c28) {
            ctx->pc = 0x309C88u;
            goto label_309c88;
        }
    }
    ctx->pc = 0x309C30u;
    // 0x309c30: 0xc7a00044  lwc1        $f0, 0x44($sp)
    ctx->pc = 0x309c30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x309c34: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x309c34u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x309c38: 0x45000013  bc1f        . + 4 + (0x13 << 2)
    ctx->pc = 0x309C38u;
    {
        const bool branch_taken_0x309c38 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x309c38) {
            ctx->pc = 0x309C88u;
            goto label_309c88;
        }
    }
    ctx->pc = 0x309C40u;
    // 0x309c40: 0xc7a00054  lwc1        $f0, 0x54($sp)
    ctx->pc = 0x309c40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x309c44: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x309c44u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x309c48: 0x4500000f  bc1f        . + 4 + (0xF << 2)
    ctx->pc = 0x309C48u;
    {
        const bool branch_taken_0x309c48 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x309c48) {
            ctx->pc = 0x309C88u;
            goto label_309c88;
        }
    }
    ctx->pc = 0x309C50u;
    // 0x309c50: 0xc7a00064  lwc1        $f0, 0x64($sp)
    ctx->pc = 0x309c50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x309c54: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x309c54u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x309c58: 0x4500000b  bc1f        . + 4 + (0xB << 2)
    ctx->pc = 0x309C58u;
    {
        const bool branch_taken_0x309c58 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x309c58) {
            ctx->pc = 0x309C88u;
            goto label_309c88;
        }
    }
    ctx->pc = 0x309C60u;
    // 0x309c60: 0xc7a00074  lwc1        $f0, 0x74($sp)
    ctx->pc = 0x309c60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x309c64: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x309c64u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x309c68: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x309C68u;
    {
        const bool branch_taken_0x309c68 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x309c68) {
            ctx->pc = 0x309C88u;
            goto label_309c88;
        }
    }
    ctx->pc = 0x309C70u;
    // 0x309c70: 0xc7a00084  lwc1        $f0, 0x84($sp)
    ctx->pc = 0x309c70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x309c74: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x309c74u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x309c78: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x309C78u;
    {
        const bool branch_taken_0x309c78 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x309c78) {
            ctx->pc = 0x309C88u;
            goto label_309c88;
        }
    }
    ctx->pc = 0x309C80u;
    // 0x309c80: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x309C80u;
    {
        const bool branch_taken_0x309c80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x309C84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x309C80u;
        // 0x309c84: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x309c80) {
            ctx->pc = 0x309C8Cu;
            goto label_309c8c;
        }
    }
    ctx->pc = 0x309C88u;
label_309c88:
    // 0x309c88: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x309c88u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_309c8c:
    // 0x309c8c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x309c8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x309c90: 0x3e00008  jr          $ra
    ctx->pc = 0x309C90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x309C94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x309C90u;
        // 0x309c94: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x309C90u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x309C98u;
    // 0x309c98: 0x0  nop
    ctx->pc = 0x309c98u;
    // NOP
    // 0x309c9c: 0x0  nop
    ctx->pc = 0x309c9cu;
    // NOP
}
