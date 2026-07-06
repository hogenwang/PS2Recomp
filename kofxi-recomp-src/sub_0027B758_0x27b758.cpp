#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0027B758
// Address: 0x27b758 - 0x27b8f8
void sub_0027B758_0x27b758(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0027B758_0x27b758");
#endif

    switch (ctx->pc) {
        case 0x27b79cu: goto label_27b79c;
        case 0x27b7acu: goto label_27b7ac;
        case 0x27b7b0u: goto label_27b7b0;
        case 0x27b7b8u: goto label_27b7b8;
        case 0x27b7dcu: goto label_27b7dc;
        case 0x27b7fcu: goto label_27b7fc;
        case 0x27b800u: goto label_27b800;
        case 0x27b804u: goto label_27b804;
        case 0x27b820u: goto label_27b820;
        case 0x27b83cu: goto label_27b83c;
        case 0x27b858u: goto label_27b858;
        case 0x27b85cu: goto label_27b85c;
        case 0x27b860u: goto label_27b860;
        case 0x27b874u: goto label_27b874;
        case 0x27b878u: goto label_27b878;
        case 0x27b884u: goto label_27b884;
        case 0x27b888u: goto label_27b888;
        case 0x27b890u: goto label_27b890;
        case 0x27b894u: goto label_27b894;
        case 0x27b898u: goto label_27b898;
        case 0x27b89cu: goto label_27b89c;
        case 0x27b8c0u: goto label_27b8c0;
        case 0x27b8c8u: goto label_27b8c8;
        case 0x27b8dcu: goto label_27b8dc;
        default: break;
    }

    ctx->pc = 0x27b758u;

    // 0x27b758: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x27b758u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x27b75c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x27b75cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x27b760: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x27b760u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27b764: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x27b764u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x27b768: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x27b768u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x27b76c: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x27b76cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x27b770: 0x3c030028  lui         $v1, 0x28
    ctx->pc = 0x27b770u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)40 << 16));
    // 0x27b774: 0x2463b7bc  addiu       $v1, $v1, -0x4844
    ctx->pc = 0x27b774u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294948796));
    // 0x27b778: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x27b778u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x27b77c: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x27B77Cu;
    {
        const bool branch_taken_0x27b77c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x27b77c) {
            ctx->pc = 0x27B79Cu;
            goto label_27b79c;
        }
    }
    ctx->pc = 0x27B784u;
    // 0x27b784: 0x3c040028  lui         $a0, 0x28
    ctx->pc = 0x27b784u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)40 << 16));
    // 0x27b788: 0x2484b7d0  addiu       $a0, $a0, -0x4830
    ctx->pc = 0x27b788u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948816));
    // 0x27b78c: 0x8c670008  lw          $a3, 0x8($v1)
    ctx->pc = 0x27b78cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x27b790: 0x8c65000c  lw          $a1, 0xC($v1)
    ctx->pc = 0x27b790u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x27b794: 0xc0a7814  jal         func_29E050
    ctx->pc = 0x27B794u;
    SET_GPR_U32(ctx, 31, 0x27B79Cu);
    ctx->pc = 0x27B798u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27B794u;
            // 0x27b798: 0x8c660004  lw          $a2, 0x4($v1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29E050u;
    if (runtime->hasFunction(0x29E050u)) {
        auto targetFn = runtime->lookupFunction(0x29E050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27B79Cu; }
        if (ctx->pc != 0x27B79Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029E050_0x29e050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27B79Cu; }
        if (ctx->pc != 0x27B79Cu) { return; }
    }
    ctx->pc = 0x27B79Cu;
label_27b79c:
    // 0x27b79c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x27B79Cu;
    {
        const bool branch_taken_0x27b79c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27b79c) {
            ctx->pc = 0x27B7D0u;
            goto label_27b7d0;
        }
    }
    ctx->pc = 0x27B7A4u;
    // 0x27b7a4: 0xc67e877  jal         func_19FA1DC
    ctx->pc = 0x27B7A4u;
    SET_GPR_U32(ctx, 31, 0x27B7ACu);
    ctx->pc = 0x27B7A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27B7A4u;
            // 0x27b7a8: 0xc105860  jal         func_416180 (Delay Slot)
        // JAL 0x416180 - Handled by branch logic
        ctx->in_delay_slot = false;
    ctx->pc = 0x19FA1DCu;
    {
        auto targetFn = runtime->lookupFunction(0x19FA1DCu);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27B7ACu; }
        if (ctx->pc != 0x27B7ACu) { return; }
    }
    ctx->pc = 0x27B7ACu;
label_27b7ac:
    // 0x27b7ac: 0x8d898545  lw          $t1, -0x7ABB($t4)
    ctx->pc = 0x27b7acu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 4294935877)));
label_27b7b0:
    // 0x27b7b0: 0xcdf3cfc  jal         func_37CF3F0
    ctx->pc = 0x27B7B0u;
    SET_GPR_U32(ctx, 31, 0x27B7B8u);
    ctx->pc = 0x27B7B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27B7B0u;
            // 0x27b7b4: 0x8dd27675  lw          $s2, 0x7675($t6) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 30325)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x37CF3F0u;
    {
        auto targetFn = runtime->lookupFunction(0x37CF3F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27B7B8u; }
        if (ctx->pc != 0x27B7B8u) { return; }
    }
    ctx->pc = 0x27B7B8u;
label_27b7b8:
    // 0x27b7b8: 0x24ed89e8  addiu       $t5, $a3, -0x7618
    ctx->pc = 0x27b7b8u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 7), 4294937064));
    // 0x27b7bc: 0x0  nop
    ctx->pc = 0x27b7bcu;
    // NOP
    // 0x27b7c0: 0x5626e3af  bnel        $s1, $a2, . + 4 + (-0x1C51 << 2)
    ctx->pc = 0x27B7C0u;
    {
        const bool branch_taken_0x27b7c0 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 6));
        if (branch_taken_0x27b7c0) {
            ctx->pc = 0x27B7C4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x27B7C0u;
            // 0x27b7c4: 0x980d2adc  lwr         $t5, 0x2ADC($zero) (Delay Slot)
        { uint32_t addr = ADD32(GPR_U32(ctx, 0), 10972); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 13) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 13) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 13, merged64); }
        ctx->in_delay_slot = false;
            ctx->pc = 0x274680u;
            return;
        }
    }
    ctx->pc = 0x27B7C8u;
    // 0x27b7c8: 0x5626e37b  bnel        $s1, $a2, . + 4 + (-0x1C85 << 2)
    ctx->pc = 0x27B7C8u;
    {
        const bool branch_taken_0x27b7c8 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 6));
        if (branch_taken_0x27b7c8) {
            ctx->pc = 0x2745B8u;
            return;
        }
    }
    ctx->pc = 0x27B7D0u;
label_27b7d0:
    // 0x27b7d0: 0x3c1201c3  lui         $s2, 0x1C3
    ctx->pc = 0x27b7d0u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)451 << 16));
    // 0x27b7d4: 0xc043328  jal         func_10CCA0
    ctx->pc = 0x27B7D4u;
    SET_GPR_U32(ctx, 31, 0x27B7DCu);
    ctx->pc = 0x27B7D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27B7D4u;
            // 0x27b7d8: 0x8e445398  lw          $a0, 0x5398($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 21400)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10CCA0u;
    if (runtime->hasFunction(0x10CCA0u)) {
        auto targetFn = runtime->lookupFunction(0x10CCA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27B7DCu; }
        if (ctx->pc != 0x27B7DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        kofxiSyscallWaitSemaWrapper_0x10cca0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27B7DCu; }
        if (ctx->pc != 0x27B7DCu) { return; }
    }
    ctx->pc = 0x27B7DCu;
label_27b7dc:
    // 0x27b7dc: 0x3c0301c3  lui         $v1, 0x1C3
    ctx->pc = 0x27b7dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)451 << 16));
    // 0x27b7e0: 0x246353f8  addiu       $v1, $v1, 0x53F8
    ctx->pc = 0x27b7e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 21496));
    // 0x27b7e4: 0x3ba868f  .word       0x03BA868F                   # sync.p # 03BA8000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27b7e4u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x27b7e8: 0x3be042f  .word       0x03BE042F                   # dsubu       $zero, $sp, $fp # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27b7e8u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 29) - GPR_U64(ctx, 30));
    // 0x27b7ec: 0x3ba860f  .word       0x03BA860F                   # sync.p # 03BA8000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27b7ecu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x27b7f0: 0x2bbf04ff  slti        $ra, $sp, 0x4FF
    ctx->pc = 0x27b7f0u;
    SET_GPR_U64(ctx, 31, ((int64_t)GPR_S64(ctx, 29) < (int64_t)(int32_t)1279) ? 1 : 0);
    // 0x27b7f4: 0xbbb04bf  j           func_EEC12FC
    ctx->pc = 0x27B7F4u;
    ctx->pc = 0x27B7F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27B7F4u;
            // 0x27b7f8: 0xbbb04bf  j           func_EEC12FC (Delay Slot)
        // J 0xEEC12FC - Handled by branch logic
        ctx->in_delay_slot = false;
    ctx->pc = 0xEEC12FCu;
    {
        auto targetFn = runtime->lookupFunction(0xEEC12FCu);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x27B7FCu;
label_27b7fc:
    // 0x27b7fc: 0xbbb04bf  j           func_EEC12FC
label_27b800:
    if (ctx->pc == 0x27B800u) {
        ctx->pc = 0x27B800u;
            // 0x27b800: 0x921aa03f  lbu         $k0, -0x5FC1($s0) (Delay Slot)
        SET_GPR_U32(ctx, 26, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 4294942783)));
        ctx->pc = 0x27B804u;
        goto label_27b804;
    }
    ctx->pc = 0x27B7FCu;
    ctx->pc = 0x27B800u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27B7FCu;
            // 0x27b800: 0x921aa03f  lbu         $k0, -0x5FC1($s0) (Delay Slot)
        SET_GPR_U32(ctx, 26, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 4294942783)));
        ctx->in_delay_slot = false;
    ctx->pc = 0xEEC12FCu;
    {
        auto targetFn = runtime->lookupFunction(0xEEC12FCu);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x27B804u;
label_27b804:
    // 0x27b804: 0x6666892a  daddiu      $a2, $s3, -0x76D6
    ctx->pc = 0x27b804u;
    SET_GPR_S64(ctx, 6, (int64_t)GPR_S64(ctx, 19) + (int64_t)(int32_t)4294936874);
    // 0x27b808: 0x7226b53a  .word       0x7226B53A                   # INVALID     $s1, $a2, -0x4AC6 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x27b808u;
    // Unhandled MMI instruction: function 0x3A
    // 0x27b80c: 0xd2d69976  lld         $s6, -0x668A($s6)
    ctx->pc = 0x27b80cu;
    // Unhandled opcode: 0x34
    // 0x27b810: 0x8a2fb01a  lwl         $t7, -0x4FE6($s1)
    ctx->pc = 0x27b810u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 4294946842); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 15) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 15, (int32_t)merged); }
    // 0x27b814: 0xebb304bf  swc2        $19, 0x4BF($sp)
    ctx->pc = 0x27b814u;
    // Unhandled opcode: 0x3A
    // 0x27b818: 0xbbb04bf  j           func_EEC12FC
    ctx->pc = 0x27B818u;
    ctx->pc = 0x27B81Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27B818u;
            // 0x27b81c: 0x3c060028  lui         $a2, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)40 << 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0xEEC12FCu;
    {
        auto targetFn = runtime->lookupFunction(0xEEC12FCu);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x27B820u;
label_27b820:
    // 0x27b820: 0x24c6b800  addiu       $a2, $a2, -0x4800
    ctx->pc = 0x27b820u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294948864));
    // 0x27b824: 0x3c0201c3  lui         $v0, 0x1C3
    ctx->pc = 0x27b824u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)451 << 16));
    // 0x27b828: 0xab2f04b7  swl         $t7, 0x4B7($t9)
    ctx->pc = 0x27b828u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 25), 1207); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 15); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x27b82c: 0x2450539c  addiu       $s0, $v0, 0x539C
    ctx->pc = 0x27b82cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 21404));
    // 0x27b830: 0x3c0301c3  lui         $v1, 0x1C3
    ctx->pc = 0x27b830u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)451 << 16));
    // 0x27b834: 0xfbb4687  jal         func_EED1A1C
    ctx->pc = 0x27B834u;
    SET_GPR_U32(ctx, 31, 0x27B83Cu);
    ctx->pc = 0x27B838u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27B834u;
            // 0x27b838: 0x1fbf042f  .word       0x1FBF042F                   # bgtz        $sp, . + 4 + (0x42F << 2) # 001F0000 <InstrIdType: CPU_NORMAL> (Delay Slot)
        // Likely branch instruction at 0x27B838 - Handled by branch logic
        ctx->in_delay_slot = false;
    ctx->pc = 0xEED1A1Cu;
    {
        auto targetFn = runtime->lookupFunction(0xEED1A1Cu);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27B83Cu; }
        if (ctx->pc != 0x27B83Cu) { return; }
    }
    ctx->pc = 0x27B83Cu;
label_27b83c:
    // 0x27b83c: 0xac6653ec  sw          $a2, 0x53EC($v1)
    ctx->pc = 0x27b83cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 21484), GPR_U32(ctx, 6));
    // 0x27b840: 0x3bf8427  .word       0x03BF8427                   # nor         $s0, $sp, $ra # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27b840u;
    SET_GPR_U64(ctx, 16, ~(GPR_U64(ctx, 29) | GPR_U64(ctx, 31)));
    // 0x27b844: 0x5fb204ff  .word       0x5FB204FF                   # bgtzl       $sp, . + 4 + (0x4FF << 2) # 00120000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x27B844u;
    {
        const bool branch_taken_0x27b844 = (GPR_S32(ctx, 29) > 0);
        if (branch_taken_0x27b844) {
            ctx->pc = 0x27B848u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x27B844u;
            // 0x27b848: 0x3bb0607  .word       0x03BB0607                   # srav        $zero, $k1, $sp # 00000600 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 27), GPR_U32(ctx, 29) & 0x1F));
        ctx->in_delay_slot = false;
            ctx->pc = 0x27CC44u;
            return;
        }
    }
    ctx->pc = 0x27B84Cu;
    // 0x27b84c: 0x2bbb04ff  slti        $k1, $sp, 0x4FF
    ctx->pc = 0x27b84cu;
    SET_GPR_U64(ctx, 27, ((int64_t)GPR_S64(ctx, 29) < (int64_t)(int32_t)1279) ? 1 : 0);
    // 0x27b850: 0xbbb04bf  j           func_EEC12FC
    ctx->pc = 0x27B850u;
    ctx->pc = 0x27B854u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27B850u;
            // 0x27b854: 0xbbb04bf  j           func_EEC12FC (Delay Slot)
        // J 0xEEC12FC - Handled by branch logic
        ctx->in_delay_slot = false;
    ctx->pc = 0xEEC12FCu;
    {
        auto targetFn = runtime->lookupFunction(0xEEC12FCu);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x27B858u;
label_27b858:
    // 0x27b858: 0xbbb04bf  j           func_EEC12FC
label_27b85c:
    if (ctx->pc == 0x27B85Cu) {
        ctx->pc = 0x27B85Cu;
            // 0x27b85c: 0xc632916a  lwc1        $f18, -0x6E96($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4294938986)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[18] = f; }
        ctx->pc = 0x27B860u;
        goto label_27b860;
    }
    ctx->pc = 0x27B858u;
    ctx->pc = 0x27B85Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27B858u;
            // 0x27b85c: 0xc632916a  lwc1        $f18, -0x6E96($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4294938986)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[18] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0xEEC12FCu;
    {
        auto targetFn = runtime->lookupFunction(0xEEC12FCu);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x27B860u;
label_27b860:
    // 0x27b860: 0xce72a966  pref        0x12, -0x569A($s3)
    ctx->pc = 0x27b860u;
    // PREF instruction (ignored)
    // 0x27b864: 0x872e853a  lh          $t6, -0x7AC6($t9)
    ctx->pc = 0x27b864u;
    SET_GPR_S32(ctx, 14, (int16_t)READ16(ADD32(GPR_U32(ctx, 25), 4294935866)));
    // 0x27b868: 0xb20bb4be  sdl         $t3, -0x4B42($s0)
    ctx->pc = 0x27b868u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 4294948030); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 11); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x27b86c: 0xbbb04bf  j           func_EEC12FC
    ctx->pc = 0x27B86Cu;
    ctx->pc = 0x27B870u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27B86Cu;
            // 0x27b870: 0xbbb04bf  j           func_EEC12FC (Delay Slot)
        // J 0xEEC12FC - Handled by branch logic
        ctx->in_delay_slot = false;
    ctx->pc = 0xEEC12FCu;
    {
        auto targetFn = runtime->lookupFunction(0xEEC12FCu);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x27B874u;
label_27b874:
    // 0x27b874: 0x3c040028  lui         $a0, 0x28
    ctx->pc = 0x27b874u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)40 << 16));
label_27b878:
    // 0x27b878: 0x2484b85c  addiu       $a0, $a0, -0x47A4
    ctx->pc = 0x27b878u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948956));
    // 0x27b87c: 0xc09e574  jal         func_2795D0
    ctx->pc = 0x27B87Cu;
    SET_GPR_U32(ctx, 31, 0x27B884u);
    ctx->pc = 0x27B880u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27B87Cu;
            // 0x27b880: 0xbbb04bf  j           func_EEC12FC (Delay Slot)
        // J 0xEEC12FC - Handled by branch logic
        ctx->in_delay_slot = false;
    ctx->pc = 0x2795D0u;
    if (runtime->hasFunction(0x2795D0u)) {
        auto targetFn = runtime->lookupFunction(0x2795D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27B884u; }
        if (ctx->pc != 0x27B884u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002795D0_0x2795d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27B884u; }
        if (ctx->pc != 0x27B884u) { return; }
    }
    ctx->pc = 0x27B884u;
label_27b884:
    // 0x27b884: 0x4bb704ff  .word       0x4BB704FF                   # INVALID     $sp, $s7, 0x4FF # 00000000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x27b884u;
    // Unhandled VU0 Special2 function: 0x4F
label_27b888:
    // 0x27b888: 0xfbb4607  jal         func_EED181C
    ctx->pc = 0x27B888u;
    SET_GPR_U32(ctx, 31, 0x27B890u);
    ctx->pc = 0x27B88Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27B888u;
            // 0x27b88c: 0xbbb04bf  j           func_EEC12FC (Delay Slot)
        // J 0xEEC12FC - Handled by branch logic
        ctx->in_delay_slot = false;
    ctx->pc = 0xEED181Cu;
    {
        auto targetFn = runtime->lookupFunction(0xEED181Cu);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27B890u; }
        if (ctx->pc != 0x27B890u) { return; }
    }
    ctx->pc = 0x27B890u;
label_27b890:
    // 0x27b890: 0xc09e920  jal         func_27A480
label_27b894:
    if (ctx->pc == 0x27B894u) {
        ctx->pc = 0x27B894u;
            // 0x27b894: 0xbbb04bf  j           func_EEC12FC (Delay Slot)
        // J 0xEEC12FC - Handled by branch logic
        ctx->pc = 0x27B898u;
        goto label_27b898;
    }
    ctx->pc = 0x27B890u;
    SET_GPR_U32(ctx, 31, 0x27B898u);
    ctx->pc = 0x27B894u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27B890u;
            // 0x27b894: 0xbbb04bf  j           func_EEC12FC (Delay Slot)
        // J 0xEEC12FC - Handled by branch logic
        ctx->in_delay_slot = false;
    ctx->pc = 0x27A480u;
    if (runtime->hasFunction(0x27A480u)) {
        auto targetFn = runtime->lookupFunction(0x27A480u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27B898u; }
        if (ctx->pc != 0x27B898u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0027A480_0x27a480(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27B898u; }
        if (ctx->pc != 0x27B898u) { return; }
    }
    ctx->pc = 0x27B898u;
label_27b898:
    // 0x27b898: 0x3bb0687  .word       0x03BB0687                   # srav        $zero, $k1, $sp # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27b898u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 27), GPR_U32(ctx, 29) & 0x1F));
label_27b89c:
    // 0x27b89c: 0xe046182c  sc          $a2, 0x182C($v0)
    ctx->pc = 0x27b89cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 6188); if (ctx->llbit && ctx->lladdr == addr) { WRITE32(addr, GPR_U32(ctx, 6)); SET_GPR_S32(ctx, 6, 1); } else { SET_GPR_S32(ctx, 6, 0); } ctx->llbit = 0; ctx->lladdr = 0; }
    // 0x27b8a0: 0x3bb0607  .word       0x03BB0607                   # srav        $zero, $k1, $sp # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27b8a0u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 27), GPR_U32(ctx, 29) & 0x1F));
    // 0x27b8a4: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x27B8A4u;
    {
        const bool branch_taken_0x27b8a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27b8a4) {
            ctx->pc = 0x27B8D4u;
            goto label_27b8d4;
        }
    }
    ctx->pc = 0x27B8ACu;
    // 0x27b8ac: 0xfd8f414a  sd          $t7, 0x414A($t4)
    ctx->pc = 0x27b8acu;
    WRITE64(ADD32(GPR_U32(ctx, 12), 16714), GPR_U64(ctx, 15));
    // 0x27b8b0: 0xfdab3d42  sd          $t3, 0x3D42($t5)
    ctx->pc = 0x27b8b0u;
    WRITE64(ADD32(GPR_U32(ctx, 13), 15682), GPR_U64(ctx, 11));
    // 0x27b8b4: 0x2072020  add         $a0, $s0, $a3
    ctx->pc = 0x27b8b4u;
    {     int32_t rs_val = GPR_S32(ctx, 16);     int32_t rt_val = GPR_S32(ctx, 7);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 4, (int32_t)result);     } }
    // 0x27b8b8: 0xcb318fd  jal         func_2CC63F4
    ctx->pc = 0x27B8B8u;
    SET_GPR_U32(ctx, 31, 0x27B8C0u);
    ctx->pc = 0x27B8BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27B8B8u;
            // 0x27b8bc: 0x87cf41e3  lh          $t7, 0x41E3($fp) (Delay Slot)
        SET_GPR_S32(ctx, 15, (int16_t)READ16(ADD32(GPR_U32(ctx, 30), 16867)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2CC63F4u;
    {
        auto targetFn = runtime->lookupFunction(0x2CC63F4u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27B8C0u; }
        if (ctx->pc != 0x27B8C0u) { return; }
    }
    ctx->pc = 0x27B8C0u;
label_27b8c0:
    // 0x27b8c0: 0xc272075  jal         func_9C81D4
    ctx->pc = 0x27B8C0u;
    SET_GPR_U32(ctx, 31, 0x27B8C8u);
    ctx->pc = 0x27B8C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27B8C0u;
            // 0x27b8c4: 0x562fa3e6  bnel        $s1, $t7, . + 4 + (-0x5C1A << 2) (Delay Slot)
        // Likely branch instruction at 0x27B8C4 - Handled by branch logic
        ctx->in_delay_slot = false;
    ctx->pc = 0x9C81D4u;
    {
        auto targetFn = runtime->lookupFunction(0x9C81D4u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27B8C8u; }
        if (ctx->pc != 0x27B8C8u) { return; }
    }
    ctx->pc = 0x27B8C8u;
label_27b8c8:
    // 0x27b8c8: 0x980d2add  lwr         $t5, 0x2ADD($zero)
    ctx->pc = 0x27b8c8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 0), 10973); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 13) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 13) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 13, merged64); }
    // 0x27b8cc: 0x562fa332  bnel        $s1, $t7, . + 4 + (-0x5CCE << 2)
    ctx->pc = 0x27B8CCu;
    {
        const bool branch_taken_0x27b8cc = (GPR_U64(ctx, 17) != GPR_U64(ctx, 15));
        if (branch_taken_0x27b8cc) {
            ctx->pc = 0x264598u;
            return;
        }
    }
    ctx->pc = 0x27B8D4u;
label_27b8d4:
    // 0x27b8d4: 0xc043320  jal         func_10CC80
    ctx->pc = 0x27B8D4u;
    SET_GPR_U32(ctx, 31, 0x27B8DCu);
    ctx->pc = 0x27B8D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27B8D4u;
            // 0x27b8d8: 0x8e445398  lw          $a0, 0x5398($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 21400)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10CC80u;
    if (runtime->hasFunction(0x10CC80u)) {
        auto targetFn = runtime->lookupFunction(0x10CC80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27B8DCu; }
        if (ctx->pc != 0x27B8DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010CC80_0x10cc80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27B8DCu; }
        if (ctx->pc != 0x27B8DCu) { return; }
    }
    ctx->pc = 0x27B8DCu;
label_27b8dc:
    // 0x27b8dc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x27b8dcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x27b8e0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x27b8e0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x27b8e4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x27b8e4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x27b8e8: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x27b8e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x27b8ec: 0x3e00008  jr          $ra
    ctx->pc = 0x27B8ECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27B8F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27B8ECu;
            // 0x27b8f0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x27B8F4u;
    // 0x27b8f4: 0x0  nop
    ctx->pc = 0x27b8f4u;
    // NOP
    ctx->pc = 0x27b8f8u;
}
