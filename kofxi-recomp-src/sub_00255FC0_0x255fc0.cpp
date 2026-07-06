#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00255FC0
// Address: 0x255fc0 - 0x256118
void sub_00255FC0_0x255fc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00255FC0_0x255fc0");
#endif

    switch (ctx->pc) {
        case 0x256038u: goto label_256038;
        case 0x2560a0u: goto label_2560a0;
        case 0x2560c0u: goto label_2560c0;
        case 0x2560f0u: goto label_2560f0;
        default: break;
    }

    ctx->pc = 0x255fc0u;

    // 0x255fc0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x255fc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x255fc4: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x255fc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x255fc8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x255fc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x255fcc: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x255fccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x255fd0: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x255fd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x255fd4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x255fd4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x255fd8: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x255fd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x255fdc: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x255fdcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x255fe0: 0x8e120044  lw          $s2, 0x44($s0)
    ctx->pc = 0x255fe0u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
    // 0x255fe4: 0x8a22000b  lwl         $v0, 0xB($s1)
    ctx->pc = 0x255fe4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 11); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 2) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 2, (int32_t)merged); }
    // 0x255fe8: 0x9a220008  lwr         $v0, 0x8($s1)
    ctx->pc = 0x255fe8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 8); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 2) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 2) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 2, merged64); }
    // 0x255fec: 0x8e030060  lw          $v1, 0x60($s0)
    ctx->pc = 0x255fecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x255ff0: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x255ff0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x255ff4: 0x4410022  bgez        $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x255FF4u;
    {
        const bool branch_taken_0x255ff4 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x255FF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x255FF4u;
            // 0x255ff8: 0xde130088  ld          $s3, 0x88($s0) (Delay Slot)
        SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 16), 136)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x255ff4) {
            ctx->pc = 0x256080u;
            goto label_256080;
        }
    }
    ctx->pc = 0x255FFCu;
    // 0x255ffc: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x255ffcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x256000: 0xa600009a  sh          $zero, 0x9A($s0)
    ctx->pc = 0x256000u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 154), (uint16_t)GPR_U32(ctx, 0));
    // 0x256004: 0x8e060040  lw          $a2, 0x40($s0)
    ctx->pc = 0x256004u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x256008: 0x8a25000b  lwl         $a1, 0xB($s1)
    ctx->pc = 0x256008u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 11); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 5) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 5, (int32_t)merged); }
    // 0x25600c: 0x9a250008  lwr         $a1, 0x8($s1)
    ctx->pc = 0x25600cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 8); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 5) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 5) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 5, merged64); }
    // 0x256010: 0x96030024  lhu         $v1, 0x24($s0)
    ctx->pc = 0x256010u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x256014: 0xae050044  sw          $a1, 0x44($s0)
    ctx->pc = 0x256014u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 5));
    // 0x256018: 0x8a22000b  lwl         $v0, 0xB($s1)
    ctx->pc = 0x256018u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 11); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 2) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 2, (int32_t)merged); }
    // 0x25601c: 0x9a220008  lwr         $v0, 0x8($s1)
    ctx->pc = 0x25601cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 8); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 2) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 2) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 2, merged64); }
    // 0x256020: 0x461023  subu        $v0, $v0, $a2
    ctx->pc = 0x256020u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x256024: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x256024u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x256028: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x256028u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x25602c: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x25602cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x256030: 0xc095fb8  jal         func_257EE0
    ctx->pc = 0x256030u;
    SET_GPR_U32(ctx, 31, 0x256038u);
    ctx->pc = 0x256034u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x256030u;
            // 0x256034: 0xfe030088  sd          $v1, 0x88($s0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 16), 136), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x257EE0u;
    if (runtime->hasFunction(0x257EE0u)) {
        auto targetFn = runtime->lookupFunction(0x257EE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x256038u; }
        if (ctx->pc != 0x256038u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00257EE0_0x257ee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x256038u; }
        if (ctx->pc != 0x256038u) { return; }
    }
    ctx->pc = 0x256038u;
label_256038:
    // 0x256038: 0x8e030044  lw          $v1, 0x44($s0)
    ctx->pc = 0x256038u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
    // 0x25603c: 0x2431823  subu        $v1, $s2, $v1
    ctx->pc = 0x25603cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x256040: 0x18600002  blez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x256040u;
    {
        const bool branch_taken_0x256040 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x256044u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x256040u;
            // 0x256044: 0xfe130088  sd          $s3, 0x88($s0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 16), 136), GPR_U64(ctx, 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x256040) {
            ctx->pc = 0x25604Cu;
            goto label_25604c;
        }
    }
    ctx->pc = 0x256048u;
    // 0x256048: 0xae120044  sw          $s2, 0x44($s0)
    ctx->pc = 0x256048u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 18));
label_25604c:
    // 0x25604c: 0x8a23000b  lwl         $v1, 0xB($s1)
    ctx->pc = 0x25604cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 11); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 3) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 3, (int32_t)merged); }
    // 0x256050: 0x9a230008  lwr         $v1, 0x8($s1)
    ctx->pc = 0x256050u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 8); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 3) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 3) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 3, merged64); }
    // 0x256054: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x256054u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x256058: 0x8e050040  lw          $a1, 0x40($s0)
    ctx->pc = 0x256058u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x25605c: 0x96060024  lhu         $a2, 0x24($s0)
    ctx->pc = 0x25605cu;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x256060: 0x651823  subu        $v1, $v1, $a1
    ctx->pc = 0x256060u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x256064: 0xde040088  ld          $a0, 0x88($s0)
    ctx->pc = 0x256064u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 16), 136)));
    // 0x256068: 0x661823  subu        $v1, $v1, $a2
    ctx->pc = 0x256068u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x25606c: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x25606cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x256070: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x256070u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x256074: 0x83202f  dsubu       $a0, $a0, $v1
    ctx->pc = 0x256074u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) - GPR_U64(ctx, 3));
    // 0x256078: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x256078u;
    {
        const bool branch_taken_0x256078 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25607Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x256078u;
            // 0x25607c: 0xfe040088  sd          $a0, 0x88($s0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 16), 136), GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x256078) {
            ctx->pc = 0x256084u;
            goto label_256084;
        }
    }
    ctx->pc = 0x256080u;
label_256080:
    // 0x256080: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x256080u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_256084:
    // 0x256084: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x256084u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x256088: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x256088u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x25608c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x25608cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x256090: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x256090u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x256094: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x256094u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x256098: 0x3e00008  jr          $ra
    ctx->pc = 0x256098u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25609Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x256098u;
            // 0x25609c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2560A0u;
label_2560a0:
    // 0x2560a0: 0x3c06003a  lui         $a2, 0x3A
    ctx->pc = 0x2560a0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)58 << 16));
    // 0x2560a4: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x2560a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x2560a8: 0x8cc30374  lw          $v1, 0x374($a2)
    ctx->pc = 0x2560a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 884)));
    // 0x2560ac: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2560acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2560b0: 0x1860000b  blez        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x2560B0u;
    {
        const bool branch_taken_0x2560b0 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x2560B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2560B0u;
            // 0x2560b4: 0xfc401218  sd          $zero, 0x1218($v0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 2), 4632), GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2560b0) {
            ctx->pc = 0x2560E0u;
            goto label_2560e0;
        }
    }
    ctx->pc = 0x2560B8u;
    // 0x2560b8: 0x3c05003a  lui         $a1, 0x3A
    ctx->pc = 0x2560b8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)58 << 16));
    // 0x2560bc: 0x24a20490  addiu       $v0, $a1, 0x490
    ctx->pc = 0x2560bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1168));
label_2560c0:
    // 0x2560c0: 0x418c0  sll         $v1, $a0, 3
    ctx->pc = 0x2560c0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x2560c4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2560c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2560c8: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x2560c8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x2560cc: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x2560ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x2560d0: 0x8cc20374  lw          $v0, 0x374($a2)
    ctx->pc = 0x2560d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 884)));
    // 0x2560d4: 0x82102a  slt         $v0, $a0, $v0
    ctx->pc = 0x2560d4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2560d8: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x2560D8u;
    {
        const bool branch_taken_0x2560d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2560DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2560D8u;
            // 0x2560dc: 0x24a20490  addiu       $v0, $a1, 0x490 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1168));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2560d8) {
            ctx->pc = 0x2560C0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2560c0;
        }
    }
    ctx->pc = 0x2560E0u;
label_2560e0:
    // 0x2560e0: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x2560e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x2560e4: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x2560e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x2560e8: 0x24421228  addiu       $v0, $v0, 0x1228
    ctx->pc = 0x2560e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4648));
    // 0x2560ec: 0x0  nop
    ctx->pc = 0x2560ecu;
    // NOP
label_2560f0:
    // 0x2560f0: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x2560f0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x2560f4: 0xac420004  sw          $v0, 0x4($v0)
    ctx->pc = 0x2560f4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 2));
    // 0x2560f8: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x2560f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x2560fc: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x2560fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x256100: 0x0  nop
    ctx->pc = 0x256100u;
    // NOP
    // 0x256104: 0x481fffa  bgez        $a0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x256104u;
    {
        const bool branch_taken_0x256104 = (GPR_S32(ctx, 4) >= 0);
        if (branch_taken_0x256104) {
            ctx->pc = 0x2560F0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2560f0;
        }
    }
    ctx->pc = 0x25610Cu;
    // 0x25610c: 0x3e00008  jr          $ra
    ctx->pc = 0x25610Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x256114u;
    // 0x256114: 0x0  nop
    ctx->pc = 0x256114u;
    // NOP
    ctx->pc = 0x256118u;
}
