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

// Function: sub_00350E10
// Address: 0x350e10 - 0x350ff0
void sub_00350E10_0x350e10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00350E10_0x350e10");
#endif

    switch (ctx->pc) {
        case 0x350e20u: goto label_350e20;
        case 0x350f08u: goto label_350f08;
        case 0x350f14u: goto label_350f14;
        case 0x350f40u: goto label_350f40;
        default: break;
    }

    ctx->pc = 0x350e10u;

    // 0x350e10: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x350e10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x350e14: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x350e14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x350e18: 0xc0d4370  jal         func_350DC0
    ctx->pc = 0x350E18u;
    SET_GPR_U32(ctx, 31, 0x350E20u);
    ctx->pc = 0x350DC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x350DC0u, 0x350E18u, 0x350E20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x350E20u;
label_350e20:
    // 0x350e20: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x350e20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
    // 0x350e24: 0x3c07009c  lui         $a3, 0x9C
    ctx->pc = 0x350e24u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)156 << 16));
    // 0x350e28: 0x904c9490  lbu         $t4, -0x6B70($v0)
    ctx->pc = 0x350e28u;
    SET_GPR_U32(ctx, 12, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294939792)));
    // 0x350e2c: 0x3c05009c  lui         $a1, 0x9C
    ctx->pc = 0x350e2cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)156 << 16));
    // 0x350e30: 0x3c08009c  lui         $t0, 0x9C
    ctx->pc = 0x350e30u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)156 << 16));
    // 0x350e34: 0x3c06009c  lui         $a2, 0x9C
    ctx->pc = 0x350e34u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)156 << 16));
    // 0x350e38: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x350e38u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x350e3c: 0x3c0b009c  lui         $t3, 0x9C
    ctx->pc = 0x350e3cu;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)156 << 16));
    // 0x350e40: 0xc10c0  sll         $v0, $t4, 3
    ctx->pc = 0x350e40u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 12), 3));
    // 0x350e44: 0x3c0a009c  lui         $t2, 0x9C
    ctx->pc = 0x350e44u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)156 << 16));
    // 0x350e48: 0x4c1021  addu        $v0, $v0, $t4
    ctx->pc = 0x350e48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 12)));
    // 0x350e4c: 0x3c09009c  lui         $t1, 0x9C
    ctx->pc = 0x350e4cu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)156 << 16));
    // 0x350e50: 0x220c0  sll         $a0, $v0, 3
    ctx->pc = 0x350e50u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x350e54: 0x24e7dca2  addiu       $a3, $a3, -0x235E
    ctx->pc = 0x350e54u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294958242));
    // 0x350e58: 0x8c6021  addu        $t4, $a0, $t4
    ctx->pc = 0x350e58u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 12)));
    // 0x350e5c: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x350e5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x350e60: 0xc60c0  sll         $t4, $t4, 3
    ctx->pc = 0x350e60u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 12), 3));
    // 0x350e64: 0x24a5dcc2  addiu       $a1, $a1, -0x233E
    ctx->pc = 0x350e64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294958274));
    // 0x350e68: 0x2442dce2  addiu       $v0, $v0, -0x231E
    ctx->pc = 0x350e68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958306));
    // 0x350e6c: 0x2508dca1  addiu       $t0, $t0, -0x235F
    ctx->pc = 0x350e6cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294958241));
    // 0x350e70: 0x24c6dcc1  addiu       $a2, $a2, -0x233F
    ctx->pc = 0x350e70u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294958273));
    // 0x350e74: 0x2463dce1  addiu       $v1, $v1, -0x231F
    ctx->pc = 0x350e74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294958305));
    // 0x350e78: 0xec3821  addu        $a3, $a3, $t4
    ctx->pc = 0x350e78u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 12)));
    // 0x350e7c: 0xac2821  addu        $a1, $a1, $t4
    ctx->pc = 0x350e7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 12)));
    // 0x350e80: 0x4c1021  addu        $v0, $v0, $t4
    ctx->pc = 0x350e80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 12)));
    // 0x350e84: 0x256bdca0  addiu       $t3, $t3, -0x2360
    ctx->pc = 0x350e84u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294958240));
    // 0x350e88: 0x254adcc0  addiu       $t2, $t2, -0x2340
    ctx->pc = 0x350e88u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294958272));
    // 0x350e8c: 0x2529dce0  addiu       $t1, $t1, -0x2320
    ctx->pc = 0x350e8cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294958304));
    // 0x350e90: 0x10c4021  addu        $t0, $t0, $t4
    ctx->pc = 0x350e90u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 12)));
    // 0x350e94: 0xcc3021  addu        $a2, $a2, $t4
    ctx->pc = 0x350e94u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 12)));
    // 0x350e98: 0x6c1821  addu        $v1, $v1, $t4
    ctx->pc = 0x350e98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 12)));
    // 0x350e9c: 0x90e70000  lbu         $a3, 0x0($a3)
    ctx->pc = 0x350e9cu;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x350ea0: 0x90a50000  lbu         $a1, 0x0($a1)
    ctx->pc = 0x350ea0u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x350ea4: 0x16c5821  addu        $t3, $t3, $t4
    ctx->pc = 0x350ea4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 12)));
    // 0x350ea8: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x350ea8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x350eac: 0x14c5021  addu        $t2, $t2, $t4
    ctx->pc = 0x350eacu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 12)));
    // 0x350eb0: 0x12c4821  addu        $t1, $t1, $t4
    ctx->pc = 0x350eb0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 12)));
    // 0x350eb4: 0x916b0000  lbu         $t3, 0x0($t3)
    ctx->pc = 0x350eb4u;
    SET_GPR_U32(ctx, 11, (uint8_t)READ8(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x350eb8: 0x914a0000  lbu         $t2, 0x0($t2)
    ctx->pc = 0x350eb8u;
    SET_GPR_U32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x350ebc: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x350ebcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
    // 0x350ec0: 0x91290000  lbu         $t1, 0x0($t1)
    ctx->pc = 0x350ec0u;
    SET_GPR_U32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x350ec4: 0x73900  sll         $a3, $a3, 4
    ctx->pc = 0x350ec4u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
    // 0x350ec8: 0x91080000  lbu         $t0, 0x0($t0)
    ctx->pc = 0x350ec8u;
    SET_GPR_U32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x350ecc: 0x52900  sll         $a1, $a1, 4
    ctx->pc = 0x350eccu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x350ed0: 0x90c60000  lbu         $a2, 0x0($a2)
    ctx->pc = 0x350ed0u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x350ed4: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x350ed4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x350ed8: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x350ed8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x350edc: 0x248453d0  addiu       $a0, $a0, 0x53D0
    ctx->pc = 0x350edcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 21456));
    // 0x350ee0: 0x1073825  or          $a3, $t0, $a3
    ctx->pc = 0x350ee0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 8) | GPR_U64(ctx, 7));
    // 0x350ee4: 0xa3ab0018  sb          $t3, 0x18($sp)
    ctx->pc = 0x350ee4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 24), (uint8_t)GPR_U32(ctx, 11));
    // 0x350ee8: 0xc52825  or          $a1, $a2, $a1
    ctx->pc = 0x350ee8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) | GPR_U64(ctx, 5));
    // 0x350eec: 0xa3aa0019  sb          $t2, 0x19($sp)
    ctx->pc = 0x350eecu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 25), (uint8_t)GPR_U32(ctx, 10));
    // 0x350ef0: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x350ef0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x350ef4: 0xa3a9001a  sb          $t1, 0x1A($sp)
    ctx->pc = 0x350ef4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 26), (uint8_t)GPR_U32(ctx, 9));
    // 0x350ef8: 0xa3a7001b  sb          $a3, 0x1B($sp)
    ctx->pc = 0x350ef8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 27), (uint8_t)GPR_U32(ctx, 7));
    // 0x350efc: 0xa3a5001c  sb          $a1, 0x1C($sp)
    ctx->pc = 0x350efcu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 28), (uint8_t)GPR_U32(ctx, 5));
    // 0x350f00: 0xc043e52  jal         func_10F948
    ctx->pc = 0x350F00u;
    SET_GPR_U32(ctx, 31, 0x350F08u);
    ctx->pc = 0x350F04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x350F00u;
    // 0x350f04: 0xa3a2001d  sb          $v0, 0x1D($sp) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 29), 29), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F948u, 0x350F00u, 0x350F08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x350F08u;
label_350f08:
    // 0x350f08: 0x27a40018  addiu       $a0, $sp, 0x18
    ctx->pc = 0x350f08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 24));
    // 0x350f0c: 0xc0bb518  jal         func_2ED460
    ctx->pc = 0x350F0Cu;
    SET_GPR_U32(ctx, 31, 0x350F14u);
    ctx->pc = 0x350F10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x350F0Cu;
    // 0x350f10: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ED460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ED460u, 0x350F0Cu, 0x350F14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x350F14u;
label_350f14:
    // 0x350f14: 0x50400030  beql        $v0, $zero, . + 4 + (0x30 << 2)
    ctx->pc = 0x350F14u;
    {
        const bool branch_taken_0x350f14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x350f14) {
            ctx->pc = 0x350F18u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x350F14u;
            // 0x350f18: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x350FD8u;
            goto label_350fd8;
        }
    }
    ctx->pc = 0x350F1Cu;
    // 0x350f1c: 0x93a50018  lbu         $a1, 0x18($sp)
    ctx->pc = 0x350f1cu;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x350f20: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x350f20u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
    // 0x350f24: 0x93a60019  lbu         $a2, 0x19($sp)
    ctx->pc = 0x350f24u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 25)));
    // 0x350f28: 0x93a7001a  lbu         $a3, 0x1A($sp)
    ctx->pc = 0x350f28u;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 26)));
    // 0x350f2c: 0x93a8001b  lbu         $t0, 0x1B($sp)
    ctx->pc = 0x350f2cu;
    SET_GPR_U32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 27)));
    // 0x350f30: 0x93a9001c  lbu         $t1, 0x1C($sp)
    ctx->pc = 0x350f30u;
    SET_GPR_U32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x350f34: 0x93aa001d  lbu         $t2, 0x1D($sp)
    ctx->pc = 0x350f34u;
    SET_GPR_U32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 29)));
    // 0x350f38: 0xc043e52  jal         func_10F948
    ctx->pc = 0x350F38u;
    SET_GPR_U32(ctx, 31, 0x350F40u);
    ctx->pc = 0x350F3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x350F38u;
    // 0x350f3c: 0x248453f0  addiu       $a0, $a0, 0x53F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 21488));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F948u, 0x350F38u, 0x350F40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x350F40u;
label_350f40:
    // 0x350f40: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x350f40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
    // 0x350f44: 0x3c05009c  lui         $a1, 0x9C
    ctx->pc = 0x350f44u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)156 << 16));
    // 0x350f48: 0x90479490  lbu         $a3, -0x6B70($v0)
    ctx->pc = 0x350f48u;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294939792)));
    // 0x350f4c: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x350f4cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x350f50: 0x24a5dca0  addiu       $a1, $a1, -0x2360
    ctx->pc = 0x350f50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294958240));
    // 0x350f54: 0x2463dcc0  addiu       $v1, $v1, -0x2340
    ctx->pc = 0x350f54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294958272));
    // 0x350f58: 0x240400ff  addiu       $a0, $zero, 0xFF
    ctx->pc = 0x350f58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x350f5c: 0x730c0  sll         $a2, $a3, 3
    ctx->pc = 0x350f5cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x350f60: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x350f60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x350f64: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x350f64u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x350f68: 0x630c0  sll         $a2, $a2, 3
    ctx->pc = 0x350f68u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x350f6c: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x350f6cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x350f70: 0x630c0  sll         $a2, $a2, 3
    ctx->pc = 0x350f70u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x350f74: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x350f74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x350f78: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x350f78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x350f7c: 0x90a50000  lbu         $a1, 0x0($a1)
    ctx->pc = 0x350f7cu;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x350f80: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x350f80u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x350f84: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x350f84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x350f88: 0x14640003  bne         $v1, $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x350F88u;
    {
        const bool branch_taken_0x350f88 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x350F8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x350F88u;
        // 0x350f8c: 0xa0454318  sb          $a1, 0x4318($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 17176), (uint8_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x350f88) {
            ctx->pc = 0x350F98u;
            goto label_350f98;
        }
    }
    ctx->pc = 0x350F90u;
    // 0x350f90: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x350F90u;
    {
        const bool branch_taken_0x350f90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x350f90) {
            ctx->pc = 0x350F9Cu;
            goto label_350f9c;
        }
    }
    ctx->pc = 0x350F98u;
label_350f98:
    // 0x350f98: 0x24640001  addiu       $a0, $v1, 0x1
    ctx->pc = 0x350f98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_350f9c:
    // 0x350f9c: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x350f9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x350fa0: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x350fa0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x350fa4: 0xa0444319  sb          $a0, 0x4319($v0)
    ctx->pc = 0x350fa4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 17177), (uint8_t)GPR_U32(ctx, 4));
    // 0x350fa8: 0x2463dce0  addiu       $v1, $v1, -0x2320
    ctx->pc = 0x350fa8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294958304));
    // 0x350fac: 0x661021  addu        $v0, $v1, $a2
    ctx->pc = 0x350facu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x350fb0: 0x240400ff  addiu       $a0, $zero, 0xFF
    ctx->pc = 0x350fb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x350fb4: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x350fb4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x350fb8: 0x54440001  bnel        $v0, $a0, . + 4 + (0x1 << 2)
    ctx->pc = 0x350FB8u;
    {
        const bool branch_taken_0x350fb8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        if (branch_taken_0x350fb8) {
            ctx->pc = 0x350FBCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x350FB8u;
            // 0x350fbc: 0x24440001  addiu       $a0, $v0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x350FC0u;
            goto label_350fc0;
        }
    }
    ctx->pc = 0x350FC0u;
label_350fc0:
    // 0x350fc0: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x350fc0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x350fc4: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x350fc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x350fc8: 0xa044431a  sb          $a0, 0x431A($v0)
    ctx->pc = 0x350fc8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 17178), (uint8_t)GPR_U32(ctx, 4));
    // 0x350fcc: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x350fccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x350fd0: 0xa043431b  sb          $v1, 0x431B($v0)
    ctx->pc = 0x350fd0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 17179), (uint8_t)GPR_U32(ctx, 3));
    // 0x350fd4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x350fd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_350fd8:
    // 0x350fd8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x350fd8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x350fdc: 0x3e00008  jr          $ra
    ctx->pc = 0x350FDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x350FE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x350FDCu;
        // 0x350fe0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x350FDCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x350FE4u;
    // 0x350fe4: 0x0  nop
    ctx->pc = 0x350fe4u;
    // NOP
    // 0x350fe8: 0x0  nop
    ctx->pc = 0x350fe8u;
    // NOP
    // 0x350fec: 0x0  nop
    ctx->pc = 0x350fecu;
    // NOP
}
