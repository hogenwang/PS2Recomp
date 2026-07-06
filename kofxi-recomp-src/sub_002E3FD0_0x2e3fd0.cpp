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

// Function: sub_002E3FD0
// Address: 0x2e3fd0 - 0x2e4118
void sub_002E3FD0_0x2e3fd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E3FD0_0x2e3fd0");
#endif

    switch (ctx->pc) {
        case 0x2e4018u: goto label_2e4018;
        case 0x2e4058u: goto label_2e4058;
        case 0x2e4074u: goto label_2e4074;
        case 0x2e4088u: goto label_2e4088;
        case 0x2e40a8u: goto label_2e40a8;
        case 0x2e40b8u: goto label_2e40b8;
        case 0x2e40f8u: goto label_2e40f8;
        default: break;
    }

    ctx->pc = 0x2e3fd0u;

    // 0x2e3fd0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2e3fd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2e3fd4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2e3fd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2e3fd8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2e3fd8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e3fdc: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2e3fdcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2e3fe0: 0x2412ffff  addiu       $s2, $zero, -0x1
    ctx->pc = 0x2e3fe0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2e3fe4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2e3fe4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2e3fe8: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x2e3fe8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x2e3fec: 0x3c03002e  lui         $v1, 0x2E
    ctx->pc = 0x2e3fecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)46 << 16));
    // 0x2e3ff0: 0x24634038  addiu       $v1, $v1, 0x4038
    ctx->pc = 0x2e3ff0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16440));
    // 0x2e3ff4: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2e3ff4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2e3ff8: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2E3FF8u;
    {
        const bool branch_taken_0x2e3ff8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e3ff8) {
            ctx->pc = 0x2E4018u;
            goto label_2e4018;
        }
    }
    ctx->pc = 0x2E4000u;
    // 0x2e4000: 0x3c04002e  lui         $a0, 0x2E
    ctx->pc = 0x2e4000u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)46 << 16));
    // 0x2e4004: 0x2484404c  addiu       $a0, $a0, 0x404C
    ctx->pc = 0x2e4004u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16460));
    // 0x2e4008: 0x8c670008  lw          $a3, 0x8($v1)
    ctx->pc = 0x2e4008u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x2e400c: 0x8c65000c  lw          $a1, 0xC($v1)
    ctx->pc = 0x2e400cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x2e4010: 0xc0b63f0  jal         func_2D8FC0
    ctx->pc = 0x2E4010u;
    SET_GPR_U32(ctx, 31, 0x2E4018u);
    ctx->pc = 0x2E4014u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E4010u;
    // 0x2e4014: 0x8c660004  lw          $a2, 0x4($v1) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D8FC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D8FC0u, 0x2E4010u, 0x2E4018u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E4018u;
label_2e4018:
    // 0x2e4018: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x2E4018u;
    {
        const bool branch_taken_0x2e4018 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e4018) {
            ctx->pc = 0x2E404Cu;
            goto label_2e404c;
        }
    }
    ctx->pc = 0x2E4020u;
    // 0x2e4020: 0x87e51eb3  lh          $a1, 0x1EB3($ra)
    ctx->pc = 0x2e4020u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 31), 7859)));
    // 0x2e4024: 0xfdb995f2  sd          $t9, -0x6A0E($t5)
    ctx->pc = 0x2e4024u;
    WRITE64(ADD32(GPR_U32(ctx, 13), 4294940146), GPR_U64(ctx, 25));
    // 0x2e4028: 0x267fb480  addiu       $ra, $s3, -0x4B80
    ctx->pc = 0x2e4028u;
    SET_GPR_S32(ctx, 31, (int32_t)ADD32(GPR_U32(ctx, 19), 4294947968));
    // 0x2e402c: 0x554820  add         $t1, $v0, $s5
    ctx->pc = 0x2e402cu;
    {     int32_t rs_val = GPR_S32(ctx, 2);     int32_t rt_val = GPR_S32(ctx, 21);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 9, (int32_t)result);     } }
    // 0x2e4030: 0xa16651f1  sb          $a2, 0x51F1($t3)
    ctx->pc = 0x2e4030u;
    WRITE8(ADD32(GPR_U32(ctx, 11), 20977), (uint8_t)GPR_U32(ctx, 6));
    // 0x2e4034: 0xfed1f1a2  sd          $s1, -0xE5E($s6)
    ctx->pc = 0x2e4034u;
    WRITE64(ADD32(GPR_U32(ctx, 22), 4294963618), GPR_U64(ctx, 17));
    // 0x2e4038: 0x0  nop
    ctx->pc = 0x2e4038u;
    // NOP
    // 0x2e403c: 0x3f6f110e  .word       0x3F6F110E                   # lui         $t7, 0x110E # 03600000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2e403cu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)4366 << 16));
    // 0x2e4040: 0xcb1c9f74  lwc2        $28, -0x608C($t8)
    ctx->pc = 0x2e4040u;
    throw std::runtime_error("Unhandled opcode: 0x32 at 0x2E4040 raw=0xCB1C9F74");
    // 0x2e4044: 0x3f6f1152  .word       0x3F6F1152                   # lui         $t7, 0x1152 # 03600000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2e4044u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)4434 << 16));
    // 0x2e4048: 0x0  nop
    ctx->pc = 0x2e4048u;
    // NOP
label_2e404c:
    // 0x2e404c: 0x944705fd  lhu         $a3, 0x5FD($v0)
    ctx->pc = 0x2e404cu;
    SET_GPR_U32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 1533)));
    // 0x2e4050: 0xc04485c  jal         func_112170
    ctx->pc = 0x2E4050u;
    SET_GPR_U32(ctx, 31, 0x2E4058u);
    ctx->pc = 0x2E4054u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E4050u;
    // 0x2e4054: 0xb46100d1  sdr         $at, 0xD1($v1) (Delay Slot)
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 209); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 1); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x112170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x112170u, 0x2E4050u, 0x2E4058u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E4058u;
label_2e4058:
    // 0x2e4058: 0xbc6300d1  cache       0x03, 0xD1($v1)
    ctx->pc = 0x2e4058u;
    // CACHE instruction (ignored)
    // 0x2e405c: 0x146340d1  bne         $v1, $v1, . + 4 + (0x40D1 << 2)
    ctx->pc = 0x2E405Cu;
    {
        const bool branch_taken_0x2e405c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 3));
        ctx->pc = 0x2E4060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E405Cu;
        // 0x2e4060: 0x944706fe  lhu         $a3, 0x6FE($v0) (Delay Slot)
        SET_GPR_U32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 1790)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e405c) {
            ctx->pc = 0x2F43A4u;
            return;
        }
    }
    ctx->pc = 0x2E4064u;
    // 0x2e4064: 0x946500ec  lhu         $a1, 0xEC($v1)
    ctx->pc = 0x2e4064u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 236)));
    // 0x2e4068: 0xb46100d1  sdr         $at, 0xD1($v1)
    ctx->pc = 0x2e4068u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 209); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 1); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2e406c: 0xc04495e  jal         func_112578
    ctx->pc = 0x2E406Cu;
    SET_GPR_U32(ctx, 31, 0x2E4074u);
    ctx->pc = 0x2E4070u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E406Cu;
    // 0x2e4070: 0x946300fc  lhu         $v1, 0xFC($v1) (Delay Slot)
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 252)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x112578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x112578u, 0x2E406Cu, 0x2E4074u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E4074u;
label_2e4074:
    // 0x2e4074: 0x1c6340d1  .word       0x1C6340D1                   # bgtz        $v1, . + 4 + (0x40D1 << 2) # 00030000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2E4074u;
    {
        const bool branch_taken_0x2e4074 = (GPR_S32(ctx, 3) > 0);
        ctx->pc = 0x2E4078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E4074u;
        // 0x2e4078: 0x946520fb  lhu         $a1, 0x20FB($v1) (Delay Slot)
        SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 8443)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e4074) {
            ctx->pc = 0x2F43BCu;
            return;
        }
    }
    ctx->pc = 0x2E407Cu;
    // 0x2e407c: 0xb46100d1  sdr         $at, 0xD1($v1)
    ctx->pc = 0x2e407cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 209); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 1); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2e4080: 0xc044900  jal         func_112400
    ctx->pc = 0x2E4080u;
    SET_GPR_U32(ctx, 31, 0x2E4088u);
    ctx->pc = 0x2E4084u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E4080u;
    // 0x2e4084: 0x946300fc  lhu         $v1, 0xFC($v1) (Delay Slot)
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 252)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x112400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x112400u, 0x2E4080u, 0x2E4088u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E4088u;
label_2e4088:
    // 0x2e4088: 0x946740ff  lhu         $a3, 0x40FF($v1)
    ctx->pc = 0x2e4088u;
    SET_GPR_U32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 16639)));
    // 0x2e408c: 0x946300fc  lhu         $v1, 0xFC($v1)
    ctx->pc = 0x2e408cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 252)));
    // 0x2e4090: 0x46120d1  bgez        $v1, . + 4 + (0x20D1 << 2)
    ctx->pc = 0x2E4090u;
    {
        const bool branch_taken_0x2e4090 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x2E4094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E4090u;
        // 0x2e4094: 0x6b471003  ldl         $a3, 0x1003($k0) (Delay Slot)
        { uint32_t addr = ADD32(GPR_U32(ctx, 26), 4099); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e4090) {
            ctx->pc = 0x2EC3D8u;
            return;
        }
    }
    ctx->pc = 0x2E4098u;
    // 0x2e4098: 0x946500ff  lhu         $a1, 0xFF($v1)
    ctx->pc = 0x2e4098u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 255)));
    // 0x2e409c: 0x946300fc  lhu         $v1, 0xFC($v1)
    ctx->pc = 0x2e409cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 252)));
    // 0x2e40a0: 0xc044900  jal         func_112400
    ctx->pc = 0x2E40A0u;
    SET_GPR_U32(ctx, 31, 0x2E40A8u);
    ctx->pc = 0x2E40A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E40A0u;
    // 0x2e40a4: 0xb46100d1  sdr         $at, 0xD1($v1) (Delay Slot)
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 209); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 1); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x112400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x112400u, 0x2E40A0u, 0x2E40A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E40A8u;
label_2e40a8:
    // 0x2e40a8: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x2E40A8u;
    {
        const bool branch_taken_0x2e40a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e40a8) {
            ctx->pc = 0x2E40D8u;
            goto label_2e40d8;
        }
    }
    ctx->pc = 0x2E40B0u;
    // 0x2e40b0: 0xc666e3b  jal         func_199B8EC
    ctx->pc = 0x2E40B0u;
    SET_GPR_U32(ctx, 31, 0x2E40B8u);
    ctx->pc = 0x2E40B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E40B0u;
    // 0x2e40b4: 0x8c52c04d  lw          $s2, -0x3FB3($v0) (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950989)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x199B8ECu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x199B8ECu, 0x2E40B0u, 0x2E40B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E40B8u;
label_2e40b8:
    // 0x2e40b8: 0xdfa20017  ld          $v0, 0x17($sp)
    ctx->pc = 0x2e40b8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 23)));
    // 0x2e40bc: 0x3491020  add         $v0, $k0, $t1
    ctx->pc = 0x2e40bcu;
    {     int32_t rs_val = GPR_S32(ctx, 26);     int32_t rt_val = GPR_S32(ctx, 9);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 2, (int32_t)result);     } }
    // 0x2e40c0: 0x8f434e05  lw          $v1, 0x4E05($k0)
    ctx->pc = 0x2e40c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 26), 19973)));
    // 0x2e40c4: 0x272ea330  addiu       $t6, $t9, -0x5CD0
    ctx->pc = 0x2e40c4u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 25), 4294943536));
    // 0x2e40c8: 0x3f6f1e01  .word       0x3F6F1E01                   # lui         $t7, 0x1E01 # 03600000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2e40c8u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)7681 << 16));
    // 0x2e40cc: 0xcb1c9f75  lwc2        $28, -0x608B($t8)
    ctx->pc = 0x2e40ccu;
    throw std::runtime_error("Unhandled opcode: 0x32 at 0x2E40CC raw=0xCB1C9F75");
    // 0x2e40d0: 0x3f6f1e5d  .word       0x3F6F1E5D                   # lui         $t7, 0x1E5D # 03600000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2e40d0u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)7773 << 16));
    // 0x2e40d4: 0x0  nop
    ctx->pc = 0x2e40d4u;
    // NOP
label_2e40d8:
    // 0x2e40d8: 0x3c02002e  lui         $v0, 0x2E
    ctx->pc = 0x2e40d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)46 << 16));
    // 0x2e40dc: 0x244240c8  addiu       $v0, $v0, 0x40C8
    ctx->pc = 0x2e40dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16584));
    // 0x2e40e0: 0x3c04002e  lui         $a0, 0x2E
    ctx->pc = 0x2e40e0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)46 << 16));
    // 0x2e40e4: 0x248440a8  addiu       $a0, $a0, 0x40A8
    ctx->pc = 0x2e40e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16552));
    // 0x2e40e8: 0x8c470004  lw          $a3, 0x4($v0)
    ctx->pc = 0x2e40e8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2e40ec: 0x8c450008  lw          $a1, 0x8($v0)
    ctx->pc = 0x2e40ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x2e40f0: 0xc0b63f0  jal         func_2D8FC0
    ctx->pc = 0x2E40F0u;
    SET_GPR_U32(ctx, 31, 0x2E40F8u);
    ctx->pc = 0x2E40F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E40F0u;
    // 0x2e40f4: 0x8c460000  lw          $a2, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D8FC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D8FC0u, 0x2E40F0u, 0x2E40F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E40F8u;
label_2e40f8:
    // 0x2e40f8: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x2e40f8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e40fc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2e40fcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e4100: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2e4100u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2e4104: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2e4104u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e4108: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x2e4108u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2e410c: 0x3e00008  jr          $ra
    ctx->pc = 0x2E410Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E4110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E410Cu;
        // 0x2e4110: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E410Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E4114u;
    // 0x2e4114: 0x0  nop
    ctx->pc = 0x2e4114u;
    // NOP
}
