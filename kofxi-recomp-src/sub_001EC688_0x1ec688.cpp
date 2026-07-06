#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001EC688
// Address: 0x1ec688 - 0x1ec730
void sub_001EC688_0x1ec688(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001EC688_0x1ec688");
#endif

    switch (ctx->pc) {
        case 0x1ec6b0u: goto label_1ec6b0;
        default: break;
    }

    ctx->pc = 0x1ec688u;

    // 0x1ec688: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1ec688u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1ec68c: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x1ec68cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ec690: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x1ec690u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ec694: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1ec694u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ec698: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1ec698u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1ec69c: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x1ec69cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ec6a0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1ec6a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ec6a4: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1ec6a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1ec6a8: 0xc07b1cc  jal         func_1EC730
    ctx->pc = 0x1EC6A8u;
    SET_GPR_U32(ctx, 31, 0x1EC6B0u);
    ctx->pc = 0x1EC6ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EC6A8u;
            // 0x1ec6ac: 0x60302d  daddu       $a2, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1EC730u;
    if (runtime->hasFunction(0x1EC730u)) {
        auto targetFn = runtime->lookupFunction(0x1EC730u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EC6B0u; }
        if (ctx->pc != 0x1EC6B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001EC730_0x1ec730(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EC6B0u; }
        if (ctx->pc != 0x1EC6B0u) { return; }
    }
    ctx->pc = 0x1EC6B0u;
label_1ec6b0:
    // 0x1ec6b0: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x1EC6B0u;
    {
        const bool branch_taken_0x1ec6b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EC6B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EC6B0u;
            // 0x1ec6b4: 0x93a40006  lbu         $a0, 0x6($sp) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ec6b0) {
            ctx->pc = 0x1EC71Cu;
            goto label_1ec71c;
        }
    }
    ctx->pc = 0x1EC6B8u;
    // 0x1ec6b8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1ec6b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ec6bc: 0x93a50003  lbu         $a1, 0x3($sp)
    ctx->pc = 0x1ec6bcu;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 3)));
    // 0x1ec6c0: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x1ec6c0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1ec6c4: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x1ec6c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x1ec6c8: 0x3c03003f  lui         $v1, 0x3F
    ctx->pc = 0x1ec6c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63 << 16));
    // 0x1ec6cc: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1ec6ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1ec6d0: 0x9063e6b0  lbu         $v1, -0x1950($v1)
    ctx->pc = 0x1ec6d0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294960816)));
    // 0x1ec6d4: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x1ec6d4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x1ec6d8: 0xa2030028  sb          $v1, 0x28($s0)
    ctx->pc = 0x1ec6d8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 40), (uint8_t)GPR_U32(ctx, 3));
    // 0x1ec6dc: 0x3c030039  lui         $v1, 0x39
    ctx->pc = 0x1ec6dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)57 << 16));
    // 0x1ec6e0: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x1ec6e0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x1ec6e4: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x1ec6e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x1ec6e8: 0x8c84e6c0  lw          $a0, -0x1940($a0)
    ctx->pc = 0x1ec6e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294960832)));
    // 0x1ec6ec: 0xae04002c  sw          $a0, 0x2C($s0)
    ctx->pc = 0x1ec6ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 4));
    // 0x1ec6f0: 0x24671528  addiu       $a3, $v1, 0x1528
    ctx->pc = 0x1ec6f0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 5416));
    // 0x1ec6f4: 0x6ba40007  ldl         $a0, 0x7($sp)
    ctx->pc = 0x1ec6f4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x1ec6f8: 0x6fa40000  ldr         $a0, 0x0($sp)
    ctx->pc = 0x1ec6f8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x1ec6fc: 0x83a50008  lb          $a1, 0x8($sp)
    ctx->pc = 0x1ec6fcu;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1ec700: 0x83a60009  lb          $a2, 0x9($sp)
    ctx->pc = 0x1ec700u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 9)));
    // 0x1ec704: 0xb0e40007  sdl         $a0, 0x7($a3)
    ctx->pc = 0x1ec704u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1ec708: 0xb4e40000  sdr         $a0, 0x0($a3)
    ctx->pc = 0x1ec708u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1ec70c: 0xa0e50008  sb          $a1, 0x8($a3)
    ctx->pc = 0x1ec70cu;
    WRITE8(ADD32(GPR_U32(ctx, 7), 8), (uint8_t)GPR_U32(ctx, 5));
    // 0x1ec710: 0xa0e60009  sb          $a2, 0x9($a3)
    ctx->pc = 0x1ec710u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 9), (uint8_t)GPR_U32(ctx, 6));
    // 0x1ec714: 0x83a4000a  lb          $a0, 0xA($sp)
    ctx->pc = 0x1ec714u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 10)));
    // 0x1ec718: 0xa0e4000a  sb          $a0, 0xA($a3)
    ctx->pc = 0x1ec718u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 10), (uint8_t)GPR_U32(ctx, 4));
label_1ec71c:
    // 0x1ec71c: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1ec71cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ec720: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1ec720u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1ec724: 0x3e00008  jr          $ra
    ctx->pc = 0x1EC724u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EC728u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EC724u;
            // 0x1ec728: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1EC72Cu;
    // 0x1ec72c: 0x0  nop
    ctx->pc = 0x1ec72cu;
    // NOP
    ctx->pc = 0x1ec730u;
}
