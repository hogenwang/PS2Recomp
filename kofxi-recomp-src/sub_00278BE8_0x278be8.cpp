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

// Function: sub_00278BE8
// Address: 0x278be8 - 0x278dc0
void sub_00278BE8_0x278be8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00278BE8_0x278be8");
#endif

    switch (ctx->pc) {
        case 0x278c1cu: goto label_278c1c;
        case 0x278c6cu: goto label_278c6c;
        case 0x278cf4u: goto label_278cf4;
        case 0x278d34u: goto label_278d34;
        case 0x278d70u: goto label_278d70;
        case 0x278d88u: goto label_278d88;
        default: break;
    }

    ctx->pc = 0x278be8u;

    // 0x278be8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x278be8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x278bec: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x278becu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x278bf0: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x278bf0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x278bf4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x278bf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x278bf8: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x278bf8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x278bfc: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x278bfcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x278c00: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x278c00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x278c04: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x278c04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x278c08: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x278c08u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x278c0c: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x278c0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x278c10: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x278c10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x278c14: 0xc09d5be  jal         func_2756F8
    ctx->pc = 0x278C14u;
    SET_GPR_U32(ctx, 31, 0x278C1Cu);
    ctx->pc = 0x278C18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x278C14u;
    // 0x278c18: 0xa0a82d  daddu       $s5, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2756F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2756F8u, 0x278C14u, 0x278C1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x278C1Cu;
label_278c1c:
    // 0x278c1c: 0x3c03003a  lui         $v1, 0x3A
    ctx->pc = 0x278c1cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)58 << 16));
    // 0x278c20: 0x2828821  addu        $s1, $s4, $v0
    ctx->pc = 0x278c20u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x278c24: 0x24732d78  addiu       $s3, $v1, 0x2D78
    ctx->pc = 0x278c24u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), 11640));
    // 0x278c28: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x278c28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x278c2c: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x278c2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x278c30: 0x9042069a  lbu         $v0, 0x69A($v0)
    ctx->pc = 0x278c30u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1690)));
    // 0x278c34: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x278c34u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x278c38: 0x14400041  bnez        $v0, . + 4 + (0x41 << 2)
    ctx->pc = 0x278C38u;
    {
        const bool branch_taken_0x278c38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x278c38) {
            ctx->pc = 0x278D40u;
            goto label_278d40;
        }
    }
    ctx->pc = 0x278C40u;
    // 0x278c40: 0x3c030028  lui         $v1, 0x28
    ctx->pc = 0x278c40u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)40 << 16));
    // 0x278c44: 0x24638c8c  addiu       $v1, $v1, -0x7374
    ctx->pc = 0x278c44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294937740));
    // 0x278c48: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x278c48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x278c4c: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x278C4Cu;
    {
        const bool branch_taken_0x278c4c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x278c4c) {
            ctx->pc = 0x278C6Cu;
            goto label_278c6c;
        }
    }
    ctx->pc = 0x278C54u;
    // 0x278c54: 0x3c040028  lui         $a0, 0x28
    ctx->pc = 0x278c54u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)40 << 16));
    // 0x278c58: 0x24848ca0  addiu       $a0, $a0, -0x7360
    ctx->pc = 0x278c58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937760));
    // 0x278c5c: 0x8c670008  lw          $a3, 0x8($v1)
    ctx->pc = 0x278c5cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x278c60: 0x8c65000c  lw          $a1, 0xC($v1)
    ctx->pc = 0x278c60u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x278c64: 0xc0a7814  jal         func_29E050
    ctx->pc = 0x278C64u;
    SET_GPR_U32(ctx, 31, 0x278C6Cu);
    ctx->pc = 0x278C68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x278C64u;
    // 0x278c68: 0x8c660004  lw          $a2, 0x4($v1) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29E050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29E050u, 0x278C64u, 0x278C6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x278C6Cu;
label_278c6c:
    // 0x278c6c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x278C6Cu;
    {
        const bool branch_taken_0x278c6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x278c6c) {
            ctx->pc = 0x278CA0u;
            goto label_278ca0;
        }
    }
    ctx->pc = 0x278C74u;
    // 0x278c74: 0x8f69e92d  lw          $t1, -0x16D3($k1)
    ctx->pc = 0x278c74u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 27), 4294961453)));
    // 0x278c78: 0x8ec2007d  lw          $v0, 0x7D($s6)
    ctx->pc = 0x278c78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 125)));
    // 0x278c7c: 0x8d11759d  lw          $s1, 0x759D($t0)
    ctx->pc = 0x278c7cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 30109)));
    // 0x278c80: 0xa3a20021  sb          $v0, 0x21($sp)
    ctx->pc = 0x278c80u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 33), (uint8_t)GPR_U32(ctx, 2));
    // 0x278c84: 0x564820  add         $t1, $v0, $s6
    ctx->pc = 0x278c84u;
    {     int32_t rs_val = GPR_S32(ctx, 2);     int32_t rt_val = GPR_S32(ctx, 22);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 9, (int32_t)result);     } }
    // 0x278c88: 0x848e8a6b  lh          $t6, -0x7595($a0)
    ctx->pc = 0x278c88u;
    SET_GPR_S32(ctx, 14, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4294937195)));
    // 0x278c8c: 0x0  nop
    ctx->pc = 0x278c8cu;
    // NOP
    // 0x278c90: 0xe1aed675  sc          $t6, -0x298B($t5)
    ctx->pc = 0x278c90u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 13), 4294956661); if (ctx->llbit && ctx->lladdr == addr) { WRITE32(addr, GPR_U32(ctx, 14)); SET_GPR_S32(ctx, 14, 1); } else { SET_GPR_S32(ctx, 14, 0); } ctx->llbit = 0; ctx->lladdr = 0; }
    // 0x278c94: 0x0  nop
    ctx->pc = 0x278c94u;
    // NOP
    // 0x278c98: 0xe1aed631  sc          $t6, -0x29CF($t5)
    ctx->pc = 0x278c98u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 13), 4294956593); if (ctx->llbit && ctx->lladdr == addr) { WRITE32(addr, GPR_U32(ctx, 14)); SET_GPR_S32(ctx, 14, 1); } else { SET_GPR_S32(ctx, 14, 0); } ctx->llbit = 0; ctx->lladdr = 0; }
    // 0x278c9c: 0x0  nop
    ctx->pc = 0x278c9cu;
    // NOP
label_278ca0:
    // 0x278ca0: 0xea64e5ba  swc2        $4, -0x1A46($s3)
    ctx->pc = 0x278ca0u;
    throw std::runtime_error("Unhandled opcode: 0x3A at 0x278CA0 raw=0xEA64E5BA");
    // 0x278ca4: 0xebf4c5ba  swc2        $20, -0x3A46($ra)
    ctx->pc = 0x278ca4u;
    throw std::runtime_error("Unhandled opcode: 0x3A at 0x278CA4 raw=0xEBF4C5BA");
    // 0x278ca8: 0x6877c7ff  ldl         $s7, -0x3801($v1)
    ctx->pc = 0x278ca8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 4294952959); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 23, (GPR_U64(ctx, 23) & keepMask) | (mem << shift)); }
    // 0x278cac: 0x8176fc7e  lb          $s6, -0x382($t3)
    ctx->pc = 0x278cacu;
    SET_GPR_S32(ctx, 22, (int8_t)READ8(ADD32(GPR_U32(ctx, 11), 4294966398)));
    // 0x278cb0: 0xe966e57e  swc2        $6, -0x1A82($t3)
    ctx->pc = 0x278cb0u;
    throw std::runtime_error("Unhandled opcode: 0x3A at 0x278CB0 raw=0xE966E57E");
    // 0x278cb4: 0x3e68f5b9  .word       0x3E68F5B9                   # lui         $t0, 0xF5B9 # 02600000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x278cb4u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)62905 << 16));
    // 0x278cb8: 0xeae695fe  swc2        $6, -0x6A02($s7)
    ctx->pc = 0x278cb8u;
    throw std::runtime_error("Unhandled opcode: 0x3A at 0x278CB8 raw=0xEAE695FE");
    // 0x278cbc: 0xe944b5fe  swc2        $4, -0x4A02($t2)
    ctx->pc = 0x278cbcu;
    throw std::runtime_error("Unhandled opcode: 0x3A at 0x278CBC raw=0xE944B5FE");
    // 0x278cc0: 0xea6495ba  swc2        $4, -0x6A46($s3)
    ctx->pc = 0x278cc0u;
    throw std::runtime_error("Unhandled opcode: 0x3A at 0x278CC0 raw=0xEA6495BA");
    // 0x278cc4: 0xea64f5ba  swc2        $4, -0xA46($s3)
    ctx->pc = 0x278cc4u;
    throw std::runtime_error("Unhandled opcode: 0x3A at 0x278CC4 raw=0xEA64F5BA");
    // 0x278cc8: 0xe96685fe  swc2        $6, -0x7A02($t3)
    ctx->pc = 0x278cc8u;
    throw std::runtime_error("Unhandled opcode: 0x3A at 0x278CC8 raw=0xE96685FE");
    // 0x278ccc: 0x3e68e5b9  .word       0x3E68E5B9                   # lui         $t0, 0xE5B9 # 02600000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x278cccu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)58809 << 16));
    // 0x278cd0: 0xe94495fa  swc2        $4, -0x6A06($t2)
    ctx->pc = 0x278cd0u;
    throw std::runtime_error("Unhandled opcode: 0x3A at 0x278CD0 raw=0xE94495FA");
    // 0x278cd4: 0xe844d5fa  swc2        $4, -0x2A06($v0)
    ctx->pc = 0x278cd4u;
    throw std::runtime_error("Unhandled opcode: 0x3A at 0x278CD4 raw=0xE844D5FA");
    // 0x278cd8: 0xe966f5be  swc2        $6, -0xA42($t3)
    ctx->pc = 0x278cd8u;
    throw std::runtime_error("Unhandled opcode: 0x3A at 0x278CD8 raw=0xE966F5BE");
    // 0x278cdc: 0x3e68c5b9  .word       0x3E68C5B9                   # lui         $t0, 0xC5B9 # 02600000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x278cdcu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)50617 << 16));
    // 0x278ce0: 0xeae4dd9e  swc2        $4, -0x2262($s7)
    ctx->pc = 0x278ce0u;
    throw std::runtime_error("Unhandled opcode: 0x3A at 0x278CE0 raw=0xEAE4DD9E");
    // 0x278ce4: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x278CE4u;
    {
        const bool branch_taken_0x278ce4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x278ce4) {
            ctx->pc = 0x278D14u;
            goto label_278d14;
        }
    }
    ctx->pc = 0x278CECu;
    // 0x278cec: 0xc39e4bf  jal         func_E792FC
    ctx->pc = 0x278CECu;
    SET_GPR_U32(ctx, 31, 0x278CF4u);
    ctx->pc = 0x278CF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x278CECu;
    // 0x278cf0: 0xfdefa45a  sd          $t7, -0x5BA6($t7) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 15), 4294943834), GPR_U64(ctx, 15));
    ctx->in_delay_slot = false;
    ctx->pc = 0xE792FCu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0xE792FCu, 0x278CECu, 0x278CF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x278CF4u;
label_278cf4:
    // 0x278cf4: 0x264c88e8  addiu       $t4, $s2, -0x7718
    ctx->pc = 0x278cf4u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 18), 4294936808));
    // 0x278cf8: 0xa3c265e9  sb          $v0, 0x65E9($fp)
    ctx->pc = 0x278cf8u;
    WRITE8(ADD32(GPR_U32(ctx, 30), 26089), (uint8_t)GPR_U32(ctx, 2));
    // 0x278cfc: 0x872a860b  lh          $t2, -0x79F5($t9)
    ctx->pc = 0x278cfcu;
    SET_GPR_S32(ctx, 10, (int16_t)READ16(ADD32(GPR_U32(ctx, 25), 4294936075)));
    // 0x278d00: 0xdfd32c67  ld          $s3, 0x2C67($fp)
    ctx->pc = 0x278d00u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 30), 11367)));
    // 0x278d04: 0xe1576dea  sc          $s7, 0x6DEA($t2)
    ctx->pc = 0x278d04u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 10), 28138); if (ctx->llbit && ctx->lladdr == addr) { WRITE32(addr, GPR_U32(ctx, 23)); SET_GPR_S32(ctx, 23, 1); } else { SET_GPR_S32(ctx, 23, 0); } ctx->llbit = 0; ctx->lladdr = 0; }
    // 0x278d08: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x278d08u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x278D08 raw=0x00000001");
    // 0x278d0c: 0xe1576dae  sc          $s7, 0x6DAE($t2)
    ctx->pc = 0x278d0cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 10), 28078); if (ctx->llbit && ctx->lladdr == addr) { WRITE32(addr, GPR_U32(ctx, 23)); SET_GPR_S32(ctx, 23, 1); } else { SET_GPR_S32(ctx, 23, 0); } ctx->llbit = 0; ctx->lladdr = 0; }
    // 0x278d10: 0x0  nop
    ctx->pc = 0x278d10u;
    // NOP
label_278d14:
    // 0x278d14: 0x3c020028  lui         $v0, 0x28
    ctx->pc = 0x278d14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)40 << 16));
    // 0x278d18: 0x24428d04  addiu       $v0, $v0, -0x72FC
    ctx->pc = 0x278d18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937860));
    // 0x278d1c: 0x3c040028  lui         $a0, 0x28
    ctx->pc = 0x278d1cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)40 << 16));
    // 0x278d20: 0x24848ce4  addiu       $a0, $a0, -0x731C
    ctx->pc = 0x278d20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937828));
    // 0x278d24: 0x8c470004  lw          $a3, 0x4($v0)
    ctx->pc = 0x278d24u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x278d28: 0x8c450008  lw          $a1, 0x8($v0)
    ctx->pc = 0x278d28u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x278d2c: 0xc0a7814  jal         func_29E050
    ctx->pc = 0x278D2Cu;
    SET_GPR_U32(ctx, 31, 0x278D34u);
    ctx->pc = 0x278D30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x278D2Cu;
    // 0x278d30: 0x8c460000  lw          $a2, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29E050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29E050u, 0x278D2Cu, 0x278D34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x278D34u;
label_278d34:
    // 0x278d34: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x278D34u;
    {
        const bool branch_taken_0x278d34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x278D38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278D34u;
        // 0x278d38: 0x2341023  subu        $v0, $s1, $s4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x278d34) {
            ctx->pc = 0x278D90u;
            goto label_278d90;
        }
    }
    ctx->pc = 0x278D3Cu;
    // 0x278d3c: 0x0  nop
    ctx->pc = 0x278d3cu;
    // NOP
label_278d40:
    // 0x278d40: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x278d40u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x278d44: 0x731821  addu        $v1, $v1, $s3
    ctx->pc = 0x278d44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x278d48: 0x9063069a  lbu         $v1, 0x69A($v1)
    ctx->pc = 0x278d48u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 1690)));
    // 0x278d4c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x278D4Cu;
    {
        const bool branch_taken_0x278d4c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x278D50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278D4Cu;
        // 0x278d50: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x278d4c) {
            ctx->pc = 0x278D60u;
            goto label_278d60;
        }
    }
    ctx->pc = 0x278D54u;
    // 0x278d54: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x278D54u;
    {
        const bool branch_taken_0x278d54 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x278D58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278D54u;
        // 0x278d58: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x278d54) {
            ctx->pc = 0x278D68u;
            goto label_278d68;
        }
    }
    ctx->pc = 0x278D5Cu;
    // 0x278d5c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x278d5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_278d60:
    // 0x278d60: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x278d60u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x278d64: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x278d64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_278d68:
    // 0x278d68: 0xc09d62e  jal         func_2758B8
    ctx->pc = 0x278D68u;
    SET_GPR_U32(ctx, 31, 0x278D70u);
    ctx->pc = 0x278D6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x278D68u;
    // 0x278d6c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2758B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2758B8u, 0x278D68u, 0x278D70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x278D70u;
label_278d70:
    // 0x278d70: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x278d70u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x278d74: 0x4600009  bltz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x278D74u;
    {
        const bool branch_taken_0x278d74 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x278D78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278D74u;
        // 0x278d78: 0x2238821  addu        $s1, $s1, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x278d74) {
            ctx->pc = 0x278D9Cu;
            goto label_278d9c;
        }
    }
    ctx->pc = 0x278D7Cu;
    // 0x278d7c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x278d7cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x278d80: 0xc09d688  jal         func_275A20
    ctx->pc = 0x278D80u;
    SET_GPR_U32(ctx, 31, 0x278D88u);
    ctx->pc = 0x278D84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x278D80u;
    // 0x278d84: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x275A20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275A20u, 0x278D80u, 0x278D88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x278D88u;
label_278d88:
    // 0x278d88: 0x2228821  addu        $s1, $s1, $v0
    ctx->pc = 0x278d88u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x278d8c: 0x2341023  subu        $v0, $s1, $s4
    ctx->pc = 0x278d8cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 20)));
label_278d90:
    // 0x278d90: 0x2404ff96  addiu       $a0, $zero, -0x6A
    ctx->pc = 0x278d90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967190));
    // 0x278d94: 0x2a21826  xor         $v1, $s5, $v0
    ctx->pc = 0x278d94u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 21) ^ GPR_U64(ctx, 2));
    // 0x278d98: 0x83100b  movn        $v0, $a0, $v1
    ctx->pc = 0x278d98u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
label_278d9c:
    // 0x278d9c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x278d9cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x278da0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x278da0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x278da4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x278da4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x278da8: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x278da8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x278dac: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x278dacu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x278db0: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x278db0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x278db4: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x278db4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x278db8: 0x3e00008  jr          $ra
    ctx->pc = 0x278DB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x278DBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278DB8u;
        // 0x278dbc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x278DB8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x278DC0u;
}
