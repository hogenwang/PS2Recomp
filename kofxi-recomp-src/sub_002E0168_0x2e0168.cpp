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

// Function: sub_002E0168
// Address: 0x2e0168 - 0x2e02f8
void sub_002E0168_0x2e0168(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E0168_0x2e0168");
#endif

    switch (ctx->pc) {
        case 0x2e0184u: goto label_2e0184;
        case 0x2e01f0u: goto label_2e01f0;
        case 0x2e01fcu: goto label_2e01fc;
        case 0x2e0218u: goto label_2e0218;
        case 0x2e0240u: goto label_2e0240;
        case 0x2e0250u: goto label_2e0250;
        case 0x2e0274u: goto label_2e0274;
        case 0x2e027cu: goto label_2e027c;
        case 0x2e028cu: goto label_2e028c;
        case 0x2e02b0u: goto label_2e02b0;
        case 0x2e02b8u: goto label_2e02b8;
        default: break;
    }

    ctx->pc = 0x2e0168u;

    // 0x2e0168: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x2e0168u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x2e016c: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x2e016cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x2e0170: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x2e0170u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x2e0174: 0x27ab0040  addiu       $t3, $sp, 0x40
    ctx->pc = 0x2e0174u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2e0178: 0xffb20070  sd          $s2, 0x70($sp)
    ctx->pc = 0x2e0178u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 18));
    // 0x2e017c: 0x27b20010  addiu       $s2, $sp, 0x10
    ctx->pc = 0x2e017cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2e0180: 0xffb30078  sd          $s3, 0x78($sp)
    ctx->pc = 0x2e0180u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 19));
label_2e0184:
    // 0x2e0184: 0x100982d  daddu       $s3, $t0, $zero
    ctx->pc = 0x2e0184u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e0188: 0xffb40080  sd          $s4, 0x80($sp)
    ctx->pc = 0x2e0188u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 20));
    // 0x2e018c: 0x27b40050  addiu       $s4, $sp, 0x50
    ctx->pc = 0x2e018cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2e0190: 0xffb00060  sd          $s0, 0x60($sp)
    ctx->pc = 0x2e0190u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 16));
    // 0x2e0194: 0x3c090040  lui         $t1, 0x40
    ctx->pc = 0x2e0194u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)64 << 16));
    // 0x2e0198: 0xffb10068  sd          $s1, 0x68($sp)
    ctx->pc = 0x2e0198u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 17));
    // 0x2e019c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2e019cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e01a0: 0xffbf0088  sd          $ra, 0x88($sp)
    ctx->pc = 0x2e01a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 136), GPR_U64(ctx, 31));
    // 0x2e01a4: 0x244ef168  addiu       $t6, $v0, -0xE98
    ctx->pc = 0x2e01a4u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963560));
    // 0x2e01a8: 0x69ca0007  ldl         $t2, 0x7($t6)
    ctx->pc = 0x2e01a8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 14), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem << shift)); }
    // 0x2e01ac: 0x6dca0000  ldr         $t2, 0x0($t6)
    ctx->pc = 0x2e01acu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 14), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem >> shift)); }
    // 0x2e01b0: 0x8dcc0008  lw          $t4, 0x8($t6)
    ctx->pc = 0x2e01b0u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 8)));
    // 0x2e01b4: 0xb3aa0007  sdl         $t2, 0x7($sp)
    ctx->pc = 0x2e01b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2e01b8: 0xb7aa0000  sdr         $t2, 0x0($sp)
    ctx->pc = 0x2e01b8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2e01bc: 0xafac0008  sw          $t4, 0x8($sp)
    ctx->pc = 0x2e01bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 12));
    // 0x2e01c0: 0x246df178  addiu       $t5, $v1, -0xE88
    ctx->pc = 0x2e01c0u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 3), 4294963576));
    // 0x2e01c4: 0x69a20007  ldl         $v0, 0x7($t5)
    ctx->pc = 0x2e01c4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 13), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x2e01c8: 0x6da20000  ldr         $v0, 0x0($t5)
    ctx->pc = 0x2e01c8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 13), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x2e01cc: 0xb1620007  sdl         $v0, 0x7($t3)
    ctx->pc = 0x2e01ccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2e01d0: 0xb5620000  sdr         $v0, 0x0($t3)
    ctx->pc = 0x2e01d0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2e01d4: 0x80502d  daddu       $t2, $a0, $zero
    ctx->pc = 0x2e01d4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e01d8: 0x2524f180  addiu       $a0, $t1, -0xE80
    ctx->pc = 0x2e01d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 9), 4294963584));
    // 0x2e01dc: 0x688e0007  ldl         $t6, 0x7($a0)
    ctx->pc = 0x2e01dcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 14, (GPR_U64(ctx, 14) & keepMask) | (mem << shift)); }
    // 0x2e01e0: 0x6c8e0000  ldr         $t6, 0x0($a0)
    ctx->pc = 0x2e01e0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 14, (GPR_U64(ctx, 14) & keepMask) | (mem >> shift)); }
    // 0x2e01e4: 0xb28e0007  sdl         $t6, 0x7($s4)
    ctx->pc = 0x2e01e4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 14); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2e01e8: 0xb68e0000  sdr         $t6, 0x0($s4)
    ctx->pc = 0x2e01e8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 14); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2e01ec: 0x0  nop
    ctx->pc = 0x2e01ecu;
    // NOP
label_2e01f0:
    // 0x2e01f0: 0x1481021  addu        $v0, $t2, $t0
    ctx->pc = 0x2e01f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 8)));
    // 0x2e01f4: 0x2482021  addu        $a0, $s2, $t0
    ctx->pc = 0x2e01f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 8)));
    // 0x2e01f8: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x2e01f8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_2e01fc:
    // 0x2e01fc: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x2e01fcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x2e0200: 0x29020008  slti        $v0, $t0, 0x8
    ctx->pc = 0x2e0200u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x2e0204: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2E0204u;
    {
        const bool branch_taken_0x2e0204 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E0208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E0204u;
        // 0x2e0208: 0xa0830000  sb          $v1, 0x0($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e0204) {
            ctx->pc = 0x2E01F0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2e01f0;
        }
    }
    ctx->pc = 0x2E020Cu;
    // 0x2e020c: 0x27a90018  addiu       $t1, $sp, 0x18
    ctx->pc = 0x2e020cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 24));
    // 0x2e0210: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2e0210u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e0214: 0x0  nop
    ctx->pc = 0x2e0214u;
    // NOP
label_2e0218:
    // 0x2e0218: 0xa81021  addu        $v0, $a1, $t0
    ctx->pc = 0x2e0218u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 8)));
    // 0x2e021c: 0x1282021  addu        $a0, $t1, $t0
    ctx->pc = 0x2e021cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 8)));
    // 0x2e0220: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x2e0220u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2e0224: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x2e0224u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x2e0228: 0x29020008  slti        $v0, $t0, 0x8
    ctx->pc = 0x2e0228u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x2e022c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2E022Cu;
    {
        const bool branch_taken_0x2e022c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E0230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E022Cu;
        // 0x2e0230: 0xa0830000  sb          $v1, 0x0($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e022c) {
            ctx->pc = 0x2E0218u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2e0218;
        }
    }
    ctx->pc = 0x2E0234u;
    // 0x2e0234: 0x27a80020  addiu       $t0, $sp, 0x20
    ctx->pc = 0x2e0234u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2e0238: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2e0238u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e023c: 0x0  nop
    ctx->pc = 0x2e023cu;
    // NOP
label_2e0240:
    // 0x2e0240: 0xc51021  addu        $v0, $a2, $a1
    ctx->pc = 0x2e0240u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x2e0244: 0x1052021  addu        $a0, $t0, $a1
    ctx->pc = 0x2e0244u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 5)));
    // 0x2e0248: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x2e0248u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2e024c: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x2e024cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_2e0250:
    // 0x2e0250: 0x28a20008  slti        $v0, $a1, 0x8
    ctx->pc = 0x2e0250u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x2e0254: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2E0254u;
    {
        const bool branch_taken_0x2e0254 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E0258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E0254u;
        // 0x2e0258: 0xa0830000  sb          $v1, 0x0($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e0254) {
            ctx->pc = 0x2E0240u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2e0240;
        }
    }
    ctx->pc = 0x2E025Cu;
    // 0x2e025c: 0x3c10003c  lui         $s0, 0x3C
    ctx->pc = 0x2e025cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)60 << 16));
    // 0x2e0260: 0x160282d  daddu       $a1, $t3, $zero
    ctx->pc = 0x2e0260u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e0264: 0x2610e120  addiu       $s0, $s0, -0x1EE0
    ctx->pc = 0x2e0264u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294959392));
    // 0x2e0268: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x2e0268u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2e026c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2e026cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e0270: 0xafa70030  sw          $a3, 0x30($sp)
    ctx->pc = 0x2e0270u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 7));
label_2e0274:
    // 0x2e0274: 0xc0b7d40  jal         func_2DF500
    ctx->pc = 0x2E0274u;
    SET_GPR_U32(ctx, 31, 0x2E027Cu);
    ctx->pc = 0x2E0278u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E0274u;
    // 0x2e0278: 0xafa20034  sw          $v0, 0x34($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DF500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DF500u, 0x2E0274u, 0x2E027Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E027Cu;
label_2e027c:
    // 0x2e027c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2e027cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e0280: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x2e0280u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e0284: 0xc0b7d40  jal         func_2DF500
    ctx->pc = 0x2E0284u;
    SET_GPR_U32(ctx, 31, 0x2E028Cu);
    ctx->pc = 0x2E0288u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E0284u;
    // 0x2e0288: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DF500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DF500u, 0x2E0284u, 0x2E028Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E028Cu;
label_2e028c:
    // 0x2e028c: 0x3c09002d  lui         $t1, 0x2D
    ctx->pc = 0x2e028cu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)45 << 16));
    // 0x2e0290: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x2e0290u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e0294: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2e0294u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e0298: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x2e0298u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e029c: 0x25296708  addiu       $t1, $t1, 0x6708
    ctx->pc = 0x2e029cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 26376));
    // 0x2e02a0: 0x260502d  daddu       $t2, $s3, $zero
    ctx->pc = 0x2e02a0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e02a4: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2e02a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e02a8: 0xc0b7f2a  jal         func_2DFCA8
    ctx->pc = 0x2E02A8u;
    SET_GPR_U32(ctx, 31, 0x2E02B0u);
    ctx->pc = 0x2E02ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E02A8u;
    // 0x2e02ac: 0x27a80030  addiu       $t0, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DFCA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DFCA8u, 0x2E02A8u, 0x2E02B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E02B0u;
label_2e02b0:
    // 0x2e02b0: 0x24040017  addiu       $a0, $zero, 0x17
    ctx->pc = 0x2e02b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
    // 0x2e02b4: 0x27a30027  addiu       $v1, $sp, 0x27
    ctx->pc = 0x2e02b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 39));
label_2e02b8:
    // 0x2e02b8: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x2e02b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x2e02bc: 0xa0600000  sb          $zero, 0x0($v1)
    ctx->pc = 0x2e02bcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x2e02c0: 0x0  nop
    ctx->pc = 0x2e02c0u;
    // NOP
    // 0x2e02c4: 0x0  nop
    ctx->pc = 0x2e02c4u;
    // NOP
    // 0x2e02c8: 0x0  nop
    ctx->pc = 0x2e02c8u;
    // NOP
    // 0x2e02cc: 0x481fffa  bgez        $a0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2E02CCu;
    {
        const bool branch_taken_0x2e02cc = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x2E02D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E02CCu;
        // 0x2e02d0: 0x2463ffff  addiu       $v1, $v1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e02cc) {
            ctx->pc = 0x2E02B8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2e02b8;
        }
    }
    ctx->pc = 0x2E02D4u;
    // 0x2e02d4: 0xdfb00060  ld          $s0, 0x60($sp)
    ctx->pc = 0x2e02d4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2e02d8: 0xdfb10068  ld          $s1, 0x68($sp)
    ctx->pc = 0x2e02d8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2e02dc: 0xdfb20070  ld          $s2, 0x70($sp)
    ctx->pc = 0x2e02dcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2e02e0: 0xdfb30078  ld          $s3, 0x78($sp)
    ctx->pc = 0x2e02e0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2e02e4: 0xdfb40080  ld          $s4, 0x80($sp)
    ctx->pc = 0x2e02e4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2e02e8: 0xdfbf0088  ld          $ra, 0x88($sp)
    ctx->pc = 0x2e02e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2e02ec: 0x3e00008  jr          $ra
    ctx->pc = 0x2E02ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E02F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E02ECu;
        // 0x2e02f0: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E02ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E02F4u;
    // 0x2e02f4: 0x0  nop
    ctx->pc = 0x2e02f4u;
    // NOP
}
