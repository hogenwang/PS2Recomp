#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00274E90
// Address: 0x274e90 - 0x274f90
void sub_00274E90_0x274e90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00274E90_0x274e90");
#endif

    switch (ctx->pc) {
        case 0x274eccu: goto label_274ecc;
        case 0x274f7cu: goto label_274f7c;
        default: break;
    }

    ctx->pc = 0x274e90u;

    // 0x274e90: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x274e90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x274e94: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x274e94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x274e98: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x274e98u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x274e9c: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x274e9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x274ea0: 0x3c030027  lui         $v1, 0x27
    ctx->pc = 0x274ea0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)39 << 16));
    // 0x274ea4: 0x24634eec  addiu       $v1, $v1, 0x4EEC
    ctx->pc = 0x274ea4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 20204));
    // 0x274ea8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x274ea8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x274eac: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x274EACu;
    {
        const bool branch_taken_0x274eac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x274eac) {
            ctx->pc = 0x274ECCu;
            goto label_274ecc;
        }
    }
    ctx->pc = 0x274EB4u;
    // 0x274eb4: 0x3c040027  lui         $a0, 0x27
    ctx->pc = 0x274eb4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)39 << 16));
    // 0x274eb8: 0x24844f00  addiu       $a0, $a0, 0x4F00
    ctx->pc = 0x274eb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20224));
    // 0x274ebc: 0x8c670008  lw          $a3, 0x8($v1)
    ctx->pc = 0x274ebcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x274ec0: 0x8c65000c  lw          $a1, 0xC($v1)
    ctx->pc = 0x274ec0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x274ec4: 0xc0a7814  jal         func_29E050
    ctx->pc = 0x274EC4u;
    SET_GPR_U32(ctx, 31, 0x274ECCu);
    ctx->pc = 0x274EC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x274EC4u;
            // 0x274ec8: 0x8c660004  lw          $a2, 0x4($v1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29E050u;
    if (runtime->hasFunction(0x29E050u)) {
        auto targetFn = runtime->lookupFunction(0x29E050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x274ECCu; }
        if (ctx->pc != 0x274ECCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029E050_0x29e050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x274ECCu; }
        if (ctx->pc != 0x274ECCu) { return; }
    }
    ctx->pc = 0x274ECCu;
label_274ecc:
    // 0x274ecc: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x274ECCu;
    {
        const bool branch_taken_0x274ecc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x274ecc) {
            ctx->pc = 0x274F00u;
            goto label_274f00;
        }
    }
    ctx->pc = 0x274ED4u;
    // 0x274ed4: 0xdc5ecc07  ld          $fp, -0x33F9($v0)
    ctx->pc = 0x274ed4u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 2), 4294953991)));
    // 0x274ed8: 0xfdb2c0ba  sd          $s2, -0x3F46($t5)
    ctx->pc = 0x274ed8u;
    WRITE64(ADD32(GPR_U32(ctx, 13), 4294951098), GPR_U64(ctx, 18));
    // 0x274edc: 0x27b6dd10  addiu       $s6, $sp, -0x22F0
    ctx->pc = 0x274edcu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 4294958352));
    // 0x274ee0: 0xfcc2339a  sd          $v0, 0x339A($a2)
    ctx->pc = 0x274ee0u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 13210), GPR_U64(ctx, 2));
    // 0x274ee4: 0x507020  add         $t6, $v0, $s0
    ctx->pc = 0x274ee4u;
    {     int32_t rs_val = GPR_S32(ctx, 2);     int32_t rt_val = GPR_S32(ctx, 16);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 14, (int32_t)result);     } }
    // 0x274ee8: 0xdc8a23bf  ld          $t2, 0x23BF($a0)
    ctx->pc = 0x274ee8u;
    SET_GPR_U64(ctx, 10, READ64(ADD32(GPR_U32(ctx, 4), 9151)));
    // 0x274eec: 0x0  nop
    ctx->pc = 0x274eecu;
    // NOP
    // 0x274ef0: 0x42a6c449  .word       0x42A6C449                   # INVALID     $s5, $a2, -0x3BB7 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x274ef0u;
    // Unhandled COP0 instruction format: 0x15
    // 0x274ef4: 0x971e2800  lhu         $fp, 0x2800($t8)
    ctx->pc = 0x274ef4u;
    SET_GPR_U32(ctx, 30, (uint16_t)READ16(ADD32(GPR_U32(ctx, 24), 10240)));
    // 0x274ef8: 0x42a6c465  .word       0x42A6C465                   # INVALID     $s5, $a2, -0x3B9B # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x274ef8u;
    // Unhandled COP0 instruction format: 0x15
    // 0x274efc: 0x0  nop
    ctx->pc = 0x274efcu;
    // NOP
label_274f00:
    // 0x274f00: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x274f00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x274f04: 0x24463400  addiu       $a2, $v0, 0x3400
    ctx->pc = 0x274f04u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 13312));
    // 0x274f08: 0x815105c3  lb          $s1, 0x5C3($t2)
    ctx->pc = 0x274f08u;
    SET_GPR_S32(ctx, 17, (int8_t)READ8(ADD32(GPR_U32(ctx, 10), 1475)));
    // 0x274f0c: 0xa95128c3  swl         $s1, 0x28C3($t2)
    ctx->pc = 0x274f0cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 10), 10435); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 17); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x274f10: 0xb9510906  swr         $s1, 0x906($t2)
    ctx->pc = 0x274f10u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 10), 2310); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 17); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x274f14: 0x895309c6  lwl         $s3, 0x9C6($t2)
    ctx->pc = 0x274f14u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 10), 2502); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 19) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 19, (int32_t)merged); }
    // 0x274f18: 0xa9c12880  swl         $at, 0x2880($t6)
    ctx->pc = 0x274f18u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 14), 10368); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 1); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x274f1c: 0xa9752966  swl         $s5, 0x2966($t3)
    ctx->pc = 0x274f1cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 10598); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 21); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x274f20: 0xa9792a61  swl         $t9, 0x2A61($t3)
    ctx->pc = 0x274f20u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 10849); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 25); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x274f24: 0x5645d283  bnel        $s2, $a1, . + 4 + (-0x2D7D << 2)
    ctx->pc = 0x274F24u;
    {
        const bool branch_taken_0x274f24 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 5));
        if (branch_taken_0x274f24) {
            ctx->pc = 0x274F28u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x274F24u;
            // 0x274f28: 0xa9f12840  swl         $s1, 0x2840($t7) (Delay Slot)
        { uint32_t addr = ADD32(GPR_U32(ctx, 15), 10304); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 17); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
        ctx->in_delay_slot = false;
            ctx->pc = 0x269934u;
            return;
        }
    }
    ctx->pc = 0x274F2Cu;
    // 0x274f2c: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x274F2Cu;
    {
        const bool branch_taken_0x274f2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x274f2c) {
            ctx->pc = 0x274F5Cu;
            goto label_274f5c;
        }
    }
    ctx->pc = 0x274F34u;
    // 0x274f34: 0x271e8170  addiu       $fp, $t8, -0x7E90
    ctx->pc = 0x274f34u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 24), 4294934896));
    // 0x274f38: 0xa2b11141  sb          $s1, 0x1141($s5)
    ctx->pc = 0x274f38u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 4417), (uint8_t)GPR_U32(ctx, 17));
    // 0x274f3c: 0x26d64858  addiu       $s6, $s6, 0x4858
    ctx->pc = 0x274f3cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 18520));
    // 0x274f40: 0xfd121222  sd          $s2, 0x1222($t0)
    ctx->pc = 0x274f40u;
    WRITE64(ADD32(GPR_U32(ctx, 8), 4642), GPR_U64(ctx, 18));
    // 0x274f44: 0xdde232b7  ld          $v0, 0x32B7($t7)
    ctx->pc = 0x274f44u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 15), 12983)));
    // 0x274f48: 0x477020  add         $t6, $v0, $a3
    ctx->pc = 0x274f48u;
    {     int32_t rs_val = GPR_S32(ctx, 2);     int32_t rt_val = GPR_S32(ctx, 7);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 14, (int32_t)result);     } }
    // 0x274f4c: 0x42a6944c  .word       0x42A6944C                   # INVALID     $s5, $a2, -0x6BB4 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x274f4cu;
    // Unhandled COP0 instruction format: 0x15
    // 0x274f50: 0x971e2801  lhu         $fp, 0x2801($t8)
    ctx->pc = 0x274f50u;
    SET_GPR_U32(ctx, 30, (uint16_t)READ16(ADD32(GPR_U32(ctx, 24), 10241)));
    // 0x274f54: 0x42a69460  .word       0x42A69460                   # INVALID     $s5, $a2, -0x6BA0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x274f54u;
    // Unhandled COP0 instruction format: 0x15
    // 0x274f58: 0x0  nop
    ctx->pc = 0x274f58u;
    // NOP
label_274f5c:
    // 0x274f5c: 0x3c020027  lui         $v0, 0x27
    ctx->pc = 0x274f5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)39 << 16));
    // 0x274f60: 0x24424f4c  addiu       $v0, $v0, 0x4F4C
    ctx->pc = 0x274f60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20300));
    // 0x274f64: 0x3c040027  lui         $a0, 0x27
    ctx->pc = 0x274f64u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)39 << 16));
    // 0x274f68: 0x24844f2c  addiu       $a0, $a0, 0x4F2C
    ctx->pc = 0x274f68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20268));
    // 0x274f6c: 0x8c470004  lw          $a3, 0x4($v0)
    ctx->pc = 0x274f6cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x274f70: 0x8c450008  lw          $a1, 0x8($v0)
    ctx->pc = 0x274f70u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x274f74: 0xc0a7814  jal         func_29E050
    ctx->pc = 0x274F74u;
    SET_GPR_U32(ctx, 31, 0x274F7Cu);
    ctx->pc = 0x274F78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x274F74u;
            // 0x274f78: 0x8c460000  lw          $a2, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29E050u;
    if (runtime->hasFunction(0x29E050u)) {
        auto targetFn = runtime->lookupFunction(0x29E050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x274F7Cu; }
        if (ctx->pc != 0x274F7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029E050_0x29e050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x274F7Cu; }
        if (ctx->pc != 0x274F7Cu) { return; }
    }
    ctx->pc = 0x274F7Cu;
label_274f7c:
    // 0x274f7c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x274f7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x274f80: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x274f80u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x274f84: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x274f84u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x274f88: 0x3e00008  jr          $ra
    ctx->pc = 0x274F88u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x274F8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x274F88u;
            // 0x274f8c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x274F90u;
    ctx->pc = 0x274f90u;
}
