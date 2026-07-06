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

// Function: sub_002DFFD8
// Address: 0x2dffd8 - 0x2e0168
void sub_002DFFD8_0x2dffd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DFFD8_0x2dffd8");
#endif

    switch (ctx->pc) {
        case 0x2dfff0u: goto label_2dfff0;
        case 0x2e0060u: goto label_2e0060;
        case 0x2e0068u: goto label_2e0068;
        case 0x2e0088u: goto label_2e0088;
        case 0x2e00b0u: goto label_2e00b0;
        case 0x2e00e8u: goto label_2e00e8;
        case 0x2e00f8u: goto label_2e00f8;
        case 0x2e011cu: goto label_2e011c;
        case 0x2e0128u: goto label_2e0128;
        default: break;
    }

    ctx->pc = 0x2dffd8u;

    // 0x2dffd8: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x2dffd8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x2dffdc: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x2dffdcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x2dffe0: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x2dffe0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x2dffe4: 0x27aa0030  addiu       $t2, $sp, 0x30
    ctx->pc = 0x2dffe4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2dffe8: 0xffb20070  sd          $s2, 0x70($sp)
    ctx->pc = 0x2dffe8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 18));
    // 0x2dffec: 0x27b20010  addiu       $s2, $sp, 0x10
    ctx->pc = 0x2dffecu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_2dfff0:
    // 0x2dfff0: 0xffb30078  sd          $s3, 0x78($sp)
    ctx->pc = 0x2dfff0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 19));
    // 0x2dfff4: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x2dfff4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dfff8: 0xffb40080  sd          $s4, 0x80($sp)
    ctx->pc = 0x2dfff8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 20));
    // 0x2dfffc: 0x27b40040  addiu       $s4, $sp, 0x40
    ctx->pc = 0x2dfffcu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2e0000: 0xffb00060  sd          $s0, 0x60($sp)
    ctx->pc = 0x2e0000u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 16));
    // 0x2e0004: 0x3c080040  lui         $t0, 0x40
    ctx->pc = 0x2e0004u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)64 << 16));
    // 0x2e0008: 0xffb10068  sd          $s1, 0x68($sp)
    ctx->pc = 0x2e0008u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 17));
    // 0x2e000c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2e000cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e0010: 0xffbf0088  sd          $ra, 0x88($sp)
    ctx->pc = 0x2e0010u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 136), GPR_U64(ctx, 31));
    // 0x2e0014: 0x244df148  addiu       $t5, $v0, -0xEB8
    ctx->pc = 0x2e0014u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963528));
    // 0x2e0018: 0x69a90007  ldl         $t1, 0x7($t5)
    ctx->pc = 0x2e0018u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 13), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem << shift)); }
    // 0x2e001c: 0x6da90000  ldr         $t1, 0x0($t5)
    ctx->pc = 0x2e001cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 13), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
    // 0x2e0020: 0x8dab0008  lw          $t3, 0x8($t5)
    ctx->pc = 0x2e0020u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 8)));
    // 0x2e0024: 0xb3a90007  sdl         $t1, 0x7($sp)
    ctx->pc = 0x2e0024u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2e0028: 0xb7a90000  sdr         $t1, 0x0($sp)
    ctx->pc = 0x2e0028u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2e002c: 0xafab0008  sw          $t3, 0x8($sp)
    ctx->pc = 0x2e002cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 11));
    // 0x2e0030: 0x246cf158  addiu       $t4, $v1, -0xEA8
    ctx->pc = 0x2e0030u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 3), 4294963544));
    // 0x2e0034: 0x69820007  ldl         $v0, 0x7($t4)
    ctx->pc = 0x2e0034u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 12), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x2e0038: 0x6d820000  ldr         $v0, 0x0($t4)
    ctx->pc = 0x2e0038u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 12), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x2e003c: 0xb1420007  sdl         $v0, 0x7($t2)
    ctx->pc = 0x2e003cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 10), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2e0040: 0xb5420000  sdr         $v0, 0x0($t2)
    ctx->pc = 0x2e0040u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 10), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2e0044: 0x80482d  daddu       $t1, $a0, $zero
    ctx->pc = 0x2e0044u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e0048: 0x2504f160  addiu       $a0, $t0, -0xEA0
    ctx->pc = 0x2e0048u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), 4294963552));
    // 0x2e004c: 0x688d0007  ldl         $t5, 0x7($a0)
    ctx->pc = 0x2e004cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 13, (GPR_U64(ctx, 13) & keepMask) | (mem << shift)); }
    // 0x2e0050: 0x6c8d0000  ldr         $t5, 0x0($a0)
    ctx->pc = 0x2e0050u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 13, (GPR_U64(ctx, 13) & keepMask) | (mem >> shift)); }
    // 0x2e0054: 0xb28d0007  sdl         $t5, 0x7($s4)
    ctx->pc = 0x2e0054u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 13); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2e0058: 0xb68d0000  sdr         $t5, 0x0($s4)
    ctx->pc = 0x2e0058u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 13); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2e005c: 0x0  nop
    ctx->pc = 0x2e005cu;
    // NOP
label_2e0060:
    // 0x2e0060: 0x1271021  addu        $v0, $t1, $a3
    ctx->pc = 0x2e0060u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 7)));
    // 0x2e0064: 0x2472021  addu        $a0, $s2, $a3
    ctx->pc = 0x2e0064u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 7)));
label_2e0068:
    // 0x2e0068: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x2e0068u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2e006c: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x2e006cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x2e0070: 0x28e20008  slti        $v0, $a3, 0x8
    ctx->pc = 0x2e0070u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x2e0074: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2E0074u;
    {
        const bool branch_taken_0x2e0074 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E0078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E0074u;
        // 0x2e0078: 0xa0830000  sb          $v1, 0x0($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e0074) {
            ctx->pc = 0x2E0060u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2e0060;
        }
    }
    ctx->pc = 0x2E007Cu;
    // 0x2e007c: 0x27a80018  addiu       $t0, $sp, 0x18
    ctx->pc = 0x2e007cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 24));
    // 0x2e0080: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2e0080u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e0084: 0x0  nop
    ctx->pc = 0x2e0084u;
    // NOP
label_2e0088:
    // 0x2e0088: 0xa71021  addu        $v0, $a1, $a3
    ctx->pc = 0x2e0088u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x2e008c: 0x1072021  addu        $a0, $t0, $a3
    ctx->pc = 0x2e008cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 7)));
    // 0x2e0090: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x2e0090u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2e0094: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x2e0094u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x2e0098: 0x28e20008  slti        $v0, $a3, 0x8
    ctx->pc = 0x2e0098u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x2e009c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2E009Cu;
    {
        const bool branch_taken_0x2e009c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E00A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E009Cu;
        // 0x2e00a0: 0xa0830000  sb          $v1, 0x0($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e009c) {
            ctx->pc = 0x2E0088u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2e0088;
        }
    }
    ctx->pc = 0x2E00A4u;
    // 0x2e00a4: 0x27a70020  addiu       $a3, $sp, 0x20
    ctx->pc = 0x2e00a4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2e00a8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2e00a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e00ac: 0x0  nop
    ctx->pc = 0x2e00acu;
    // NOP
label_2e00b0:
    // 0x2e00b0: 0xc51021  addu        $v0, $a2, $a1
    ctx->pc = 0x2e00b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x2e00b4: 0xe52021  addu        $a0, $a3, $a1
    ctx->pc = 0x2e00b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
    // 0x2e00b8: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x2e00b8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2e00bc: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x2e00bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x2e00c0: 0x28a20008  slti        $v0, $a1, 0x8
    ctx->pc = 0x2e00c0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x2e00c4: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2E00C4u;
    {
        const bool branch_taken_0x2e00c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E00C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E00C4u;
        // 0x2e00c8: 0xa0830000  sb          $v1, 0x0($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e00c4) {
            ctx->pc = 0x2E00B0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2e00b0;
        }
    }
    ctx->pc = 0x2E00CCu;
    // 0x2e00cc: 0x3c10003c  lui         $s0, 0x3C
    ctx->pc = 0x2e00ccu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)60 << 16));
    // 0x2e00d0: 0x140282d  daddu       $a1, $t2, $zero
    ctx->pc = 0x2e00d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e00d4: 0x2610e120  addiu       $s0, $s0, -0x1EE0
    ctx->pc = 0x2e00d4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294959392));
    // 0x2e00d8: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x2e00d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2e00dc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2e00dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e00e0: 0xc0b7d40  jal         func_2DF500
    ctx->pc = 0x2E00E0u;
    SET_GPR_U32(ctx, 31, 0x2E00E8u);
    ctx->pc = 0x2E00E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E00E0u;
    // 0x2e00e4: 0xafa20050  sw          $v0, 0x50($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DF500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DF500u, 0x2E00E0u, 0x2E00E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E00E8u;
label_2e00e8:
    // 0x2e00e8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2e00e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e00ec: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x2e00ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e00f0: 0xc0b7d40  jal         func_2DF500
    ctx->pc = 0x2E00F0u;
    SET_GPR_U32(ctx, 31, 0x2E00F8u);
    ctx->pc = 0x2E00F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E00F0u;
    // 0x2e00f4: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DF500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DF500u, 0x2E00F0u, 0x2E00F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E00F8u;
label_2e00f8:
    // 0x2e00f8: 0x3c09002d  lui         $t1, 0x2D
    ctx->pc = 0x2e00f8u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)45 << 16));
    // 0x2e00fc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2e00fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e0100: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x2e0100u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e0104: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x2e0104u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e0108: 0x25296708  addiu       $t1, $t1, 0x6708
    ctx->pc = 0x2e0108u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 26376));
    // 0x2e010c: 0x260502d  daddu       $t2, $s3, $zero
    ctx->pc = 0x2e010cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e0110: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2e0110u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e0114: 0xc0b7f2a  jal         func_2DFCA8
    ctx->pc = 0x2E0114u;
    SET_GPR_U32(ctx, 31, 0x2E011Cu);
    ctx->pc = 0x2E0118u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E0114u;
    // 0x2e0118: 0x27a80050  addiu       $t0, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DFCA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DFCA8u, 0x2E0114u, 0x2E011Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E011Cu;
label_2e011c:
    // 0x2e011c: 0x24040017  addiu       $a0, $zero, 0x17
    ctx->pc = 0x2e011cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
    // 0x2e0120: 0x27a30027  addiu       $v1, $sp, 0x27
    ctx->pc = 0x2e0120u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 39));
    // 0x2e0124: 0x0  nop
    ctx->pc = 0x2e0124u;
    // NOP
label_2e0128:
    // 0x2e0128: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x2e0128u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x2e012c: 0xa0600000  sb          $zero, 0x0($v1)
    ctx->pc = 0x2e012cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x2e0130: 0x0  nop
    ctx->pc = 0x2e0130u;
    // NOP
    // 0x2e0134: 0x0  nop
    ctx->pc = 0x2e0134u;
    // NOP
    // 0x2e0138: 0x0  nop
    ctx->pc = 0x2e0138u;
    // NOP
    // 0x2e013c: 0x481fffa  bgez        $a0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2E013Cu;
    {
        const bool branch_taken_0x2e013c = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x2E0140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E013Cu;
        // 0x2e0140: 0x2463ffff  addiu       $v1, $v1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e013c) {
            ctx->pc = 0x2E0128u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2e0128;
        }
    }
    ctx->pc = 0x2E0144u;
    // 0x2e0144: 0xdfb00060  ld          $s0, 0x60($sp)
    ctx->pc = 0x2e0144u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2e0148: 0xdfb10068  ld          $s1, 0x68($sp)
    ctx->pc = 0x2e0148u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2e014c: 0xdfb20070  ld          $s2, 0x70($sp)
    ctx->pc = 0x2e014cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2e0150: 0xdfb30078  ld          $s3, 0x78($sp)
    ctx->pc = 0x2e0150u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2e0154: 0xdfb40080  ld          $s4, 0x80($sp)
    ctx->pc = 0x2e0154u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2e0158: 0xdfbf0088  ld          $ra, 0x88($sp)
    ctx->pc = 0x2e0158u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2e015c: 0x3e00008  jr          $ra
    ctx->pc = 0x2E015Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E0160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E015Cu;
        // 0x2e0160: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E015Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E0164u;
    // 0x2e0164: 0x0  nop
    ctx->pc = 0x2e0164u;
    // NOP
    if (ctx->pc == 0x2e0164u) { ctx->pc = 0x2e0168u; }
}
