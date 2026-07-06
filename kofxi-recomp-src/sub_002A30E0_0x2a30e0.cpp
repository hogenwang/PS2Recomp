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

// Function: sub_002A30E0
// Address: 0x2a30e0 - 0x2a3368
void sub_002A30E0_0x2a30e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A30E0_0x2a30e0");
#endif

    switch (ctx->pc) {
        case 0x2a30f4u: goto label_2a30f4;
        case 0x2a3140u: goto label_2a3140;
        case 0x2a3178u: goto label_2a3178;
        case 0x2a31e4u: goto label_2a31e4;
        case 0x2a31f8u: goto label_2a31f8;
        case 0x2a3248u: goto label_2a3248;
        case 0x2a329cu: goto label_2a329c;
        case 0x2a3308u: goto label_2a3308;
        case 0x2a3328u: goto label_2a3328;
        case 0x2a3334u: goto label_2a3334;
        case 0x2a3340u: goto label_2a3340;
        case 0x2a334cu: goto label_2a334c;
        case 0x2a3358u: goto label_2a3358;
        default: break;
    }

    ctx->pc = 0x2a30e0u;

label_2a30e0:
    // 0x2a30e0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2a30e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2a30e4: 0x3c04002a  lui         $a0, 0x2A
    ctx->pc = 0x2a30e4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)42 << 16));
    // 0x2a30e8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2a30e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2a30ec: 0xc0a8a50  jal         func_2A2940
    ctx->pc = 0x2A30ECu;
    SET_GPR_U32(ctx, 31, 0x2A30F4u);
    ctx->pc = 0x2A30F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A30ECu;
    // 0x2a30f0: 0x24843088  addiu       $a0, $a0, 0x3088 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12424));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A2940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A2940u, 0x2A30ECu, 0x2A30F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A30F4u;
label_2a30f4:
    // 0x2a30f4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2a30f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2a30f8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2a30f8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a30fc: 0x3e00008  jr          $ra
    ctx->pc = 0x2A30FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A3100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A30FCu;
        // 0x2a3100: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A30FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A3104u;
    // 0x2a3104: 0x0  nop
    ctx->pc = 0x2a3104u;
    // NOP
    // 0x2a3108: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x2a3108u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x2a310c: 0xffb30050  sd          $s3, 0x50($sp)
    ctx->pc = 0x2a310cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 19));
    // 0x2a3110: 0xffb10030  sd          $s1, 0x30($sp)
    ctx->pc = 0x2a3110u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 17));
    // 0x2a3114: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x2a3114u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a3118: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x2a3118u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x2a311c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2a311cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a3120: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2a3120u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a3124: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x2a3124u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
    // 0x2a3128: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x2a3128u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x2a312c: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x2a312cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a3130: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2a3130u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a3134: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2a3134u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a3138: 0xc049cb6  jal         func_1272D8
    ctx->pc = 0x2A3138u;
    SET_GPR_U32(ctx, 31, 0x2A3140u);
    ctx->pc = 0x2A313Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A3138u;
    // 0x2a313c: 0x24060014  addiu       $a2, $zero, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1272D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1272D8u, 0x2A3138u, 0x2A3140u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A3140u;
label_2a3140:
    // 0x2a3140: 0x12000016  beqz        $s0, . + 4 + (0x16 << 2)
    ctx->pc = 0x2A3140u;
    {
        const bool branch_taken_0x2a3140 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A3144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A3140u;
        // 0x2a3144: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a3140) {
            ctx->pc = 0x2A319Cu;
            goto label_2a319c;
        }
    }
    ctx->pc = 0x2A3148u;
    // 0x2a3148: 0x12200007  beqz        $s1, . + 4 + (0x7 << 2)
    ctx->pc = 0x2A3148u;
    {
        const bool branch_taken_0x2a3148 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A314Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A3148u;
        // 0x2a314c: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a3148) {
            ctx->pc = 0x2A3168u;
            goto label_2a3168;
        }
    }
    ctx->pc = 0x2A3150u;
    // 0x2a3150: 0x6a220007  ldl         $v0, 0x7($s1)
    ctx->pc = 0x2a3150u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x2a3154: 0x6e220000  ldr         $v0, 0x0($s1)
    ctx->pc = 0x2a3154u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x2a3158: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x2a3158u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x2a315c: 0xb3a2000f  sdl         $v0, 0xF($sp)
    ctx->pc = 0x2a315cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2a3160: 0xb7a20008  sdr         $v0, 0x8($sp)
    ctx->pc = 0x2a3160u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2a3164: 0xafa30010  sw          $v1, 0x10($sp)
    ctx->pc = 0x2a3164u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
label_2a3168:
    // 0x2a3168: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x2a3168u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a316c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2a316cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a3170: 0xc0afb76  jal         func_2BEDD8
    ctx->pc = 0x2A3170u;
    SET_GPR_U32(ctx, 31, 0x2A3178u);
    ctx->pc = 0x2A3174u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A3170u;
    // 0x2a3174: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BEDD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BEDD8u, 0x2A3170u, 0x2A3178u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A3178u;
label_2a3178:
    // 0x2a3178: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2A3178u;
    {
        const bool branch_taken_0x2a3178 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A317Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A3178u;
        // 0x2a317c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a3178) {
            ctx->pc = 0x2A319Cu;
            goto label_2a319c;
        }
    }
    ctx->pc = 0x2A3180u;
    // 0x2a3180: 0x6ba6000f  ldl         $a2, 0xF($sp)
    ctx->pc = 0x2a3180u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x2a3184: 0x6fa60008  ldr         $a2, 0x8($sp)
    ctx->pc = 0x2a3184u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x2a3188: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x2a3188u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a318c: 0xb2060007  sdl         $a2, 0x7($s0)
    ctx->pc = 0x2a318cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2a3190: 0xb6060000  sdr         $a2, 0x0($s0)
    ctx->pc = 0x2a3190u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2a3194: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x2a3194u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
    // 0x2a3198: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2a3198u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2a319c:
    // 0x2a319c: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x2a319cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2a31a0: 0xdfb30050  ld          $s3, 0x50($sp)
    ctx->pc = 0x2a31a0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2a31a4: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x2a31a4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2a31a8: 0xdfb10030  ld          $s1, 0x30($sp)
    ctx->pc = 0x2a31a8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2a31ac: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x2a31acu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2a31b0: 0x3e00008  jr          $ra
    ctx->pc = 0x2A31B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A31B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A31B0u;
        // 0x2a31b4: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A31B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A31B8u;
    // 0x2a31b8: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x2a31b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x2a31bc: 0x24060014  addiu       $a2, $zero, 0x14
    ctx->pc = 0x2a31bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x2a31c0: 0xffb20070  sd          $s2, 0x70($sp)
    ctx->pc = 0x2a31c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 18));
    // 0x2a31c4: 0xffb10060  sd          $s1, 0x60($sp)
    ctx->pc = 0x2a31c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 17));
    // 0x2a31c8: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x2a31c8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a31cc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2a31ccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a31d0: 0xffb00050  sd          $s0, 0x50($sp)
    ctx->pc = 0x2a31d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 16));
    // 0x2a31d4: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x2a31d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x2a31d8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2a31d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a31dc: 0xc049cb6  jal         func_1272D8
    ctx->pc = 0x2A31DCu;
    SET_GPR_U32(ctx, 31, 0x2A31E4u);
    ctx->pc = 0x2A31E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A31DCu;
    // 0x2a31e0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1272D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1272D8u, 0x2A31DCu, 0x2A31E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A31E4u;
label_2a31e4:
    // 0x2a31e4: 0x27b00020  addiu       $s0, $sp, 0x20
    ctx->pc = 0x2a31e4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2a31e8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2a31e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a31ec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2a31ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a31f0: 0xc049cb6  jal         func_1272D8
    ctx->pc = 0x2A31F0u;
    SET_GPR_U32(ctx, 31, 0x2A31F8u);
    ctx->pc = 0x2A31F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A31F0u;
    // 0x2a31f4: 0x24060014  addiu       $a2, $zero, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1272D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1272D8u, 0x2A31F0u, 0x2A31F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A31F8u;
label_2a31f8:
    // 0x2a31f8: 0x12200007  beqz        $s1, . + 4 + (0x7 << 2)
    ctx->pc = 0x2A31F8u;
    {
        const bool branch_taken_0x2a31f8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a31f8) {
            ctx->pc = 0x2A3218u;
            goto label_2a3218;
        }
    }
    ctx->pc = 0x2A3200u;
    // 0x2a3200: 0x6a220007  ldl         $v0, 0x7($s1)
    ctx->pc = 0x2a3200u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x2a3204: 0x6e220000  ldr         $v0, 0x0($s1)
    ctx->pc = 0x2a3204u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x2a3208: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x2a3208u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x2a320c: 0xb3a2000f  sdl         $v0, 0xF($sp)
    ctx->pc = 0x2a320cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2a3210: 0xb7a20008  sdr         $v0, 0x8($sp)
    ctx->pc = 0x2a3210u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2a3214: 0xafa30010  sw          $v1, 0x10($sp)
    ctx->pc = 0x2a3214u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
label_2a3218:
    // 0x2a3218: 0x12400008  beqz        $s2, . + 4 + (0x8 << 2)
    ctx->pc = 0x2A3218u;
    {
        const bool branch_taken_0x2a3218 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A321Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A3218u;
        // 0x2a321c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a3218) {
            ctx->pc = 0x2A323Cu;
            goto label_2a323c;
        }
    }
    ctx->pc = 0x2A3220u;
    // 0x2a3220: 0x6a420007  ldl         $v0, 0x7($s2)
    ctx->pc = 0x2a3220u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x2a3224: 0x6e420000  ldr         $v0, 0x0($s2)
    ctx->pc = 0x2a3224u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x2a3228: 0x8e430008  lw          $v1, 0x8($s2)
    ctx->pc = 0x2a3228u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x2a322c: 0xb3a2002f  sdl         $v0, 0x2F($sp)
    ctx->pc = 0x2a322cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 47); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2a3230: 0xb7a20028  sdr         $v0, 0x28($sp)
    ctx->pc = 0x2a3230u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 40); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2a3234: 0xafa30030  sw          $v1, 0x30($sp)
    ctx->pc = 0x2a3234u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 3));
    // 0x2a3238: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2a3238u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2a323c:
    // 0x2a323c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2a323cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a3240: 0xc0af716  jal         func_2BDC58
    ctx->pc = 0x2A3240u;
    SET_GPR_U32(ctx, 31, 0x2A3248u);
    ctx->pc = 0x2A3244u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A3240u;
    // 0x2a3244: 0x27a60040  addiu       $a2, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BDC58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BDC58u, 0x2A3240u, 0x2A3248u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A3248u;
label_2a3248:
    // 0x2a3248: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x2a3248u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2a324c: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x2a324cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2a3250: 0xdfb20070  ld          $s2, 0x70($sp)
    ctx->pc = 0x2a3250u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2a3254: 0xdfb10060  ld          $s1, 0x60($sp)
    ctx->pc = 0x2a3254u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2a3258: 0xdfb00050  ld          $s0, 0x50($sp)
    ctx->pc = 0x2a3258u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2a325c: 0x3e00008  jr          $ra
    ctx->pc = 0x2A325Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A3260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A325Cu;
        // 0x2a3260: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A325Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A3264u;
    // 0x2a3264: 0x0  nop
    ctx->pc = 0x2a3264u;
    // NOP
    // 0x2a3268: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2a3268u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2a326c: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x2a326cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a3270: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x2a3270u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x2a3274: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x2a3274u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a3278: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x2a3278u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a327c: 0x16000003  bnez        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2A327Cu;
    {
        const bool branch_taken_0x2a327c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A3280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A327Cu;
        // 0x2a3280: 0xffbf0030  sd          $ra, 0x30($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a327c) {
            ctx->pc = 0x2A328Cu;
            goto label_2a328c;
        }
    }
    ctx->pc = 0x2A3284u;
    // 0x2a3284: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x2A3284u;
    {
        const bool branch_taken_0x2a3284 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A3288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A3284u;
        // 0x2a3288: 0x24022721  addiu       $v0, $zero, 0x2721 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10017));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a3284) {
            ctx->pc = 0x2A32B4u;
            goto label_2a32b4;
        }
    }
    ctx->pc = 0x2A328Cu;
label_2a328c:
    // 0x2a328c: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x2a328cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a3290: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x2a3290u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a3294: 0xc0af93e  jal         func_2BE4F8
    ctx->pc = 0x2A3294u;
    SET_GPR_U32(ctx, 31, 0x2A329Cu);
    ctx->pc = 0x2A3298u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A3294u;
    // 0x2a3298: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BE4F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BE4F8u, 0x2A3294u, 0x2A329Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A329Cu;
label_2a329c:
    // 0x2a329c: 0x6ba3000f  ldl         $v1, 0xF($sp)
    ctx->pc = 0x2a329cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x2a32a0: 0x6fa30008  ldr         $v1, 0x8($sp)
    ctx->pc = 0x2a32a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x2a32a4: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2a32a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a32a8: 0xb2030007  sdl         $v1, 0x7($s0)
    ctx->pc = 0x2a32a8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2a32ac: 0xb6030000  sdr         $v1, 0x0($s0)
    ctx->pc = 0x2a32acu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2a32b0: 0xae040008  sw          $a0, 0x8($s0)
    ctx->pc = 0x2a32b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 4));
label_2a32b4:
    // 0x2a32b4: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2a32b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2a32b8: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x2a32b8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2a32bc: 0x3e00008  jr          $ra
    ctx->pc = 0x2A32BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A32C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A32BCu;
        // 0x2a32c0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A32BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A32C4u;
    // 0x2a32c4: 0x0  nop
    ctx->pc = 0x2a32c4u;
    // NOP
    // 0x2a32c8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2a32c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2a32cc: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x2a32ccu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a32d0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2A32D0u;
    {
        const bool branch_taken_0x2a32d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A32D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A32D0u;
        // 0x2a32d4: 0xffbf0030  sd          $ra, 0x30($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a32d0) {
            ctx->pc = 0x2A32E0u;
            goto label_2a32e0;
        }
    }
    ctx->pc = 0x2A32D8u;
    // 0x2a32d8: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x2A32D8u;
    {
        const bool branch_taken_0x2a32d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A32DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A32D8u;
        // 0x2a32dc: 0x24022721  addiu       $v0, $zero, 0x2721 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10017));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a32d8) {
            ctx->pc = 0x2A3308u;
            goto label_2a3308;
        }
    }
    ctx->pc = 0x2A32E0u;
label_2a32e0:
    // 0x2a32e0: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x2a32e0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a32e4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2a32e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a32e8: 0x68430007  ldl         $v1, 0x7($v0)
    ctx->pc = 0x2a32e8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x2a32ec: 0x6c430000  ldr         $v1, 0x0($v0)
    ctx->pc = 0x2a32ecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x2a32f0: 0x8c490008  lw          $t1, 0x8($v0)
    ctx->pc = 0x2a32f0u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x2a32f4: 0xb3a3000f  sdl         $v1, 0xF($sp)
    ctx->pc = 0x2a32f4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2a32f8: 0xb7a30008  sdr         $v1, 0x8($sp)
    ctx->pc = 0x2a32f8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2a32fc: 0xafa90010  sw          $t1, 0x10($sp)
    ctx->pc = 0x2a32fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 9));
    // 0x2a3300: 0xc0af748  jal         func_2BDD20
    ctx->pc = 0x2A3300u;
    SET_GPR_U32(ctx, 31, 0x2A3308u);
    ctx->pc = 0x2A3304u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A3300u;
    // 0x2a3304: 0x27a70020  addiu       $a3, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BDD20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BDD20u, 0x2A3300u, 0x2A3308u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A3308u;
label_2a3308:
    // 0x2a3308: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2a3308u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2a330c: 0x3e00008  jr          $ra
    ctx->pc = 0x2A330Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A3310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A330Cu;
        // 0x2a3310: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A330Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A3314u;
    // 0x2a3314: 0x0  nop
    ctx->pc = 0x2a3314u;
    // NOP
    // 0x2a3318: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2a3318u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2a331c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2a331cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2a3320: 0xc0a8c38  jal         func_2A30E0
    ctx->pc = 0x2A3320u;
    SET_GPR_U32(ctx, 31, 0x2A3328u);
    ctx->pc = 0x2A30E0u;
    goto label_2a30e0;
    ctx->pc = 0x2A3328u;
label_2a3328:
    // 0x2a3328: 0x3c04002a  lui         $a0, 0x2A
    ctx->pc = 0x2a3328u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)42 << 16));
    // 0x2a332c: 0xc0a8e1e  jal         func_2A3878
    ctx->pc = 0x2A332Cu;
    SET_GPR_U32(ctx, 31, 0x2A3334u);
    ctx->pc = 0x2A3330u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A332Cu;
    // 0x2a3330: 0x24843108  addiu       $a0, $a0, 0x3108 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A3878u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A3878u, 0x2A332Cu, 0x2A3334u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A3334u;
label_2a3334:
    // 0x2a3334: 0x3c04002a  lui         $a0, 0x2A
    ctx->pc = 0x2a3334u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)42 << 16));
    // 0x2a3338: 0xc0a8e60  jal         func_2A3980
    ctx->pc = 0x2A3338u;
    SET_GPR_U32(ctx, 31, 0x2A3340u);
    ctx->pc = 0x2A333Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A3338u;
    // 0x2a333c: 0x248431b8  addiu       $a0, $a0, 0x31B8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12728));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A3980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A3980u, 0x2A3338u, 0x2A3340u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A3340u;
label_2a3340:
    // 0x2a3340: 0x3c04002a  lui         $a0, 0x2A
    ctx->pc = 0x2a3340u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)42 << 16));
    // 0x2a3344: 0xc0a8e76  jal         func_2A39D8
    ctx->pc = 0x2A3344u;
    SET_GPR_U32(ctx, 31, 0x2A334Cu);
    ctx->pc = 0x2A3348u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A3344u;
    // 0x2a3348: 0x24843268  addiu       $a0, $a0, 0x3268 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12904));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A39D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A39D8u, 0x2A3344u, 0x2A334Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A334Cu;
label_2a334c:
    // 0x2a334c: 0x3c04002a  lui         $a0, 0x2A
    ctx->pc = 0x2a334cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)42 << 16));
    // 0x2a3350: 0xc0a8e8c  jal         func_2A3A30
    ctx->pc = 0x2A3350u;
    SET_GPR_U32(ctx, 31, 0x2A3358u);
    ctx->pc = 0x2A3354u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A3350u;
    // 0x2a3354: 0x248432c8  addiu       $a0, $a0, 0x32C8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 13000));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A3A30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A3A30u, 0x2A3350u, 0x2A3358u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A3358u;
label_2a3358:
    // 0x2a3358: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2a3358u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2a335c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2a335cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a3360: 0x3e00008  jr          $ra
    ctx->pc = 0x2A3360u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A3364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A3360u;
        // 0x2a3364: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A3360u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A3368u;
}
