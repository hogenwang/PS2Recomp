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

// Function: sub_0024B210
// Address: 0x24b210 - 0x24b5f8
void sub_0024B210_0x24b210(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024B210_0x24b210");
#endif

    switch (ctx->pc) {
        case 0x24b260u: goto label_24b260;
        case 0x24b278u: goto label_24b278;
        case 0x24b284u: goto label_24b284;
        case 0x24b28cu: goto label_24b28c;
        case 0x24b310u: goto label_24b310;
        case 0x24b350u: goto label_24b350;
        case 0x24b3f0u: goto label_24b3f0;
        case 0x24b490u: goto label_24b490;
        case 0x24b4f0u: goto label_24b4f0;
        case 0x24b598u: goto label_24b598;
        default: break;
    }

    ctx->pc = 0x24b210u;

    // 0x24b210: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x24b210u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x24b214: 0xffb30050  sd          $s3, 0x50($sp)
    ctx->pc = 0x24b214u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 19));
    // 0x24b218: 0xffb60080  sd          $s6, 0x80($sp)
    ctx->pc = 0x24b218u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 22));
    // 0x24b21c: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x24b21cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24b220: 0xffb50070  sd          $s5, 0x70($sp)
    ctx->pc = 0x24b220u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 21));
    // 0x24b224: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x24b224u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24b228: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x24b228u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
    // 0x24b22c: 0xe0a82d  daddu       $s5, $a3, $zero
    ctx->pc = 0x24b22cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24b230: 0xffb10030  sd          $s1, 0x30($sp)
    ctx->pc = 0x24b230u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 17));
    // 0x24b234: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x24b234u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24b238: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x24b238u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x24b23c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x24b23cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24b240: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x24b240u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x24b244: 0x30b000ff  andi        $s0, $a1, 0xFF
    ctx->pc = 0x24b244u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x24b248: 0x2e620014  sltiu       $v0, $s3, 0x14
    ctx->pc = 0x24b248u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)20) ? 1 : 0);
    // 0x24b24c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x24B24Cu;
    {
        const bool branch_taken_0x24b24c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24B250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24B24Cu;
        // 0x24b250: 0xffb40060  sd          $s4, 0x60($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24b24c) {
            ctx->pc = 0x24B260u;
            goto label_24b260;
        }
    }
    ctx->pc = 0x24B254u;
    // 0x24b254: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x24b254u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x24b258: 0xc08b5e0  jal         func_22D780
    ctx->pc = 0x24B258u;
    SET_GPR_U32(ctx, 31, 0x24B260u);
    ctx->pc = 0x24B25Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24B258u;
    // 0x24b25c: 0x24846b20  addiu       $a0, $a0, 0x6B20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 27424));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D780u, 0x24B258u, 0x24B260u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24B260u;
label_24b260:
    // 0x24b260: 0x8e42000c  lw          $v0, 0xC($s2)
    ctx->pc = 0x24b260u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x24b264: 0x2c420014  sltiu       $v0, $v0, 0x14
    ctx->pc = 0x24b264u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)20) ? 1 : 0);
    // 0x24b268: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x24B268u;
    {
        const bool branch_taken_0x24b268 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24B26Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24B268u;
        // 0x24b26c: 0x3c04003f  lui         $a0, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24b268) {
            ctx->pc = 0x24B278u;
            goto label_24b278;
        }
    }
    ctx->pc = 0x24B270u;
    // 0x24b270: 0xc08b5e0  jal         func_22D780
    ctx->pc = 0x24B270u;
    SET_GPR_U32(ctx, 31, 0x24B278u);
    ctx->pc = 0x24B274u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24B270u;
    // 0x24b274: 0x24846b40  addiu       $a0, $a0, 0x6B40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 27456));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D780u, 0x24B270u, 0x24B278u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24B278u;
label_24b278:
    // 0x24b278: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x24b278u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24b27c: 0xc048c96  jal         func_123258
    ctx->pc = 0x24B27Cu;
    SET_GPR_U32(ctx, 31, 0x24B284u);
    ctx->pc = 0x24B280u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24B27Cu;
    // 0x24b280: 0x24050014  addiu       $a1, $zero, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x123258u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x123258u, 0x24B27Cu, 0x24B284u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24B284u;
label_24b284:
    // 0x24b284: 0xc08a262  jal         func_228988
    ctx->pc = 0x24B284u;
    SET_GPR_U32(ctx, 31, 0x24B28Cu);
    ctx->pc = 0x24B288u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24B284u;
    // 0x24b288: 0x32a4ffff  andi        $a0, $s5, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x228988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228988u, 0x24B284u, 0x24B28Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24B28Cu;
label_24b28c:
    // 0x24b28c: 0xa3b00009  sb          $s0, 0x9($sp)
    ctx->pc = 0x24b28cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 9), (uint8_t)GPR_U32(ctx, 16));
    // 0x24b290: 0xa7a2000a  sh          $v0, 0xA($sp)
    ctx->pc = 0x24b290u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 10), (uint16_t)GPR_U32(ctx, 2));
    // 0x24b294: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x24b294u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x24b298: 0x8843000f  lwl         $v1, 0xF($v0)
    ctx->pc = 0x24b298u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 15); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 3) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 3, (int32_t)merged); }
    // 0x24b29c: 0x9843000c  lwr         $v1, 0xC($v0)
    ctx->pc = 0x24b29cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 12); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 3) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 3) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 3, merged64); }
    // 0x24b2a0: 0xaba3000f  swl         $v1, 0xF($sp)
    ctx->pc = 0x24b2a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 15); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 3); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x24b2a4: 0xbba3000c  swr         $v1, 0xC($sp)
    ctx->pc = 0x24b2a4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 12); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 3); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x24b2a8: 0x8e430008  lw          $v1, 0x8($s2)
    ctx->pc = 0x24b2a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x24b2ac: 0x88620013  lwl         $v0, 0x13($v1)
    ctx->pc = 0x24b2acu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 19); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 2) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 2, (int32_t)merged); }
    // 0x24b2b0: 0x98620010  lwr         $v0, 0x10($v1)
    ctx->pc = 0x24b2b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 16); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 2) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 2) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 2, merged64); }
    // 0x24b2b4: 0xaba20013  swl         $v0, 0x13($sp)
    ctx->pc = 0x24b2b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 19); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 2); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x24b2b8: 0xbba20010  swr         $v0, 0x10($sp)
    ctx->pc = 0x24b2b8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 2); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x24b2bc: 0x97a20002  lhu         $v0, 0x2($sp)
    ctx->pc = 0x24b2bcu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 2)));
    // 0x24b2c0: 0x97b00000  lhu         $s0, 0x0($sp)
    ctx->pc = 0x24b2c0u;
    SET_GPR_U32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24b2c4: 0x97a30004  lhu         $v1, 0x4($sp)
    ctx->pc = 0x24b2c4u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x24b2c8: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x24b2c8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x24b2cc: 0x97a40006  lhu         $a0, 0x6($sp)
    ctx->pc = 0x24b2ccu;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 6)));
    // 0x24b2d0: 0x2038021  addu        $s0, $s0, $v1
    ctx->pc = 0x24b2d0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x24b2d4: 0x97a20008  lhu         $v0, 0x8($sp)
    ctx->pc = 0x24b2d4u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x24b2d8: 0x2048021  addu        $s0, $s0, $a0
    ctx->pc = 0x24b2d8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
    // 0x24b2dc: 0x97a3000a  lhu         $v1, 0xA($sp)
    ctx->pc = 0x24b2dcu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 10)));
    // 0x24b2e0: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x24b2e0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x24b2e4: 0x97a4000c  lhu         $a0, 0xC($sp)
    ctx->pc = 0x24b2e4u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x24b2e8: 0x2038021  addu        $s0, $s0, $v1
    ctx->pc = 0x24b2e8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x24b2ec: 0x97a5000e  lhu         $a1, 0xE($sp)
    ctx->pc = 0x24b2ecu;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 14)));
    // 0x24b2f0: 0x2048021  addu        $s0, $s0, $a0
    ctx->pc = 0x24b2f0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
    // 0x24b2f4: 0x97a30010  lhu         $v1, 0x10($sp)
    ctx->pc = 0x24b2f4u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x24b2f8: 0x2058021  addu        $s0, $s0, $a1
    ctx->pc = 0x24b2f8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
    // 0x24b2fc: 0x97a20012  lhu         $v0, 0x12($sp)
    ctx->pc = 0x24b2fcu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 18)));
    // 0x24b300: 0x2038021  addu        $s0, $s0, $v1
    ctx->pc = 0x24b300u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x24b304: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x24B304u;
    {
        const bool branch_taken_0x24b304 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24B308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24B304u;
        // 0x24b308: 0x2028021  addu        $s0, $s0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24b304) {
            ctx->pc = 0x24B314u;
            goto label_24b314;
        }
    }
    ctx->pc = 0x24B30Cu;
    // 0x24b30c: 0x0  nop
    ctx->pc = 0x24b30cu;
    // NOP
label_24b310:
    // 0x24b310: 0x2639823  subu        $s3, $s3, $v1
    ctx->pc = 0x24b310u;
    SET_GPR_S32(ctx, 19, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
label_24b314:
    // 0x24b314: 0x1240009b  beqz        $s2, . + 4 + (0x9B << 2)
    ctx->pc = 0x24B314u;
    {
        const bool branch_taken_0x24b314 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x24b314) {
            ctx->pc = 0x24B584u;
            goto label_24b584;
        }
    }
    ctx->pc = 0x24B31Cu;
    // 0x24b31c: 0x1a600005  blez        $s3, . + 4 + (0x5 << 2)
    ctx->pc = 0x24B31Cu;
    {
        const bool branch_taken_0x24b31c = (GPR_S32(ctx, 19) <= 0);
        if (branch_taken_0x24b31c) {
            ctx->pc = 0x24B334u;
            goto label_24b334;
        }
    }
    ctx->pc = 0x24B324u;
    // 0x24b324: 0x8e43000c  lw          $v1, 0xC($s2)
    ctx->pc = 0x24b324u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x24b328: 0x263102a  slt         $v0, $s3, $v1
    ctx->pc = 0x24b328u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x24b32c: 0x5040fff8  beql        $v0, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x24B32Cu;
    {
        const bool branch_taken_0x24b32c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x24b32c) {
            ctx->pc = 0x24B330u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24B32Cu;
            // 0x24b330: 0x8e520000  lw          $s2, 0x0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24B310u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_24b310;
        }
    }
    ctx->pc = 0x24B334u;
label_24b334:
    // 0x24b334: 0x12400093  beqz        $s2, . + 4 + (0x93 << 2)
    ctx->pc = 0x24B334u;
    {
        const bool branch_taken_0x24b334 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x24b334) {
            ctx->pc = 0x24B584u;
            goto label_24b584;
        }
    }
    ctx->pc = 0x24B33Cu;
    // 0x24b33c: 0x12a00096  beqz        $s5, . + 4 + (0x96 << 2)
    ctx->pc = 0x24B33Cu;
    {
        const bool branch_taken_0x24b33c = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x24B340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24B33Cu;
        // 0x24b340: 0x2408ffff  addiu       $t0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24b33c) {
            ctx->pc = 0x24B598u;
            goto label_24b598;
        }
    }
    ctx->pc = 0x24B344u;
    // 0x24b344: 0x3406ffff  ori         $a2, $zero, 0xFFFF
    ctx->pc = 0x24b344u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x24b348: 0x8e43000c  lw          $v1, 0xC($s2)
    ctx->pc = 0x24b348u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x24b34c: 0x0  nop
    ctx->pc = 0x24b34cu;
    // NOP
label_24b350:
    // 0x24b350: 0x50600087  beql        $v1, $zero, . + 4 + (0x87 << 2)
    ctx->pc = 0x24B350u;
    {
        const bool branch_taken_0x24b350 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x24b350) {
            ctx->pc = 0x24B354u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24B350u;
            // 0x24b354: 0x8e450000  lw          $a1, 0x0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24B570u;
            goto label_24b570;
        }
    }
    ctx->pc = 0x24B358u;
    // 0x24b358: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x24b358u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x24b35c: 0x1628000b  bne         $s1, $t0, . + 4 + (0xB << 2)
    ctx->pc = 0x24B35Cu;
    {
        const bool branch_taken_0x24b35c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 8));
        ctx->pc = 0x24B360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24B35Cu;
        // 0x24b360: 0x533821  addu        $a3, $v0, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24b35c) {
            ctx->pc = 0x24B38Cu;
            goto label_24b38c;
        }
    }
    ctx->pc = 0x24B364u;
    // 0x24b364: 0x90e20000  lbu         $v0, 0x0($a3)
    ctx->pc = 0x24b364u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x24b368: 0x328400ff  andi        $a0, $s4, 0xFF
    ctx->pc = 0x24b368u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)255);
    // 0x24b36c: 0x731823  subu        $v1, $v1, $s3
    ctx->pc = 0x24b36cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x24b370: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x24b370u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x24b374: 0x21200  sll         $v0, $v0, 8
    ctx->pc = 0x24b374u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x24b378: 0x2471ffff  addiu       $s1, $v1, -0x1
    ctx->pc = 0x24b378u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x24b37c: 0x82a025  or          $s4, $a0, $v0
    ctx->pc = 0x24b37cu;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x24b380: 0x26b5ffff  addiu       $s5, $s5, -0x1
    ctx->pc = 0x24b380u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967295));
    // 0x24b384: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x24B384u;
    {
        const bool branch_taken_0x24b384 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24B388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24B384u;
        // 0x24b388: 0x2908021  addu        $s0, $s4, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24b384) {
            ctx->pc = 0x24B390u;
            goto label_24b390;
        }
    }
    ctx->pc = 0x24B38Cu;
label_24b38c:
    // 0x24b38c: 0x738823  subu        $s1, $v1, $s3
    ctx->pc = 0x24b38cu;
    SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
label_24b390:
    // 0x24b390: 0x2b1102a  slt         $v0, $s5, $s1
    ctx->pc = 0x24b390u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 21) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x24b394: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x24b394u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24b398: 0x2a2880b  movn        $s1, $s5, $v0
    ctx->pc = 0x24b398u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 21));
    // 0x24b39c: 0x30e30001  andi        $v1, $a3, 0x1
    ctx->pc = 0x24b39cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)1);
    // 0x24b3a0: 0x1060000f  beqz        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x24B3A0u;
    {
        const bool branch_taken_0x24b3a0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x24B3A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24B3A0u;
        // 0x24b3a4: 0x2b1a823  subu        $s5, $s5, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)SUB32(GPR_U32(ctx, 21), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24b3a0) {
            ctx->pc = 0x24B3E0u;
            goto label_24b3e0;
        }
    }
    ctx->pc = 0x24B3A8u;
    // 0x24b3a8: 0x1a20000d  blez        $s1, . + 4 + (0xD << 2)
    ctx->pc = 0x24B3A8u;
    {
        const bool branch_taken_0x24b3a8 = (GPR_S32(ctx, 17) <= 0);
        ctx->pc = 0x24B3ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24B3A8u;
        // 0x24b3ac: 0x101c02  srl         $v1, $s0, 16 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24b3a8) {
            ctx->pc = 0x24B3E0u;
            goto label_24b3e0;
        }
    }
    ctx->pc = 0x24B3B0u;
    // 0x24b3b0: 0x3202ffff  andi        $v0, $s0, 0xFFFF
    ctx->pc = 0x24b3b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
    // 0x24b3b4: 0x438021  addu        $s0, $v0, $v1
    ctx->pc = 0x24b3b4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x24b3b8: 0x90e50000  lbu         $a1, 0x0($a3)
    ctx->pc = 0x24b3b8u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x24b3bc: 0x2062023  subu        $a0, $s0, $a2
    ctx->pc = 0x24b3bcu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 6)));
    // 0x24b3c0: 0xd0102a  slt         $v0, $a2, $s0
    ctx->pc = 0x24b3c0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x24b3c4: 0x82800b  movn        $s0, $a0, $v0
    ctx->pc = 0x24b3c4u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 4));
    // 0x24b3c8: 0x3283ff00  andi        $v1, $s4, 0xFF00
    ctx->pc = 0x24b3c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)65280);
    // 0x24b3cc: 0xa3a025  or          $s4, $a1, $v1
    ctx->pc = 0x24b3ccu;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
    // 0x24b3d0: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x24b3d0u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x24b3d4: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x24b3d4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x24b3d8: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x24b3d8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x24b3dc: 0x24160001  addiu       $s6, $zero, 0x1
    ctx->pc = 0x24b3dcu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_24b3e0:
    // 0x24b3e0: 0x2631ffe0  addiu       $s1, $s1, -0x20
    ctx->pc = 0x24b3e0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967264));
    // 0x24b3e4: 0x6200027  bltz        $s1, . + 4 + (0x27 << 2)
    ctx->pc = 0x24B3E4u;
    {
        const bool branch_taken_0x24b3e4 = (GPR_S32(ctx, 17) < 0);
        ctx->pc = 0x24B3E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24B3E4u;
        // 0x24b3e8: 0x8e450000  lw          $a1, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24b3e4) {
            ctx->pc = 0x24B484u;
            goto label_24b484;
        }
    }
    ctx->pc = 0x24B3ECu;
    // 0x24b3ec: 0x0  nop
    ctx->pc = 0x24b3ecu;
    // NOP
label_24b3f0:
    // 0x24b3f0: 0x94e20000  lhu         $v0, 0x0($a3)
    ctx->pc = 0x24b3f0u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x24b3f4: 0x2631ffe0  addiu       $s1, $s1, -0x20
    ctx->pc = 0x24b3f4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967264));
    // 0x24b3f8: 0x94e30002  lhu         $v1, 0x2($a3)
    ctx->pc = 0x24b3f8u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 2)));
    // 0x24b3fc: 0x94e40004  lhu         $a0, 0x4($a3)
    ctx->pc = 0x24b3fcu;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x24b400: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x24b400u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x24b404: 0x94e20006  lhu         $v0, 0x6($a3)
    ctx->pc = 0x24b404u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 6)));
    // 0x24b408: 0x2038021  addu        $s0, $s0, $v1
    ctx->pc = 0x24b408u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x24b40c: 0x94e30008  lhu         $v1, 0x8($a3)
    ctx->pc = 0x24b40cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x24b410: 0x2048021  addu        $s0, $s0, $a0
    ctx->pc = 0x24b410u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
    // 0x24b414: 0x94e4000a  lhu         $a0, 0xA($a3)
    ctx->pc = 0x24b414u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 10)));
    // 0x24b418: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x24b418u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x24b41c: 0x94e2000c  lhu         $v0, 0xC($a3)
    ctx->pc = 0x24b41cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 12)));
    // 0x24b420: 0x2038021  addu        $s0, $s0, $v1
    ctx->pc = 0x24b420u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x24b424: 0x94e3000e  lhu         $v1, 0xE($a3)
    ctx->pc = 0x24b424u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 14)));
    // 0x24b428: 0x2048021  addu        $s0, $s0, $a0
    ctx->pc = 0x24b428u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
    // 0x24b42c: 0x94e40010  lhu         $a0, 0x10($a3)
    ctx->pc = 0x24b42cu;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 16)));
    // 0x24b430: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x24b430u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x24b434: 0x94e20012  lhu         $v0, 0x12($a3)
    ctx->pc = 0x24b434u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 18)));
    // 0x24b438: 0x2038021  addu        $s0, $s0, $v1
    ctx->pc = 0x24b438u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x24b43c: 0x94e30014  lhu         $v1, 0x14($a3)
    ctx->pc = 0x24b43cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 20)));
    // 0x24b440: 0x2048021  addu        $s0, $s0, $a0
    ctx->pc = 0x24b440u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
    // 0x24b444: 0x94e40016  lhu         $a0, 0x16($a3)
    ctx->pc = 0x24b444u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 22)));
    // 0x24b448: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x24b448u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x24b44c: 0x94e20018  lhu         $v0, 0x18($a3)
    ctx->pc = 0x24b44cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 24)));
    // 0x24b450: 0x2038021  addu        $s0, $s0, $v1
    ctx->pc = 0x24b450u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x24b454: 0x2048021  addu        $s0, $s0, $a0
    ctx->pc = 0x24b454u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
    // 0x24b458: 0x94e3001a  lhu         $v1, 0x1A($a3)
    ctx->pc = 0x24b458u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 26)));
    // 0x24b45c: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x24b45cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x24b460: 0x94e4001c  lhu         $a0, 0x1C($a3)
    ctx->pc = 0x24b460u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 28)));
    // 0x24b464: 0x94e2001e  lhu         $v0, 0x1E($a3)
    ctx->pc = 0x24b464u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 30)));
    // 0x24b468: 0x2038021  addu        $s0, $s0, $v1
    ctx->pc = 0x24b468u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x24b46c: 0x2048021  addu        $s0, $s0, $a0
    ctx->pc = 0x24b46cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
    // 0x24b470: 0x24e70020  addiu       $a3, $a3, 0x20
    ctx->pc = 0x24b470u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 32));
    // 0x24b474: 0x621ffde  bgez        $s1, . + 4 + (-0x22 << 2)
    ctx->pc = 0x24B474u;
    {
        const bool branch_taken_0x24b474 = (GPR_S32(ctx, 17) >= 0);
        ctx->pc = 0x24B478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24B474u;
        // 0x24b478: 0x2028021  addu        $s0, $s0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24b474) {
            ctx->pc = 0x24B3F0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_24b3f0;
        }
    }
    ctx->pc = 0x24B47Cu;
    // 0x24b47c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x24B47Cu;
    {
        const bool branch_taken_0x24b47c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24B480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24B47Cu;
        // 0x24b480: 0x26310018  addiu       $s1, $s1, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24b47c) {
            ctx->pc = 0x24B488u;
            goto label_24b488;
        }
    }
    ctx->pc = 0x24B484u;
label_24b484:
    // 0x24b484: 0x26310018  addiu       $s1, $s1, 0x18
    ctx->pc = 0x24b484u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 24));
label_24b488:
    // 0x24b488: 0x622000d  bltzl       $s1, . + 4 + (0xD << 2)
    ctx->pc = 0x24B488u;
    {
        const bool branch_taken_0x24b488 = (GPR_S32(ctx, 17) < 0);
        if (branch_taken_0x24b488) {
            ctx->pc = 0x24B48Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24B488u;
            // 0x24b48c: 0x26310008  addiu       $s1, $s1, 0x8 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24B4C0u;
            goto label_24b4c0;
        }
    }
    ctx->pc = 0x24B490u;
label_24b490:
    // 0x24b490: 0x94e20000  lhu         $v0, 0x0($a3)
    ctx->pc = 0x24b490u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x24b494: 0x2631fff8  addiu       $s1, $s1, -0x8
    ctx->pc = 0x24b494u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967288));
    // 0x24b498: 0x94e30002  lhu         $v1, 0x2($a3)
    ctx->pc = 0x24b498u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 2)));
    // 0x24b49c: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x24b49cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x24b4a0: 0x94e40004  lhu         $a0, 0x4($a3)
    ctx->pc = 0x24b4a0u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x24b4a4: 0x94e20006  lhu         $v0, 0x6($a3)
    ctx->pc = 0x24b4a4u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 6)));
    // 0x24b4a8: 0x2038021  addu        $s0, $s0, $v1
    ctx->pc = 0x24b4a8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x24b4ac: 0x2048021  addu        $s0, $s0, $a0
    ctx->pc = 0x24b4acu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
    // 0x24b4b0: 0x24e70008  addiu       $a3, $a3, 0x8
    ctx->pc = 0x24b4b0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
    // 0x24b4b4: 0x621fff6  bgez        $s1, . + 4 + (-0xA << 2)
    ctx->pc = 0x24B4B4u;
    {
        const bool branch_taken_0x24b4b4 = (GPR_S32(ctx, 17) >= 0);
        ctx->pc = 0x24B4B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24B4B4u;
        // 0x24b4b8: 0x2028021  addu        $s0, $s0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24b4b4) {
            ctx->pc = 0x24B490u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_24b490;
        }
    }
    ctx->pc = 0x24B4BCu;
    // 0x24b4bc: 0x26310008  addiu       $s1, $s1, 0x8
    ctx->pc = 0x24b4bcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
label_24b4c0:
    // 0x24b4c0: 0x16200003  bnez        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x24B4C0u;
    {
        const bool branch_taken_0x24b4c0 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x24B4C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24B4C0u;
        // 0x24b4c4: 0x101c02  srl         $v1, $s0, 16 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24b4c0) {
            ctx->pc = 0x24B4D0u;
            goto label_24b4d0;
        }
    }
    ctx->pc = 0x24B4C8u;
    // 0x24b4c8: 0x52c0002a  beql        $s6, $zero, . + 4 + (0x2A << 2)
    ctx->pc = 0x24B4C8u;
    {
        const bool branch_taken_0x24b4c8 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        if (branch_taken_0x24b4c8) {
            ctx->pc = 0x24B4CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24B4C8u;
            // 0x24b4cc: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24B574u;
            goto label_24b574;
        }
    }
    ctx->pc = 0x24B4D0u;
label_24b4d0:
    // 0x24b4d0: 0x3202ffff  andi        $v0, $s0, 0xFFFF
    ctx->pc = 0x24b4d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
    // 0x24b4d4: 0x438021  addu        $s0, $v0, $v1
    ctx->pc = 0x24b4d4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x24b4d8: 0x2631fffe  addiu       $s1, $s1, -0x2
    ctx->pc = 0x24b4d8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967294));
    // 0x24b4dc: 0x2061823  subu        $v1, $s0, $a2
    ctx->pc = 0x24b4dcu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 6)));
    // 0x24b4e0: 0xd0102a  slt         $v0, $a2, $s0
    ctx->pc = 0x24b4e0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x24b4e4: 0x6200009  bltz        $s1, . + 4 + (0x9 << 2)
    ctx->pc = 0x24B4E4u;
    {
        const bool branch_taken_0x24b4e4 = (GPR_S32(ctx, 17) < 0);
        ctx->pc = 0x24B4E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24B4E4u;
        // 0x24b4e8: 0x62800b  movn        $s0, $v1, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24b4e4) {
            ctx->pc = 0x24B50Cu;
            goto label_24b50c;
        }
    }
    ctx->pc = 0x24B4ECu;
    // 0x24b4ec: 0x0  nop
    ctx->pc = 0x24b4ecu;
    // NOP
label_24b4f0:
    // 0x24b4f0: 0x94e20000  lhu         $v0, 0x0($a3)
    ctx->pc = 0x24b4f0u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x24b4f4: 0x2631fffe  addiu       $s1, $s1, -0x2
    ctx->pc = 0x24b4f4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967294));
    // 0x24b4f8: 0x24e70002  addiu       $a3, $a3, 0x2
    ctx->pc = 0x24b4f8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 2));
    // 0x24b4fc: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x24b4fcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x24b500: 0x0  nop
    ctx->pc = 0x24b500u;
    // NOP
    // 0x24b504: 0x621fffa  bgez        $s1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x24B504u;
    {
        const bool branch_taken_0x24b504 = (GPR_S32(ctx, 17) >= 0);
        if (branch_taken_0x24b504) {
            ctx->pc = 0x24B4F0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_24b4f0;
        }
    }
    ctx->pc = 0x24B50Cu;
label_24b50c:
    // 0x24b50c: 0x12c00012  beqz        $s6, . + 4 + (0x12 << 2)
    ctx->pc = 0x24B50Cu;
    {
        const bool branch_taken_0x24b50c = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x24B510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24B50Cu;
        // 0x24b510: 0x101c02  srl         $v1, $s0, 16 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24b50c) {
            ctx->pc = 0x24B558u;
            goto label_24b558;
        }
    }
    ctx->pc = 0x24B514u;
    // 0x24b514: 0x3202ffff  andi        $v0, $s0, 0xFFFF
    ctx->pc = 0x24b514u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
    // 0x24b518: 0x438021  addu        $s0, $v0, $v1
    ctx->pc = 0x24b518u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x24b51c: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x24b51cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24b520: 0x2061823  subu        $v1, $s0, $a2
    ctx->pc = 0x24b520u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 6)));
    // 0x24b524: 0xd0102a  slt         $v0, $a2, $s0
    ctx->pc = 0x24b524u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x24b528: 0x62800b  movn        $s0, $v1, $v0
    ctx->pc = 0x24b528u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 3));
    // 0x24b52c: 0x16280008  bne         $s1, $t0, . + 4 + (0x8 << 2)
    ctx->pc = 0x24B52Cu;
    {
        const bool branch_taken_0x24b52c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 8));
        ctx->pc = 0x24B530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24B52Cu;
        // 0x24b530: 0x108200  sll         $s0, $s0, 8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24b52c) {
            ctx->pc = 0x24B550u;
            goto label_24b550;
        }
    }
    ctx->pc = 0x24B534u;
    // 0x24b534: 0x90e20000  lbu         $v0, 0x0($a3)
    ctx->pc = 0x24b534u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x24b538: 0x328300ff  andi        $v1, $s4, 0xFF
    ctx->pc = 0x24b538u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)255);
    // 0x24b53c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x24b53cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24b540: 0x21200  sll         $v0, $v0, 8
    ctx->pc = 0x24b540u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x24b544: 0x62a025  or          $s4, $v1, $v0
    ctx->pc = 0x24b544u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x24b548: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x24B548u;
    {
        const bool branch_taken_0x24b548 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24B54Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24B548u;
        // 0x24b54c: 0x2908021  addu        $s0, $s4, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24b548) {
            ctx->pc = 0x24B570u;
            goto label_24b570;
        }
    }
    ctx->pc = 0x24B550u;
label_24b550:
    // 0x24b550: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x24B550u;
    {
        const bool branch_taken_0x24b550 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24B554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24B550u;
        // 0x24b554: 0x2411ffff  addiu       $s1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24b550) {
            ctx->pc = 0x24B570u;
            goto label_24b570;
        }
    }
    ctx->pc = 0x24B558u;
label_24b558:
    // 0x24b558: 0x16280006  bne         $s1, $t0, . + 4 + (0x6 << 2)
    ctx->pc = 0x24B558u;
    {
        const bool branch_taken_0x24b558 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 8));
        ctx->pc = 0x24B55Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24B558u;
        // 0x24b55c: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24b558) {
            ctx->pc = 0x24B574u;
            goto label_24b574;
        }
    }
    ctx->pc = 0x24B560u;
    // 0x24b560: 0x90e30000  lbu         $v1, 0x0($a3)
    ctx->pc = 0x24b560u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x24b564: 0x3282ff00  andi        $v0, $s4, 0xFF00
    ctx->pc = 0x24b564u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)65280);
    // 0x24b568: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x24B568u;
    {
        const bool branch_taken_0x24b568 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24B56Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24B568u;
        // 0x24b56c: 0x62a025  or          $s4, $v1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 20, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24b568) {
            ctx->pc = 0x24B574u;
            goto label_24b574;
        }
    }
    ctx->pc = 0x24B570u;
label_24b570:
    // 0x24b570: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x24b570u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_24b574:
    // 0x24b574: 0x12400003  beqz        $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x24B574u;
    {
        const bool branch_taken_0x24b574 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x24b574) {
            ctx->pc = 0x24B584u;
            goto label_24b584;
        }
    }
    ctx->pc = 0x24B57Cu;
    // 0x24b57c: 0x56a0ff74  bnel        $s5, $zero, . + 4 + (-0x8C << 2)
    ctx->pc = 0x24B57Cu;
    {
        const bool branch_taken_0x24b57c = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        if (branch_taken_0x24b57c) {
            ctx->pc = 0x24B580u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24B57Cu;
            // 0x24b580: 0x8e43000c  lw          $v1, 0xC($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24B350u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_24b350;
        }
    }
    ctx->pc = 0x24B584u;
label_24b584:
    // 0x24b584: 0x12a00004  beqz        $s5, . + 4 + (0x4 << 2)
    ctx->pc = 0x24B584u;
    {
        const bool branch_taken_0x24b584 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x24B588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24B584u;
        // 0x24b588: 0x24040006  addiu       $a0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24b584) {
            ctx->pc = 0x24B598u;
            goto label_24b598;
        }
    }
    ctx->pc = 0x24B58Cu;
    // 0x24b58c: 0x3c05003f  lui         $a1, 0x3F
    ctx->pc = 0x24b58cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
    // 0x24b590: 0xc08b5ac  jal         func_22D6B0
    ctx->pc = 0x24B590u;
    SET_GPR_U32(ctx, 31, 0x24B598u);
    ctx->pc = 0x24B594u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24B590u;
    // 0x24b594: 0x24a56b60  addiu       $a1, $a1, 0x6B60 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27488));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D6B0u, 0x24B590u, 0x24B598u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24B598u;
label_24b598:
    // 0x24b598: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x24b598u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x24b59c: 0x16220004  bne         $s1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x24B59Cu;
    {
        const bool branch_taken_0x24b59c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x24B5A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24B59Cu;
        // 0x24b5a0: 0x102402  srl         $a0, $s0, 16 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24b59c) {
            ctx->pc = 0x24B5B0u;
            goto label_24b5b0;
        }
    }
    ctx->pc = 0x24B5A4u;
    // 0x24b5a4: 0x328200ff  andi        $v0, $s4, 0xFF
    ctx->pc = 0x24b5a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)255);
    // 0x24b5a8: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x24b5a8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x24b5ac: 0x102402  srl         $a0, $s0, 16
    ctx->pc = 0x24b5acu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 16), 16));
label_24b5b0:
    // 0x24b5b0: 0x3203ffff  andi        $v1, $s0, 0xFFFF
    ctx->pc = 0x24b5b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
    // 0x24b5b4: 0x648021  addu        $s0, $v1, $a0
    ctx->pc = 0x24b5b4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x24b5b8: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x24b5b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x24b5bc: 0x50182a  slt         $v1, $v0, $s0
    ctx->pc = 0x24b5bcu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x24b5c0: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x24b5c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x24b5c4: 0x2021023  subu        $v0, $s0, $v0
    ctx->pc = 0x24b5c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x24b5c8: 0xdfb60080  ld          $s6, 0x80($sp)
    ctx->pc = 0x24b5c8u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x24b5cc: 0x43800b  movn        $s0, $v0, $v1
    ctx->pc = 0x24b5ccu;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 2));
    // 0x24b5d0: 0xdfb50070  ld          $s5, 0x70($sp)
    ctx->pc = 0x24b5d0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x24b5d4: 0x101027  nor         $v0, $zero, $s0
    ctx->pc = 0x24b5d4u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 16)));
    // 0x24b5d8: 0xdfb40060  ld          $s4, 0x60($sp)
    ctx->pc = 0x24b5d8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x24b5dc: 0xdfb30050  ld          $s3, 0x50($sp)
    ctx->pc = 0x24b5dcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x24b5e0: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x24b5e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x24b5e4: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x24b5e4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x24b5e8: 0xdfb10030  ld          $s1, 0x30($sp)
    ctx->pc = 0x24b5e8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x24b5ec: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x24b5ecu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x24b5f0: 0x3e00008  jr          $ra
    ctx->pc = 0x24B5F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24B5F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24B5F0u;
        // 0x24b5f4: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24B5F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24B5F8u;
}
