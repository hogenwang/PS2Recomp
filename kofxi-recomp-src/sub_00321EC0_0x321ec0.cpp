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

// Function: sub_00321EC0
// Address: 0x321ec0 - 0x321f70
void sub_00321EC0_0x321ec0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00321EC0_0x321ec0");
#endif

    ctx->pc = 0x321ec0u;

    // 0x321ec0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x321ec0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x321ec4: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x321ec4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x321ec8: 0x5d2821  addu        $a1, $v0, $sp
    ctx->pc = 0x321ec8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x321ecc: 0x3c03003d  lui         $v1, 0x3D
    ctx->pc = 0x321eccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)61 << 16));
    // 0x321ed0: 0x3c02003d  lui         $v0, 0x3D
    ctx->pc = 0x321ed0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61 << 16));
    // 0x321ed4: 0xc4400cf0  lwc1        $f0, 0xCF0($v0)
    ctx->pc = 0x321ed4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 3312)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x321ed8: 0x3c02003d  lui         $v0, 0x3D
    ctx->pc = 0x321ed8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61 << 16));
    // 0x321edc: 0xc4420cf4  lwc1        $f2, 0xCF4($v0)
    ctx->pc = 0x321edcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 3316)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x321ee0: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x321ee0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x321ee4: 0x3c02003d  lui         $v0, 0x3D
    ctx->pc = 0x321ee4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61 << 16));
    // 0x321ee8: 0xc4410cf8  lwc1        $f1, 0xCF8($v0)
    ctx->pc = 0x321ee8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 3320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x321eec: 0xe7a20004  swc1        $f2, 0x4($sp)
    ctx->pc = 0x321eecu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x321ef0: 0x3c02003d  lui         $v0, 0x3D
    ctx->pc = 0x321ef0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61 << 16));
    // 0x321ef4: 0xc4400cfc  lwc1        $f0, 0xCFC($v0)
    ctx->pc = 0x321ef4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 3324)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x321ef8: 0xe7a10008  swc1        $f1, 0x8($sp)
    ctx->pc = 0x321ef8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x321efc: 0x3c02003d  lui         $v0, 0x3D
    ctx->pc = 0x321efcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61 << 16));
    // 0x321f00: 0xc4410d00  lwc1        $f1, 0xD00($v0)
    ctx->pc = 0x321f00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 3328)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x321f04: 0xe7a0000c  swc1        $f0, 0xC($sp)
    ctx->pc = 0x321f04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x321f08: 0x3c02003d  lui         $v0, 0x3D
    ctx->pc = 0x321f08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61 << 16));
    // 0x321f0c: 0xc4400d04  lwc1        $f0, 0xD04($v0)
    ctx->pc = 0x321f0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 3332)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x321f10: 0xe7a10010  swc1        $f1, 0x10($sp)
    ctx->pc = 0x321f10u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x321f14: 0x3c02003d  lui         $v0, 0x3D
    ctx->pc = 0x321f14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61 << 16));
    // 0x321f18: 0xc4410d08  lwc1        $f1, 0xD08($v0)
    ctx->pc = 0x321f18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 3336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x321f1c: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x321f1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x321f20: 0xc4600d0c  lwc1        $f0, 0xD0C($v1)
    ctx->pc = 0x321f20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 3340)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x321f24: 0xe7a10018  swc1        $f1, 0x18($sp)
    ctx->pc = 0x321f24u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x321f28: 0x3c02003d  lui         $v0, 0x3D
    ctx->pc = 0x321f28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61 << 16));
    // 0x321f2c: 0xc4410d10  lwc1        $f1, 0xD10($v0)
    ctx->pc = 0x321f2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 3344)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x321f30: 0xe7a0001c  swc1        $f0, 0x1C($sp)
    ctx->pc = 0x321f30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x321f34: 0x3c02003d  lui         $v0, 0x3D
    ctx->pc = 0x321f34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61 << 16));
    // 0x321f38: 0xc4400d14  lwc1        $f0, 0xD14($v0)
    ctx->pc = 0x321f38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 3348)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x321f3c: 0xe7a10020  swc1        $f1, 0x20($sp)
    ctx->pc = 0x321f3cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x321f40: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x321f40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x321f44: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x321f44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x321f48: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x321F48u;
    {
        const bool branch_taken_0x321f48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x321F4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321F48u;
        // 0x321f4c: 0x82001a  div         $zero, $a0, $v0 (Delay Slot)
        { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 4);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
        ctx->in_delay_slot = false;
        if (branch_taken_0x321f48) {
            ctx->pc = 0x321F54u;
            goto label_321f54;
        }
    }
    ctx->pc = 0x321F50u;
    // 0x321f50: 0x1cd  break       0, 7
    ctx->pc = 0x321f50u;
    runtime->handleBreak(rdram, ctx);
label_321f54:
    // 0x321f54: 0x1812  mflo        $v1
    ctx->pc = 0x321f54u;
    SET_GPR_U64(ctx, 3, ctx->lo);
    // 0x321f58: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x321f58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x321f5c: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x321f5cu;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x321f60: 0x1010  mfhi        $v0
    ctx->pc = 0x321f60u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x321f64: 0x3e00008  jr          $ra
    ctx->pc = 0x321F64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x321F68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321F64u;
        // 0x321f68: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x321F64u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x321F6Cu;
    // 0x321f6c: 0x0  nop
    ctx->pc = 0x321f6cu;
    // NOP
}
