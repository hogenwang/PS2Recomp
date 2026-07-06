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

// Function: sub_0024DEA8
// Address: 0x24dea8 - 0x24df58
void sub_0024DEA8_0x24dea8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024DEA8_0x24dea8");
#endif

    switch (ctx->pc) {
        case 0x24df0cu: goto label_24df0c;
        default: break;
    }

    ctx->pc = 0x24dea8u;

    // 0x24dea8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x24dea8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x24deac: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x24deacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x24deb0: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x24deb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x24deb4: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x24deb4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24deb8: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x24deb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x24debc: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x24debcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x24dec0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x24dec0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24dec4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x24dec4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x24dec8: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x24dec8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x24decc: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x24deccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x24ded0: 0x90700000  lbu         $s0, 0x0($v1)
    ctx->pc = 0x24ded0u;
    SET_GPR_U32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x24ded4: 0x3210000f  andi        $s0, $s0, 0xF
    ctx->pc = 0x24ded4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)15);
    // 0x24ded8: 0x108080  sll         $s0, $s0, 2
    ctx->pc = 0x24ded8u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x24dedc: 0x709021  addu        $s2, $v1, $s0
    ctx->pc = 0x24dedcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x24dee0: 0x501023  subu        $v0, $v0, $s0
    ctx->pc = 0x24dee0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x24dee4: 0xae320008  sw          $s2, 0x8($s1)
    ctx->pc = 0x24dee4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 18));
    // 0x24dee8: 0xae22000c  sw          $v0, 0xC($s1)
    ctx->pc = 0x24dee8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
    // 0x24deec: 0xa6400002  sh          $zero, 0x2($s2)
    ctx->pc = 0x24deecu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 2), (uint16_t)GPR_U32(ctx, 0));
    // 0x24def0: 0x90650003  lbu         $a1, 0x3($v1)
    ctx->pc = 0x24def0u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 3)));
    // 0x24def4: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x24def4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x24def8: 0x52a38  dsll        $a1, $a1, 8
    ctx->pc = 0x24def8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 8);
    // 0x24defc: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x24defcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
    // 0x24df00: 0x30a5ffff  andi        $a1, $a1, 0xFFFF
    ctx->pc = 0x24df00u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x24df04: 0xc092d7e  jal         func_24B5F8
    ctx->pc = 0x24DF04u;
    SET_GPR_U32(ctx, 31, 0x24DF0Cu);
    ctx->pc = 0x24DF08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24DF04u;
    // 0x24df08: 0xb02823  subu        $a1, $a1, $s0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24B5F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24B5F8u, 0x24DF04u, 0x24DF0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24DF0Cu;
label_24df0c:
    // 0x24df0c: 0xa6420002  sh          $v0, 0x2($s2)
    ctx->pc = 0x24df0cu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 2), (uint16_t)GPR_U32(ctx, 2));
    // 0x24df10: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x24df10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24df14: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x24df14u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24df18: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x24df18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x24df1c: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x24df1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x24df20: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x24df20u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24df24: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x24df24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x24df28: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x24df28u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24df2c: 0x701823  subu        $v1, $v1, $s0
    ctx->pc = 0x24df2cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x24df30: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x24df30u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x24df34: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x24df34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x24df38: 0xae230008  sw          $v1, 0x8($s1)
    ctx->pc = 0x24df38u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 3));
    // 0x24df3c: 0xae22000c  sw          $v0, 0xC($s1)
    ctx->pc = 0x24df3cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
    // 0x24df40: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x24df40u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24df44: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x24df44u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x24df48: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x24df48u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x24df4c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x24df4cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24df50: 0x80942d4  j           func_250B50
    ctx->pc = 0x24DF50u;
    ctx->pc = 0x24DF54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24DF50u;
    // 0x24df54: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x250B50u;
    sub_00250B50_0x250b50(rdram, ctx, runtime); return;
    ctx->pc = 0x24DF58u;
}
