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

// Function: sub_00246020
// Address: 0x246020 - 0x246778
void sub_00246020_0x246020(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00246020_0x246020");
#endif

    switch (ctx->pc) {
        case 0x246078u: goto label_246078;
        case 0x246118u: goto label_246118;
        case 0x246258u: goto label_246258;
        case 0x246288u: goto label_246288;
        case 0x2462b8u: goto label_2462b8;
        case 0x246338u: goto label_246338;
        case 0x246354u: goto label_246354;
        case 0x24639cu: goto label_24639c;
        case 0x2463acu: goto label_2463ac;
        case 0x246404u: goto label_246404;
        case 0x246414u: goto label_246414;
        case 0x2464acu: goto label_2464ac;
        case 0x2464ccu: goto label_2464cc;
        case 0x2464e8u: goto label_2464e8;
        case 0x246514u: goto label_246514;
        case 0x246520u: goto label_246520;
        case 0x246588u: goto label_246588;
        case 0x24659cu: goto label_24659c;
        case 0x246648u: goto label_246648;
        case 0x246660u: goto label_246660;
        case 0x2466f0u: goto label_2466f0;
        case 0x246730u: goto label_246730;
        case 0x246754u: goto label_246754;
        default: break;
    }

    ctx->pc = 0x246020u;

    // 0x246020: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x246020u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x246024: 0xffbe00a0  sd          $fp, 0xA0($sp)
    ctx->pc = 0x246024u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 30));
    // 0x246028: 0xffb60080  sd          $s6, 0x80($sp)
    ctx->pc = 0x246028u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 22));
    // 0x24602c: 0xf02d  daddu       $fp, $zero, $zero
    ctx->pc = 0x24602cu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x246030: 0xffb50070  sd          $s5, 0x70($sp)
    ctx->pc = 0x246030u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 21));
    // 0x246034: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x246034u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x246038: 0xffb10030  sd          $s1, 0x30($sp)
    ctx->pc = 0x246038u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 17));
    // 0x24603c: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x24603cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x246040: 0x3a0882d  daddu       $s1, $sp, $zero
    ctx->pc = 0x246040u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x246044: 0xffbf00b0  sd          $ra, 0xB0($sp)
    ctx->pc = 0x246044u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 31));
    // 0x246048: 0x24043fff  addiu       $a0, $zero, 0x3FFF
    ctx->pc = 0x246048u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16383));
    // 0x24604c: 0xffb70090  sd          $s7, 0x90($sp)
    ctx->pc = 0x24604cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 23));
    // 0x246050: 0xffb40060  sd          $s4, 0x60($sp)
    ctx->pc = 0x246050u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 20));
    // 0x246054: 0xffb30050  sd          $s3, 0x50($sp)
    ctx->pc = 0x246054u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 19));
    // 0x246058: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x246058u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
    // 0x24605c: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x24605cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x246060: 0x92c20000  lbu         $v0, 0x0($s6)
    ctx->pc = 0x246060u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x246064: 0xafa60014  sw          $a2, 0x14($sp)
    ctx->pc = 0x246064u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 6));
    // 0x246068: 0xafa70018  sw          $a3, 0x18($sp)
    ctx->pc = 0x246068u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 7));
    // 0x24606c: 0x3055000f  andi        $s5, $v0, 0xF
    ctx->pc = 0x24606cu;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x246070: 0xc08a262  jal         func_228988
    ctx->pc = 0x246070u;
    SET_GPR_U32(ctx, 31, 0x246078u);
    ctx->pc = 0x246074u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x246070u;
    // 0x246074: 0x8cd00000  lw          $s0, 0x0($a2) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228988u, 0x246070u, 0x246078u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x246078u;
label_246078:
    // 0x246078: 0x92c30007  lbu         $v1, 0x7($s6)
    ctx->pc = 0x246078u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 7)));
    // 0x24607c: 0x92c40006  lbu         $a0, 0x6($s6)
    ctx->pc = 0x24607cu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 6)));
    // 0x246080: 0x31a38  dsll        $v1, $v1, 8
    ctx->pc = 0x246080u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 8);
    // 0x246084: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x246084u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x246088: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x246088u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x24608c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x24608cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x246090: 0x1460003f  bnez        $v1, . + 4 + (0x3F << 2)
    ctx->pc = 0x246090u;
    {
        const bool branch_taken_0x246090 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x246094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246090u;
        // 0x246094: 0x8e120000  lw          $s2, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x246090) {
            ctx->pc = 0x246190u;
            goto label_246190;
        }
    }
    ctx->pc = 0x246098u;
    // 0x246098: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x246098u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x24609c: 0x8c45000c  lw          $a1, 0xC($v0)
    ctx->pc = 0x24609cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x2460a0: 0x28a20028  slti        $v0, $a1, 0x28
    ctx->pc = 0x2460a0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)40) ? 1 : 0);
    // 0x2460a4: 0x14400174  bnez        $v0, . + 4 + (0x174 << 2)
    ctx->pc = 0x2460A4u;
    {
        const bool branch_taken_0x2460a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2460A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2460A4u;
        // 0x2460a8: 0x24020040  addiu       $v0, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2460a4) {
            ctx->pc = 0x246678u;
            goto label_246678;
        }
    }
    ctx->pc = 0x2460ACu;
    // 0x2460ac: 0x153880  sll         $a3, $s5, 2
    ctx->pc = 0x2460acu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 21), 2));
    // 0x2460b0: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x2460b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x2460b4: 0x2c7a021  addu        $s4, $s6, $a3
    ctx->pc = 0x2460b4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 7)));
    // 0x2460b8: 0x9282000d  lbu         $v0, 0xD($s4)
    ctx->pc = 0x2460b8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 13)));
    // 0x2460bc: 0x30420017  andi        $v0, $v0, 0x17
    ctx->pc = 0x2460bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)23);
    // 0x2460c0: 0x1443016d  bne         $v0, $v1, . + 4 + (0x16D << 2)
    ctx->pc = 0x2460C0u;
    {
        const bool branch_taken_0x2460c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x2460C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2460C0u;
        // 0x2460c4: 0x24020040  addiu       $v0, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2460c0) {
            ctx->pc = 0x246678u;
            goto label_246678;
        }
    }
    ctx->pc = 0x2460C8u;
    // 0x2460c8: 0x8ac6000f  lwl         $a2, 0xF($s6)
    ctx->pc = 0x2460c8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 22), 15); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 6) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 6, (int32_t)merged); }
    // 0x2460cc: 0x9ac6000c  lwr         $a2, 0xC($s6)
    ctx->pc = 0x2460ccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 22), 12); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 6) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 6) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 6, merged64); }
    // 0x2460d0: 0x8e420014  lw          $v0, 0x14($s2)
    ctx->pc = 0x2460d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
    // 0x2460d4: 0x54c20010  bnel        $a2, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x2460D4u;
    {
        const bool branch_taken_0x2460d4 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        if (branch_taken_0x2460d4) {
            ctx->pc = 0x2460D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2460D4u;
            // 0x2460d8: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
            SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x246118u;
            goto label_246118;
        }
    }
    ctx->pc = 0x2460DCu;
    // 0x2460dc: 0x8ac30013  lwl         $v1, 0x13($s6)
    ctx->pc = 0x2460dcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 22), 19); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 3) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 3, (int32_t)merged); }
    // 0x2460e0: 0x9ac30010  lwr         $v1, 0x10($s6)
    ctx->pc = 0x2460e0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 22), 16); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 3) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 3) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 3, merged64); }
    // 0x2460e4: 0x8e420018  lw          $v0, 0x18($s2)
    ctx->pc = 0x2460e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
    // 0x2460e8: 0x5462000b  bnel        $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2460E8u;
    {
        const bool branch_taken_0x2460e8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2460e8) {
            ctx->pc = 0x2460ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2460E8u;
            // 0x2460ec: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
            SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x246118u;
            goto label_246118;
        }
    }
    ctx->pc = 0x2460F0u;
    // 0x2460f0: 0x92420008  lbu         $v0, 0x8($s2)
    ctx->pc = 0x2460f0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x2460f4: 0x8e840000  lw          $a0, 0x0($s4)
    ctx->pc = 0x2460f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x2460f8: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x2460f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x2460fc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2460fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x246100: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x246100u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x246104: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x246104u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x246108: 0x50830031  beql        $a0, $v1, . + 4 + (0x31 << 2)
    ctx->pc = 0x246108u;
    {
        const bool branch_taken_0x246108 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x246108) {
            ctx->pc = 0x24610Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x246108u;
            // 0x24610c: 0x9286000c  lbu         $a2, 0xC($s4) (Delay Slot)
            SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2461D0u;
            goto label_2461d0;
        }
    }
    ctx->pc = 0x246110u;
    // 0x246110: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x246110u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x246114: 0x0  nop
    ctx->pc = 0x246114u;
    // NOP
label_246118:
    // 0x246118: 0x8e520000  lw          $s2, 0x0($s2)
    ctx->pc = 0x246118u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x24611c: 0x8e420014  lw          $v0, 0x14($s2)
    ctx->pc = 0x24611cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
    // 0x246120: 0x14c2000e  bne         $a2, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x246120u;
    {
        const bool branch_taken_0x246120 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        if (branch_taken_0x246120) {
            ctx->pc = 0x24615Cu;
            goto label_24615c;
        }
    }
    ctx->pc = 0x246128u;
    // 0x246128: 0x8ac30013  lwl         $v1, 0x13($s6)
    ctx->pc = 0x246128u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 22), 19); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 3) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 3, (int32_t)merged); }
    // 0x24612c: 0x9ac30010  lwr         $v1, 0x10($s6)
    ctx->pc = 0x24612cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 22), 16); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 3) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 3) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 3, merged64); }
    // 0x246130: 0x8e420018  lw          $v0, 0x18($s2)
    ctx->pc = 0x246130u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
    // 0x246134: 0x14620009  bne         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x246134u;
    {
        const bool branch_taken_0x246134 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x246134) {
            ctx->pc = 0x24615Cu;
            goto label_24615c;
        }
    }
    ctx->pc = 0x24613Cu;
    // 0x24613c: 0x92420008  lbu         $v0, 0x8($s2)
    ctx->pc = 0x24613cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x246140: 0x8e840000  lw          $a0, 0x0($s4)
    ctx->pc = 0x246140u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x246144: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x246144u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x246148: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x246148u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x24614c: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x24614cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x246150: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x246150u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x246154: 0x10830010  beq         $a0, $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x246154u;
    {
        const bool branch_taken_0x246154 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x246154) {
            ctx->pc = 0x246198u;
            goto label_246198;
        }
    }
    ctx->pc = 0x24615Cu;
label_24615c:
    // 0x24615c: 0x5650ffee  bnel        $s2, $s0, . + 4 + (-0x12 << 2)
    ctx->pc = 0x24615Cu;
    {
        const bool branch_taken_0x24615c = (GPR_U64(ctx, 18) != GPR_U64(ctx, 16));
        if (branch_taken_0x24615c) {
            ctx->pc = 0x246160u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24615Cu;
            // 0x246160: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
            SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x246118u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_246118;
        }
    }
    ctx->pc = 0x246164u;
    // 0x246164: 0x8fa30014  lw          $v1, 0x14($sp)
    ctx->pc = 0x246164u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x246168: 0xac650000  sw          $a1, 0x0($v1)
    ctx->pc = 0x246168u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
    // 0x24616c: 0x9282000c  lbu         $v0, 0xC($s4)
    ctx->pc = 0x24616cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 12)));
    // 0x246170: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x246170u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x246174: 0x21102  srl         $v0, $v0, 4
    ctx->pc = 0x246174u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 4));
    // 0x246178: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x246178u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x24617c: 0x2a2a821  addu        $s5, $s5, $v0
    ctx->pc = 0x24617cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x246180: 0x15a880  sll         $s5, $s5, 2
    ctx->pc = 0x246180u;
    SET_GPR_S32(ctx, 21, (int32_t)SLL32(GPR_U32(ctx, 21), 2));
    // 0x246184: 0x75182b  sltu        $v1, $v1, $s5
    ctx->pc = 0x246184u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 21)) ? 1 : 0);
    // 0x246188: 0x10600132  beqz        $v1, . + 4 + (0x132 << 2)
    ctx->pc = 0x246188u;
    {
        const bool branch_taken_0x246188 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x24618Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246188u;
        // 0x24618c: 0x2a0302d  daddu       $a2, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x246188) {
            ctx->pc = 0x246654u;
            goto label_246654;
        }
    }
    ctx->pc = 0x246190u;
label_246190:
    // 0x246190: 0x10000139  b           . + 4 + (0x139 << 2)
    ctx->pc = 0x246190u;
    {
        const bool branch_taken_0x246190 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x246194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246190u;
        // 0x246194: 0x24020040  addiu       $v0, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x246190) {
            ctx->pc = 0x246678u;
            goto label_246678;
        }
    }
    ctx->pc = 0x246198u;
label_246198:
    // 0x246198: 0x56500006  bnel        $s2, $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x246198u;
    {
        const bool branch_taken_0x246198 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 16));
        if (branch_taken_0x246198) {
            ctx->pc = 0x24619Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x246198u;
            // 0x24619c: 0x8e420000  lw          $v0, 0x0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2461B4u;
            goto label_2461b4;
        }
    }
    ctx->pc = 0x2461A0u;
    // 0x2461a0: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x2461a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x2461a4: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x2461a4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
    // 0x2461a8: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x2461a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2461ac: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2461ACu;
    {
        const bool branch_taken_0x2461ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2461B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2461ACu;
        // 0x2461b0: 0x8c65000c  lw          $a1, 0xC($v1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2461ac) {
            ctx->pc = 0x2461CCu;
            goto label_2461cc;
        }
    }
    ctx->pc = 0x2461B4u;
label_2461b4:
    // 0x2461b4: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x2461b4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x2461b8: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x2461b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2461bc: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x2461bcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
    // 0x2461c0: 0xae120000  sw          $s2, 0x0($s0)
    ctx->pc = 0x2461c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 18));
    // 0x2461c4: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2461c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2461c8: 0x8c85000c  lw          $a1, 0xC($a0)
    ctx->pc = 0x2461c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_2461cc:
    // 0x2461cc: 0x9286000c  lbu         $a2, 0xC($s4)
    ctx->pc = 0x2461ccu;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 12)));
label_2461d0:
    // 0x2461d0: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2461d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2461d4: 0x24e20008  addiu       $v0, $a3, 0x8
    ctx->pc = 0x2461d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
    // 0x2461d8: 0x61902  srl         $v1, $a2, 4
    ctx->pc = 0x2461d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 6), 4));
    // 0x2461dc: 0x242b821  addu        $s7, $s2, $v0
    ctx->pc = 0x2461dcu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x2461e0: 0x2a3a821  addu        $s5, $s5, $v1
    ctx->pc = 0x2461e0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 3)));
    // 0x2461e4: 0x15a880  sll         $s5, $s5, 2
    ctx->pc = 0x2461e4u;
    SET_GPR_S32(ctx, 21, (int32_t)SLL32(GPR_U32(ctx, 21), 2));
    // 0x2461e8: 0xb5102b  sltu        $v0, $a1, $s5
    ctx->pc = 0x2461e8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 21)) ? 1 : 0);
    // 0x2461ec: 0x14400122  bnez        $v0, . + 4 + (0x122 << 2)
    ctx->pc = 0x2461ECu;
    {
        const bool branch_taken_0x2461ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2461F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2461ECu;
        // 0x2461f0: 0x24020040  addiu       $v0, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2461ec) {
            ctx->pc = 0x246678u;
            goto label_246678;
        }
    }
    ctx->pc = 0x2461F4u;
    // 0x2461f4: 0x96c30000  lhu         $v1, 0x0($s6)
    ctx->pc = 0x2461f4u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x2461f8: 0x96420008  lhu         $v0, 0x8($s2)
    ctx->pc = 0x2461f8u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x2461fc: 0x54620115  bnel        $v1, $v0, . + 4 + (0x115 << 2)
    ctx->pc = 0x2461FCu;
    {
        const bool branch_taken_0x2461fc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2461fc) {
            ctx->pc = 0x246200u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2461FCu;
            // 0x246200: 0x2a0302d  daddu       $a2, $s5, $zero (Delay Slot)
            SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x246654u;
            goto label_246654;
        }
    }
    ctx->pc = 0x246204u;
    // 0x246204: 0x96c30006  lhu         $v1, 0x6($s6)
    ctx->pc = 0x246204u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 22), 6)));
    // 0x246208: 0x9642000e  lhu         $v0, 0xE($s2)
    ctx->pc = 0x246208u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 14)));
    // 0x24620c: 0x54620111  bnel        $v1, $v0, . + 4 + (0x111 << 2)
    ctx->pc = 0x24620Cu;
    {
        const bool branch_taken_0x24620c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x24620c) {
            ctx->pc = 0x246210u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24620Cu;
            // 0x246210: 0x2a0302d  daddu       $a2, $s5, $zero (Delay Slot)
            SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x246654u;
            goto label_246654;
        }
    }
    ctx->pc = 0x246214u;
    // 0x246214: 0x96c30008  lhu         $v1, 0x8($s6)
    ctx->pc = 0x246214u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 22), 8)));
    // 0x246218: 0x96420010  lhu         $v0, 0x10($s2)
    ctx->pc = 0x246218u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x24621c: 0x5462010d  bnel        $v1, $v0, . + 4 + (0x10D << 2)
    ctx->pc = 0x24621Cu;
    {
        const bool branch_taken_0x24621c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x24621c) {
            ctx->pc = 0x246220u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24621Cu;
            // 0x246220: 0x2a0302d  daddu       $a2, $s5, $zero (Delay Slot)
            SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x246654u;
            goto label_246654;
        }
    }
    ctx->pc = 0x246224u;
    // 0x246224: 0x92e2000c  lbu         $v0, 0xC($s7)
    ctx->pc = 0x246224u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 23), 12)));
    // 0x246228: 0x30c300f0  andi        $v1, $a2, 0xF0
    ctx->pc = 0x246228u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)240);
    // 0x24622c: 0x304200f0  andi        $v0, $v0, 0xF0
    ctx->pc = 0x24622cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)240);
    // 0x246230: 0x54620108  bnel        $v1, $v0, . + 4 + (0x108 << 2)
    ctx->pc = 0x246230u;
    {
        const bool branch_taken_0x246230 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x246230) {
            ctx->pc = 0x246234u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x246230u;
            // 0x246234: 0x2a0302d  daddu       $a2, $s5, $zero (Delay Slot)
            SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x246654u;
            goto label_246654;
        }
    }
    ctx->pc = 0x246238u;
    // 0x246238: 0x2c820006  sltiu       $v0, $a0, 0x6
    ctx->pc = 0x246238u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x24623c: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x24623Cu;
    {
        const bool branch_taken_0x24623c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x246240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24623Cu;
        // 0x246240: 0x61902  srl         $v1, $a2, 4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 6), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24623c) {
            ctx->pc = 0x246268u;
            goto label_246268;
        }
    }
    ctx->pc = 0x246244u;
    // 0x246244: 0x2486fffb  addiu       $a2, $a0, -0x5
    ctx->pc = 0x246244u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967291));
    // 0x246248: 0x2645001c  addiu       $a1, $s2, 0x1C
    ctx->pc = 0x246248u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 28));
    // 0x24624c: 0x26c40014  addiu       $a0, $s6, 0x14
    ctx->pc = 0x24624cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 20));
    // 0x246250: 0xc048c5e  jal         func_123178
    ctx->pc = 0x246250u;
    SET_GPR_U32(ctx, 31, 0x246258u);
    ctx->pc = 0x246254u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x246250u;
    // 0x246254: 0x63080  sll         $a2, $a2, 2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x123178u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x123178u, 0x246250u, 0x246258u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x246258u;
label_246258:
    // 0x246258: 0x144000fe  bnez        $v0, . + 4 + (0xFE << 2)
    ctx->pc = 0x246258u;
    {
        const bool branch_taken_0x246258 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x24625Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246258u;
        // 0x24625c: 0x2a0302d  daddu       $a2, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x246258) {
            ctx->pc = 0x246654u;
            goto label_246654;
        }
    }
    ctx->pc = 0x246260u;
    // 0x246260: 0x9286000c  lbu         $a2, 0xC($s4)
    ctx->pc = 0x246260u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 12)));
    // 0x246264: 0x61902  srl         $v1, $a2, 4
    ctx->pc = 0x246264u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 6), 4));
label_246268:
    // 0x246268: 0x2c620006  sltiu       $v0, $v1, 0x6
    ctx->pc = 0x246268u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x24626c: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x24626Cu;
    {
        const bool branch_taken_0x24626c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x24626c) {
            ctx->pc = 0x246270u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24626Cu;
            // 0x246270: 0x9282000d  lbu         $v0, 0xD($s4) (Delay Slot)
            SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 13)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x246294u;
            goto label_246294;
        }
    }
    ctx->pc = 0x246274u;
    // 0x246274: 0x2466fffb  addiu       $a2, $v1, -0x5
    ctx->pc = 0x246274u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967291));
    // 0x246278: 0x26840014  addiu       $a0, $s4, 0x14
    ctx->pc = 0x246278u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 20));
    // 0x24627c: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x24627cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x246280: 0xc048c5e  jal         func_123178
    ctx->pc = 0x246280u;
    SET_GPR_U32(ctx, 31, 0x246288u);
    ctx->pc = 0x246284u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x246280u;
    // 0x246284: 0x26e50014  addiu       $a1, $s7, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 23), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x123178u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x123178u, 0x246280u, 0x246288u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x246288u;
label_246288:
    // 0x246288: 0x144000f2  bnez        $v0, . + 4 + (0xF2 << 2)
    ctx->pc = 0x246288u;
    {
        const bool branch_taken_0x246288 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x24628Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246288u;
        // 0x24628c: 0x2a0302d  daddu       $a2, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x246288) {
            ctx->pc = 0x246654u;
            goto label_246654;
        }
    }
    ctx->pc = 0x246290u;
    // 0x246290: 0x9282000d  lbu         $v0, 0xD($s4)
    ctx->pc = 0x246290u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 13)));
label_246294:
    // 0x246294: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x246294u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x246298: 0x50400016  beql        $v0, $zero, . + 4 + (0x16 << 2)
    ctx->pc = 0x246298u;
    {
        const bool branch_taken_0x246298 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x246298) {
            ctx->pc = 0x24629Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x246298u;
            // 0x24629c: 0x92830013  lbu         $v1, 0x13($s4) (Delay Slot)
            SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 19)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2462F4u;
            goto label_2462f4;
        }
    }
    ctx->pc = 0x2462A0u;
    // 0x2462a0: 0x92840013  lbu         $a0, 0x13($s4)
    ctx->pc = 0x2462a0u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 19)));
    // 0x2462a4: 0x92820012  lbu         $v0, 0x12($s4)
    ctx->pc = 0x2462a4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 18)));
    // 0x2462a8: 0x42238  dsll        $a0, $a0, 8
    ctx->pc = 0x2462a8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 8);
    // 0x2462ac: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x2462acu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x2462b0: 0xc08b60c  jal         func_22D830
    ctx->pc = 0x2462B0u;
    SET_GPR_U32(ctx, 31, 0x2462B8u);
    ctx->pc = 0x2462B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2462B0u;
    // 0x2462b4: 0x3084ffff  andi        $a0, $a0, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D830u, 0x2462B0u, 0x2462B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2462B8u;
label_2462b8:
    // 0x2462b8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2462b8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2462bc: 0x2602ffff  addiu       $v0, $s0, -0x1
    ctx->pc = 0x2462bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x2462c0: 0x2c4200ff  sltiu       $v0, $v0, 0xFF
    ctx->pc = 0x2462c0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)255) ? 1 : 0);
    // 0x2462c4: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x2462C4u;
    {
        const bool branch_taken_0x2462c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2462c4) {
            ctx->pc = 0x2462C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2462C4u;
            // 0x2462c8: 0xa2300000  sb          $s0, 0x0($s1) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2462E8u;
            goto label_2462e8;
        }
    }
    ctx->pc = 0x2462CCu;
    // 0x2462cc: 0xa2200000  sb          $zero, 0x0($s1)
    ctx->pc = 0x2462ccu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x2462d0: 0x101202  srl         $v0, $s0, 8
    ctx->pc = 0x2462d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 16), 8));
    // 0x2462d4: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2462d4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x2462d8: 0xa2220000  sb          $v0, 0x0($s1)
    ctx->pc = 0x2462d8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x2462dc: 0xa2300001  sb          $s0, 0x1($s1)
    ctx->pc = 0x2462dcu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1), (uint8_t)GPR_U32(ctx, 16));
    // 0x2462e0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2462E0u;
    {
        const bool branch_taken_0x2462e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2462E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2462E0u;
        // 0x2462e4: 0x26310002  addiu       $s1, $s1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2462e0) {
            ctx->pc = 0x2462ECu;
            goto label_2462ec;
        }
    }
    ctx->pc = 0x2462E8u;
label_2462e8:
    // 0x2462e8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2462e8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_2462ec:
    // 0x2462ec: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x2462ECu;
    {
        const bool branch_taken_0x2462ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2462F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2462ECu;
        // 0x2462f0: 0x241e0001  addiu       $fp, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2462ec) {
            ctx->pc = 0x246320u;
            goto label_246320;
        }
    }
    ctx->pc = 0x2462F4u;
label_2462f4:
    // 0x2462f4: 0x92e20013  lbu         $v0, 0x13($s7)
    ctx->pc = 0x2462f4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 23), 19)));
    // 0x2462f8: 0x92850012  lbu         $a1, 0x12($s4)
    ctx->pc = 0x2462f8u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 18)));
    // 0x2462fc: 0x31a38  dsll        $v1, $v1, 8
    ctx->pc = 0x2462fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 8);
    // 0x246300: 0x92e40012  lbu         $a0, 0x12($s7)
    ctx->pc = 0x246300u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 23), 18)));
    // 0x246304: 0x21238  dsll        $v0, $v0, 8
    ctx->pc = 0x246304u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 8);
    // 0x246308: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x246308u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x24630c: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x24630cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x246310: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x246310u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x246314: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x246314u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x246318: 0x146200ce  bne         $v1, $v0, . + 4 + (0xCE << 2)
    ctx->pc = 0x246318u;
    {
        const bool branch_taken_0x246318 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x24631Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246318u;
        // 0x24631c: 0x2a0302d  daddu       $a2, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x246318) {
            ctx->pc = 0x246654u;
            goto label_246654;
        }
    }
    ctx->pc = 0x246320u;
label_246320:
    // 0x246320: 0x9284000f  lbu         $a0, 0xF($s4)
    ctx->pc = 0x246320u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 15)));
    // 0x246324: 0x9282000e  lbu         $v0, 0xE($s4)
    ctx->pc = 0x246324u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 14)));
    // 0x246328: 0x42238  dsll        $a0, $a0, 8
    ctx->pc = 0x246328u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 8);
    // 0x24632c: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x24632cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x246330: 0xc08b60c  jal         func_22D830
    ctx->pc = 0x246330u;
    SET_GPR_U32(ctx, 31, 0x246338u);
    ctx->pc = 0x246334u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x246330u;
    // 0x246334: 0x3084ffff  andi        $a0, $a0, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D830u, 0x246330u, 0x246338u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x246338u;
label_246338:
    // 0x246338: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x246338u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24633c: 0x92e4000f  lbu         $a0, 0xF($s7)
    ctx->pc = 0x24633cu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 23), 15)));
    // 0x246340: 0x92e2000e  lbu         $v0, 0xE($s7)
    ctx->pc = 0x246340u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 23), 14)));
    // 0x246344: 0x42238  dsll        $a0, $a0, 8
    ctx->pc = 0x246344u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 8);
    // 0x246348: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x246348u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x24634c: 0xc08b60c  jal         func_22D830
    ctx->pc = 0x24634Cu;
    SET_GPR_U32(ctx, 31, 0x246354u);
    ctx->pc = 0x246350u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24634Cu;
    // 0x246350: 0x3084ffff  andi        $a0, $a0, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D830u, 0x24634Cu, 0x246354u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x246354u;
label_246354:
    // 0x246354: 0x2028023  subu        $s0, $s0, $v0
    ctx->pc = 0x246354u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x246358: 0x3210ffff  andi        $s0, $s0, 0xFFFF
    ctx->pc = 0x246358u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
    // 0x24635c: 0x1200000c  beqz        $s0, . + 4 + (0xC << 2)
    ctx->pc = 0x24635Cu;
    {
        const bool branch_taken_0x24635c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x246360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24635Cu;
        // 0x246360: 0x2e020100  sltiu       $v0, $s0, 0x100 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)256) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x24635c) {
            ctx->pc = 0x246390u;
            goto label_246390;
        }
    }
    ctx->pc = 0x246364u;
    // 0x246364: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x246364u;
    {
        const bool branch_taken_0x246364 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x246364) {
            ctx->pc = 0x246368u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x246364u;
            // 0x246368: 0xa2300000  sb          $s0, 0x0($s1) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x246388u;
            goto label_246388;
        }
    }
    ctx->pc = 0x24636Cu;
    // 0x24636c: 0xa2200000  sb          $zero, 0x0($s1)
    ctx->pc = 0x24636cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x246370: 0x101202  srl         $v0, $s0, 8
    ctx->pc = 0x246370u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 16), 8));
    // 0x246374: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x246374u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x246378: 0xa2220000  sb          $v0, 0x0($s1)
    ctx->pc = 0x246378u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x24637c: 0xa2300001  sb          $s0, 0x1($s1)
    ctx->pc = 0x24637cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1), (uint8_t)GPR_U32(ctx, 16));
    // 0x246380: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x246380u;
    {
        const bool branch_taken_0x246380 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x246384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246380u;
        // 0x246384: 0x26310002  addiu       $s1, $s1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x246380) {
            ctx->pc = 0x24638Cu;
            goto label_24638c;
        }
    }
    ctx->pc = 0x246388u;
label_246388:
    // 0x246388: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x246388u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_24638c:
    // 0x24638c: 0x37de0002  ori         $fp, $fp, 0x2
    ctx->pc = 0x24638cu;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 30) | (uint64_t)(uint16_t)2);
label_246390:
    // 0x246390: 0x8a84000b  lwl         $a0, 0xB($s4)
    ctx->pc = 0x246390u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 11); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 4) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 4, (int32_t)merged); }
    // 0x246394: 0xc08b5fe  jal         func_22D7F8
    ctx->pc = 0x246394u;
    SET_GPR_U32(ctx, 31, 0x24639Cu);
    ctx->pc = 0x246398u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x246394u;
    // 0x246398: 0x9a840008  lwr         $a0, 0x8($s4) (Delay Slot)
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 8); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 4) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 4) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 4, merged64); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D7F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D7F8u, 0x246394u, 0x24639Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24639Cu;
label_24639c:
    // 0x24639c: 0x8ae4000b  lwl         $a0, 0xB($s7)
    ctx->pc = 0x24639cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 23), 11); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 4) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 4, (int32_t)merged); }
    // 0x2463a0: 0x9ae40008  lwr         $a0, 0x8($s7)
    ctx->pc = 0x2463a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 23), 8); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 4) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 4) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 4, merged64); }
    // 0x2463a4: 0xc08b5fe  jal         func_22D7F8
    ctx->pc = 0x2463A4u;
    SET_GPR_U32(ctx, 31, 0x2463ACu);
    ctx->pc = 0x2463A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2463A4u;
    // 0x2463a8: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D7F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D7F8u, 0x2463A4u, 0x2463ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2463ACu;
label_2463ac:
    // 0x2463ac: 0x2029823  subu        $s3, $s0, $v0
    ctx->pc = 0x2463acu;
    SET_GPR_S32(ctx, 19, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x2463b0: 0x12600011  beqz        $s3, . + 4 + (0x11 << 2)
    ctx->pc = 0x2463B0u;
    {
        const bool branch_taken_0x2463b0 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x2463B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2463B0u;
        // 0x2463b4: 0x3402ffff  ori         $v0, $zero, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2463b0) {
            ctx->pc = 0x2463F8u;
            goto label_2463f8;
        }
    }
    ctx->pc = 0x2463B8u;
    // 0x2463b8: 0x53102b  sltu        $v0, $v0, $s3
    ctx->pc = 0x2463b8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
    // 0x2463bc: 0x144000a5  bnez        $v0, . + 4 + (0xA5 << 2)
    ctx->pc = 0x2463BCu;
    {
        const bool branch_taken_0x2463bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2463C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2463BCu;
        // 0x2463c0: 0x2a0302d  daddu       $a2, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2463bc) {
            ctx->pc = 0x246654u;
            goto label_246654;
        }
    }
    ctx->pc = 0x2463C4u;
    // 0x2463c4: 0x3262ffff  andi        $v0, $s3, 0xFFFF
    ctx->pc = 0x2463c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)65535);
    // 0x2463c8: 0x2c420100  sltiu       $v0, $v0, 0x100
    ctx->pc = 0x2463c8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)256) ? 1 : 0);
    // 0x2463cc: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x2463CCu;
    {
        const bool branch_taken_0x2463cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2463cc) {
            ctx->pc = 0x2463D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2463CCu;
            // 0x2463d0: 0xa2330000  sb          $s3, 0x0($s1) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 19));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2463F0u;
            goto label_2463f0;
        }
    }
    ctx->pc = 0x2463D4u;
    // 0x2463d4: 0xa2200000  sb          $zero, 0x0($s1)
    ctx->pc = 0x2463d4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x2463d8: 0x131202  srl         $v0, $s3, 8
    ctx->pc = 0x2463d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 19), 8));
    // 0x2463dc: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2463dcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x2463e0: 0xa2220000  sb          $v0, 0x0($s1)
    ctx->pc = 0x2463e0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x2463e4: 0xa2330001  sb          $s3, 0x1($s1)
    ctx->pc = 0x2463e4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1), (uint8_t)GPR_U32(ctx, 19));
    // 0x2463e8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2463E8u;
    {
        const bool branch_taken_0x2463e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2463ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2463E8u;
        // 0x2463ec: 0x26310002  addiu       $s1, $s1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2463e8) {
            ctx->pc = 0x2463F4u;
            goto label_2463f4;
        }
    }
    ctx->pc = 0x2463F0u;
label_2463f0:
    // 0x2463f0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2463f0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_2463f4:
    // 0x2463f4: 0x37de0004  ori         $fp, $fp, 0x4
    ctx->pc = 0x2463f4u;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 30) | (uint64_t)(uint16_t)4);
label_2463f8:
    // 0x2463f8: 0x8a840007  lwl         $a0, 0x7($s4)
    ctx->pc = 0x2463f8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 7); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 4) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 4, (int32_t)merged); }
    // 0x2463fc: 0xc08b5fe  jal         func_22D7F8
    ctx->pc = 0x2463FCu;
    SET_GPR_U32(ctx, 31, 0x246404u);
    ctx->pc = 0x246400u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2463FCu;
    // 0x246400: 0x9a840004  lwr         $a0, 0x4($s4) (Delay Slot)
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 4); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 4) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 4) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 4, merged64); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D7F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D7F8u, 0x2463FCu, 0x246404u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x246404u;
label_246404:
    // 0x246404: 0x8ae40007  lwl         $a0, 0x7($s7)
    ctx->pc = 0x246404u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 23), 7); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 4) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 4, (int32_t)merged); }
    // 0x246408: 0x9ae40004  lwr         $a0, 0x4($s7)
    ctx->pc = 0x246408u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 23), 4); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 4) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 4) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 4, merged64); }
    // 0x24640c: 0xc08b5fe  jal         func_22D7F8
    ctx->pc = 0x24640Cu;
    SET_GPR_U32(ctx, 31, 0x246414u);
    ctx->pc = 0x246410u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24640Cu;
    // 0x246410: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D7F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D7F8u, 0x24640Cu, 0x246414u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x246414u;
label_246414:
    // 0x246414: 0x2028023  subu        $s0, $s0, $v0
    ctx->pc = 0x246414u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x246418: 0x12000011  beqz        $s0, . + 4 + (0x11 << 2)
    ctx->pc = 0x246418u;
    {
        const bool branch_taken_0x246418 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x24641Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246418u;
        // 0x24641c: 0x3402ffff  ori         $v0, $zero, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x246418) {
            ctx->pc = 0x246460u;
            goto label_246460;
        }
    }
    ctx->pc = 0x246420u;
    // 0x246420: 0x50102b  sltu        $v0, $v0, $s0
    ctx->pc = 0x246420u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x246424: 0x1440008b  bnez        $v0, . + 4 + (0x8B << 2)
    ctx->pc = 0x246424u;
    {
        const bool branch_taken_0x246424 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x246428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246424u;
        // 0x246428: 0x2a0302d  daddu       $a2, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x246424) {
            ctx->pc = 0x246654u;
            goto label_246654;
        }
    }
    ctx->pc = 0x24642Cu;
    // 0x24642c: 0x3202ffff  andi        $v0, $s0, 0xFFFF
    ctx->pc = 0x24642cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
    // 0x246430: 0x2c420100  sltiu       $v0, $v0, 0x100
    ctx->pc = 0x246430u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)256) ? 1 : 0);
    // 0x246434: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x246434u;
    {
        const bool branch_taken_0x246434 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x246434) {
            ctx->pc = 0x246438u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x246434u;
            // 0x246438: 0xa2300000  sb          $s0, 0x0($s1) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x246458u;
            goto label_246458;
        }
    }
    ctx->pc = 0x24643Cu;
    // 0x24643c: 0xa2200000  sb          $zero, 0x0($s1)
    ctx->pc = 0x24643cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x246440: 0x101202  srl         $v0, $s0, 8
    ctx->pc = 0x246440u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 16), 8));
    // 0x246444: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x246444u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x246448: 0xa2220000  sb          $v0, 0x0($s1)
    ctx->pc = 0x246448u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x24644c: 0xa2300001  sb          $s0, 0x1($s1)
    ctx->pc = 0x24644cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1), (uint8_t)GPR_U32(ctx, 16));
    // 0x246450: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x246450u;
    {
        const bool branch_taken_0x246450 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x246454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246450u;
        // 0x246454: 0x26310002  addiu       $s1, $s1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x246450) {
            ctx->pc = 0x24645Cu;
            goto label_24645c;
        }
    }
    ctx->pc = 0x246458u;
label_246458:
    // 0x246458: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x246458u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_24645c:
    // 0x24645c: 0x37de0008  ori         $fp, $fp, 0x8
    ctx->pc = 0x24645cu;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 30) | (uint64_t)(uint16_t)8);
label_246460:
    // 0x246460: 0x2fc20010  sltiu       $v0, $fp, 0x10
    ctx->pc = 0x246460u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 30) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x246464: 0x10400025  beqz        $v0, . + 4 + (0x25 << 2)
    ctx->pc = 0x246464u;
    {
        const bool branch_taken_0x246464 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x246468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246464u;
        // 0x246468: 0x3c02003f  lui         $v0, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x246464) {
            ctx->pc = 0x2464FCu;
            goto label_2464fc;
        }
    }
    ctx->pc = 0x24646Cu;
    // 0x24646c: 0x1e1880  sll         $v1, $fp, 2
    ctx->pc = 0x24646cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 30), 2));
    // 0x246470: 0x244267b0  addiu       $v0, $v0, 0x67B0
    ctx->pc = 0x246470u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 26544));
    // 0x246474: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x246474u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x246478: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x246478u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x24647c: 0x800008  jr          $a0
    ctx->pc = 0x24647Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x246484u: goto label_246484;
            case 0x2464BCu: goto label_2464bc;
            case 0x2464E0u: goto label_2464e0;
            case 0x2464FCu: goto label_2464fc;
            case 0x246650u: goto label_246650;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24647Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x246484u;
label_246484:
    // 0x246484: 0x92c20003  lbu         $v0, 0x3($s6)
    ctx->pc = 0x246484u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 3)));
    // 0x246488: 0x92c30002  lbu         $v1, 0x2($s6)
    ctx->pc = 0x246488u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 2)));
    // 0x24648c: 0x21238  dsll        $v0, $v0, 8
    ctx->pc = 0x24648cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 8);
    // 0x246490: 0x9644000a  lhu         $a0, 0xA($s2)
    ctx->pc = 0x246490u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 10)));
    // 0x246494: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x246494u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x246498: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x246498u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x24649c: 0x1044006d  beq         $v0, $a0, . + 4 + (0x6D << 2)
    ctx->pc = 0x24649Cu;
    {
        const bool branch_taken_0x24649c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        ctx->pc = 0x2464A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24649Cu;
        // 0x2464a0: 0x2a0302d  daddu       $a2, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24649c) {
            ctx->pc = 0x246654u;
            goto label_246654;
        }
    }
    ctx->pc = 0x2464A4u;
    // 0x2464a4: 0xc08b60c  jal         func_22D830
    ctx->pc = 0x2464A4u;
    SET_GPR_U32(ctx, 31, 0x2464ACu);
    ctx->pc = 0x22D830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D830u, 0x2464A4u, 0x2464ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2464ACu;
label_2464ac:
    // 0x2464ac: 0x10550013  beq         $v0, $s5, . + 4 + (0x13 << 2)
    ctx->pc = 0x2464ACu;
    {
        const bool branch_taken_0x2464ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 21));
        ctx->pc = 0x2464B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2464ACu;
        // 0x2464b0: 0x2a0302d  daddu       $a2, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2464ac) {
            ctx->pc = 0x2464FCu;
            goto label_2464fc;
        }
    }
    ctx->pc = 0x2464B4u;
    // 0x2464b4: 0x10000068  b           . + 4 + (0x68 << 2)
    ctx->pc = 0x2464B4u;
    {
        const bool branch_taken_0x2464b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2464B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2464B4u;
        // 0x2464b8: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2464b4) {
            ctx->pc = 0x246658u;
            goto label_246658;
        }
    }
    ctx->pc = 0x2464BCu;
label_2464bc:
    // 0x2464bc: 0x56130010  bnel        $s0, $s3, . + 4 + (0x10 << 2)
    ctx->pc = 0x2464BCu;
    {
        const bool branch_taken_0x2464bc = (GPR_U64(ctx, 16) != GPR_U64(ctx, 19));
        if (branch_taken_0x2464bc) {
            ctx->pc = 0x2464C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2464BCu;
            // 0x2464c0: 0x92c40005  lbu         $a0, 0x5($s6) (Delay Slot)
            SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 5)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x246500u;
            goto label_246500;
        }
    }
    ctx->pc = 0x2464C4u;
    // 0x2464c4: 0xc08b60c  jal         func_22D830
    ctx->pc = 0x2464C4u;
    SET_GPR_U32(ctx, 31, 0x2464CCu);
    ctx->pc = 0x2464C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2464C4u;
    // 0x2464c8: 0x9644000a  lhu         $a0, 0xA($s2) (Delay Slot)
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 10)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D830u, 0x2464C4u, 0x2464CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2464CCu;
label_2464cc:
    // 0x2464cc: 0x551023  subu        $v0, $v0, $s5
    ctx->pc = 0x2464ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    // 0x2464d0: 0x5602000b  bnel        $s0, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2464D0u;
    {
        const bool branch_taken_0x2464d0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x2464d0) {
            ctx->pc = 0x2464D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2464D0u;
            // 0x2464d4: 0x92c40005  lbu         $a0, 0x5($s6) (Delay Slot)
            SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 5)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x246500u;
            goto label_246500;
        }
    }
    ctx->pc = 0x2464D8u;
    // 0x2464d8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2464D8u;
    {
        const bool branch_taken_0x2464d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2464DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2464D8u;
        // 0x2464dc: 0x241e000b  addiu       $fp, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2464d8) {
            ctx->pc = 0x2464F8u;
            goto label_2464f8;
        }
    }
    ctx->pc = 0x2464E0u;
label_2464e0:
    // 0x2464e0: 0xc08b60c  jal         func_22D830
    ctx->pc = 0x2464E0u;
    SET_GPR_U32(ctx, 31, 0x2464E8u);
    ctx->pc = 0x2464E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2464E0u;
    // 0x2464e4: 0x9644000a  lhu         $a0, 0xA($s2) (Delay Slot)
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 10)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D830u, 0x2464E0u, 0x2464E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2464E8u;
label_2464e8:
    // 0x2464e8: 0x551023  subu        $v0, $v0, $s5
    ctx->pc = 0x2464e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    // 0x2464ec: 0x56020004  bnel        $s0, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2464ECu;
    {
        const bool branch_taken_0x2464ec = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x2464ec) {
            ctx->pc = 0x2464F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2464ECu;
            // 0x2464f0: 0x92c40005  lbu         $a0, 0x5($s6) (Delay Slot)
            SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 5)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x246500u;
            goto label_246500;
        }
    }
    ctx->pc = 0x2464F4u;
    // 0x2464f4: 0x241e000f  addiu       $fp, $zero, 0xF
    ctx->pc = 0x2464f4u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_2464f8:
    // 0x2464f8: 0x3a0882d  daddu       $s1, $sp, $zero
    ctx->pc = 0x2464f8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2464fc:
    // 0x2464fc: 0x92c40005  lbu         $a0, 0x5($s6)
    ctx->pc = 0x2464fcu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 5)));
label_246500:
    // 0x246500: 0x92c20004  lbu         $v0, 0x4($s6)
    ctx->pc = 0x246500u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 4)));
    // 0x246504: 0x42238  dsll        $a0, $a0, 8
    ctx->pc = 0x246504u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 8);
    // 0x246508: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x246508u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x24650c: 0xc08b60c  jal         func_22D830
    ctx->pc = 0x24650Cu;
    SET_GPR_U32(ctx, 31, 0x246514u);
    ctx->pc = 0x246510u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24650Cu;
    // 0x246510: 0x3084ffff  andi        $a0, $a0, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D830u, 0x24650Cu, 0x246514u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x246514u;
label_246514:
    // 0x246514: 0x9644000c  lhu         $a0, 0xC($s2)
    ctx->pc = 0x246514u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x246518: 0xc08b60c  jal         func_22D830
    ctx->pc = 0x246518u;
    SET_GPR_U32(ctx, 31, 0x246520u);
    ctx->pc = 0x24651Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x246518u;
    // 0x24651c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D830u, 0x246518u, 0x246520u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x246520u;
label_246520:
    // 0x246520: 0x2028023  subu        $s0, $s0, $v0
    ctx->pc = 0x246520u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x246524: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x246524u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x246528: 0x1202000d  beq         $s0, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x246528u;
    {
        const bool branch_taken_0x246528 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x24652Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246528u;
        // 0x24652c: 0x2602ffff  addiu       $v0, $s0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x246528) {
            ctx->pc = 0x246560u;
            goto label_246560;
        }
    }
    ctx->pc = 0x246530u;
    // 0x246530: 0x2c4200ff  sltiu       $v0, $v0, 0xFF
    ctx->pc = 0x246530u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)255) ? 1 : 0);
    // 0x246534: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x246534u;
    {
        const bool branch_taken_0x246534 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x246534) {
            ctx->pc = 0x246538u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x246534u;
            // 0x246538: 0xa2300000  sb          $s0, 0x0($s1) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x246558u;
            goto label_246558;
        }
    }
    ctx->pc = 0x24653Cu;
    // 0x24653c: 0xa2200000  sb          $zero, 0x0($s1)
    ctx->pc = 0x24653cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x246540: 0x101202  srl         $v0, $s0, 8
    ctx->pc = 0x246540u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 16), 8));
    // 0x246544: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x246544u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x246548: 0xa2220000  sb          $v0, 0x0($s1)
    ctx->pc = 0x246548u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x24654c: 0xa2300001  sb          $s0, 0x1($s1)
    ctx->pc = 0x24654cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1), (uint8_t)GPR_U32(ctx, 16));
    // 0x246550: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x246550u;
    {
        const bool branch_taken_0x246550 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x246554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246550u;
        // 0x246554: 0x26310002  addiu       $s1, $s1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x246550) {
            ctx->pc = 0x24655Cu;
            goto label_24655c;
        }
    }
    ctx->pc = 0x246558u;
label_246558:
    // 0x246558: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x246558u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_24655c:
    // 0x24655c: 0x37de0020  ori         $fp, $fp, 0x20
    ctx->pc = 0x24655cu;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 30) | (uint64_t)(uint16_t)32);
label_246560:
    // 0x246560: 0x92840011  lbu         $a0, 0x11($s4)
    ctx->pc = 0x246560u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 17)));
    // 0x246564: 0x37c50010  ori         $a1, $fp, 0x10
    ctx->pc = 0x246564u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 30) | (uint64_t)(uint16_t)16);
    // 0x246568: 0x92830010  lbu         $v1, 0x10($s4)
    ctx->pc = 0x246568u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 16)));
    // 0x24656c: 0x9282000d  lbu         $v0, 0xD($s4)
    ctx->pc = 0x24656cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 13)));
    // 0x246570: 0x42238  dsll        $a0, $a0, 8
    ctx->pc = 0x246570u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 8);
    // 0x246574: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x246574u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x246578: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x246578u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x24657c: 0x3084ffff  andi        $a0, $a0, 0xFFFF
    ctx->pc = 0x24657cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x246580: 0xc08b60c  jal         func_22D830
    ctx->pc = 0x246580u;
    SET_GPR_U32(ctx, 31, 0x246588u);
    ctx->pc = 0x246584u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x246580u;
    // 0x246584: 0xa2f00b  movn        $fp, $a1, $v0 (Delay Slot)
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 30, GPR_VEC(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D830u, 0x246580u, 0x246588u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x246588u;
label_246588:
    // 0x246588: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x246588u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24658c: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x24658cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x246590: 0x26450008  addiu       $a1, $s2, 0x8
    ctx->pc = 0x246590u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
    // 0x246594: 0xc08b4f8  jal         func_22D3E0
    ctx->pc = 0x246594u;
    SET_GPR_U32(ctx, 31, 0x24659Cu);
    ctx->pc = 0x246598u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x246594u;
    // 0x246598: 0x2a0302d  daddu       $a2, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D3E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D3E0u, 0x246594u, 0x24659Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24659Cu;
label_24659c:
    // 0x24659c: 0x8fa70018  lw          $a3, 0x18($sp)
    ctx->pc = 0x24659cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2465a0: 0x10e00008  beqz        $a3, . + 4 + (0x8 << 2)
    ctx->pc = 0x2465A0u;
    {
        const bool branch_taken_0x2465a0 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x2465A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2465A0u;
        // 0x2465a4: 0x23d8023  subu        $s0, $s1, $sp (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 29)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2465a0) {
            ctx->pc = 0x2465C4u;
            goto label_2465c4;
        }
    }
    ctx->pc = 0x2465A8u;
    // 0x2465a8: 0x8fa40014  lw          $a0, 0x14($sp)
    ctx->pc = 0x2465a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x2465ac: 0x92430006  lbu         $v1, 0x6($s2)
    ctx->pc = 0x2465acu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 6)));
    // 0x2465b0: 0x90820005  lbu         $v0, 0x5($a0)
    ctx->pc = 0x2465b0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 5)));
    // 0x2465b4: 0x1043000f  beq         $v0, $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x2465B4u;
    {
        const bool branch_taken_0x2465b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x2465B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2465B4u;
        // 0x2465b8: 0x8fa70014  lw          $a3, 0x14($sp) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2465b4) {
            ctx->pc = 0x2465F4u;
            goto label_2465f4;
        }
    }
    ctx->pc = 0x2465BCu;
    // 0x2465bc: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2465BCu;
    {
        const bool branch_taken_0x2465bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2465C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2465BCu;
        // 0x2465c0: 0x26a2fffc  addiu       $v0, $s5, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2465bc) {
            ctx->pc = 0x2465D0u;
            goto label_2465d0;
        }
    }
    ctx->pc = 0x2465C4u;
label_2465c4:
    // 0x2465c4: 0x92430006  lbu         $v1, 0x6($s2)
    ctx->pc = 0x2465c4u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 6)));
    // 0x2465c8: 0x8fa70014  lw          $a3, 0x14($sp)
    ctx->pc = 0x2465c8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x2465cc: 0x26a2fffc  addiu       $v0, $s5, -0x4
    ctx->pc = 0x2465ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967292));
label_2465d0:
    // 0x2465d0: 0x50a823  subu        $s5, $v0, $s0
    ctx->pc = 0x2465d0u;
    SET_GPR_S32(ctx, 21, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x2465d4: 0xa0e30005  sb          $v1, 0x5($a3)
    ctx->pc = 0x2465d4u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 5), (uint8_t)GPR_U32(ctx, 3));
    // 0x2465d8: 0x2d58821  addu        $s1, $s6, $s5
    ctx->pc = 0x2465d8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 21)));
    // 0x2465dc: 0x37c30040  ori         $v1, $fp, 0x40
    ctx->pc = 0x2465dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 30) | (uint64_t)(uint16_t)64);
    // 0x2465e0: 0xa2230000  sb          $v1, 0x0($s1)
    ctx->pc = 0x2465e0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x2465e4: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2465e4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x2465e8: 0x92420006  lbu         $v0, 0x6($s2)
    ctx->pc = 0x2465e8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 6)));
    // 0x2465ec: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2465ECu;
    {
        const bool branch_taken_0x2465ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2465F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2465ECu;
        // 0x2465f0: 0xa2220000  sb          $v0, 0x0($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2465ec) {
            ctx->pc = 0x246604u;
            goto label_246604;
        }
    }
    ctx->pc = 0x2465F4u;
label_2465f4:
    // 0x2465f4: 0x26a2fffd  addiu       $v0, $s5, -0x3
    ctx->pc = 0x2465f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967293));
    // 0x2465f8: 0x50a823  subu        $s5, $v0, $s0
    ctx->pc = 0x2465f8u;
    SET_GPR_S32(ctx, 21, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x2465fc: 0x2d58821  addu        $s1, $s6, $s5
    ctx->pc = 0x2465fcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 21)));
    // 0x246600: 0xa23e0000  sb          $fp, 0x0($s1)
    ctx->pc = 0x246600u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 30));
label_246604:
    // 0x246604: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x246604u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x246608: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x246608u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x24660c: 0x132a02  srl         $a1, $s3, 8
    ctx->pc = 0x24660cu;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 19), 8));
    // 0x246610: 0x8fa70010  lw          $a3, 0x10($sp)
    ctx->pc = 0x246610u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x246614: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x246614u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x246618: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x246618u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x24661c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x24661cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x246620: 0x8c630008  lw          $v1, 0x8($v1)
    ctx->pc = 0x246620u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x246624: 0x551023  subu        $v0, $v0, $s5
    ctx->pc = 0x246624u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    // 0x246628: 0x751821  addu        $v1, $v1, $s5
    ctx->pc = 0x246628u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 21)));
    // 0x24662c: 0xace2000c  sw          $v0, 0xC($a3)
    ctx->pc = 0x24662cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 12), GPR_U32(ctx, 2));
    // 0x246630: 0xace30008  sw          $v1, 0x8($a3)
    ctx->pc = 0x246630u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 3));
    // 0x246634: 0xa2250000  sb          $a1, 0x0($s1)
    ctx->pc = 0x246634u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 5));
    // 0x246638: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x246638u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x24663c: 0xa2330000  sb          $s3, 0x0($s1)
    ctx->pc = 0x24663cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 19));
    // 0x246640: 0xc08b4f8  jal         func_22D3E0
    ctx->pc = 0x246640u;
    SET_GPR_U32(ctx, 31, 0x246648u);
    ctx->pc = 0x246644u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x246640u;
    // 0x246644: 0x26250001  addiu       $a1, $s1, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D3E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D3E0u, 0x246640u, 0x246648u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x246648u;
label_246648:
    // 0x246648: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x246648u;
    {
        const bool branch_taken_0x246648 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24664Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246648u;
        // 0x24664c: 0x24020080  addiu       $v0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x246648) {
            ctx->pc = 0x246678u;
            goto label_246678;
        }
    }
    ctx->pc = 0x246650u;
label_246650:
    // 0x246650: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x246650u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_246654:
    // 0x246654: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x246654u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_246658:
    // 0x246658: 0xc08b4f8  jal         func_22D3E0
    ctx->pc = 0x246658u;
    SET_GPR_U32(ctx, 31, 0x246660u);
    ctx->pc = 0x24665Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x246658u;
    // 0x24665c: 0x26450008  addiu       $a1, $s2, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D3E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D3E0u, 0x246658u, 0x246660u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x246660u;
label_246660:
    // 0x246660: 0x92440006  lbu         $a0, 0x6($s2)
    ctx->pc = 0x246660u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 6)));
    // 0x246664: 0x24020070  addiu       $v0, $zero, 0x70
    ctx->pc = 0x246664u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
    // 0x246668: 0xa2c40009  sb          $a0, 0x9($s6)
    ctx->pc = 0x246668u;
    WRITE8(ADD32(GPR_U32(ctx, 22), 9), (uint8_t)GPR_U32(ctx, 4));
    // 0x24666c: 0x8fa40014  lw          $a0, 0x14($sp)
    ctx->pc = 0x24666cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x246670: 0x92430006  lbu         $v1, 0x6($s2)
    ctx->pc = 0x246670u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 6)));
    // 0x246674: 0xa0830005  sb          $v1, 0x5($a0)
    ctx->pc = 0x246674u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 5), (uint8_t)GPR_U32(ctx, 3));
label_246678:
    // 0x246678: 0xdfbf00b0  ld          $ra, 0xB0($sp)
    ctx->pc = 0x246678u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x24667c: 0xdfbe00a0  ld          $fp, 0xA0($sp)
    ctx->pc = 0x24667cu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x246680: 0xdfb70090  ld          $s7, 0x90($sp)
    ctx->pc = 0x246680u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x246684: 0xdfb60080  ld          $s6, 0x80($sp)
    ctx->pc = 0x246684u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x246688: 0xdfb50070  ld          $s5, 0x70($sp)
    ctx->pc = 0x246688u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x24668c: 0xdfb40060  ld          $s4, 0x60($sp)
    ctx->pc = 0x24668cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x246690: 0xdfb30050  ld          $s3, 0x50($sp)
    ctx->pc = 0x246690u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x246694: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x246694u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x246698: 0xdfb10030  ld          $s1, 0x30($sp)
    ctx->pc = 0x246698u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x24669c: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x24669cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2466a0: 0x3e00008  jr          $ra
    ctx->pc = 0x2466A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2466A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2466A0u;
        // 0x2466a4: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2466A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2466A8u;
    // 0x2466a8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2466a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2466ac: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x2466acu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2466b0: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x2466b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x2466b4: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x2466b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x2466b8: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2466b8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2466bc: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x2466bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x2466c0: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2466c0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2466c4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2466c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x2466c8: 0x12400002  beqz        $s2, . + 4 + (0x2 << 2)
    ctx->pc = 0x2466C8u;
    {
        const bool branch_taken_0x2466c8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x2466CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2466C8u;
        // 0x2466cc: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2466c8) {
            ctx->pc = 0x2466D4u;
            goto label_2466d4;
        }
    }
    ctx->pc = 0x2466D0u;
    // 0x2466d0: 0x8e510000  lw          $s1, 0x0($s2)
    ctx->pc = 0x2466d0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2466d4:
    // 0x2466d4: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x2466d4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2466d8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2466d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2466dc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2466dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2466e0: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2466e0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2466e4: 0x3a0482d  daddu       $t1, $sp, $zero
    ctx->pc = 0x2466e4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2466e8: 0xc0919de  jal         func_246778
    ctx->pc = 0x2466E8u;
    SET_GPR_U32(ctx, 31, 0x2466F0u);
    ctx->pc = 0x2466ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2466E8u;
    // 0x2466ec: 0x37aa0004  ori         $t2, $sp, 0x4 (Delay Slot)
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)4);
    ctx->in_delay_slot = false;
    ctx->pc = 0x246778u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x246778u, 0x2466E8u, 0x2466F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2466F0u;
label_2466f0:
    // 0x2466f0: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2466F0u;
    {
        const bool branch_taken_0x2466f0 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x2466f0) {
            ctx->pc = 0x246700u;
            goto label_246700;
        }
    }
    ctx->pc = 0x2466F8u;
    // 0x2466f8: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x2466F8u;
    {
        const bool branch_taken_0x2466f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2466FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2466F8u;
        // 0x2466fc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2466f8) {
            ctx->pc = 0x24675Cu;
            goto label_24675c;
        }
    }
    ctx->pc = 0x246700u;
label_246700:
    // 0x246700: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x246700u;
    {
        const bool branch_taken_0x246700 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x246704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246700u;
        // 0x246704: 0x2228821  addu        $s1, $s1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x246700) {
            ctx->pc = 0x246758u;
            goto label_246758;
        }
    }
    ctx->pc = 0x246708u;
    // 0x246708: 0x2028023  subu        $s0, $s0, $v0
    ctx->pc = 0x246708u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x24670c: 0x32220003  andi        $v0, $s1, 0x3
    ctx->pc = 0x24670cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)3);
    // 0x246710: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x246710u;
    {
        const bool branch_taken_0x246710 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x246714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246710u;
        // 0x246714: 0x8fa20004  lw          $v0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x246710) {
            ctx->pc = 0x24673Cu;
            goto label_24673c;
        }
    }
    ctx->pc = 0x246718u;
    // 0x246718: 0x1a000005  blez        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x246718u;
    {
        const bool branch_taken_0x246718 = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x24671Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246718u;
        // 0x24671c: 0x2404fffc  addiu       $a0, $zero, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x246718) {
            ctx->pc = 0x246730u;
            goto label_246730;
        }
    }
    ctx->pc = 0x246720u;
    // 0x246720: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x246720u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x246724: 0x2242024  and         $a0, $s1, $a0
    ctx->pc = 0x246724u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 17) & GPR_U64(ctx, 4));
    // 0x246728: 0xc08b4fc  jal         func_22D3F0
    ctx->pc = 0x246728u;
    SET_GPR_U32(ctx, 31, 0x246730u);
    ctx->pc = 0x24672Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x246728u;
    // 0x24672c: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D3F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D3F0u, 0x246728u, 0x246730u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x246730u;
label_246730:
    // 0x246730: 0x2402fffc  addiu       $v0, $zero, -0x4
    ctx->pc = 0x246730u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
    // 0x246734: 0x2228824  and         $s1, $s1, $v0
    ctx->pc = 0x246734u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) & GPR_U64(ctx, 2));
    // 0x246738: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x246738u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_24673c:
    // 0x24673c: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x24673cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x246740: 0x2228823  subu        $s1, $s1, $v0
    ctx->pc = 0x246740u;
    SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x246744: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x246744u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x246748: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x246748u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24674c: 0xc08b4f8  jal         func_22D3E0
    ctx->pc = 0x24674Cu;
    SET_GPR_U32(ctx, 31, 0x246754u);
    ctx->pc = 0x246750u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24674Cu;
    // 0x246750: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D3E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D3E0u, 0x24674Cu, 0x246754u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x246754u;
label_246754:
    // 0x246754: 0xae510000  sw          $s1, 0x0($s2)
    ctx->pc = 0x246754u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 17));
label_246758:
    // 0x246758: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x246758u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_24675c:
    // 0x24675c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x24675cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x246760: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x246760u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x246764: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x246764u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x246768: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x246768u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x24676c: 0x3e00008  jr          $ra
    ctx->pc = 0x24676Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x246770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24676Cu;
        // 0x246770: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24676Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x246774u;
    // 0x246774: 0x0  nop
    ctx->pc = 0x246774u;
    // NOP
}
