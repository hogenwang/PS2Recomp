#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001520E0
// Address: 0x1520e0 - 0x152150
void sub_001520E0_0x1520e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001520E0_0x1520e0");
#endif

    switch (ctx->pc) {
        case 0x152108u: goto label_152108;
        case 0x152118u: goto label_152118;
        case 0x152120u: goto label_152120;
        case 0x152138u: goto label_152138;
        case 0x152140u: goto label_152140;
        default: break;
    }

    ctx->pc = 0x1520e0u;

    // 0x1520e0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1520e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1520e4: 0x3c030093  lui         $v1, 0x93
    ctx->pc = 0x1520e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)147 << 16));
    // 0x1520e8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1520e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1520ec: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1520ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1520f0: 0x9463f348  lhu         $v1, -0xCB8($v1)
    ctx->pc = 0x1520f0u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4294964040)));
    // 0x1520f4: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x1520f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x1520f8: 0x14600011  bnez        $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x1520F8u;
    {
        const bool branch_taken_0x1520f8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1520FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1520F8u;
            // 0x1520fc: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1520f8) {
            ctx->pc = 0x152140u;
            goto label_152140;
        }
    }
    ctx->pc = 0x152100u;
    // 0x152100: 0xc0ca814  jal         func_32A050
    ctx->pc = 0x152100u;
    SET_GPR_U32(ctx, 31, 0x152108u);
    ctx->pc = 0x32A050u;
    if (runtime->hasFunction(0x32A050u)) {
        auto targetFn = runtime->lookupFunction(0x32A050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x152108u; }
        if (ctx->pc != 0x152108u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0032A050_0x32a050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x152108u; }
        if (ctx->pc != 0x152108u) { return; }
    }
    ctx->pc = 0x152108u;
label_152108:
    // 0x152108: 0x92060078  lbu         $a2, 0x78($s0)
    ctx->pc = 0x152108u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 120)));
    // 0x15210c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x15210cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x152110: 0xc0c8720  jal         func_321C80
    ctx->pc = 0x152110u;
    SET_GPR_U32(ctx, 31, 0x152118u);
    ctx->pc = 0x152114u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x152110u;
            // 0x152114: 0x26050124  addiu       $a1, $s0, 0x124 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 292));
        ctx->in_delay_slot = false;
    ctx->pc = 0x321C80u;
    if (runtime->hasFunction(0x321C80u)) {
        auto targetFn = runtime->lookupFunction(0x321C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x152118u; }
        if (ctx->pc != 0x152118u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00321C80_0x321c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x152118u; }
        if (ctx->pc != 0x152118u) { return; }
    }
    ctx->pc = 0x152118u;
label_152118:
    // 0x152118: 0xc058784  jal         func_161E10
    ctx->pc = 0x152118u;
    SET_GPR_U32(ctx, 31, 0x152120u);
    ctx->pc = 0x15211Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x152118u;
            // 0x15211c: 0x2604004c  addiu       $a0, $s0, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 76));
        ctx->in_delay_slot = false;
    ctx->pc = 0x161E10u;
    if (runtime->hasFunction(0x161E10u)) {
        auto targetFn = runtime->lookupFunction(0x161E10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x152120u; }
        if (ctx->pc != 0x152120u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00161E10_0x161e10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x152120u; }
        if (ctx->pc != 0x152120u) { return; }
    }
    ctx->pc = 0x152120u;
label_152120:
    // 0x152120: 0xc600004c  lwc1        $f0, 0x4C($s0)
    ctx->pc = 0x152120u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x152124: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x152124u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x152128: 0xe600007c  swc1        $f0, 0x7C($s0)
    ctx->pc = 0x152128u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 124), bits); }
    // 0x15212c: 0xc6000050  lwc1        $f0, 0x50($s0)
    ctx->pc = 0x15212cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x152130: 0xc054854  jal         func_152150
    ctx->pc = 0x152130u;
    SET_GPR_U32(ctx, 31, 0x152138u);
    ctx->pc = 0x152134u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x152130u;
            // 0x152134: 0xe6000080  swc1        $f0, 0x80($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 128), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x152150u;
    if (runtime->hasFunction(0x152150u)) {
        auto targetFn = runtime->lookupFunction(0x152150u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x152138u; }
        if (ctx->pc != 0x152138u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00152150_0x152150(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x152138u; }
        if (ctx->pc != 0x152138u) { return; }
    }
    ctx->pc = 0x152138u;
label_152138:
    // 0x152138: 0xc054888  jal         func_152220
    ctx->pc = 0x152138u;
    SET_GPR_U32(ctx, 31, 0x152140u);
    ctx->pc = 0x15213Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x152138u;
            // 0x15213c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x152220u;
    if (runtime->hasFunction(0x152220u)) {
        auto targetFn = runtime->lookupFunction(0x152220u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x152140u; }
        if (ctx->pc != 0x152140u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00152220_0x152220(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x152140u; }
        if (ctx->pc != 0x152140u) { return; }
    }
    ctx->pc = 0x152140u;
label_152140:
    // 0x152140: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x152140u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x152144: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x152144u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x152148: 0x3e00008  jr          $ra
    ctx->pc = 0x152148u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15214Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x152148u;
            // 0x15214c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x152150u;
    ctx->pc = 0x152150u;
}
