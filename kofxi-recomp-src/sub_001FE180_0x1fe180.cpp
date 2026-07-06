#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001FE180
// Address: 0x1fe180 - 0x1fe648
void sub_001FE180_0x1fe180(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FE180_0x1fe180");
#endif

    switch (ctx->pc) {
        case 0x1fe198u: goto label_1fe198;
        case 0x1fe1d0u: goto label_1fe1d0;
        case 0x1fe1e8u: goto label_1fe1e8;
        case 0x1fe210u: goto label_1fe210;
        case 0x1fe274u: goto label_1fe274;
        case 0x1fe300u: goto label_1fe300;
        case 0x1fe314u: goto label_1fe314;
        case 0x1fe31cu: goto label_1fe31c;
        case 0x1fe348u: goto label_1fe348;
        case 0x1fe3a0u: goto label_1fe3a0;
        case 0x1fe3b4u: goto label_1fe3b4;
        case 0x1fe4a4u: goto label_1fe4a4;
        case 0x1fe4bcu: goto label_1fe4bc;
        case 0x1fe520u: goto label_1fe520;
        case 0x1fe560u: goto label_1fe560;
        case 0x1fe5a0u: goto label_1fe5a0;
        case 0x1fe5e0u: goto label_1fe5e0;
        case 0x1fe604u: goto label_1fe604;
        case 0x1fe618u: goto label_1fe618;
        default: break;
    }

    ctx->pc = 0x1fe180u;

    // 0x1fe180: 0x8c850010  lw          $a1, 0x10($a0)
    ctx->pc = 0x1fe180u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1fe184: 0x18a0000b  blez        $a1, . + 4 + (0xB << 2)
    ctx->pc = 0x1FE184u;
    {
        const bool branch_taken_0x1fe184 = (GPR_S32(ctx, 5) <= 0);
        ctx->pc = 0x1FE188u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FE184u;
            // 0x1fe188: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fe184) {
            ctx->pc = 0x1FE1B4u;
            goto label_1fe1b4;
        }
    }
    ctx->pc = 0x1FE18Cu;
    // 0x1fe18c: 0x24840018  addiu       $a0, $a0, 0x18
    ctx->pc = 0x1fe18cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 24));
    // 0x1fe190: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x1fe190u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fe194: 0x0  nop
    ctx->pc = 0x1fe194u;
    // NOP
label_1fe198:
    // 0x1fe198: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1fe198u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1fe19c: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x1fe19cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x1fe1a0: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1fe1a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1fe1a4: 0x0  nop
    ctx->pc = 0x1fe1a4u;
    // NOP
    // 0x1fe1a8: 0x0  nop
    ctx->pc = 0x1fe1a8u;
    // NOP
    // 0x1fe1ac: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1FE1ACu;
    {
        const bool branch_taken_0x1fe1ac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FE1B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FE1ACu;
            // 0x1fe1b0: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fe1ac) {
            ctx->pc = 0x1FE198u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1fe198;
        }
    }
    ctx->pc = 0x1FE1B4u;
label_1fe1b4:
    // 0x1fe1b4: 0xc5001a  div         $zero, $a2, $a1
    ctx->pc = 0x1fe1b4u;
    { int32_t divisor = GPR_S32(ctx, 5);    int32_t dividend = GPR_S32(ctx, 6);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1fe1b8: 0x50a00001  beql        $a1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1FE1B8u;
    {
        const bool branch_taken_0x1fe1b8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fe1b8) {
            ctx->pc = 0x1FE1BCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1FE1B8u;
            // 0x1fe1bc: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
            ctx->pc = 0x1FE1C0u;
            goto label_1fe1c0;
        }
    }
    ctx->pc = 0x1FE1C0u;
label_1fe1c0:
    // 0x1fe1c0: 0x1012  mflo        $v0
    ctx->pc = 0x1fe1c0u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x1fe1c4: 0x3e00008  jr          $ra
    ctx->pc = 0x1FE1C4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1FE1CCu;
    // 0x1fe1cc: 0x0  nop
    ctx->pc = 0x1fe1ccu;
    // NOP
label_1fe1d0:
    // 0x1fe1d0: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x1fe1d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x1fe1d4: 0x3c030039  lui         $v1, 0x39
    ctx->pc = 0x1fe1d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)57 << 16));
    // 0x1fe1d8: 0xac4417b4  sw          $a0, 0x17B4($v0)
    ctx->pc = 0x1fe1d8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 6068), GPR_U32(ctx, 4));
    // 0x1fe1dc: 0x3e00008  jr          $ra
    ctx->pc = 0x1FE1DCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FE1E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FE1DCu;
            // 0x1fe1e0: 0xac6517b0  sw          $a1, 0x17B0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 6064), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1FE1E4u;
    // 0x1fe1e4: 0x0  nop
    ctx->pc = 0x1fe1e4u;
    // NOP
label_1fe1e8:
    // 0x1fe1e8: 0x3c03003f  lui         $v1, 0x3F
    ctx->pc = 0x1fe1e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63 << 16));
    // 0x1fe1ec: 0x27bdfec0  addiu       $sp, $sp, -0x140
    ctx->pc = 0x1fe1ecu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966976));
    // 0x1fe1f0: 0x2463ebb0  addiu       $v1, $v1, -0x1450
    ctx->pc = 0x1fe1f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294962096));
    // 0x1fe1f4: 0xffb00120  sd          $s0, 0x120($sp)
    ctx->pc = 0x1fe1f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 288), GPR_U64(ctx, 16));
    // 0x1fe1f8: 0x30620007  andi        $v0, $v1, 0x7
    ctx->pc = 0x1fe1f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)7);
    // 0x1fe1fc: 0xffb10128  sd          $s1, 0x128($sp)
    ctx->pc = 0x1fe1fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 296), GPR_U64(ctx, 17));
    // 0x1fe200: 0xffbf0130  sd          $ra, 0x130($sp)
    ctx->pc = 0x1fe200u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 304), GPR_U64(ctx, 31));
    // 0x1fe204: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x1FE204u;
    {
        const bool branch_taken_0x1fe204 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FE208u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FE204u;
            // 0x1fe208: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fe204) {
            ctx->pc = 0x1FE270u;
            goto label_1fe270;
        }
    }
    ctx->pc = 0x1FE20Cu;
    // 0x1fe20c: 0x24620100  addiu       $v0, $v1, 0x100
    ctx->pc = 0x1fe20cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 256));
label_1fe210:
    // 0x1fe210: 0x68650007  ldl         $a1, 0x7($v1)
    ctx->pc = 0x1fe210u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x1fe214: 0x6c650000  ldr         $a1, 0x0($v1)
    ctx->pc = 0x1fe214u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x1fe218: 0x6866000f  ldl         $a2, 0xF($v1)
    ctx->pc = 0x1fe218u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x1fe21c: 0x6c660008  ldr         $a2, 0x8($v1)
    ctx->pc = 0x1fe21cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x1fe220: 0x68670017  ldl         $a3, 0x17($v1)
    ctx->pc = 0x1fe220u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x1fe224: 0x6c670010  ldr         $a3, 0x10($v1)
    ctx->pc = 0x1fe224u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x1fe228: 0x6868001f  ldl         $t0, 0x1F($v1)
    ctx->pc = 0x1fe228u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x1fe22c: 0x6c680018  ldr         $t0, 0x18($v1)
    ctx->pc = 0x1fe22cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x1fe230: 0xb0850007  sdl         $a1, 0x7($a0)
    ctx->pc = 0x1fe230u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1fe234: 0xb4850000  sdr         $a1, 0x0($a0)
    ctx->pc = 0x1fe234u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1fe238: 0xb086000f  sdl         $a2, 0xF($a0)
    ctx->pc = 0x1fe238u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1fe23c: 0xb4860008  sdr         $a2, 0x8($a0)
    ctx->pc = 0x1fe23cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1fe240: 0xb0870017  sdl         $a3, 0x17($a0)
    ctx->pc = 0x1fe240u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1fe244: 0xb4870010  sdr         $a3, 0x10($a0)
    ctx->pc = 0x1fe244u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1fe248: 0xb088001f  sdl         $t0, 0x1F($a0)
    ctx->pc = 0x1fe248u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1fe24c: 0xb4880018  sdr         $t0, 0x18($a0)
    ctx->pc = 0x1fe24cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1fe250: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x1fe250u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x1fe254: 0x0  nop
    ctx->pc = 0x1fe254u;
    // NOP
    // 0x1fe258: 0x0  nop
    ctx->pc = 0x1fe258u;
    // NOP
    // 0x1fe25c: 0x1462ffec  bne         $v1, $v0, . + 4 + (-0x14 << 2)
    ctx->pc = 0x1FE25Cu;
    {
        const bool branch_taken_0x1fe25c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1FE260u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FE25Cu;
            // 0x1fe260: 0x24840020  addiu       $a0, $a0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fe25c) {
            ctx->pc = 0x1FE210u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1fe210;
        }
    }
    ctx->pc = 0x1FE264u;
    // 0x1fe264: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x1FE264u;
    {
        const bool branch_taken_0x1fe264 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fe264) {
            ctx->pc = 0x1FE2A8u;
            goto label_1fe2a8;
        }
    }
    ctx->pc = 0x1FE26Cu;
    // 0x1fe26c: 0x0  nop
    ctx->pc = 0x1fe26cu;
    // NOP
label_1fe270:
    // 0x1fe270: 0x24620100  addiu       $v0, $v1, 0x100
    ctx->pc = 0x1fe270u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 256));
label_1fe274:
    // 0x1fe274: 0xdc650000  ld          $a1, 0x0($v1)
    ctx->pc = 0x1fe274u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1fe278: 0xdc660008  ld          $a2, 0x8($v1)
    ctx->pc = 0x1fe278u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1fe27c: 0xdc670010  ld          $a3, 0x10($v1)
    ctx->pc = 0x1fe27cu;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x1fe280: 0xdc680018  ld          $t0, 0x18($v1)
    ctx->pc = 0x1fe280u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x1fe284: 0xfc850000  sd          $a1, 0x0($a0)
    ctx->pc = 0x1fe284u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 5));
    // 0x1fe288: 0xfc860008  sd          $a2, 0x8($a0)
    ctx->pc = 0x1fe288u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 6));
    // 0x1fe28c: 0xfc870010  sd          $a3, 0x10($a0)
    ctx->pc = 0x1fe28cu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 16), GPR_U64(ctx, 7));
    // 0x1fe290: 0xfc880018  sd          $t0, 0x18($a0)
    ctx->pc = 0x1fe290u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 24), GPR_U64(ctx, 8));
    // 0x1fe294: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x1fe294u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x1fe298: 0x0  nop
    ctx->pc = 0x1fe298u;
    // NOP
    // 0x1fe29c: 0x0  nop
    ctx->pc = 0x1fe29cu;
    // NOP
    // 0x1fe2a0: 0x1462fff4  bne         $v1, $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x1FE2A0u;
    {
        const bool branch_taken_0x1fe2a0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1FE2A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FE2A0u;
            // 0x1fe2a4: 0x24840020  addiu       $a0, $a0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fe2a0) {
            ctx->pc = 0x1FE274u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1fe274;
        }
    }
    ctx->pc = 0x1FE2A8u;
label_1fe2a8:
    // 0x1fe2a8: 0x68650007  ldl         $a1, 0x7($v1)
    ctx->pc = 0x1fe2a8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x1fe2ac: 0x6c650000  ldr         $a1, 0x0($v1)
    ctx->pc = 0x1fe2acu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x1fe2b0: 0x6866000f  ldl         $a2, 0xF($v1)
    ctx->pc = 0x1fe2b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x1fe2b4: 0x6c660008  ldr         $a2, 0x8($v1)
    ctx->pc = 0x1fe2b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x1fe2b8: 0x80670010  lb          $a3, 0x10($v1)
    ctx->pc = 0x1fe2b8u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x1fe2bc: 0x80680011  lb          $t0, 0x11($v1)
    ctx->pc = 0x1fe2bcu;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 17)));
    // 0x1fe2c0: 0xb0850007  sdl         $a1, 0x7($a0)
    ctx->pc = 0x1fe2c0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1fe2c4: 0xb4850000  sdr         $a1, 0x0($a0)
    ctx->pc = 0x1fe2c4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1fe2c8: 0xb086000f  sdl         $a2, 0xF($a0)
    ctx->pc = 0x1fe2c8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1fe2cc: 0xb4860008  sdr         $a2, 0x8($a0)
    ctx->pc = 0x1fe2ccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1fe2d0: 0xa0870010  sb          $a3, 0x10($a0)
    ctx->pc = 0x1fe2d0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 16), (uint8_t)GPR_U32(ctx, 7));
    // 0x1fe2d4: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x1fe2d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x1fe2d8: 0x245117b4  addiu       $s1, $v0, 0x17B4
    ctx->pc = 0x1fe2d8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 6068));
    // 0x1fe2dc: 0xa0880011  sb          $t0, 0x11($a0)
    ctx->pc = 0x1fe2dcu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 17), (uint8_t)GPR_U32(ctx, 8));
    // 0x1fe2e0: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x1fe2e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1fe2e4: 0x10800012  beqz        $a0, . + 4 + (0x12 << 2)
    ctx->pc = 0x1FE2E4u;
    {
        const bool branch_taken_0x1fe2e4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FE2E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FE2E4u;
            // 0x1fe2e8: 0x3c020039  lui         $v0, 0x39 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fe2e4) {
            ctx->pc = 0x1FE330u;
            goto label_1fe330;
        }
    }
    ctx->pc = 0x1FE2ECu;
    // 0x1fe2ec: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1fe2ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fe2f0: 0x8c4617b0  lw          $a2, 0x17B0($v0)
    ctx->pc = 0x1fe2f0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6064)));
    // 0x1fe2f4: 0x3c100039  lui         $s0, 0x39
    ctx->pc = 0x1fe2f4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)57 << 16));
    // 0x1fe2f8: 0xc049cb6  jal         func_1272D8
    ctx->pc = 0x1FE2F8u;
    SET_GPR_U32(ctx, 31, 0x1FE300u);
    ctx->pc = 0x1FE2FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FE2F8u;
            // 0x1fe2fc: 0x261017bc  addiu       $s0, $s0, 0x17BC (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 6076));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1272D8u;
    if (runtime->hasFunction(0x1272D8u)) {
        auto targetFn = runtime->lookupFunction(0x1272D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FE300u; }
        if (ctx->pc != 0x1FE300u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001272D8_0x1272d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FE300u; }
        if (ctx->pc != 0x1FE300u) { return; }
    }
    ctx->pc = 0x1FE300u;
label_1fe300:
    // 0x1fe300: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x1fe300u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1fe304: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1fe304u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fe308: 0x0  nop
    ctx->pc = 0x1fe308u;
    // NOP
    // 0x1fe30c: 0xc04a7dc  jal         func_129F70
    ctx->pc = 0x1FE30Cu;
    SET_GPR_U32(ctx, 31, 0x1FE314u);
    ctx->pc = 0x1FE310u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FE30Cu;
            // 0x1fe310: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129F70u;
    if (runtime->hasFunction(0x129F70u)) {
        auto targetFn = runtime->lookupFunction(0x129F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FE314u; }
        if (ctx->pc != 0x1FE314u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00129F70_0x129f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FE314u; }
        if (ctx->pc != 0x1FE314u) { return; }
    }
    ctx->pc = 0x1FE314u;
label_1fe314:
    // 0x1fe314: 0xc04a83e  jal         func_12A0F8
    ctx->pc = 0x1FE314u;
    SET_GPR_U32(ctx, 31, 0x1FE31Cu);
    ctx->pc = 0x1FE318u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FE314u;
            // 0x1fe318: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12A0F8u;
    if (runtime->hasFunction(0x12A0F8u)) {
        auto targetFn = runtime->lookupFunction(0x12A0F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FE31Cu; }
        if (ctx->pc != 0x1FE31Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012A0F8_0x12a0f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FE31Cu; }
        if (ctx->pc != 0x1FE31Cu) { return; }
    }
    ctx->pc = 0x1FE31Cu;
label_1fe31c:
    // 0x1fe31c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1fe31cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1fe320: 0x3c040039  lui         $a0, 0x39
    ctx->pc = 0x1fe320u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)57 << 16));
    // 0x1fe324: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1fe324u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1fe328: 0xac8317c0  sw          $v1, 0x17C0($a0)
    ctx->pc = 0x1fe328u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 6080), GPR_U32(ctx, 3));
    // 0x1fe32c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x1fe32cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_1fe330:
    // 0x1fe330: 0xdfb00120  ld          $s0, 0x120($sp)
    ctx->pc = 0x1fe330u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x1fe334: 0xdfb10128  ld          $s1, 0x128($sp)
    ctx->pc = 0x1fe334u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x1fe338: 0xdfbf0130  ld          $ra, 0x130($sp)
    ctx->pc = 0x1fe338u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x1fe33c: 0x3e00008  jr          $ra
    ctx->pc = 0x1FE33Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FE340u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FE33Cu;
            // 0x1fe340: 0x27bd0140  addiu       $sp, $sp, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1FE344u;
    // 0x1fe344: 0x0  nop
    ctx->pc = 0x1fe344u;
    // NOP
label_1fe348:
    // 0x1fe348: 0x27bdfdf0  addiu       $sp, $sp, -0x210
    ctx->pc = 0x1fe348u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966768));
    // 0x1fe34c: 0x3c030039  lui         $v1, 0x39
    ctx->pc = 0x1fe34cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)57 << 16));
    // 0x1fe350: 0xffbe0200  sd          $fp, 0x200($sp)
    ctx->pc = 0x1fe350u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 512), GPR_U64(ctx, 30));
    // 0x1fe354: 0x80f02d  daddu       $fp, $a0, $zero
    ctx->pc = 0x1fe354u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fe358: 0xffb001c0  sd          $s0, 0x1C0($sp)
    ctx->pc = 0x1fe358u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 448), GPR_U64(ctx, 16));
    // 0x1fe35c: 0x246317b4  addiu       $v1, $v1, 0x17B4
    ctx->pc = 0x1fe35cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 6068));
    // 0x1fe360: 0xffb101c8  sd          $s1, 0x1C8($sp)
    ctx->pc = 0x1fe360u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 456), GPR_U64(ctx, 17));
    // 0x1fe364: 0xffb201d0  sd          $s2, 0x1D0($sp)
    ctx->pc = 0x1fe364u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 464), GPR_U64(ctx, 18));
    // 0x1fe368: 0xffb301d8  sd          $s3, 0x1D8($sp)
    ctx->pc = 0x1fe368u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 472), GPR_U64(ctx, 19));
    // 0x1fe36c: 0xffb401e0  sd          $s4, 0x1E0($sp)
    ctx->pc = 0x1fe36cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 480), GPR_U64(ctx, 20));
    // 0x1fe370: 0xffb501e8  sd          $s5, 0x1E8($sp)
    ctx->pc = 0x1fe370u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 488), GPR_U64(ctx, 21));
    // 0x1fe374: 0xffb601f0  sd          $s6, 0x1F0($sp)
    ctx->pc = 0x1fe374u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 496), GPR_U64(ctx, 22));
    // 0x1fe378: 0xffb701f8  sd          $s7, 0x1F8($sp)
    ctx->pc = 0x1fe378u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 504), GPR_U64(ctx, 23));
    // 0x1fe37c: 0xffbf0208  sd          $ra, 0x208($sp)
    ctx->pc = 0x1fe37cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 520), GPR_U64(ctx, 31));
    // 0x1fe380: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1fe380u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1fe384: 0x1040005a  beqz        $v0, . + 4 + (0x5A << 2)
    ctx->pc = 0x1FE384u;
    {
        const bool branch_taken_0x1fe384 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FE388u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FE384u;
            // 0x1fe388: 0x240403e8  addiu       $a0, $zero, 0x3E8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fe384) {
            ctx->pc = 0x1FE4F0u;
            goto label_1fe4f0;
        }
    }
    ctx->pc = 0x1FE38Cu;
    // 0x1fe38c: 0x8fc60120  lw          $a2, 0x120($fp)
    ctx->pc = 0x1fe38cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 288)));
    // 0x1fe390: 0x3c10003f  lui         $s0, 0x3F
    ctx->pc = 0x1fe390u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)63 << 16));
    // 0x1fe394: 0x8fc50118  lw          $a1, 0x118($fp)
    ctx->pc = 0x1fe394u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 280)));
    // 0x1fe398: 0xc0771c6  jal         func_1DC718
    ctx->pc = 0x1FE398u;
    SET_GPR_U32(ctx, 31, 0x1FE3A0u);
    ctx->pc = 0x1FE39Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FE398u;
            // 0x1fe39c: 0x2610ecc8  addiu       $s0, $s0, -0x1338 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294962376));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DC718u;
    if (runtime->hasFunction(0x1DC718u)) {
        auto targetFn = runtime->lookupFunction(0x1DC718u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FE3A0u; }
        if (ctx->pc != 0x1FE3A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DC718_0x1dc718(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FE3A0u; }
        if (ctx->pc != 0x1FE3A0u) { return; }
    }
    ctx->pc = 0x1FE3A0u;
label_1fe3a0:
    // 0x1fe3a0: 0xdfd10118  ld          $s1, 0x118($fp)
    ctx->pc = 0x1fe3a0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 30), 280)));
    // 0x1fe3a4: 0xdfc50120  ld          $a1, 0x120($fp)
    ctx->pc = 0x1fe3a4u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 30), 288)));
    // 0x1fe3a8: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x1fe3a8u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fe3ac: 0xc04818c  jal         func_120630
    ctx->pc = 0x1FE3ACu;
    SET_GPR_U32(ctx, 31, 0x1FE3B4u);
    ctx->pc = 0x1FE3B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FE3ACu;
            // 0x1fe3b0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x120630u;
    if (runtime->hasFunction(0x120630u)) {
        auto targetFn = runtime->lookupFunction(0x120630u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FE3B4u; }
        if (ctx->pc != 0x1FE3B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00120630_0x120630(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FE3B4u; }
        if (ctx->pc != 0x1FE3B4u) { return; }
    }
    ctx->pc = 0x1FE3B4u;
label_1fe3b4:
    // 0x1fe3b4: 0x3c0b7fff  lui         $t3, 0x7FFF
    ctx->pc = 0x1fe3b4u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)32767 << 16));
    // 0x1fe3b8: 0x356bffff  ori         $t3, $t3, 0xFFFF
    ctx->pc = 0x1fe3b8u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | (uint64_t)(uint16_t)65535);
    // 0x1fe3bc: 0xdfc40188  ld          $a0, 0x188($fp)
    ctx->pc = 0x1fe3bcu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 30), 392)));
    // 0x1fe3c0: 0x220502d  daddu       $t2, $s1, $zero
    ctx->pc = 0x1fe3c0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fe3c4: 0xdfc30128  ld          $v1, 0x128($fp)
    ctx->pc = 0x1fe3c4u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 30), 296)));
    // 0x1fe3c8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1fe3c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fe3cc: 0xffa401a0  sd          $a0, 0x1A0($sp)
    ctx->pc = 0x1fe3ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 416), GPR_U64(ctx, 4));
    // 0x1fe3d0: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x1fe3d0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fe3d4: 0x11483f  dsra32      $t1, $s1, 0
    ctx->pc = 0x1fe3d4u;
    SET_GPR_S64(ctx, 9, GPR_S64(ctx, 17) >> (32 + 0));
    // 0x1fe3d8: 0x3c0302d  daddu       $a2, $fp, $zero
    ctx->pc = 0x1fe3d8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fe3dc: 0xdfd20108  ld          $s2, 0x108($fp)
    ctx->pc = 0x1fe3dcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 30), 264)));
    // 0x1fe3e0: 0x2c0402d  daddu       $t0, $s6, $zero
    ctx->pc = 0x1fe3e0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fe3e4: 0x14b5824  and         $t3, $t2, $t3
    ctx->pc = 0x1fe3e4u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 10) & GPR_U64(ctx, 11));
    // 0x1fe3e8: 0xffb201a8  sd          $s2, 0x1A8($sp)
    ctx->pc = 0x1fe3e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 424), GPR_U64(ctx, 18));
    // 0x1fe3ec: 0xdfb201a0  ld          $s2, 0x1A0($sp)
    ctx->pc = 0x1fe3ecu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 416)));
    // 0x1fe3f0: 0x8fc401ac  lw          $a0, 0x1AC($fp)
    ctx->pc = 0x1fe3f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 428)));
    // 0x1fe3f4: 0x243b82f  dsubu       $s7, $s2, $v1
    ctx->pc = 0x1fe3f4u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 18) - GPR_U64(ctx, 3));
    // 0x1fe3f8: 0xffa401b0  sd          $a0, 0x1B0($sp)
    ctx->pc = 0x1fe3f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 432), GPR_U64(ctx, 4));
    // 0x1fe3fc: 0xdfa401a8  ld          $a0, 0x1A8($sp)
    ctx->pc = 0x1fe3fcu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 424)));
    // 0x1fe400: 0x8fcd0198  lw          $t5, 0x198($fp)
    ctx->pc = 0x1fe400u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 408)));
    // 0x1fe404: 0x83902f  dsubu       $s2, $a0, $v1
    ctx->pc = 0x1fe404u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 4) - GPR_U64(ctx, 3));
    // 0x1fe408: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x1fe408u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1fe40c: 0x8fce01a4  lw          $t6, 0x1A4($fp)
    ctx->pc = 0x1fe40cu;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 420)));
    // 0x1fe410: 0x8fd901b0  lw          $t9, 0x1B0($fp)
    ctx->pc = 0x1fe410u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 432)));
    // 0x1fe414: 0x8fd801b4  lw          $t8, 0x1B4($fp)
    ctx->pc = 0x1fe414u;
    SET_GPR_S32(ctx, 24, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 436)));
    // 0x1fe418: 0x8fcf01a0  lw          $t7, 0x1A0($fp)
    ctx->pc = 0x1fe418u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 416)));
    // 0x1fe41c: 0x8fcc0194  lw          $t4, 0x194($fp)
    ctx->pc = 0x1fe41cu;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 404)));
    // 0x1fe420: 0x8fd101a8  lw          $s1, 0x1A8($fp)
    ctx->pc = 0x1fe420u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 424)));
    // 0x1fe424: 0x8fd0019c  lw          $s0, 0x19C($fp)
    ctx->pc = 0x1fe424u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 412)));
    // 0x1fe428: 0x8fc20190  lw          $v0, 0x190($fp)
    ctx->pc = 0x1fe428u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 400)));
    // 0x1fe42c: 0x8fd501b8  lw          $s5, 0x1B8($fp)
    ctx->pc = 0x1fe42cu;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 440)));
    // 0x1fe430: 0x9fd40004  lwu         $s4, 0x4($fp)
    ctx->pc = 0x1fe430u;
    SET_GPR_U32(ctx, 20, READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x1fe434: 0x9fd30008  lwu         $s3, 0x8($fp)
    ctx->pc = 0x1fe434u;
    SET_GPR_U32(ctx, 19, READ32(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x1fe438: 0xffb20018  sd          $s2, 0x18($sp)
    ctx->pc = 0x1fe438u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 18));
    // 0x1fe43c: 0xdfb201b0  ld          $s2, 0x1B0($sp)
    ctx->pc = 0x1fe43cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 432)));
    // 0x1fe440: 0xffb00058  sd          $s0, 0x58($sp)
    ctx->pc = 0x1fe440u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 16));
    // 0x1fe444: 0xffb20028  sd          $s2, 0x28($sp)
    ctx->pc = 0x1fe444u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 18));
    // 0x1fe448: 0xffa20068  sd          $v0, 0x68($sp)
    ctx->pc = 0x1fe448u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 2));
    // 0x1fe44c: 0xffb70020  sd          $s7, 0x20($sp)
    ctx->pc = 0x1fe44cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 23));
    // 0x1fe450: 0xffb90030  sd          $t9, 0x30($sp)
    ctx->pc = 0x1fe450u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 25));
    // 0x1fe454: 0xffb80038  sd          $t8, 0x38($sp)
    ctx->pc = 0x1fe454u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 24));
    // 0x1fe458: 0xffb50040  sd          $s5, 0x40($sp)
    ctx->pc = 0x1fe458u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 21));
    // 0x1fe45c: 0xffb40048  sd          $s4, 0x48($sp)
    ctx->pc = 0x1fe45cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 20));
    // 0x1fe460: 0xffb30050  sd          $s3, 0x50($sp)
    ctx->pc = 0x1fe460u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 19));
    // 0x1fe464: 0xffaf0060  sd          $t7, 0x60($sp)
    ctx->pc = 0x1fe464u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 15));
    // 0x1fe468: 0xffac0070  sd          $t4, 0x70($sp)
    ctx->pc = 0x1fe468u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 12));
    // 0x1fe46c: 0xdfa201a0  ld          $v0, 0x1A0($sp)
    ctx->pc = 0x1fe46cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 416)));
    // 0x1fe470: 0xffa30010  sd          $v1, 0x10($sp)
    ctx->pc = 0x1fe470u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 3));
    // 0x1fe474: 0x3c030039  lui         $v1, 0x39
    ctx->pc = 0x1fe474u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)57 << 16));
    // 0x1fe478: 0xdfb201a8  ld          $s2, 0x1A8($sp)
    ctx->pc = 0x1fe478u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 424)));
    // 0x1fe47c: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x1fe47cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x1fe480: 0x8c621520  lw          $v0, 0x1520($v1)
    ctx->pc = 0x1fe480u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 5408)));
    // 0x1fe484: 0xffb20008  sd          $s2, 0x8($sp)
    ctx->pc = 0x1fe484u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 18));
    // 0x1fe488: 0x3c120039  lui         $s2, 0x39
    ctx->pc = 0x1fe488u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)57 << 16));
    // 0x1fe48c: 0xffb10088  sd          $s1, 0x88($sp)
    ctx->pc = 0x1fe48cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 136), GPR_U64(ctx, 17));
    // 0x1fe490: 0x265217b4  addiu       $s2, $s2, 0x17B4
    ctx->pc = 0x1fe490u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 6068));
    // 0x1fe494: 0xffad0078  sd          $t5, 0x78($sp)
    ctx->pc = 0x1fe494u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 13));
    // 0x1fe498: 0xffae0080  sd          $t6, 0x80($sp)
    ctx->pc = 0x1fe498u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 14));
    // 0x1fe49c: 0xc04a5f2  jal         func_1297C8
    ctx->pc = 0x1FE49Cu;
    SET_GPR_U32(ctx, 31, 0x1FE4A4u);
    ctx->pc = 0x1FE4A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FE49Cu;
            // 0x1fe4a0: 0xffa20090  sd          $v0, 0x90($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1297C8u;
    if (runtime->hasFunction(0x1297C8u)) {
        auto targetFn = runtime->lookupFunction(0x1297C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FE4A4u; }
        if (ctx->pc != 0x1FE4A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001297C8_0x1297c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FE4A4u; }
        if (ctx->pc != 0x1FE4A4u) { return; }
    }
    ctx->pc = 0x1FE4A4u;
label_1fe4a4:
    // 0x1fe4a4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1fe4a4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fe4a8: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x1fe4a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x1fe4ac: 0x245117bc  addiu       $s1, $v0, 0x17BC
    ctx->pc = 0x1fe4acu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 6076));
    // 0x1fe4b0: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x1fe4b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1fe4b4: 0xc04a7dc  jal         func_129F70
    ctx->pc = 0x1FE4B4u;
    SET_GPR_U32(ctx, 31, 0x1FE4BCu);
    ctx->pc = 0x1FE4B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FE4B4u;
            // 0x1fe4b8: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129F70u;
    if (runtime->hasFunction(0x129F70u)) {
        auto targetFn = runtime->lookupFunction(0x129F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FE4BCu; }
        if (ctx->pc != 0x1FE4BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00129F70_0x129f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FE4BCu; }
        if (ctx->pc != 0x1FE4BCu) { return; }
    }
    ctx->pc = 0x1FE4BCu;
label_1fe4bc:
    // 0x1fe4bc: 0x3c040039  lui         $a0, 0x39
    ctx->pc = 0x1fe4bcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)57 << 16));
    // 0x1fe4c0: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x1fe4c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1fe4c4: 0x8c8517b0  lw          $a1, 0x17B0($a0)
    ctx->pc = 0x1fe4c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 6064)));
    // 0x1fe4c8: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x1fe4c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1fe4cc: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x1fe4ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1fe4d0: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x1fe4d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x1fe4d4: 0x2442fc00  addiu       $v0, $v0, -0x400
    ctx->pc = 0x1fe4d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966272));
    // 0x1fe4d8: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x1fe4d8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1fe4dc: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1FE4DCu;
    {
        const bool branch_taken_0x1fe4dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FE4E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FE4DCu;
            // 0x1fe4e0: 0xae230000  sw          $v1, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fe4dc) {
            ctx->pc = 0x1FE4F0u;
            goto label_1fe4f0;
        }
    }
    ctx->pc = 0x1FE4E4u;
    // 0x1fe4e4: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x1fe4e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x1fe4e8: 0x8c4317c0  lw          $v1, 0x17C0($v0)
    ctx->pc = 0x1fe4e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6080)));
    // 0x1fe4ec: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x1fe4ecu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_1fe4f0:
    // 0x1fe4f0: 0xdfb001c0  ld          $s0, 0x1C0($sp)
    ctx->pc = 0x1fe4f0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 448)));
    // 0x1fe4f4: 0xdfb101c8  ld          $s1, 0x1C8($sp)
    ctx->pc = 0x1fe4f4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 456)));
    // 0x1fe4f8: 0xdfb201d0  ld          $s2, 0x1D0($sp)
    ctx->pc = 0x1fe4f8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 464)));
    // 0x1fe4fc: 0xdfb301d8  ld          $s3, 0x1D8($sp)
    ctx->pc = 0x1fe4fcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 472)));
    // 0x1fe500: 0xdfb401e0  ld          $s4, 0x1E0($sp)
    ctx->pc = 0x1fe500u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 480)));
    // 0x1fe504: 0xdfb501e8  ld          $s5, 0x1E8($sp)
    ctx->pc = 0x1fe504u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 488)));
    // 0x1fe508: 0xdfb601f0  ld          $s6, 0x1F0($sp)
    ctx->pc = 0x1fe508u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 496)));
    // 0x1fe50c: 0xdfb701f8  ld          $s7, 0x1F8($sp)
    ctx->pc = 0x1fe50cu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 504)));
    // 0x1fe510: 0xdfbe0200  ld          $fp, 0x200($sp)
    ctx->pc = 0x1fe510u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 512)));
    // 0x1fe514: 0xdfbf0208  ld          $ra, 0x208($sp)
    ctx->pc = 0x1fe514u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 520)));
    // 0x1fe518: 0x3e00008  jr          $ra
    ctx->pc = 0x1FE518u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FE51Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FE518u;
            // 0x1fe51c: 0x27bd0210  addiu       $sp, $sp, 0x210 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 528));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1FE520u;
label_1fe520:
    // 0x1fe520: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1fe520u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1fe524: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1fe524u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1fe528: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1fe528u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1fe52c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1fe52cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fe530: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1fe530u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1fe534: 0x100982d  daddu       $s3, $t0, $zero
    ctx->pc = 0x1fe534u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fe538: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x1fe538u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x1fe53c: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x1fe53cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fe540: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x1fe540u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x1fe544: 0xe0a82d  daddu       $s5, $a3, $zero
    ctx->pc = 0x1fe544u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fe548: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x1fe548u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x1fe54c: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x1fe54cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fe550: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1fe550u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1fe554: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x1fe554u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x1fe558: 0xc07b648  jal         func_1ED920
    ctx->pc = 0x1FE558u;
    SET_GPR_U32(ctx, 31, 0x1FE560u);
    ctx->pc = 0x1FE55Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FE558u;
            // 0x1fe55c: 0x263021a8  addiu       $s0, $s1, 0x21A8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 8616));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1ED920u;
    if (runtime->hasFunction(0x1ED920u)) {
        auto targetFn = runtime->lookupFunction(0x1ED920u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FE560u; }
        if (ctx->pc != 0x1FE560u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001ED920_0x1ed920(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FE560u; }
        if (ctx->pc != 0x1FE560u) { return; }
    }
    ctx->pc = 0x1FE560u;
label_1fe560:
    // 0x1fe560: 0x3c05ff00  lui         $a1, 0xFF00
    ctx->pc = 0x1fe560u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65280 << 16));
    // 0x1fe564: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1fe564u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fe568: 0x34a50192  ori         $a1, $a1, 0x192
    ctx->pc = 0x1fe568u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)402);
    // 0x1fe56c: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1FE56Cu;
    {
        const bool branch_taken_0x1fe56c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FE570u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FE56Cu;
            // 0x1fe570: 0x24030008  addiu       $v1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fe56c) {
            ctx->pc = 0x1FE5A0u;
            goto label_1fe5a0;
        }
    }
    ctx->pc = 0x1FE574u;
    // 0x1fe574: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1fe574u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1fe578: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1fe578u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1fe57c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1fe57cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1fe580: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1fe580u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1fe584: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1fe584u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1fe588: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x1fe588u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1fe58c: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x1fe58cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1fe590: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x1fe590u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1fe594: 0x807b5c0  j           func_1ED700
    ctx->pc = 0x1FE594u;
    ctx->pc = 0x1FE598u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FE594u;
            // 0x1fe598: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1ED700u;
    if (runtime->hasFunction(0x1ED700u)) {
        auto targetFn = runtime->lookupFunction(0x1ED700u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001ED700_0x1ed700(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1FE59Cu;
    // 0x1fe59c: 0x0  nop
    ctx->pc = 0x1fe59cu;
    // NOP
label_1fe5a0:
    // 0x1fe5a0: 0x8e120010  lw          $s2, 0x10($s0)
    ctx->pc = 0x1fe5a0u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1fe5a4: 0x1643000e  bne         $s2, $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x1FE5A4u;
    {
        const bool branch_taken_0x1fe5a4 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 3));
        ctx->pc = 0x1FE5A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FE5A4u;
            // 0x1fe5a8: 0x8e020008  lw          $v0, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fe5a4) {
            ctx->pc = 0x1FE5E0u;
            goto label_1fe5e0;
        }
    }
    ctx->pc = 0x1FE5ACu;
    // 0x1fe5ac: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1fe5acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fe5b0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1fe5b0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1fe5b4: 0x3c05ff00  lui         $a1, 0xFF00
    ctx->pc = 0x1fe5b4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65280 << 16));
    // 0x1fe5b8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1fe5b8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1fe5bc: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1fe5bcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1fe5c0: 0x34a50602  ori         $a1, $a1, 0x602
    ctx->pc = 0x1fe5c0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1538);
    // 0x1fe5c4: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1fe5c4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1fe5c8: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1fe5c8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1fe5cc: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x1fe5ccu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1fe5d0: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x1fe5d0u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1fe5d4: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x1fe5d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1fe5d8: 0x807b5c0  j           func_1ED700
    ctx->pc = 0x1FE5D8u;
    ctx->pc = 0x1FE5DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FE5D8u;
            // 0x1fe5dc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1ED700u;
    if (runtime->hasFunction(0x1ED700u)) {
        auto targetFn = runtime->lookupFunction(0x1ED700u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001ED700_0x1ed700(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1FE5E0u;
label_1fe5e0:
    // 0x1fe5e0: 0x168100  sll         $s0, $s6, 4
    ctx->pc = 0x1fe5e0u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 22), 4));
    // 0x1fe5e4: 0x260402d  daddu       $t0, $s3, $zero
    ctx->pc = 0x1fe5e4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fe5e8: 0x508021  addu        $s0, $v0, $s0
    ctx->pc = 0x1fe5e8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1fe5ec: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x1fe5ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fe5f0: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x1fe5f0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x1fe5f4: 0x2a0382d  daddu       $a3, $s5, $zero
    ctx->pc = 0x1fe5f4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fe5f8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1fe5f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fe5fc: 0xc07fa66  jal         func_1FE998
    ctx->pc = 0x1FE5FCu;
    SET_GPR_U32(ctx, 31, 0x1FE604u);
    ctx->pc = 0x1FE600u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FE5FCu;
            // 0x1fe600: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1FE998u;
    if (runtime->hasFunction(0x1FE998u)) {
        auto targetFn = runtime->lookupFunction(0x1FE998u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FE604u; }
        if (ctx->pc != 0x1FE604u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001FE998_0x1fe998(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FE604u; }
        if (ctx->pc != 0x1FE604u) { return; }
    }
    ctx->pc = 0x1FE604u;
label_1fe604:
    // 0x1fe604: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1fe604u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fe608: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1fe608u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fe60c: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x1fe60cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fe610: 0xc07a9f6  jal         func_1EA7D8
    ctx->pc = 0x1FE610u;
    SET_GPR_U32(ctx, 31, 0x1FE618u);
    ctx->pc = 0x1FE614u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FE610u;
            // 0x1fe614: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1EA7D8u;
    if (runtime->hasFunction(0x1EA7D8u)) {
        auto targetFn = runtime->lookupFunction(0x1EA7D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FE618u; }
        if (ctx->pc != 0x1FE618u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001EA7D8_0x1ea7d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FE618u; }
        if (ctx->pc != 0x1FE618u) { return; }
    }
    ctx->pc = 0x1FE618u;
label_1fe618:
    // 0x1fe618: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1fe618u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fe61c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1fe61cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1fe620: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1fe620u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1fe624: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1fe624u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1fe628: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1fe628u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1fe62c: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1fe62cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1fe630: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x1fe630u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1fe634: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x1fe634u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1fe638: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x1fe638u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1fe63c: 0x3e00008  jr          $ra
    ctx->pc = 0x1FE63Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FE640u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FE63Cu;
            // 0x1fe640: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1FE644u;
    // 0x1fe644: 0x0  nop
    ctx->pc = 0x1fe644u;
    // NOP
    ctx->pc = 0x1fe648u;
}
