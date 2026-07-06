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

// Function: sub_0017AF80
// Address: 0x17af80 - 0x17c0a0
void sub_0017AF80_0x17af80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017AF80_0x17af80");
#endif

    switch (ctx->pc) {
        case 0x17af8cu: goto label_17af8c;
        case 0x17afccu: goto label_17afcc;
        case 0x17b02cu: goto label_17b02c;
        case 0x17b054u: goto label_17b054;
        case 0x17b05cu: goto label_17b05c;
        case 0x17b064u: goto label_17b064;
        case 0x17b06cu: goto label_17b06c;
        case 0x17b07cu: goto label_17b07c;
        case 0x17b084u: goto label_17b084;
        case 0x17b090u: goto label_17b090;
        case 0x17b098u: goto label_17b098;
        case 0x17b0a4u: goto label_17b0a4;
        case 0x17b0acu: goto label_17b0ac;
        case 0x17b0bcu: goto label_17b0bc;
        case 0x17b10cu: goto label_17b10c;
        case 0x17b140u: goto label_17b140;
        case 0x17b148u: goto label_17b148;
        case 0x17b1a4u: goto label_17b1a4;
        case 0x17b1e8u: goto label_17b1e8;
        case 0x17b204u: goto label_17b204;
        case 0x17b21cu: goto label_17b21c;
        case 0x17b224u: goto label_17b224;
        case 0x17b25cu: goto label_17b25c;
        case 0x17b264u: goto label_17b264;
        case 0x17b26cu: goto label_17b26c;
        case 0x17b27cu: goto label_17b27c;
        case 0x17b2a4u: goto label_17b2a4;
        case 0x17b2acu: goto label_17b2ac;
        case 0x17b2b4u: goto label_17b2b4;
        case 0x17b2bcu: goto label_17b2bc;
        case 0x17b2ccu: goto label_17b2cc;
        case 0x17b2d4u: goto label_17b2d4;
        case 0x17b2e0u: goto label_17b2e0;
        case 0x17b2e8u: goto label_17b2e8;
        case 0x17b2f4u: goto label_17b2f4;
        case 0x17b2fcu: goto label_17b2fc;
        case 0x17b30cu: goto label_17b30c;
        case 0x17b35cu: goto label_17b35c;
        case 0x17b390u: goto label_17b390;
        case 0x17b398u: goto label_17b398;
        case 0x17b3f4u: goto label_17b3f4;
        case 0x17b438u: goto label_17b438;
        case 0x17b454u: goto label_17b454;
        case 0x17b46cu: goto label_17b46c;
        case 0x17b474u: goto label_17b474;
        case 0x17b4acu: goto label_17b4ac;
        case 0x17b4b4u: goto label_17b4b4;
        case 0x17b4bcu: goto label_17b4bc;
        case 0x17b4ccu: goto label_17b4cc;
        case 0x17b4f4u: goto label_17b4f4;
        case 0x17b4fcu: goto label_17b4fc;
        case 0x17b50cu: goto label_17b50c;
        case 0x17b514u: goto label_17b514;
        case 0x17b520u: goto label_17b520;
        case 0x17b528u: goto label_17b528;
        case 0x17b530u: goto label_17b530;
        case 0x17b53cu: goto label_17b53c;
        case 0x17b544u: goto label_17b544;
        case 0x17b554u: goto label_17b554;
        case 0x17b5a4u: goto label_17b5a4;
        case 0x17b5e8u: goto label_17b5e8;
        case 0x17b620u: goto label_17b620;
        case 0x17b628u: goto label_17b628;
        case 0x17b664u: goto label_17b664;
        case 0x17b67cu: goto label_17b67c;
        case 0x17b684u: goto label_17b684;
        case 0x17b6a0u: goto label_17b6a0;
        case 0x17b6c4u: goto label_17b6c4;
        case 0x17b6ccu: goto label_17b6cc;
        case 0x17b6d4u: goto label_17b6d4;
        case 0x17b6dcu: goto label_17b6dc;
        case 0x17b6e4u: goto label_17b6e4;
        case 0x17b6f4u: goto label_17b6f4;
        case 0x17b70cu: goto label_17b70c;
        case 0x17b718u: goto label_17b718;
        case 0x17b720u: goto label_17b720;
        case 0x17b72cu: goto label_17b72c;
        case 0x17b738u: goto label_17b738;
        case 0x17b740u: goto label_17b740;
        case 0x17b750u: goto label_17b750;
        case 0x17b794u: goto label_17b794;
        case 0x17b7d8u: goto label_17b7d8;
        case 0x17b7fcu: goto label_17b7fc;
        case 0x17b804u: goto label_17b804;
        case 0x17b844u: goto label_17b844;
        case 0x17b85cu: goto label_17b85c;
        case 0x17b864u: goto label_17b864;
        case 0x17b880u: goto label_17b880;
        case 0x17b8a4u: goto label_17b8a4;
        case 0x17b8acu: goto label_17b8ac;
        case 0x17b8b4u: goto label_17b8b4;
        case 0x17b8bcu: goto label_17b8bc;
        case 0x17b8ccu: goto label_17b8cc;
        case 0x17b8d4u: goto label_17b8d4;
        case 0x17b8dcu: goto label_17b8dc;
        case 0x17b8e8u: goto label_17b8e8;
        case 0x17b8f0u: goto label_17b8f0;
        case 0x17b900u: goto label_17b900;
        case 0x17b94cu: goto label_17b94c;
        case 0x17b980u: goto label_17b980;
        case 0x17b988u: goto label_17b988;
        case 0x17b9e4u: goto label_17b9e4;
        case 0x17ba28u: goto label_17ba28;
        case 0x17ba44u: goto label_17ba44;
        case 0x17ba5cu: goto label_17ba5c;
        case 0x17ba64u: goto label_17ba64;
        case 0x17ba80u: goto label_17ba80;
        case 0x17ba90u: goto label_17ba90;
        case 0x17bac0u: goto label_17bac0;
        case 0x17bac8u: goto label_17bac8;
        case 0x17bae0u: goto label_17bae0;
        case 0x17bae8u: goto label_17bae8;
        case 0x17bb04u: goto label_17bb04;
        case 0x17bb34u: goto label_17bb34;
        case 0x17bb3cu: goto label_17bb3c;
        case 0x17bb44u: goto label_17bb44;
        case 0x17bb4cu: goto label_17bb4c;
        case 0x17bb5cu: goto label_17bb5c;
        case 0x17bb64u: goto label_17bb64;
        case 0x17bb70u: goto label_17bb70;
        case 0x17bb78u: goto label_17bb78;
        case 0x17bb84u: goto label_17bb84;
        case 0x17bb8cu: goto label_17bb8c;
        case 0x17bb9cu: goto label_17bb9c;
        case 0x17bbb4u: goto label_17bbb4;
        case 0x17bbf8u: goto label_17bbf8;
        case 0x17bc3cu: goto label_17bc3c;
        case 0x17bc80u: goto label_17bc80;
        case 0x17bc88u: goto label_17bc88;
        case 0x17bcb4u: goto label_17bcb4;
        case 0x17bcccu: goto label_17bccc;
        case 0x17bcd4u: goto label_17bcd4;
        case 0x17bcf0u: goto label_17bcf0;
        case 0x17bd00u: goto label_17bd00;
        case 0x17bd24u: goto label_17bd24;
        case 0x17bd2cu: goto label_17bd2c;
        case 0x17bd34u: goto label_17bd34;
        case 0x17bd3cu: goto label_17bd3c;
        case 0x17bd50u: goto label_17bd50;
        case 0x17bd58u: goto label_17bd58;
        case 0x17bd64u: goto label_17bd64;
        case 0x17bd6cu: goto label_17bd6c;
        case 0x17bd78u: goto label_17bd78;
        case 0x17bd80u: goto label_17bd80;
        case 0x17bd90u: goto label_17bd90;
        case 0x17bddcu: goto label_17bddc;
        case 0x17be10u: goto label_17be10;
        case 0x17be18u: goto label_17be18;
        case 0x17be74u: goto label_17be74;
        case 0x17beb8u: goto label_17beb8;
        case 0x17bed4u: goto label_17bed4;
        case 0x17beecu: goto label_17beec;
        case 0x17bef4u: goto label_17bef4;
        case 0x17bf10u: goto label_17bf10;
        case 0x17bf38u: goto label_17bf38;
        case 0x17bf40u: goto label_17bf40;
        case 0x17bf48u: goto label_17bf48;
        case 0x17bf50u: goto label_17bf50;
        case 0x17bf60u: goto label_17bf60;
        case 0x17bf6cu: goto label_17bf6c;
        case 0x17bf74u: goto label_17bf74;
        case 0x17bf84u: goto label_17bf84;
        case 0x17bfd0u: goto label_17bfd0;
        case 0x17c018u: goto label_17c018;
        case 0x17c028u: goto label_17c028;
        case 0x17c060u: goto label_17c060;
        case 0x17c068u: goto label_17c068;
        case 0x17c084u: goto label_17c084;
        default: break;
    }

    ctx->pc = 0x17af80u;

    // 0x17af80: 0x3c04009c  lui         $a0, 0x9C
    ctx->pc = 0x17af80u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)156 << 16));
    // 0x17af84: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x17af84u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17af88: 0x2484b580  addiu       $a0, $a0, -0x4A80
    ctx->pc = 0x17af88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948224));
label_17af8c:
    // 0x17af8c: 0xa0800000  sb          $zero, 0x0($a0)
    ctx->pc = 0x17af8cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x17af90: 0x24a50008  addiu       $a1, $a1, 0x8
    ctx->pc = 0x17af90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    // 0x17af94: 0xa0800002  sb          $zero, 0x2($a0)
    ctx->pc = 0x17af94u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x17af98: 0x28a30050  slti        $v1, $a1, 0x50
    ctx->pc = 0x17af98u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)80) ? 1 : 0);
    // 0x17af9c: 0xa0800004  sb          $zero, 0x4($a0)
    ctx->pc = 0x17af9cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 4), (uint8_t)GPR_U32(ctx, 0));
    // 0x17afa0: 0xa0800006  sb          $zero, 0x6($a0)
    ctx->pc = 0x17afa0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 6), (uint8_t)GPR_U32(ctx, 0));
    // 0x17afa4: 0xa0800008  sb          $zero, 0x8($a0)
    ctx->pc = 0x17afa4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 8), (uint8_t)GPR_U32(ctx, 0));
    // 0x17afa8: 0xa080000a  sb          $zero, 0xA($a0)
    ctx->pc = 0x17afa8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 10), (uint8_t)GPR_U32(ctx, 0));
    // 0x17afac: 0xa080000c  sb          $zero, 0xC($a0)
    ctx->pc = 0x17afacu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 12), (uint8_t)GPR_U32(ctx, 0));
    // 0x17afb0: 0xa080000e  sb          $zero, 0xE($a0)
    ctx->pc = 0x17afb0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 14), (uint8_t)GPR_U32(ctx, 0));
    // 0x17afb4: 0x1460fff5  bnez        $v1, . + 4 + (-0xB << 2)
    ctx->pc = 0x17AFB4u;
    {
        const bool branch_taken_0x17afb4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x17AFB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17AFB4u;
        // 0x17afb8: 0x24840010  addiu       $a0, $a0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17afb4) {
            ctx->pc = 0x17AF8Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_17af8c;
        }
    }
    ctx->pc = 0x17AFBCu;
    // 0x17afbc: 0x3c06009c  lui         $a2, 0x9C
    ctx->pc = 0x17afbcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)156 << 16));
    // 0x17afc0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x17afc0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17afc4: 0x24c6b600  addiu       $a2, $a2, -0x4A00
    ctx->pc = 0x17afc4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294948352));
    // 0x17afc8: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x17afc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_17afcc:
    // 0x17afcc: 0xa0c40000  sb          $a0, 0x0($a2)
    ctx->pc = 0x17afccu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x17afd0: 0x24a50008  addiu       $a1, $a1, 0x8
    ctx->pc = 0x17afd0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    // 0x17afd4: 0xa0c40001  sb          $a0, 0x1($a2)
    ctx->pc = 0x17afd4u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x17afd8: 0x28a30080  slti        $v1, $a1, 0x80
    ctx->pc = 0x17afd8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)128) ? 1 : 0);
    // 0x17afdc: 0xa0c40002  sb          $a0, 0x2($a2)
    ctx->pc = 0x17afdcu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 2), (uint8_t)GPR_U32(ctx, 4));
    // 0x17afe0: 0xa0c40003  sb          $a0, 0x3($a2)
    ctx->pc = 0x17afe0u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 3), (uint8_t)GPR_U32(ctx, 4));
    // 0x17afe4: 0xa0c40004  sb          $a0, 0x4($a2)
    ctx->pc = 0x17afe4u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 4), (uint8_t)GPR_U32(ctx, 4));
    // 0x17afe8: 0xa0c40005  sb          $a0, 0x5($a2)
    ctx->pc = 0x17afe8u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 5), (uint8_t)GPR_U32(ctx, 4));
    // 0x17afec: 0xa0c40006  sb          $a0, 0x6($a2)
    ctx->pc = 0x17afecu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 6), (uint8_t)GPR_U32(ctx, 4));
    // 0x17aff0: 0xa0c40007  sb          $a0, 0x7($a2)
    ctx->pc = 0x17aff0u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 7), (uint8_t)GPR_U32(ctx, 4));
    // 0x17aff4: 0x1460fff5  bnez        $v1, . + 4 + (-0xB << 2)
    ctx->pc = 0x17AFF4u;
    {
        const bool branch_taken_0x17aff4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x17AFF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17AFF4u;
        // 0x17aff8: 0x24c60008  addiu       $a2, $a2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17aff4) {
            ctx->pc = 0x17AFCCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_17afcc;
        }
    }
    ctx->pc = 0x17AFFCu;
    // 0x17affc: 0x3c04009c  lui         $a0, 0x9C
    ctx->pc = 0x17affcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)156 << 16));
    // 0x17b000: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x17b000u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x17b004: 0xa080b570  sb          $zero, -0x4A90($a0)
    ctx->pc = 0x17b004u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 4294948208), (uint8_t)GPR_U32(ctx, 0));
    // 0x17b008: 0x3e00008  jr          $ra
    ctx->pc = 0x17B008u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17B00Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B008u;
        // 0x17b00c: 0xa060b578  sb          $zero, -0x4A88($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 4294948216), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17B008u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17B010u;
    // 0x17b010: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x17b010u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x17b014: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x17b014u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x17b018: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x17b018u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x17b01c: 0x90a500be  lbu         $a1, 0xBE($a1)
    ctx->pc = 0x17b01cu;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 190)));
    // 0x17b020: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x17b020u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17b024: 0xc053894  jal         func_14E250
    ctx->pc = 0x17B024u;
    SET_GPR_U32(ctx, 31, 0x17B02Cu);
    ctx->pc = 0x17B028u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17B024u;
    // 0x17b028: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14E250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14E250u, 0x17B024u, 0x17B02Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17B02Cu;
label_17b02c:
    // 0x17b02c: 0x26020002  addiu       $v0, $s0, 0x2
    ctx->pc = 0x17b02cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
    // 0x17b030: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x17b030u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17b034: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x17b034u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17b038: 0x3e00008  jr          $ra
    ctx->pc = 0x17B038u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17B03Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B038u;
        // 0x17b03c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17B038u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17B040u;
    // 0x17b040: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x17b040u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x17b044: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x17b044u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x17b048: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x17b048u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x17b04c: 0xc05c5f4  jal         func_1717D0
    ctx->pc = 0x17B04Cu;
    SET_GPR_U32(ctx, 31, 0x17B054u);
    ctx->pc = 0x17B050u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17B04Cu;
    // 0x17b050: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1717D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1717D0u, 0x17B04Cu, 0x17B054u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17B054u;
label_17b054:
    // 0x17b054: 0xc055684  jal         func_155A10
    ctx->pc = 0x17B054u;
    SET_GPR_U32(ctx, 31, 0x17B05Cu);
    ctx->pc = 0x155A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155A10u, 0x17B054u, 0x17B05Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17B05Cu;
label_17b05c:
    // 0x17b05c: 0xc05347c  jal         func_14D1F0
    ctx->pc = 0x17B05Cu;
    SET_GPR_U32(ctx, 31, 0x17B064u);
    ctx->pc = 0x14D1F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14D1F0u, 0x17B05Cu, 0x17B064u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17B064u;
label_17b064:
    // 0x17b064: 0xc068330  jal         func_1A0CC0
    ctx->pc = 0x17B064u;
    SET_GPR_U32(ctx, 31, 0x17B06Cu);
    ctx->pc = 0x1A0CC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0CC0u, 0x17B064u, 0x17B06Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17B06Cu;
label_17b06c:
    // 0x17b06c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x17b06cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17b070: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x17b070u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17b074: 0xc0c79fc  jal         func_31E7F0
    ctx->pc = 0x17B074u;
    SET_GPR_U32(ctx, 31, 0x17B07Cu);
    ctx->pc = 0x17B078u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17B074u;
    // 0x17b078: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31E7F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31E7F0u, 0x17B074u, 0x17B07Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17B07Cu;
label_17b07c:
    // 0x17b07c: 0xc06814c  jal         func_1A0530
    ctx->pc = 0x17B07Cu;
    SET_GPR_U32(ctx, 31, 0x17B084u);
    ctx->pc = 0x17B080u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17B07Cu;
    // 0x17b080: 0x24040307  addiu       $a0, $zero, 0x307 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 775));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0530u, 0x17B07Cu, 0x17B084u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17B084u;
label_17b084:
    // 0x17b084: 0x3c04001a  lui         $a0, 0x1A
    ctx->pc = 0x17b084u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)26 << 16));
    // 0x17b088: 0xc0558d0  jal         func_156340
    ctx->pc = 0x17B088u;
    SET_GPR_U32(ctx, 31, 0x17B090u);
    ctx->pc = 0x17B08Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17B088u;
    // 0x17b08c: 0x2484d740  addiu       $a0, $a0, -0x28C0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294956864));
    ctx->in_delay_slot = false;
    ctx->pc = 0x156340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x156340u, 0x17B088u, 0x17B090u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17B090u;
label_17b090:
    // 0x17b090: 0xc05d8bc  jal         func_1762F0
    ctx->pc = 0x17B090u;
    SET_GPR_U32(ctx, 31, 0x17B098u);
    ctx->pc = 0x1762F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1762F0u, 0x17B090u, 0x17B098u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17B098u;
label_17b098:
    // 0x17b098: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x17b098u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17b09c: 0xc05da28  jal         func_1768A0
    ctx->pc = 0x17B09Cu;
    SET_GPR_U32(ctx, 31, 0x17B0A4u);
    ctx->pc = 0x17B0A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17B09Cu;
    // 0x17b0a0: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1768A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1768A0u, 0x17B09Cu, 0x17B0A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17B0A4u;
label_17b0a4:
    // 0x17b0a4: 0xc05e114  jal         func_178450
    ctx->pc = 0x17B0A4u;
    SET_GPR_U32(ctx, 31, 0x17B0ACu);
    ctx->pc = 0x178450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x178450u, 0x17B0A4u, 0x17B0ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17B0ACu;
label_17b0ac:
    // 0x17b0ac: 0x3c040018  lui         $a0, 0x18
    ctx->pc = 0x17b0acu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)24 << 16));
    // 0x17b0b0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x17b0b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17b0b4: 0xc055768  jal         func_155DA0
    ctx->pc = 0x17B0B4u;
    SET_GPR_U32(ctx, 31, 0x17B0BCu);
    ctx->pc = 0x17B0B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17B0B4u;
    // 0x17b0b8: 0x2484b0e0  addiu       $a0, $a0, -0x4F20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294947040));
    ctx->in_delay_slot = false;
    ctx->pc = 0x155DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155DA0u, 0x17B0B4u, 0x17B0BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17B0BCu;
label_17b0bc:
    // 0x17b0bc: 0x3c04009c  lui         $a0, 0x9C
    ctx->pc = 0x17b0bcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)156 << 16));
    // 0x17b0c0: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x17b0c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x17b0c4: 0xa080a220  sb          $zero, -0x5DE0($a0)
    ctx->pc = 0x17b0c4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 4294943264), (uint8_t)GPR_U32(ctx, 0));
    // 0x17b0c8: 0xac60a228  sw          $zero, -0x5DD8($v1)
    ctx->pc = 0x17b0c8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294943272), GPR_U32(ctx, 0));
    // 0x17b0cc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x17b0ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17b0d0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x17b0d0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17b0d4: 0x3e00008  jr          $ra
    ctx->pc = 0x17B0D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17B0D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B0D4u;
        // 0x17b0d8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17B0D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17B0DCu;
    // 0x17b0dc: 0x0  nop
    ctx->pc = 0x17b0dcu;
    // NOP
    // 0x17b0e0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x17b0e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x17b0e4: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x17b0e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x17b0e8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x17b0e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x17b0ec: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x17b0ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x17b0f0: 0x8c63a228  lw          $v1, -0x5DD8($v1)
    ctx->pc = 0x17b0f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294943272)));
    // 0x17b0f4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x17b0f4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17b0f8: 0x2c6100c9  sltiu       $at, $v1, 0xC9
    ctx->pc = 0x17b0f8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)201) ? 1 : 0);
    // 0x17b0fc: 0x14200004  bnez        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x17B0FCu;
    {
        const bool branch_taken_0x17b0fc = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x17B100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B0FCu;
        // 0x17b100: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17b0fc) {
            ctx->pc = 0x17B110u;
            goto label_17b110;
        }
    }
    ctx->pc = 0x17B104u;
    // 0x17b104: 0xc05da4c  jal         func_176930
    ctx->pc = 0x17B104u;
    SET_GPR_U32(ctx, 31, 0x17B10Cu);
    ctx->pc = 0x176930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176930u, 0x17B104u, 0x17B10Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17B10Cu;
label_17b10c:
    // 0x17b10c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x17b10cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_17b110:
    // 0x17b110: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x17b110u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x17b114: 0x8063a220  lb          $v1, -0x5DE0($v1)
    ctx->pc = 0x17b114u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294943264)));
    // 0x17b118: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x17B118u;
    {
        const bool branch_taken_0x17b118 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x17b118) {
            ctx->pc = 0x17B128u;
            goto label_17b128;
        }
    }
    ctx->pc = 0x17B120u;
    // 0x17b120: 0x10800009  beqz        $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x17B120u;
    {
        const bool branch_taken_0x17b120 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x17b120) {
            ctx->pc = 0x17B148u;
            goto label_17b148;
        }
    }
    ctx->pc = 0x17B128u;
label_17b128:
    // 0x17b128: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x17b128u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x17b12c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x17b12cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17b130: 0xa044a218  sb          $a0, -0x5DE8($v0)
    ctx->pc = 0x17b130u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294943256), (uint8_t)GPR_U32(ctx, 4));
    // 0x17b134: 0x3c040018  lui         $a0, 0x18
    ctx->pc = 0x17b134u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)24 << 16));
    // 0x17b138: 0xc055768  jal         func_155DA0
    ctx->pc = 0x17B138u;
    SET_GPR_U32(ctx, 31, 0x17B140u);
    ctx->pc = 0x17B13Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17B138u;
    // 0x17b13c: 0x2484b180  addiu       $a0, $a0, -0x4E80 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294947200));
    ctx->in_delay_slot = false;
    ctx->pc = 0x155DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155DA0u, 0x17B138u, 0x17B140u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17B140u;
label_17b140:
    // 0x17b140: 0xc068330  jal         func_1A0CC0
    ctx->pc = 0x17B140u;
    SET_GPR_U32(ctx, 31, 0x17B148u);
    ctx->pc = 0x1A0CC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0CC0u, 0x17B140u, 0x17B148u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17B148u;
label_17b148:
    // 0x17b148: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x17b148u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x17b14c: 0x8063b578  lb          $v1, -0x4A88($v1)
    ctx->pc = 0x17b14cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294948216)));
    // 0x17b150: 0x50600007  beql        $v1, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x17B150u;
    {
        const bool branch_taken_0x17b150 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x17b150) {
            ctx->pc = 0x17B154u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17B150u;
            // 0x17b154: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
            SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x17B170u;
            goto label_17b170;
        }
    }
    ctx->pc = 0x17B158u;
    // 0x17b158: 0x3c04009c  lui         $a0, 0x9C
    ctx->pc = 0x17b158u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)156 << 16));
    // 0x17b15c: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x17b15cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x17b160: 0x8c84a228  lw          $a0, -0x5DD8($a0)
    ctx->pc = 0x17b160u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294943272)));
    // 0x17b164: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x17b164u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x17b168: 0xac64a228  sw          $a0, -0x5DD8($v1)
    ctx->pc = 0x17b168u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294943272), GPR_U32(ctx, 4));
    // 0x17b16c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x17b16cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_17b170:
    // 0x17b170: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x17b170u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17b174: 0x3e00008  jr          $ra
    ctx->pc = 0x17B174u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17B178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B174u;
        // 0x17b178: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17B174u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17B17Cu;
    // 0x17b17c: 0x0  nop
    ctx->pc = 0x17b17cu;
    // NOP
    // 0x17b180: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x17b180u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x17b184: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x17b184u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x17b188: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x17b188u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x17b18c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x17b18cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x17b190: 0x8042a218  lb          $v0, -0x5DE8($v0)
    ctx->pc = 0x17b190u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294943256)));
    // 0x17b194: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x17B194u;
    {
        const bool branch_taken_0x17b194 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17B198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B194u;
        // 0x17b198: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17b194) {
            ctx->pc = 0x17B1F0u;
            goto label_17b1f0;
        }
    }
    ctx->pc = 0x17B19Cu;
    // 0x17b19c: 0xc0538d4  jal         func_14E350
    ctx->pc = 0x17B19Cu;
    SET_GPR_U32(ctx, 31, 0x17B1A4u);
    ctx->pc = 0x14E350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14E350u, 0x17B19Cu, 0x17B1A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17B1A4u;
label_17b1a4:
    // 0x17b1a4: 0x2163c  dsll32      $v0, $v0, 24
    ctx->pc = 0x17b1a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 24));
    // 0x17b1a8: 0x2163f  dsra32      $v0, $v0, 24
    ctx->pc = 0x17b1a8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 24));
    // 0x17b1ac: 0x14400010  bnez        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x17B1ACu;
    {
        const bool branch_taken_0x17b1ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x17b1ac) {
            ctx->pc = 0x17B1F0u;
            goto label_17b1f0;
        }
    }
    ctx->pc = 0x17B1B4u;
    // 0x17b1b4: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x17b1b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x17b1b8: 0x8c42b680  lw          $v0, -0x4980($v0)
    ctx->pc = 0x17b1b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294948480)));
    // 0x17b1bc: 0x284100ff  slti        $at, $v0, 0xFF
    ctx->pc = 0x17b1bcu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)255) ? 1 : 0);
    // 0x17b1c0: 0x50200007  beql        $at, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x17B1C0u;
    {
        const bool branch_taken_0x17b1c0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x17b1c0) {
            ctx->pc = 0x17B1C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17B1C0u;
            // 0x17b1c4: 0x2203c  dsll32      $a0, $v0, 0 (Delay Slot)
            SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x17B1E0u;
            goto label_17b1e0;
        }
    }
    ctx->pc = 0x17B1C8u;
    // 0x17b1c8: 0x24430002  addiu       $v1, $v0, 0x2
    ctx->pc = 0x17b1c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x17b1cc: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x17b1ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x17b1d0: 0xac43b680  sw          $v1, -0x4980($v0)
    ctx->pc = 0x17b1d0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294948480), GPR_U32(ctx, 3));
    // 0x17b1d4: 0x3103c  dsll32      $v0, $v1, 0
    ctx->pc = 0x17b1d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 0));
    // 0x17b1d8: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x17b1d8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x17b1dc: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x17b1dcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
label_17b1e0:
    // 0x17b1e0: 0xc05e900  jal         func_17A400
    ctx->pc = 0x17B1E0u;
    SET_GPR_U32(ctx, 31, 0x17B1E8u);
    ctx->pc = 0x17B1E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17B1E0u;
    // 0x17b1e4: 0x4203f  dsra32      $a0, $a0, 0 (Delay Slot)
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A400u, 0x17B1E0u, 0x17B1E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17B1E8u;
label_17b1e8:
    // 0x17b1e8: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x17B1E8u;
    {
        const bool branch_taken_0x17b1e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17B1ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B1E8u;
        // 0x17b1ec: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17b1e8) {
            ctx->pc = 0x17B280u;
            goto label_17b280;
        }
    }
    ctx->pc = 0x17B1F0u;
label_17b1f0:
    // 0x17b1f0: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x17b1f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x17b1f4: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x17b1f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x17b1f8: 0xac60b680  sw          $zero, -0x4980($v1)
    ctx->pc = 0x17b1f8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294948480), GPR_U32(ctx, 0));
    // 0x17b1fc: 0xc05e118  jal         func_178460
    ctx->pc = 0x17B1FCu;
    SET_GPR_U32(ctx, 31, 0x17B204u);
    ctx->pc = 0x17B200u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17B1FCu;
    // 0x17b200: 0xa040a218  sb          $zero, -0x5DE8($v0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294943256), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x178460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x178460u, 0x17B1FCu, 0x17B204u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17B204u;
label_17b204:
    // 0x17b204: 0x2163c  dsll32      $v0, $v0, 24
    ctx->pc = 0x17b204u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 24));
    // 0x17b208: 0x2163f  dsra32      $v0, $v0, 24
    ctx->pc = 0x17b208u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 24));
    // 0x17b20c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x17B20Cu;
    {
        const bool branch_taken_0x17b20c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x17b20c) {
            ctx->pc = 0x17B21Cu;
            goto label_17b21c;
        }
    }
    ctx->pc = 0x17B214u;
    // 0x17b214: 0xc05e974  jal         func_17A5D0
    ctx->pc = 0x17B214u;
    SET_GPR_U32(ctx, 31, 0x17B21Cu);
    ctx->pc = 0x17A5D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A5D0u, 0x17B214u, 0x17B21Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17B21Cu;
label_17b21c:
    // 0x17b21c: 0xc05e118  jal         func_178460
    ctx->pc = 0x17B21Cu;
    SET_GPR_U32(ctx, 31, 0x17B224u);
    ctx->pc = 0x178460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x178460u, 0x17B21Cu, 0x17B224u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17B224u;
label_17b224:
    // 0x17b224: 0x2263c  dsll32      $a0, $v0, 24
    ctx->pc = 0x17b224u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 24));
    // 0x17b228: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x17b228u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x17b22c: 0x4263f  dsra32      $a0, $a0, 24
    ctx->pc = 0x17b22cu;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 24));
    // 0x17b230: 0x14830012  bne         $a0, $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x17B230u;
    {
        const bool branch_taken_0x17b230 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x17b230) {
            ctx->pc = 0x17B27Cu;
            goto label_17b27c;
        }
    }
    ctx->pc = 0x17B238u;
    // 0x17b238: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x17b238u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
    // 0x17b23c: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x17b23cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x17b240: 0x90429780  lbu         $v0, -0x6880($v0)
    ctx->pc = 0x17b240u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294940544)));
    // 0x17b244: 0x5443000b  bnel        $v0, $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x17B244u;
    {
        const bool branch_taken_0x17b244 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x17b244) {
            ctx->pc = 0x17B248u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17B244u;
            // 0x17b248: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x17B274u;
            goto label_17b274;
        }
    }
    ctx->pc = 0x17B24Cu;
    // 0x17b24c: 0x3c040034  lui         $a0, 0x34
    ctx->pc = 0x17b24cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)52 << 16));
    // 0x17b250: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x17b250u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17b254: 0xc055768  jal         func_155DA0
    ctx->pc = 0x17B254u;
    SET_GPR_U32(ctx, 31, 0x17B25Cu);
    ctx->pc = 0x17B258u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17B254u;
    // 0x17b258: 0x24842680  addiu       $a0, $a0, 0x2680 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 9856));
    ctx->in_delay_slot = false;
    ctx->pc = 0x155DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155DA0u, 0x17B254u, 0x17B25Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17B25Cu;
label_17b25c:
    // 0x17b25c: 0xc053318  jal         func_14CC60
    ctx->pc = 0x17B25Cu;
    SET_GPR_U32(ctx, 31, 0x17B264u);
    ctx->pc = 0x14CC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14CC60u, 0x17B25Cu, 0x17B264u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17B264u;
label_17b264:
    // 0x17b264: 0xc068244  jal         func_1A0910
    ctx->pc = 0x17B264u;
    SET_GPR_U32(ctx, 31, 0x17B26Cu);
    ctx->pc = 0x1A0910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0910u, 0x17B264u, 0x17B26Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17B26Cu;
label_17b26c:
    // 0x17b26c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x17B26Cu;
    {
        const bool branch_taken_0x17b26c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x17b26c) {
            ctx->pc = 0x17B27Cu;
            goto label_17b27c;
        }
    }
    ctx->pc = 0x17B274u;
label_17b274:
    // 0x17b274: 0xc055770  jal         func_155DC0
    ctx->pc = 0x17B274u;
    SET_GPR_U32(ctx, 31, 0x17B27Cu);
    ctx->pc = 0x155DC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155DC0u, 0x17B274u, 0x17B27Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17B27Cu;
label_17b27c:
    // 0x17b27c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x17b27cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_17b280:
    // 0x17b280: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x17b280u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17b284: 0x3e00008  jr          $ra
    ctx->pc = 0x17B284u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17B288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B284u;
        // 0x17b288: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17B284u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17B28Cu;
    // 0x17b28c: 0x0  nop
    ctx->pc = 0x17b28cu;
    // NOP
    // 0x17b290: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x17b290u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x17b294: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x17b294u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x17b298: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x17b298u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x17b29c: 0xc05c5f4  jal         func_1717D0
    ctx->pc = 0x17B29Cu;
    SET_GPR_U32(ctx, 31, 0x17B2A4u);
    ctx->pc = 0x17B2A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17B29Cu;
    // 0x17b2a0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1717D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1717D0u, 0x17B29Cu, 0x17B2A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17B2A4u;
label_17b2a4:
    // 0x17b2a4: 0xc055684  jal         func_155A10
    ctx->pc = 0x17B2A4u;
    SET_GPR_U32(ctx, 31, 0x17B2ACu);
    ctx->pc = 0x155A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155A10u, 0x17B2A4u, 0x17B2ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17B2ACu;
label_17b2ac:
    // 0x17b2ac: 0xc05347c  jal         func_14D1F0
    ctx->pc = 0x17B2ACu;
    SET_GPR_U32(ctx, 31, 0x17B2B4u);
    ctx->pc = 0x14D1F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14D1F0u, 0x17B2ACu, 0x17B2B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17B2B4u;
label_17b2b4:
    // 0x17b2b4: 0xc068300  jal         func_1A0C00
    ctx->pc = 0x17B2B4u;
    SET_GPR_U32(ctx, 31, 0x17B2BCu);
    ctx->pc = 0x1A0C00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0C00u, 0x17B2B4u, 0x17B2BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17B2BCu;
label_17b2bc:
    // 0x17b2bc: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x17b2bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17b2c0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x17b2c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17b2c4: 0xc0c79fc  jal         func_31E7F0
    ctx->pc = 0x17B2C4u;
    SET_GPR_U32(ctx, 31, 0x17B2CCu);
    ctx->pc = 0x17B2C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17B2C4u;
    // 0x17b2c8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31E7F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31E7F0u, 0x17B2C4u, 0x17B2CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17B2CCu;
label_17b2cc:
    // 0x17b2cc: 0xc06814c  jal         func_1A0530
    ctx->pc = 0x17B2CCu;
    SET_GPR_U32(ctx, 31, 0x17B2D4u);
    ctx->pc = 0x17B2D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17B2CCu;
    // 0x17b2d0: 0x24040307  addiu       $a0, $zero, 0x307 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 775));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0530u, 0x17B2CCu, 0x17B2D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17B2D4u;
label_17b2d4:
    // 0x17b2d4: 0x3c04001a  lui         $a0, 0x1A
    ctx->pc = 0x17b2d4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)26 << 16));
    // 0x17b2d8: 0xc0558d0  jal         func_156340
    ctx->pc = 0x17B2D8u;
    SET_GPR_U32(ctx, 31, 0x17B2E0u);
    ctx->pc = 0x17B2DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17B2D8u;
    // 0x17b2dc: 0x2484d740  addiu       $a0, $a0, -0x28C0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294956864));
    ctx->in_delay_slot = false;
    ctx->pc = 0x156340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x156340u, 0x17B2D8u, 0x17B2E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17B2E0u;
label_17b2e0:
    // 0x17b2e0: 0xc05d8bc  jal         func_1762F0
    ctx->pc = 0x17B2E0u;
    SET_GPR_U32(ctx, 31, 0x17B2E8u);
    ctx->pc = 0x1762F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1762F0u, 0x17B2E0u, 0x17B2E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17B2E8u;
label_17b2e8:
    // 0x17b2e8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x17b2e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17b2ec: 0xc05da28  jal         func_1768A0
    ctx->pc = 0x17B2ECu;
    SET_GPR_U32(ctx, 31, 0x17B2F4u);
    ctx->pc = 0x17B2F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17B2ECu;
    // 0x17b2f0: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1768A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1768A0u, 0x17B2ECu, 0x17B2F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17B2F4u;
label_17b2f4:
    // 0x17b2f4: 0xc05e114  jal         func_178450
    ctx->pc = 0x17B2F4u;
    SET_GPR_U32(ctx, 31, 0x17B2FCu);
    ctx->pc = 0x178450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x178450u, 0x17B2F4u, 0x17B2FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17B2FCu;
label_17b2fc:
    // 0x17b2fc: 0x3c040018  lui         $a0, 0x18
    ctx->pc = 0x17b2fcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)24 << 16));
    // 0x17b300: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x17b300u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17b304: 0xc055768  jal         func_155DA0
    ctx->pc = 0x17B304u;
    SET_GPR_U32(ctx, 31, 0x17B30Cu);
    ctx->pc = 0x17B308u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17B304u;
    // 0x17b308: 0x2484b330  addiu       $a0, $a0, -0x4CD0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294947632));
    ctx->in_delay_slot = false;
    ctx->pc = 0x155DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155DA0u, 0x17B304u, 0x17B30Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17B30Cu;
label_17b30c:
    // 0x17b30c: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x17b30cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x17b310: 0xac60a228  sw          $zero, -0x5DD8($v1)
    ctx->pc = 0x17b310u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294943272), GPR_U32(ctx, 0));
    // 0x17b314: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x17b314u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17b318: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x17b318u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17b31c: 0x3e00008  jr          $ra
    ctx->pc = 0x17B31Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17B320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B31Cu;
        // 0x17b320: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17B31Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17B324u;
    // 0x17b324: 0x0  nop
    ctx->pc = 0x17b324u;
    // NOP
    // 0x17b328: 0x0  nop
    ctx->pc = 0x17b328u;
    // NOP
    // 0x17b32c: 0x0  nop
    ctx->pc = 0x17b32cu;
    // NOP
    // 0x17b330: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x17b330u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x17b334: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x17b334u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x17b338: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x17b338u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x17b33c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x17b33cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x17b340: 0x8c63a228  lw          $v1, -0x5DD8($v1)
    ctx->pc = 0x17b340u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294943272)));
    // 0x17b344: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x17b344u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17b348: 0x2c6100c9  sltiu       $at, $v1, 0xC9
    ctx->pc = 0x17b348u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)201) ? 1 : 0);
    // 0x17b34c: 0x14200004  bnez        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x17B34Cu;
    {
        const bool branch_taken_0x17b34c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x17B350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B34Cu;
        // 0x17b350: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17b34c) {
            ctx->pc = 0x17B360u;
            goto label_17b360;
        }
    }
    ctx->pc = 0x17B354u;
    // 0x17b354: 0xc05da4c  jal         func_176930
    ctx->pc = 0x17B354u;
    SET_GPR_U32(ctx, 31, 0x17B35Cu);
    ctx->pc = 0x176930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176930u, 0x17B354u, 0x17B35Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17B35Cu;
label_17b35c:
    // 0x17b35c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x17b35cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_17b360:
    // 0x17b360: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x17b360u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x17b364: 0x8063a220  lb          $v1, -0x5DE0($v1)
    ctx->pc = 0x17b364u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294943264)));
    // 0x17b368: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x17B368u;
    {
        const bool branch_taken_0x17b368 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x17b368) {
            ctx->pc = 0x17B378u;
            goto label_17b378;
        }
    }
    ctx->pc = 0x17B370u;
    // 0x17b370: 0x10800009  beqz        $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x17B370u;
    {
        const bool branch_taken_0x17b370 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x17b370) {
            ctx->pc = 0x17B398u;
            goto label_17b398;
        }
    }
    ctx->pc = 0x17B378u;
label_17b378:
    // 0x17b378: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x17b378u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x17b37c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x17b37cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17b380: 0xa044a218  sb          $a0, -0x5DE8($v0)
    ctx->pc = 0x17b380u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294943256), (uint8_t)GPR_U32(ctx, 4));
    // 0x17b384: 0x3c040018  lui         $a0, 0x18
    ctx->pc = 0x17b384u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)24 << 16));
    // 0x17b388: 0xc055768  jal         func_155DA0
    ctx->pc = 0x17B388u;
    SET_GPR_U32(ctx, 31, 0x17B390u);
    ctx->pc = 0x17B38Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17B388u;
    // 0x17b38c: 0x2484b3d0  addiu       $a0, $a0, -0x4C30 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294947792));
    ctx->in_delay_slot = false;
    ctx->pc = 0x155DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155DA0u, 0x17B388u, 0x17B390u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17B390u;
label_17b390:
    // 0x17b390: 0xc068330  jal         func_1A0CC0
    ctx->pc = 0x17B390u;
    SET_GPR_U32(ctx, 31, 0x17B398u);
    ctx->pc = 0x1A0CC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0CC0u, 0x17B390u, 0x17B398u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17B398u;
label_17b398:
    // 0x17b398: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x17b398u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x17b39c: 0x8063b578  lb          $v1, -0x4A88($v1)
    ctx->pc = 0x17b39cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294948216)));
    // 0x17b3a0: 0x50600007  beql        $v1, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x17B3A0u;
    {
        const bool branch_taken_0x17b3a0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x17b3a0) {
            ctx->pc = 0x17B3A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17B3A0u;
            // 0x17b3a4: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
            SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x17B3C0u;
            goto label_17b3c0;
        }
    }
    ctx->pc = 0x17B3A8u;
    // 0x17b3a8: 0x3c04009c  lui         $a0, 0x9C
    ctx->pc = 0x17b3a8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)156 << 16));
    // 0x17b3ac: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x17b3acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x17b3b0: 0x8c84a228  lw          $a0, -0x5DD8($a0)
    ctx->pc = 0x17b3b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294943272)));
    // 0x17b3b4: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x17b3b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x17b3b8: 0xac64a228  sw          $a0, -0x5DD8($v1)
    ctx->pc = 0x17b3b8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294943272), GPR_U32(ctx, 4));
    // 0x17b3bc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x17b3bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_17b3c0:
    // 0x17b3c0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x17b3c0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17b3c4: 0x3e00008  jr          $ra
    ctx->pc = 0x17B3C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17B3C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B3C4u;
        // 0x17b3c8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17B3C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17B3CCu;
    // 0x17b3cc: 0x0  nop
    ctx->pc = 0x17b3ccu;
    // NOP
    // 0x17b3d0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x17b3d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x17b3d4: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x17b3d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x17b3d8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x17b3d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x17b3dc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x17b3dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x17b3e0: 0x8042a218  lb          $v0, -0x5DE8($v0)
    ctx->pc = 0x17b3e0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294943256)));
    // 0x17b3e4: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x17B3E4u;
    {
        const bool branch_taken_0x17b3e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17B3E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B3E4u;
        // 0x17b3e8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17b3e4) {
            ctx->pc = 0x17B440u;
            goto label_17b440;
        }
    }
    ctx->pc = 0x17B3ECu;
    // 0x17b3ec: 0xc0538d4  jal         func_14E350
    ctx->pc = 0x17B3ECu;
    SET_GPR_U32(ctx, 31, 0x17B3F4u);
    ctx->pc = 0x14E350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14E350u, 0x17B3ECu, 0x17B3F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17B3F4u;
label_17b3f4:
    // 0x17b3f4: 0x2163c  dsll32      $v0, $v0, 24
    ctx->pc = 0x17b3f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 24));
    // 0x17b3f8: 0x2163f  dsra32      $v0, $v0, 24
    ctx->pc = 0x17b3f8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 24));
    // 0x17b3fc: 0x14400010  bnez        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x17B3FCu;
    {
        const bool branch_taken_0x17b3fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x17b3fc) {
            ctx->pc = 0x17B440u;
            goto label_17b440;
        }
    }
    ctx->pc = 0x17B404u;
    // 0x17b404: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x17b404u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x17b408: 0x8c42b688  lw          $v0, -0x4978($v0)
    ctx->pc = 0x17b408u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294948488)));
    // 0x17b40c: 0x284100ff  slti        $at, $v0, 0xFF
    ctx->pc = 0x17b40cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)255) ? 1 : 0);
    // 0x17b410: 0x50200007  beql        $at, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x17B410u;
    {
        const bool branch_taken_0x17b410 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x17b410) {
            ctx->pc = 0x17B414u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17B410u;
            // 0x17b414: 0x2203c  dsll32      $a0, $v0, 0 (Delay Slot)
            SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x17B430u;
            goto label_17b430;
        }
    }
    ctx->pc = 0x17B418u;
    // 0x17b418: 0x24430002  addiu       $v1, $v0, 0x2
    ctx->pc = 0x17b418u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x17b41c: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x17b41cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x17b420: 0xac43b688  sw          $v1, -0x4978($v0)
    ctx->pc = 0x17b420u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294948488), GPR_U32(ctx, 3));
    // 0x17b424: 0x3103c  dsll32      $v0, $v1, 0
    ctx->pc = 0x17b424u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 0));
    // 0x17b428: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x17b428u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x17b42c: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x17b42cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
label_17b430:
    // 0x17b430: 0xc05e900  jal         func_17A400
    ctx->pc = 0x17B430u;
    SET_GPR_U32(ctx, 31, 0x17B438u);
    ctx->pc = 0x17B434u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17B430u;
    // 0x17b434: 0x4203f  dsra32      $a0, $a0, 0 (Delay Slot)
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A400u, 0x17B430u, 0x17B438u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17B438u;
label_17b438:
    // 0x17b438: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x17B438u;
    {
        const bool branch_taken_0x17b438 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17B43Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B438u;
        // 0x17b43c: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17b438) {
            ctx->pc = 0x17B4D0u;
            goto label_17b4d0;
        }
    }
    ctx->pc = 0x17B440u;
label_17b440:
    // 0x17b440: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x17b440u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x17b444: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x17b444u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x17b448: 0xac60b688  sw          $zero, -0x4978($v1)
    ctx->pc = 0x17b448u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294948488), GPR_U32(ctx, 0));
    // 0x17b44c: 0xc05e118  jal         func_178460
    ctx->pc = 0x17B44Cu;
    SET_GPR_U32(ctx, 31, 0x17B454u);
    ctx->pc = 0x17B450u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17B44Cu;
    // 0x17b450: 0xa040a218  sb          $zero, -0x5DE8($v0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294943256), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x178460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x178460u, 0x17B44Cu, 0x17B454u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17B454u;
label_17b454:
    // 0x17b454: 0x2163c  dsll32      $v0, $v0, 24
    ctx->pc = 0x17b454u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 24));
    // 0x17b458: 0x2163f  dsra32      $v0, $v0, 24
    ctx->pc = 0x17b458u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 24));
    // 0x17b45c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x17B45Cu;
    {
        const bool branch_taken_0x17b45c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x17b45c) {
            ctx->pc = 0x17B46Cu;
            goto label_17b46c;
        }
    }
    ctx->pc = 0x17B464u;
    // 0x17b464: 0xc05e974  jal         func_17A5D0
    ctx->pc = 0x17B464u;
    SET_GPR_U32(ctx, 31, 0x17B46Cu);
    ctx->pc = 0x17A5D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A5D0u, 0x17B464u, 0x17B46Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17B46Cu;
label_17b46c:
    // 0x17b46c: 0xc05e118  jal         func_178460
    ctx->pc = 0x17B46Cu;
    SET_GPR_U32(ctx, 31, 0x17B474u);
    ctx->pc = 0x178460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x178460u, 0x17B46Cu, 0x17B474u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17B474u;
label_17b474:
    // 0x17b474: 0x2263c  dsll32      $a0, $v0, 24
    ctx->pc = 0x17b474u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 24));
    // 0x17b478: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x17b478u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x17b47c: 0x4263f  dsra32      $a0, $a0, 24
    ctx->pc = 0x17b47cu;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 24));
    // 0x17b480: 0x14830012  bne         $a0, $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x17B480u;
    {
        const bool branch_taken_0x17b480 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x17b480) {
            ctx->pc = 0x17B4CCu;
            goto label_17b4cc;
        }
    }
    ctx->pc = 0x17B488u;
    // 0x17b488: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x17b488u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
    // 0x17b48c: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x17b48cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x17b490: 0x90429780  lbu         $v0, -0x6880($v0)
    ctx->pc = 0x17b490u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294940544)));
    // 0x17b494: 0x5443000b  bnel        $v0, $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x17B494u;
    {
        const bool branch_taken_0x17b494 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x17b494) {
            ctx->pc = 0x17B498u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17B494u;
            // 0x17b498: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x17B4C4u;
            goto label_17b4c4;
        }
    }
    ctx->pc = 0x17B49Cu;
    // 0x17b49c: 0x3c040034  lui         $a0, 0x34
    ctx->pc = 0x17b49cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)52 << 16));
    // 0x17b4a0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x17b4a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17b4a4: 0xc055768  jal         func_155DA0
    ctx->pc = 0x17B4A4u;
    SET_GPR_U32(ctx, 31, 0x17B4ACu);
    ctx->pc = 0x17B4A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17B4A4u;
    // 0x17b4a8: 0x24842680  addiu       $a0, $a0, 0x2680 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 9856));
    ctx->in_delay_slot = false;
    ctx->pc = 0x155DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155DA0u, 0x17B4A4u, 0x17B4ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17B4ACu;
label_17b4ac:
    // 0x17b4ac: 0xc053318  jal         func_14CC60
    ctx->pc = 0x17B4ACu;
    SET_GPR_U32(ctx, 31, 0x17B4B4u);
    ctx->pc = 0x14CC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14CC60u, 0x17B4ACu, 0x17B4B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17B4B4u;
label_17b4b4:
    // 0x17b4b4: 0xc068244  jal         func_1A0910
    ctx->pc = 0x17B4B4u;
    SET_GPR_U32(ctx, 31, 0x17B4BCu);
    ctx->pc = 0x1A0910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0910u, 0x17B4B4u, 0x17B4BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17B4BCu;
label_17b4bc:
    // 0x17b4bc: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x17B4BCu;
    {
        const bool branch_taken_0x17b4bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x17b4bc) {
            ctx->pc = 0x17B4CCu;
            goto label_17b4cc;
        }
    }
    ctx->pc = 0x17B4C4u;
label_17b4c4:
    // 0x17b4c4: 0xc055770  jal         func_155DC0
    ctx->pc = 0x17B4C4u;
    SET_GPR_U32(ctx, 31, 0x17B4CCu);
    ctx->pc = 0x155DC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155DC0u, 0x17B4C4u, 0x17B4CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17B4CCu;
label_17b4cc:
    // 0x17b4cc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x17b4ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_17b4d0:
    // 0x17b4d0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x17b4d0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17b4d4: 0x3e00008  jr          $ra
    ctx->pc = 0x17B4D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17B4D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B4D4u;
        // 0x17b4d8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17B4D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17B4DCu;
    // 0x17b4dc: 0x0  nop
    ctx->pc = 0x17b4dcu;
    // NOP
    // 0x17b4e0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x17b4e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x17b4e4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x17b4e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x17b4e8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x17b4e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x17b4ec: 0xc055684  jal         func_155A10
    ctx->pc = 0x17B4ECu;
    SET_GPR_U32(ctx, 31, 0x17B4F4u);
    ctx->pc = 0x17B4F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17B4ECu;
    // 0x17b4f0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x155A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155A10u, 0x17B4ECu, 0x17B4F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17B4F4u;
label_17b4f4:
    // 0x17b4f4: 0xc05c5f4  jal         func_1717D0
    ctx->pc = 0x17B4F4u;
    SET_GPR_U32(ctx, 31, 0x17B4FCu);
    ctx->pc = 0x1717D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1717D0u, 0x17B4F4u, 0x17B4FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17B4FCu;
label_17b4fc:
    // 0x17b4fc: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x17b4fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17b500: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x17b500u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17b504: 0xc0c79fc  jal         func_31E7F0
    ctx->pc = 0x17B504u;
    SET_GPR_U32(ctx, 31, 0x17B50Cu);
    ctx->pc = 0x17B508u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17B504u;
    // 0x17b508: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31E7F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31E7F0u, 0x17B504u, 0x17B50Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17B50Cu;
label_17b50c:
    // 0x17b50c: 0xc06814c  jal         func_1A0530
    ctx->pc = 0x17B50Cu;
    SET_GPR_U32(ctx, 31, 0x17B514u);
    ctx->pc = 0x17B510u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17B50Cu;
    // 0x17b510: 0x24040200  addiu       $a0, $zero, 0x200 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0530u, 0x17B50Cu, 0x17B514u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17B514u;
label_17b514:
    // 0x17b514: 0x3c040016  lui         $a0, 0x16
    ctx->pc = 0x17b514u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)22 << 16));
    // 0x17b518: 0xc0558d0  jal         func_156340
    ctx->pc = 0x17B518u;
    SET_GPR_U32(ctx, 31, 0x17B520u);
    ctx->pc = 0x17B51Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17B518u;
    // 0x17b51c: 0x24843b80  addiu       $a0, $a0, 0x3B80 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 15232));
    ctx->in_delay_slot = false;
    ctx->pc = 0x156340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x156340u, 0x17B518u, 0x17B520u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17B520u;
label_17b520:
    // 0x17b520: 0xc068300  jal         func_1A0C00
    ctx->pc = 0x17B520u;
    SET_GPR_U32(ctx, 31, 0x17B528u);
    ctx->pc = 0x1A0C00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0C00u, 0x17B520u, 0x17B528u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17B528u;
label_17b528:
    // 0x17b528: 0xc05d8bc  jal         func_1762F0
    ctx->pc = 0x17B528u;
    SET_GPR_U32(ctx, 31, 0x17B530u);
    ctx->pc = 0x1762F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1762F0u, 0x17B528u, 0x17B530u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17B530u;
label_17b530:
    // 0x17b530: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x17b530u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17b534: 0xc05da28  jal         func_1768A0
    ctx->pc = 0x17B534u;
    SET_GPR_U32(ctx, 31, 0x17B53Cu);
    ctx->pc = 0x17B538u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17B534u;
    // 0x17b538: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1768A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1768A0u, 0x17B534u, 0x17B53Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17B53Cu;
label_17b53c:
    // 0x17b53c: 0xc05e114  jal         func_178450
    ctx->pc = 0x17B53Cu;
    SET_GPR_U32(ctx, 31, 0x17B544u);
    ctx->pc = 0x178450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x178450u, 0x17B53Cu, 0x17B544u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17B544u;
label_17b544:
    // 0x17b544: 0x3c040018  lui         $a0, 0x18
    ctx->pc = 0x17b544u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)24 << 16));
    // 0x17b548: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x17b548u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17b54c: 0xc055768  jal         func_155DA0
    ctx->pc = 0x17B54Cu;
    SET_GPR_U32(ctx, 31, 0x17B554u);
    ctx->pc = 0x17B550u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17B54Cu;
    // 0x17b550: 0x2484b580  addiu       $a0, $a0, -0x4A80 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948224));
    ctx->in_delay_slot = false;
    ctx->pc = 0x155DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155DA0u, 0x17B54Cu, 0x17B554u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17B554u;
label_17b554:
    // 0x17b554: 0x3c04009c  lui         $a0, 0x9C
    ctx->pc = 0x17b554u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)156 << 16));
    // 0x17b558: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x17b558u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x17b55c: 0xa480b690  sh          $zero, -0x4970($a0)
    ctx->pc = 0x17b55cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4294948496), (uint16_t)GPR_U32(ctx, 0));
    // 0x17b560: 0xa060b578  sb          $zero, -0x4A88($v1)
    ctx->pc = 0x17b560u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4294948216), (uint8_t)GPR_U32(ctx, 0));
    // 0x17b564: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x17b564u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17b568: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x17b568u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17b56c: 0x3e00008  jr          $ra
    ctx->pc = 0x17B56Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17B570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B56Cu;
        // 0x17b570: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17B56Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17B574u;
    // 0x17b574: 0x0  nop
    ctx->pc = 0x17b574u;
    // NOP
    // 0x17b578: 0x0  nop
    ctx->pc = 0x17b578u;
    // NOP
    // 0x17b57c: 0x0  nop
    ctx->pc = 0x17b57cu;
    // NOP
    // 0x17b580: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x17b580u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x17b584: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x17b584u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x17b588: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x17b588u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x17b58c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x17b58cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x17b590: 0x8063b578  lb          $v1, -0x4A88($v1)
    ctx->pc = 0x17b590u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294948216)));
    // 0x17b594: 0x10600014  beqz        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x17B594u;
    {
        const bool branch_taken_0x17b594 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x17B598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B594u;
        // 0x17b598: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17b594) {
            ctx->pc = 0x17B5E8u;
            goto label_17b5e8;
        }
    }
    ctx->pc = 0x17B59Cu;
    // 0x17b59c: 0xc066e00  jal         func_19B800
    ctx->pc = 0x17B59Cu;
    SET_GPR_U32(ctx, 31, 0x17B5A4u);
    ctx->pc = 0x17B5A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17B59Cu;
    // 0x17b5a0: 0x2404ffff  addiu       $a0, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B800u, 0x17B59Cu, 0x17B5A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17B5A4u;
label_17b5a4:
    // 0x17b5a4: 0x3c034386  lui         $v1, 0x4386
    ctx->pc = 0x17b5a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17286 << 16));
    // 0x17b5a8: 0x3c0243d0  lui         $v0, 0x43D0
    ctx->pc = 0x17b5a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17360 << 16));
    // 0x17b5ac: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x17b5acu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x17b5b0: 0x3c040036  lui         $a0, 0x36
    ctx->pc = 0x17b5b0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)54 << 16));
    // 0x17b5b4: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x17b5b4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x17b5b8: 0x3c034178  lui         $v1, 0x4178
    ctx->pc = 0x17b5b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16760 << 16));
    // 0x17b5bc: 0x3c024400  lui         $v0, 0x4400
    ctx->pc = 0x17b5bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17408 << 16));
    // 0x17b5c0: 0x3c05009c  lui         $a1, 0x9C
    ctx->pc = 0x17b5c0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)156 << 16));
    // 0x17b5c4: 0x44837000  mtc1        $v1, $f14
    ctx->pc = 0x17b5c4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x17b5c8: 0x24846230  addiu       $a0, $a0, 0x6230
    ctx->pc = 0x17b5c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 25136));
    // 0x17b5cc: 0x44827800  mtc1        $v0, $f15
    ctx->pc = 0x17b5ccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
    // 0x17b5d0: 0x24a5d538  addiu       $a1, $a1, -0x2AC8
    ctx->pc = 0x17b5d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956344));
    // 0x17b5d4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x17b5d4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17b5d8: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x17b5d8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17b5dc: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x17b5dcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x17b5e0: 0xc05e230  jal         func_1788C0
    ctx->pc = 0x17B5E0u;
    SET_GPR_U32(ctx, 31, 0x17B5E8u);
    ctx->pc = 0x17B5E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17B5E0u;
    // 0x17b5e4: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1788C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1788C0u, 0x17B5E0u, 0x17B5E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17B5E8u;
label_17b5e8:
    // 0x17b5e8: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x17b5e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x17b5ec: 0x9463b690  lhu         $v1, -0x4970($v1)
    ctx->pc = 0x17b5ecu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4294948496)));
    // 0x17b5f0: 0x28610e11  slti        $at, $v1, 0xE11
    ctx->pc = 0x17b5f0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3601) ? 1 : 0);
    // 0x17b5f4: 0x10200006  beqz        $at, . + 4 + (0x6 << 2)
    ctx->pc = 0x17B5F4u;
    {
        const bool branch_taken_0x17b5f4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x17b5f4) {
            ctx->pc = 0x17B610u;
            goto label_17b610;
        }
    }
    ctx->pc = 0x17B5FCu;
    // 0x17b5fc: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x17b5fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x17b600: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x17b600u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17b604: 0x8063a220  lb          $v1, -0x5DE0($v1)
    ctx->pc = 0x17b604u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294943264)));
    // 0x17b608: 0x14640007  bne         $v1, $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x17B608u;
    {
        const bool branch_taken_0x17b608 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x17b608) {
            ctx->pc = 0x17B628u;
            goto label_17b628;
        }
    }
    ctx->pc = 0x17B610u;
label_17b610:
    // 0x17b610: 0x3c040018  lui         $a0, 0x18
    ctx->pc = 0x17b610u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)24 << 16));
    // 0x17b614: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x17b614u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17b618: 0xc055768  jal         func_155DA0
    ctx->pc = 0x17B618u;
    SET_GPR_U32(ctx, 31, 0x17B620u);
    ctx->pc = 0x17B61Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17B618u;
    // 0x17b61c: 0x2484b650  addiu       $a0, $a0, -0x49B0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948432));
    ctx->in_delay_slot = false;
    ctx->pc = 0x155DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155DA0u, 0x17B618u, 0x17B620u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17B620u;
label_17b620:
    // 0x17b620: 0xc06833c  jal         func_1A0CF0
    ctx->pc = 0x17B620u;
    SET_GPR_U32(ctx, 31, 0x17B628u);
    ctx->pc = 0x1A0CF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0CF0u, 0x17B620u, 0x17B628u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17B628u;
label_17b628:
    // 0x17b628: 0x3c04009c  lui         $a0, 0x9C
    ctx->pc = 0x17b628u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)156 << 16));
    // 0x17b62c: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x17b62cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x17b630: 0x9484b690  lhu         $a0, -0x4970($a0)
    ctx->pc = 0x17b630u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4294948496)));
    // 0x17b634: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x17b634u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x17b638: 0xa464b690  sh          $a0, -0x4970($v1)
    ctx->pc = 0x17b638u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4294948496), (uint16_t)GPR_U32(ctx, 4));
    // 0x17b63c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x17b63cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17b640: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x17b640u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17b644: 0x3e00008  jr          $ra
    ctx->pc = 0x17B644u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17B648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B644u;
        // 0x17b648: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17B644u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17B64Cu;
    // 0x17b64c: 0x0  nop
    ctx->pc = 0x17b64cu;
    // NOP
    // 0x17b650: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x17b650u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x17b654: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x17b654u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x17b658: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x17b658u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x17b65c: 0xc05e118  jal         func_178460
    ctx->pc = 0x17B65Cu;
    SET_GPR_U32(ctx, 31, 0x17B664u);
    ctx->pc = 0x17B660u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17B65Cu;
    // 0x17b660: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x178460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x178460u, 0x17B65Cu, 0x17B664u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17B664u;
label_17b664:
    // 0x17b664: 0x2163c  dsll32      $v0, $v0, 24
    ctx->pc = 0x17b664u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 24));
    // 0x17b668: 0x2163f  dsra32      $v0, $v0, 24
    ctx->pc = 0x17b668u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 24));
    // 0x17b66c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x17B66Cu;
    {
        const bool branch_taken_0x17b66c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x17b66c) {
            ctx->pc = 0x17B67Cu;
            goto label_17b67c;
        }
    }
    ctx->pc = 0x17B674u;
    // 0x17b674: 0xc05e974  jal         func_17A5D0
    ctx->pc = 0x17B674u;
    SET_GPR_U32(ctx, 31, 0x17B67Cu);
    ctx->pc = 0x17A5D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A5D0u, 0x17B674u, 0x17B67Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17B67Cu;
label_17b67c:
    // 0x17b67c: 0xc05e118  jal         func_178460
    ctx->pc = 0x17B67Cu;
    SET_GPR_U32(ctx, 31, 0x17B684u);
    ctx->pc = 0x178460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x178460u, 0x17B67Cu, 0x17B684u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17B684u;
label_17b684:
    // 0x17b684: 0x2263c  dsll32      $a0, $v0, 24
    ctx->pc = 0x17b684u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 24));
    // 0x17b688: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x17b688u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x17b68c: 0x4263f  dsra32      $a0, $a0, 24
    ctx->pc = 0x17b68cu;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 24));
    // 0x17b690: 0x54830004  bnel        $a0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x17B690u;
    {
        const bool branch_taken_0x17b690 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x17b690) {
            ctx->pc = 0x17B694u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17B690u;
            // 0x17b694: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
            SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x17B6A4u;
            goto label_17b6a4;
        }
    }
    ctx->pc = 0x17B698u;
    // 0x17b698: 0xc055770  jal         func_155DC0
    ctx->pc = 0x17B698u;
    SET_GPR_U32(ctx, 31, 0x17B6A0u);
    ctx->pc = 0x17B69Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17B698u;
    // 0x17b69c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x155DC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155DC0u, 0x17B698u, 0x17B6A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17B6A0u;
label_17b6a0:
    // 0x17b6a0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x17b6a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_17b6a4:
    // 0x17b6a4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x17b6a4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17b6a8: 0x3e00008  jr          $ra
    ctx->pc = 0x17B6A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17B6ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B6A8u;
        // 0x17b6ac: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17B6A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17B6B0u;
    // 0x17b6b0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x17b6b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x17b6b4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x17b6b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x17b6b8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x17b6b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x17b6bc: 0xc055684  jal         func_155A10
    ctx->pc = 0x17B6BCu;
    SET_GPR_U32(ctx, 31, 0x17B6C4u);
    ctx->pc = 0x17B6C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17B6BCu;
    // 0x17b6c0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x155A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155A10u, 0x17B6BCu, 0x17B6C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17B6C4u;
label_17b6c4:
    // 0x17b6c4: 0xc05c5f4  jal         func_1717D0
    ctx->pc = 0x17B6C4u;
    SET_GPR_U32(ctx, 31, 0x17B6CCu);
    ctx->pc = 0x1717D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1717D0u, 0x17B6C4u, 0x17B6CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17B6CCu;
label_17b6cc:
    // 0x17b6cc: 0xc0cb488  jal         func_32D220
    ctx->pc = 0x17B6CCu;
    SET_GPR_U32(ctx, 31, 0x17B6D4u);
    ctx->pc = 0x32D220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32D220u, 0x17B6CCu, 0x17B6D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17B6D4u;
label_17b6d4:
    // 0x17b6d4: 0xc0692c0  jal         func_1A4B00
    ctx->pc = 0x17B6D4u;
    SET_GPR_U32(ctx, 31, 0x17B6DCu);
    ctx->pc = 0x1A4B00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4B00u, 0x17B6D4u, 0x17B6DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17B6DCu;
label_17b6dc:
    // 0x17b6dc: 0xc0cb1f4  jal         func_32C7D0
    ctx->pc = 0x17B6DCu;
    SET_GPR_U32(ctx, 31, 0x17B6E4u);
    ctx->pc = 0x32C7D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32C7D0u, 0x17B6DCu, 0x17B6E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17B6E4u;
label_17b6e4:
    // 0x17b6e4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x17b6e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17b6e8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x17b6e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17b6ec: 0xc0c79fc  jal         func_31E7F0
    ctx->pc = 0x17B6ECu;
    SET_GPR_U32(ctx, 31, 0x17B6F4u);
    ctx->pc = 0x17B6F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17B6ECu;
    // 0x17b6f0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31E7F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31E7F0u, 0x17B6ECu, 0x17B6F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17B6F4u;
label_17b6f4:
    // 0x17b6f4: 0x3c03009f  lui         $v1, 0x9F
    ctx->pc = 0x17b6f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)159 << 16));
    // 0x17b6f8: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x17b6f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x17b6fc: 0xa0609780  sb          $zero, -0x6880($v1)
    ctx->pc = 0x17b6fcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4294940544), (uint8_t)GPR_U32(ctx, 0));
    // 0x17b700: 0x24040201  addiu       $a0, $zero, 0x201
    ctx->pc = 0x17b700u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 513));
    // 0x17b704: 0xc06814c  jal         func_1A0530
    ctx->pc = 0x17B704u;
    SET_GPR_U32(ctx, 31, 0x17B70Cu);
    ctx->pc = 0x17B708u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17B704u;
    // 0x17b708: 0xa040dad8  sb          $zero, -0x2528($v0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294957784), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0530u, 0x17B704u, 0x17B70Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17B70Cu;
label_17b70c:
    // 0x17b70c: 0x3c040016  lui         $a0, 0x16
    ctx->pc = 0x17b70cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)22 << 16));
    // 0x17b710: 0xc0558d0  jal         func_156340
    ctx->pc = 0x17B710u;
    SET_GPR_U32(ctx, 31, 0x17B718u);
    ctx->pc = 0x17B714u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17B710u;
    // 0x17b714: 0x24843b80  addiu       $a0, $a0, 0x3B80 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 15232));
    ctx->in_delay_slot = false;
    ctx->pc = 0x156340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x156340u, 0x17B710u, 0x17B718u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17B718u;
label_17b718:
    // 0x17b718: 0xc068300  jal         func_1A0C00
    ctx->pc = 0x17B718u;
    SET_GPR_U32(ctx, 31, 0x17B720u);
    ctx->pc = 0x1A0C00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0C00u, 0x17B718u, 0x17B720u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17B720u;
label_17b720:
    // 0x17b720: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x17b720u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x17b724: 0xc05d8bc  jal         func_1762F0
    ctx->pc = 0x17B724u;
    SET_GPR_U32(ctx, 31, 0x17B72Cu);
    ctx->pc = 0x17B728u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17B724u;
    // 0x17b728: 0xa440b690  sh          $zero, -0x4970($v0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 2), 4294948496), (uint16_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1762F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1762F0u, 0x17B724u, 0x17B72Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17B72Cu;
label_17b72c:
    // 0x17b72c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x17b72cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17b730: 0xc05da28  jal         func_1768A0
    ctx->pc = 0x17B730u;
    SET_GPR_U32(ctx, 31, 0x17B738u);
    ctx->pc = 0x17B734u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17B730u;
    // 0x17b734: 0x24050009  addiu       $a1, $zero, 0x9 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1768A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1768A0u, 0x17B730u, 0x17B738u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17B738u;
label_17b738:
    // 0x17b738: 0xc05e114  jal         func_178450
    ctx->pc = 0x17B738u;
    SET_GPR_U32(ctx, 31, 0x17B740u);
    ctx->pc = 0x178450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x178450u, 0x17B738u, 0x17B740u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17B740u;
label_17b740:
    // 0x17b740: 0x3c040018  lui         $a0, 0x18
    ctx->pc = 0x17b740u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)24 << 16));
    // 0x17b744: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x17b744u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17b748: 0xc055768  jal         func_155DA0
    ctx->pc = 0x17B748u;
    SET_GPR_U32(ctx, 31, 0x17B750u);
    ctx->pc = 0x17B74Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17B748u;
    // 0x17b74c: 0x2484b770  addiu       $a0, $a0, -0x4890 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948720));
    ctx->in_delay_slot = false;
    ctx->pc = 0x155DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155DA0u, 0x17B748u, 0x17B750u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17B750u;
label_17b750:
    // 0x17b750: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x17b750u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x17b754: 0xa060b578  sb          $zero, -0x4A88($v1)
    ctx->pc = 0x17b754u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4294948216), (uint8_t)GPR_U32(ctx, 0));
    // 0x17b758: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x17b758u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17b75c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x17b75cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17b760: 0x3e00008  jr          $ra
    ctx->pc = 0x17B760u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17B764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B760u;
        // 0x17b764: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17B760u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17B768u;
    // 0x17b768: 0x0  nop
    ctx->pc = 0x17b768u;
    // NOP
    // 0x17b76c: 0x0  nop
    ctx->pc = 0x17b76cu;
    // NOP
    // 0x17b770: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x17b770u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x17b774: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x17b774u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x17b778: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x17b778u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x17b77c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x17b77cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x17b780: 0x8063b578  lb          $v1, -0x4A88($v1)
    ctx->pc = 0x17b780u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294948216)));
    // 0x17b784: 0x10600014  beqz        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x17B784u;
    {
        const bool branch_taken_0x17b784 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x17B788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B784u;
        // 0x17b788: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17b784) {
            ctx->pc = 0x17B7D8u;
            goto label_17b7d8;
        }
    }
    ctx->pc = 0x17B78Cu;
    // 0x17b78c: 0xc066e00  jal         func_19B800
    ctx->pc = 0x17B78Cu;
    SET_GPR_U32(ctx, 31, 0x17B794u);
    ctx->pc = 0x17B790u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17B78Cu;
    // 0x17b790: 0x2404ffff  addiu       $a0, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B800u, 0x17B78Cu, 0x17B794u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17B794u;
label_17b794:
    // 0x17b794: 0x3c034386  lui         $v1, 0x4386
    ctx->pc = 0x17b794u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17286 << 16));
    // 0x17b798: 0x3c0243d0  lui         $v0, 0x43D0
    ctx->pc = 0x17b798u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17360 << 16));
    // 0x17b79c: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x17b79cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x17b7a0: 0x3c040036  lui         $a0, 0x36
    ctx->pc = 0x17b7a0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)54 << 16));
    // 0x17b7a4: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x17b7a4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x17b7a8: 0x3c034178  lui         $v1, 0x4178
    ctx->pc = 0x17b7a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16760 << 16));
    // 0x17b7ac: 0x3c024400  lui         $v0, 0x4400
    ctx->pc = 0x17b7acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17408 << 16));
    // 0x17b7b0: 0x3c05009c  lui         $a1, 0x9C
    ctx->pc = 0x17b7b0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)156 << 16));
    // 0x17b7b4: 0x44837000  mtc1        $v1, $f14
    ctx->pc = 0x17b7b4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x17b7b8: 0x24846230  addiu       $a0, $a0, 0x6230
    ctx->pc = 0x17b7b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 25136));
    // 0x17b7bc: 0x44827800  mtc1        $v0, $f15
    ctx->pc = 0x17b7bcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
    // 0x17b7c0: 0x24a5d538  addiu       $a1, $a1, -0x2AC8
    ctx->pc = 0x17b7c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956344));
    // 0x17b7c4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x17b7c4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17b7c8: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x17b7c8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17b7cc: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x17b7ccu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x17b7d0: 0xc05e230  jal         func_1788C0
    ctx->pc = 0x17B7D0u;
    SET_GPR_U32(ctx, 31, 0x17B7D8u);
    ctx->pc = 0x17B7D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17B7D0u;
    // 0x17b7d4: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1788C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1788C0u, 0x17B7D0u, 0x17B7D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17B7D8u;
label_17b7d8:
    // 0x17b7d8: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x17b7d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x17b7dc: 0x9463b690  lhu         $v1, -0x4970($v1)
    ctx->pc = 0x17b7dcu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4294948496)));
    // 0x17b7e0: 0x28610e11  slti        $at, $v1, 0xE11
    ctx->pc = 0x17b7e0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3601) ? 1 : 0);
    // 0x17b7e4: 0x14200007  bnez        $at, . + 4 + (0x7 << 2)
    ctx->pc = 0x17B7E4u;
    {
        const bool branch_taken_0x17b7e4 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x17b7e4) {
            ctx->pc = 0x17B804u;
            goto label_17b804;
        }
    }
    ctx->pc = 0x17B7ECu;
    // 0x17b7ec: 0x3c040018  lui         $a0, 0x18
    ctx->pc = 0x17b7ecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)24 << 16));
    // 0x17b7f0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x17b7f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17b7f4: 0xc055768  jal         func_155DA0
    ctx->pc = 0x17B7F4u;
    SET_GPR_U32(ctx, 31, 0x17B7FCu);
    ctx->pc = 0x17B7F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17B7F4u;
    // 0x17b7f8: 0x2484b830  addiu       $a0, $a0, -0x47D0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948912));
    ctx->in_delay_slot = false;
    ctx->pc = 0x155DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155DA0u, 0x17B7F4u, 0x17B7FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17B7FCu;
label_17b7fc:
    // 0x17b7fc: 0xc06833c  jal         func_1A0CF0
    ctx->pc = 0x17B7FCu;
    SET_GPR_U32(ctx, 31, 0x17B804u);
    ctx->pc = 0x1A0CF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0CF0u, 0x17B7FCu, 0x17B804u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17B804u;
label_17b804:
    // 0x17b804: 0x3c04009c  lui         $a0, 0x9C
    ctx->pc = 0x17b804u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)156 << 16));
    // 0x17b808: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x17b808u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x17b80c: 0x9484b690  lhu         $a0, -0x4970($a0)
    ctx->pc = 0x17b80cu;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4294948496)));
    // 0x17b810: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x17b810u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x17b814: 0xa464b690  sh          $a0, -0x4970($v1)
    ctx->pc = 0x17b814u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4294948496), (uint16_t)GPR_U32(ctx, 4));
    // 0x17b818: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x17b818u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17b81c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x17b81cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17b820: 0x3e00008  jr          $ra
    ctx->pc = 0x17B820u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17B824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B820u;
        // 0x17b824: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17B820u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17B828u;
    // 0x17b828: 0x0  nop
    ctx->pc = 0x17b828u;
    // NOP
    // 0x17b82c: 0x0  nop
    ctx->pc = 0x17b82cu;
    // NOP
    // 0x17b830: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x17b830u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x17b834: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x17b834u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x17b838: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x17b838u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x17b83c: 0xc05e118  jal         func_178460
    ctx->pc = 0x17B83Cu;
    SET_GPR_U32(ctx, 31, 0x17B844u);
    ctx->pc = 0x17B840u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17B83Cu;
    // 0x17b840: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x178460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x178460u, 0x17B83Cu, 0x17B844u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17B844u;
label_17b844:
    // 0x17b844: 0x2163c  dsll32      $v0, $v0, 24
    ctx->pc = 0x17b844u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 24));
    // 0x17b848: 0x2163f  dsra32      $v0, $v0, 24
    ctx->pc = 0x17b848u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 24));
    // 0x17b84c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x17B84Cu;
    {
        const bool branch_taken_0x17b84c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x17b84c) {
            ctx->pc = 0x17B85Cu;
            goto label_17b85c;
        }
    }
    ctx->pc = 0x17B854u;
    // 0x17b854: 0xc05e974  jal         func_17A5D0
    ctx->pc = 0x17B854u;
    SET_GPR_U32(ctx, 31, 0x17B85Cu);
    ctx->pc = 0x17A5D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A5D0u, 0x17B854u, 0x17B85Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17B85Cu;
label_17b85c:
    // 0x17b85c: 0xc05e118  jal         func_178460
    ctx->pc = 0x17B85Cu;
    SET_GPR_U32(ctx, 31, 0x17B864u);
    ctx->pc = 0x178460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x178460u, 0x17B85Cu, 0x17B864u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17B864u;
label_17b864:
    // 0x17b864: 0x2263c  dsll32      $a0, $v0, 24
    ctx->pc = 0x17b864u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 24));
    // 0x17b868: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x17b868u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x17b86c: 0x4263f  dsra32      $a0, $a0, 24
    ctx->pc = 0x17b86cu;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 24));
    // 0x17b870: 0x54830004  bnel        $a0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x17B870u;
    {
        const bool branch_taken_0x17b870 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x17b870) {
            ctx->pc = 0x17B874u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17B870u;
            // 0x17b874: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
            SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x17B884u;
            goto label_17b884;
        }
    }
    ctx->pc = 0x17B878u;
    // 0x17b878: 0xc055770  jal         func_155DC0
    ctx->pc = 0x17B878u;
    SET_GPR_U32(ctx, 31, 0x17B880u);
    ctx->pc = 0x17B87Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17B878u;
    // 0x17b87c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x155DC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155DC0u, 0x17B878u, 0x17B880u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17B880u;
label_17b880:
    // 0x17b880: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x17b880u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_17b884:
    // 0x17b884: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x17b884u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17b888: 0x3e00008  jr          $ra
    ctx->pc = 0x17B888u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17B88Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B888u;
        // 0x17b88c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17B888u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17B890u;
    // 0x17b890: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x17b890u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x17b894: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x17b894u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x17b898: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x17b898u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x17b89c: 0xc05c5f4  jal         func_1717D0
    ctx->pc = 0x17B89Cu;
    SET_GPR_U32(ctx, 31, 0x17B8A4u);
    ctx->pc = 0x17B8A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17B89Cu;
    // 0x17b8a0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1717D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1717D0u, 0x17B89Cu, 0x17B8A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17B8A4u;
label_17b8a4:
    // 0x17b8a4: 0xc055684  jal         func_155A10
    ctx->pc = 0x17B8A4u;
    SET_GPR_U32(ctx, 31, 0x17B8ACu);
    ctx->pc = 0x155A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155A10u, 0x17B8A4u, 0x17B8ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17B8ACu;
label_17b8ac:
    // 0x17b8ac: 0xc05347c  jal         func_14D1F0
    ctx->pc = 0x17B8ACu;
    SET_GPR_U32(ctx, 31, 0x17B8B4u);
    ctx->pc = 0x14D1F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14D1F0u, 0x17B8ACu, 0x17B8B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17B8B4u;
label_17b8b4:
    // 0x17b8b4: 0xc068330  jal         func_1A0CC0
    ctx->pc = 0x17B8B4u;
    SET_GPR_U32(ctx, 31, 0x17B8BCu);
    ctx->pc = 0x1A0CC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0CC0u, 0x17B8B4u, 0x17B8BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17B8BCu;
label_17b8bc:
    // 0x17b8bc: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x17b8bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17b8c0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x17b8c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17b8c4: 0xc0c79fc  jal         func_31E7F0
    ctx->pc = 0x17B8C4u;
    SET_GPR_U32(ctx, 31, 0x17B8CCu);
    ctx->pc = 0x17B8C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17B8C4u;
    // 0x17b8c8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31E7F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31E7F0u, 0x17B8C4u, 0x17B8CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17B8CCu;
label_17b8cc:
    // 0x17b8cc: 0xc06814c  jal         func_1A0530
    ctx->pc = 0x17B8CCu;
    SET_GPR_U32(ctx, 31, 0x17B8D4u);
    ctx->pc = 0x17B8D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17B8CCu;
    // 0x17b8d0: 0x24040307  addiu       $a0, $zero, 0x307 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 775));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0530u, 0x17B8CCu, 0x17B8D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17B8D4u;
label_17b8d4:
    // 0x17b8d4: 0xc05d8bc  jal         func_1762F0
    ctx->pc = 0x17B8D4u;
    SET_GPR_U32(ctx, 31, 0x17B8DCu);
    ctx->pc = 0x1762F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1762F0u, 0x17B8D4u, 0x17B8DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17B8DCu;
label_17b8dc:
    // 0x17b8dc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x17b8dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17b8e0: 0xc05da28  jal         func_1768A0
    ctx->pc = 0x17B8E0u;
    SET_GPR_U32(ctx, 31, 0x17B8E8u);
    ctx->pc = 0x17B8E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17B8E0u;
    // 0x17b8e4: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1768A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1768A0u, 0x17B8E0u, 0x17B8E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17B8E8u;
label_17b8e8:
    // 0x17b8e8: 0xc05e114  jal         func_178450
    ctx->pc = 0x17B8E8u;
    SET_GPR_U32(ctx, 31, 0x17B8F0u);
    ctx->pc = 0x178450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x178450u, 0x17B8E8u, 0x17B8F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17B8F0u;
label_17b8f0:
    // 0x17b8f0: 0x3c040018  lui         $a0, 0x18
    ctx->pc = 0x17b8f0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)24 << 16));
    // 0x17b8f4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x17b8f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17b8f8: 0xc055768  jal         func_155DA0
    ctx->pc = 0x17B8F8u;
    SET_GPR_U32(ctx, 31, 0x17B900u);
    ctx->pc = 0x17B8FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17B8F8u;
    // 0x17b8fc: 0x2484b920  addiu       $a0, $a0, -0x46E0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949152));
    ctx->in_delay_slot = false;
    ctx->pc = 0x155DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155DA0u, 0x17B8F8u, 0x17B900u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17B900u;
label_17b900:
    // 0x17b900: 0x3c04009c  lui         $a0, 0x9C
    ctx->pc = 0x17b900u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)156 << 16));
    // 0x17b904: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x17b904u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x17b908: 0xa080a220  sb          $zero, -0x5DE0($a0)
    ctx->pc = 0x17b908u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 4294943264), (uint8_t)GPR_U32(ctx, 0));
    // 0x17b90c: 0xac60a228  sw          $zero, -0x5DD8($v1)
    ctx->pc = 0x17b90cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294943272), GPR_U32(ctx, 0));
    // 0x17b910: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x17b910u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17b914: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x17b914u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17b918: 0x3e00008  jr          $ra
    ctx->pc = 0x17B918u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17B91Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B918u;
        // 0x17b91c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17B918u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17B920u;
    // 0x17b920: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x17b920u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x17b924: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x17b924u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x17b928: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x17b928u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x17b92c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x17b92cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x17b930: 0x8c63a228  lw          $v1, -0x5DD8($v1)
    ctx->pc = 0x17b930u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294943272)));
    // 0x17b934: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x17b934u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17b938: 0x2c6100c9  sltiu       $at, $v1, 0xC9
    ctx->pc = 0x17b938u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)201) ? 1 : 0);
    // 0x17b93c: 0x14200004  bnez        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x17B93Cu;
    {
        const bool branch_taken_0x17b93c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x17B940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B93Cu;
        // 0x17b940: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17b93c) {
            ctx->pc = 0x17B950u;
            goto label_17b950;
        }
    }
    ctx->pc = 0x17B944u;
    // 0x17b944: 0xc05da4c  jal         func_176930
    ctx->pc = 0x17B944u;
    SET_GPR_U32(ctx, 31, 0x17B94Cu);
    ctx->pc = 0x176930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176930u, 0x17B944u, 0x17B94Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17B94Cu;
label_17b94c:
    // 0x17b94c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x17b94cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_17b950:
    // 0x17b950: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x17b950u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x17b954: 0x8063a220  lb          $v1, -0x5DE0($v1)
    ctx->pc = 0x17b954u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294943264)));
    // 0x17b958: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x17B958u;
    {
        const bool branch_taken_0x17b958 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x17b958) {
            ctx->pc = 0x17B968u;
            goto label_17b968;
        }
    }
    ctx->pc = 0x17B960u;
    // 0x17b960: 0x10800009  beqz        $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x17B960u;
    {
        const bool branch_taken_0x17b960 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x17b960) {
            ctx->pc = 0x17B988u;
            goto label_17b988;
        }
    }
    ctx->pc = 0x17B968u;
label_17b968:
    // 0x17b968: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x17b968u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x17b96c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x17b96cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17b970: 0xa044a218  sb          $a0, -0x5DE8($v0)
    ctx->pc = 0x17b970u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294943256), (uint8_t)GPR_U32(ctx, 4));
    // 0x17b974: 0x3c040018  lui         $a0, 0x18
    ctx->pc = 0x17b974u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)24 << 16));
    // 0x17b978: 0xc055768  jal         func_155DA0
    ctx->pc = 0x17B978u;
    SET_GPR_U32(ctx, 31, 0x17B980u);
    ctx->pc = 0x17B97Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17B978u;
    // 0x17b97c: 0x2484b9c0  addiu       $a0, $a0, -0x4640 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949312));
    ctx->in_delay_slot = false;
    ctx->pc = 0x155DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155DA0u, 0x17B978u, 0x17B980u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17B980u;
label_17b980:
    // 0x17b980: 0xc068330  jal         func_1A0CC0
    ctx->pc = 0x17B980u;
    SET_GPR_U32(ctx, 31, 0x17B988u);
    ctx->pc = 0x1A0CC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0CC0u, 0x17B980u, 0x17B988u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17B988u;
label_17b988:
    // 0x17b988: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x17b988u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x17b98c: 0x8063b578  lb          $v1, -0x4A88($v1)
    ctx->pc = 0x17b98cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294948216)));
    // 0x17b990: 0x50600007  beql        $v1, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x17B990u;
    {
        const bool branch_taken_0x17b990 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x17b990) {
            ctx->pc = 0x17B994u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17B990u;
            // 0x17b994: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
            SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x17B9B0u;
            goto label_17b9b0;
        }
    }
    ctx->pc = 0x17B998u;
    // 0x17b998: 0x3c04009c  lui         $a0, 0x9C
    ctx->pc = 0x17b998u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)156 << 16));
    // 0x17b99c: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x17b99cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x17b9a0: 0x8c84a228  lw          $a0, -0x5DD8($a0)
    ctx->pc = 0x17b9a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294943272)));
    // 0x17b9a4: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x17b9a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x17b9a8: 0xac64a228  sw          $a0, -0x5DD8($v1)
    ctx->pc = 0x17b9a8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294943272), GPR_U32(ctx, 4));
    // 0x17b9ac: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x17b9acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_17b9b0:
    // 0x17b9b0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x17b9b0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17b9b4: 0x3e00008  jr          $ra
    ctx->pc = 0x17B9B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17B9B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B9B4u;
        // 0x17b9b8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17B9B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17B9BCu;
    // 0x17b9bc: 0x0  nop
    ctx->pc = 0x17b9bcu;
    // NOP
    // 0x17b9c0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x17b9c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x17b9c4: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x17b9c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x17b9c8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x17b9c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x17b9cc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x17b9ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x17b9d0: 0x8042a218  lb          $v0, -0x5DE8($v0)
    ctx->pc = 0x17b9d0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294943256)));
    // 0x17b9d4: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x17B9D4u;
    {
        const bool branch_taken_0x17b9d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17B9D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B9D4u;
        // 0x17b9d8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17b9d4) {
            ctx->pc = 0x17BA30u;
            goto label_17ba30;
        }
    }
    ctx->pc = 0x17B9DCu;
    // 0x17b9dc: 0xc0538d4  jal         func_14E350
    ctx->pc = 0x17B9DCu;
    SET_GPR_U32(ctx, 31, 0x17B9E4u);
    ctx->pc = 0x14E350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14E350u, 0x17B9DCu, 0x17B9E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17B9E4u;
label_17b9e4:
    // 0x17b9e4: 0x2163c  dsll32      $v0, $v0, 24
    ctx->pc = 0x17b9e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 24));
    // 0x17b9e8: 0x2163f  dsra32      $v0, $v0, 24
    ctx->pc = 0x17b9e8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 24));
    // 0x17b9ec: 0x14400010  bnez        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x17B9ECu;
    {
        const bool branch_taken_0x17b9ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x17b9ec) {
            ctx->pc = 0x17BA30u;
            goto label_17ba30;
        }
    }
    ctx->pc = 0x17B9F4u;
    // 0x17b9f4: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x17b9f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x17b9f8: 0x8c42b698  lw          $v0, -0x4968($v0)
    ctx->pc = 0x17b9f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294948504)));
    // 0x17b9fc: 0x284100ff  slti        $at, $v0, 0xFF
    ctx->pc = 0x17b9fcu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)255) ? 1 : 0);
    // 0x17ba00: 0x50200007  beql        $at, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x17BA00u;
    {
        const bool branch_taken_0x17ba00 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x17ba00) {
            ctx->pc = 0x17BA04u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17BA00u;
            // 0x17ba04: 0x2203c  dsll32      $a0, $v0, 0 (Delay Slot)
            SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x17BA20u;
            goto label_17ba20;
        }
    }
    ctx->pc = 0x17BA08u;
    // 0x17ba08: 0x24430002  addiu       $v1, $v0, 0x2
    ctx->pc = 0x17ba08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x17ba0c: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x17ba0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x17ba10: 0xac43b698  sw          $v1, -0x4968($v0)
    ctx->pc = 0x17ba10u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294948504), GPR_U32(ctx, 3));
    // 0x17ba14: 0x3103c  dsll32      $v0, $v1, 0
    ctx->pc = 0x17ba14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 0));
    // 0x17ba18: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x17ba18u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x17ba1c: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x17ba1cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
label_17ba20:
    // 0x17ba20: 0xc05e900  jal         func_17A400
    ctx->pc = 0x17BA20u;
    SET_GPR_U32(ctx, 31, 0x17BA28u);
    ctx->pc = 0x17BA24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17BA20u;
    // 0x17ba24: 0x4203f  dsra32      $a0, $a0, 0 (Delay Slot)
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A400u, 0x17BA20u, 0x17BA28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17BA28u;
label_17ba28:
    // 0x17ba28: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x17BA28u;
    {
        const bool branch_taken_0x17ba28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17BA2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17BA28u;
        // 0x17ba2c: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17ba28) {
            ctx->pc = 0x17BA94u;
            goto label_17ba94;
        }
    }
    ctx->pc = 0x17BA30u;
label_17ba30:
    // 0x17ba30: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x17ba30u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x17ba34: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x17ba34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x17ba38: 0xac60b698  sw          $zero, -0x4968($v1)
    ctx->pc = 0x17ba38u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294948504), GPR_U32(ctx, 0));
    // 0x17ba3c: 0xc05e118  jal         func_178460
    ctx->pc = 0x17BA3Cu;
    SET_GPR_U32(ctx, 31, 0x17BA44u);
    ctx->pc = 0x17BA40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17BA3Cu;
    // 0x17ba40: 0xa040a218  sb          $zero, -0x5DE8($v0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294943256), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x178460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x178460u, 0x17BA3Cu, 0x17BA44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17BA44u;
label_17ba44:
    // 0x17ba44: 0x2163c  dsll32      $v0, $v0, 24
    ctx->pc = 0x17ba44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 24));
    // 0x17ba48: 0x2163f  dsra32      $v0, $v0, 24
    ctx->pc = 0x17ba48u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 24));
    // 0x17ba4c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x17BA4Cu;
    {
        const bool branch_taken_0x17ba4c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x17ba4c) {
            ctx->pc = 0x17BA5Cu;
            goto label_17ba5c;
        }
    }
    ctx->pc = 0x17BA54u;
    // 0x17ba54: 0xc05e974  jal         func_17A5D0
    ctx->pc = 0x17BA54u;
    SET_GPR_U32(ctx, 31, 0x17BA5Cu);
    ctx->pc = 0x17A5D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A5D0u, 0x17BA54u, 0x17BA5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17BA5Cu;
label_17ba5c:
    // 0x17ba5c: 0xc05e118  jal         func_178460
    ctx->pc = 0x17BA5Cu;
    SET_GPR_U32(ctx, 31, 0x17BA64u);
    ctx->pc = 0x178460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x178460u, 0x17BA5Cu, 0x17BA64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17BA64u;
label_17ba64:
    // 0x17ba64: 0x2263c  dsll32      $a0, $v0, 24
    ctx->pc = 0x17ba64u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 24));
    // 0x17ba68: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x17ba68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x17ba6c: 0x4263f  dsra32      $a0, $a0, 24
    ctx->pc = 0x17ba6cu;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 24));
    // 0x17ba70: 0x14830007  bne         $a0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x17BA70u;
    {
        const bool branch_taken_0x17ba70 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x17ba70) {
            ctx->pc = 0x17BA90u;
            goto label_17ba90;
        }
    }
    ctx->pc = 0x17BA78u;
    // 0x17ba78: 0xc055684  jal         func_155A10
    ctx->pc = 0x17BA78u;
    SET_GPR_U32(ctx, 31, 0x17BA80u);
    ctx->pc = 0x155A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155A10u, 0x17BA78u, 0x17BA80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17BA80u;
label_17ba80:
    // 0x17ba80: 0x3c04001a  lui         $a0, 0x1A
    ctx->pc = 0x17ba80u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)26 << 16));
    // 0x17ba84: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x17ba84u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17ba88: 0xc055768  jal         func_155DA0
    ctx->pc = 0x17BA88u;
    SET_GPR_U32(ctx, 31, 0x17BA90u);
    ctx->pc = 0x17BA8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17BA88u;
    // 0x17ba8c: 0x2484d740  addiu       $a0, $a0, -0x28C0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294956864));
    ctx->in_delay_slot = false;
    ctx->pc = 0x155DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155DA0u, 0x17BA88u, 0x17BA90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17BA90u;
label_17ba90:
    // 0x17ba90: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x17ba90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_17ba94:
    // 0x17ba94: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x17ba94u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17ba98: 0x3e00008  jr          $ra
    ctx->pc = 0x17BA98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17BA9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17BA98u;
        // 0x17ba9c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17BA98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17BAA0u;
    // 0x17baa0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x17baa0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x17baa4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x17baa4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17baa8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x17baa8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x17baac: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x17baacu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17bab0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x17bab0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x17bab4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x17bab4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17bab8: 0xc0c79fc  jal         func_31E7F0
    ctx->pc = 0x17BAB8u;
    SET_GPR_U32(ctx, 31, 0x17BAC0u);
    ctx->pc = 0x17BABCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17BAB8u;
    // 0x17babc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31E7F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31E7F0u, 0x17BAB8u, 0x17BAC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17BAC0u;
label_17bac0:
    // 0x17bac0: 0xc05e118  jal         func_178460
    ctx->pc = 0x17BAC0u;
    SET_GPR_U32(ctx, 31, 0x17BAC8u);
    ctx->pc = 0x178460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x178460u, 0x17BAC0u, 0x17BAC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17BAC8u;
label_17bac8:
    // 0x17bac8: 0x2163c  dsll32      $v0, $v0, 24
    ctx->pc = 0x17bac8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 24));
    // 0x17bacc: 0x2163f  dsra32      $v0, $v0, 24
    ctx->pc = 0x17baccu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 24));
    // 0x17bad0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x17BAD0u;
    {
        const bool branch_taken_0x17bad0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x17bad0) {
            ctx->pc = 0x17BAE0u;
            goto label_17bae0;
        }
    }
    ctx->pc = 0x17BAD8u;
    // 0x17bad8: 0xc05e974  jal         func_17A5D0
    ctx->pc = 0x17BAD8u;
    SET_GPR_U32(ctx, 31, 0x17BAE0u);
    ctx->pc = 0x17A5D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A5D0u, 0x17BAD8u, 0x17BAE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17BAE0u;
label_17bae0:
    // 0x17bae0: 0xc05e118  jal         func_178460
    ctx->pc = 0x17BAE0u;
    SET_GPR_U32(ctx, 31, 0x17BAE8u);
    ctx->pc = 0x178460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x178460u, 0x17BAE0u, 0x17BAE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17BAE8u;
label_17bae8:
    // 0x17bae8: 0x2263c  dsll32      $a0, $v0, 24
    ctx->pc = 0x17bae8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 24));
    // 0x17baec: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x17baecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x17baf0: 0x4263f  dsra32      $a0, $a0, 24
    ctx->pc = 0x17baf0u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 24));
    // 0x17baf4: 0x54830004  bnel        $a0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x17BAF4u;
    {
        const bool branch_taken_0x17baf4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x17baf4) {
            ctx->pc = 0x17BAF8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17BAF4u;
            // 0x17baf8: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
            SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x17BB08u;
            goto label_17bb08;
        }
    }
    ctx->pc = 0x17BAFCu;
    // 0x17bafc: 0xc055770  jal         func_155DC0
    ctx->pc = 0x17BAFCu;
    SET_GPR_U32(ctx, 31, 0x17BB04u);
    ctx->pc = 0x17BB00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17BAFCu;
    // 0x17bb00: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x155DC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155DC0u, 0x17BAFCu, 0x17BB04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17BB04u;
label_17bb04:
    // 0x17bb04: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x17bb04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_17bb08:
    // 0x17bb08: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x17bb08u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17bb0c: 0x3e00008  jr          $ra
    ctx->pc = 0x17BB0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17BB10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17BB0Cu;
        // 0x17bb10: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17BB0Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17BB14u;
    // 0x17bb14: 0x0  nop
    ctx->pc = 0x17bb14u;
    // NOP
    // 0x17bb18: 0x0  nop
    ctx->pc = 0x17bb18u;
    // NOP
    // 0x17bb1c: 0x0  nop
    ctx->pc = 0x17bb1cu;
    // NOP
    // 0x17bb20: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x17bb20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x17bb24: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x17bb24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x17bb28: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x17bb28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x17bb2c: 0xc05c5f4  jal         func_1717D0
    ctx->pc = 0x17BB2Cu;
    SET_GPR_U32(ctx, 31, 0x17BB34u);
    ctx->pc = 0x17BB30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17BB2Cu;
    // 0x17bb30: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1717D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1717D0u, 0x17BB2Cu, 0x17BB34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17BB34u;
label_17bb34:
    // 0x17bb34: 0xc055684  jal         func_155A10
    ctx->pc = 0x17BB34u;
    SET_GPR_U32(ctx, 31, 0x17BB3Cu);
    ctx->pc = 0x155A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155A10u, 0x17BB34u, 0x17BB3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17BB3Cu;
label_17bb3c:
    // 0x17bb3c: 0xc05347c  jal         func_14D1F0
    ctx->pc = 0x17BB3Cu;
    SET_GPR_U32(ctx, 31, 0x17BB44u);
    ctx->pc = 0x14D1F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14D1F0u, 0x17BB3Cu, 0x17BB44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17BB44u;
label_17bb44:
    // 0x17bb44: 0xc068300  jal         func_1A0C00
    ctx->pc = 0x17BB44u;
    SET_GPR_U32(ctx, 31, 0x17BB4Cu);
    ctx->pc = 0x1A0C00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0C00u, 0x17BB44u, 0x17BB4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17BB4Cu;
label_17bb4c:
    // 0x17bb4c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x17bb4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17bb50: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x17bb50u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17bb54: 0xc0c79fc  jal         func_31E7F0
    ctx->pc = 0x17BB54u;
    SET_GPR_U32(ctx, 31, 0x17BB5Cu);
    ctx->pc = 0x17BB58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17BB54u;
    // 0x17bb58: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31E7F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31E7F0u, 0x17BB54u, 0x17BB5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17BB5Cu;
label_17bb5c:
    // 0x17bb5c: 0xc06814c  jal         func_1A0530
    ctx->pc = 0x17BB5Cu;
    SET_GPR_U32(ctx, 31, 0x17BB64u);
    ctx->pc = 0x17BB60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17BB5Cu;
    // 0x17bb60: 0x24040100  addiu       $a0, $zero, 0x100 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0530u, 0x17BB5Cu, 0x17BB64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17BB64u;
label_17bb64:
    // 0x17bb64: 0x3c040033  lui         $a0, 0x33
    ctx->pc = 0x17bb64u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)51 << 16));
    // 0x17bb68: 0xc0558d0  jal         func_156340
    ctx->pc = 0x17BB68u;
    SET_GPR_U32(ctx, 31, 0x17BB70u);
    ctx->pc = 0x17BB6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17BB68u;
    // 0x17bb6c: 0x24849670  addiu       $a0, $a0, -0x6990 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294940272));
    ctx->in_delay_slot = false;
    ctx->pc = 0x156340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x156340u, 0x17BB68u, 0x17BB70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17BB70u;
label_17bb70:
    // 0x17bb70: 0xc05d8bc  jal         func_1762F0
    ctx->pc = 0x17BB70u;
    SET_GPR_U32(ctx, 31, 0x17BB78u);
    ctx->pc = 0x1762F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1762F0u, 0x17BB70u, 0x17BB78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17BB78u;
label_17bb78:
    // 0x17bb78: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x17bb78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17bb7c: 0xc05da28  jal         func_1768A0
    ctx->pc = 0x17BB7Cu;
    SET_GPR_U32(ctx, 31, 0x17BB84u);
    ctx->pc = 0x17BB80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17BB7Cu;
    // 0x17bb80: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1768A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1768A0u, 0x17BB7Cu, 0x17BB84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17BB84u;
label_17bb84:
    // 0x17bb84: 0xc05e114  jal         func_178450
    ctx->pc = 0x17BB84u;
    SET_GPR_U32(ctx, 31, 0x17BB8Cu);
    ctx->pc = 0x178450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x178450u, 0x17BB84u, 0x17BB8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17BB8Cu;
label_17bb8c:
    // 0x17bb8c: 0x3c040018  lui         $a0, 0x18
    ctx->pc = 0x17bb8cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)24 << 16));
    // 0x17bb90: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x17bb90u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17bb94: 0xc055768  jal         func_155DA0
    ctx->pc = 0x17BB94u;
    SET_GPR_U32(ctx, 31, 0x17BB9Cu);
    ctx->pc = 0x17BB98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17BB94u;
    // 0x17bb98: 0x2484bbd0  addiu       $a0, $a0, -0x4430 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949840));
    ctx->in_delay_slot = false;
    ctx->pc = 0x155DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155DA0u, 0x17BB94u, 0x17BB9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17BB9Cu;
label_17bb9c:
    // 0x17bb9c: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x17bb9cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x17bba0: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x17bba0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x17bba4: 0xa060a220  sb          $zero, -0x5DE0($v1)
    ctx->pc = 0x17bba4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4294943264), (uint8_t)GPR_U32(ctx, 0));
    // 0x17bba8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x17bba8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17bbac: 0xc052f0c  jal         func_14BC30
    ctx->pc = 0x17BBACu;
    SET_GPR_U32(ctx, 31, 0x17BBB4u);
    ctx->pc = 0x17BBB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17BBACu;
    // 0x17bbb0: 0xac40a228  sw          $zero, -0x5DD8($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294943272), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14BC30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14BC30u, 0x17BBACu, 0x17BBB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17BBB4u;
label_17bbb4:
    // 0x17bbb4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x17bbb4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17bbb8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x17bbb8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17bbbc: 0x3e00008  jr          $ra
    ctx->pc = 0x17BBBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17BBC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17BBBCu;
        // 0x17bbc0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17BBBCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17BBC4u;
    // 0x17bbc4: 0x0  nop
    ctx->pc = 0x17bbc4u;
    // NOP
    // 0x17bbc8: 0x0  nop
    ctx->pc = 0x17bbc8u;
    // NOP
    // 0x17bbcc: 0x0  nop
    ctx->pc = 0x17bbccu;
    // NOP
    // 0x17bbd0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x17bbd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x17bbd4: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x17bbd4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x17bbd8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x17bbd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x17bbdc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x17bbdcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x17bbe0: 0x8c63a228  lw          $v1, -0x5DD8($v1)
    ctx->pc = 0x17bbe0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294943272)));
    // 0x17bbe4: 0x2c6105ab  sltiu       $at, $v1, 0x5AB
    ctx->pc = 0x17bbe4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1451) ? 1 : 0);
    // 0x17bbe8: 0x14200014  bnez        $at, . + 4 + (0x14 << 2)
    ctx->pc = 0x17BBE8u;
    {
        const bool branch_taken_0x17bbe8 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x17BBECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17BBE8u;
        // 0x17bbec: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17bbe8) {
            ctx->pc = 0x17BC3Cu;
            goto label_17bc3c;
        }
    }
    ctx->pc = 0x17BBF0u;
    // 0x17bbf0: 0xc066e00  jal         func_19B800
    ctx->pc = 0x17BBF0u;
    SET_GPR_U32(ctx, 31, 0x17BBF8u);
    ctx->pc = 0x17BBF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17BBF0u;
    // 0x17bbf4: 0x2404ffff  addiu       $a0, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B800u, 0x17BBF0u, 0x17BBF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17BBF8u;
label_17bbf8:
    // 0x17bbf8: 0x3c034386  lui         $v1, 0x4386
    ctx->pc = 0x17bbf8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17286 << 16));
    // 0x17bbfc: 0x3c0243d0  lui         $v0, 0x43D0
    ctx->pc = 0x17bbfcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17360 << 16));
    // 0x17bc00: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x17bc00u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x17bc04: 0x3c040036  lui         $a0, 0x36
    ctx->pc = 0x17bc04u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)54 << 16));
    // 0x17bc08: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x17bc08u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x17bc0c: 0x3c034178  lui         $v1, 0x4178
    ctx->pc = 0x17bc0cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16760 << 16));
    // 0x17bc10: 0x3c024400  lui         $v0, 0x4400
    ctx->pc = 0x17bc10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17408 << 16));
    // 0x17bc14: 0x3c05009c  lui         $a1, 0x9C
    ctx->pc = 0x17bc14u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)156 << 16));
    // 0x17bc18: 0x44837000  mtc1        $v1, $f14
    ctx->pc = 0x17bc18u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x17bc1c: 0x24846230  addiu       $a0, $a0, 0x6230
    ctx->pc = 0x17bc1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 25136));
    // 0x17bc20: 0x44827800  mtc1        $v0, $f15
    ctx->pc = 0x17bc20u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
    // 0x17bc24: 0x24a5d538  addiu       $a1, $a1, -0x2AC8
    ctx->pc = 0x17bc24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956344));
    // 0x17bc28: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x17bc28u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17bc2c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x17bc2cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17bc30: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x17bc30u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x17bc34: 0xc05e230  jal         func_1788C0
    ctx->pc = 0x17BC34u;
    SET_GPR_U32(ctx, 31, 0x17BC3Cu);
    ctx->pc = 0x17BC38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17BC34u;
    // 0x17bc38: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1788C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1788C0u, 0x17BC34u, 0x17BC3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17BC3Cu;
label_17bc3c:
    // 0x17bc3c: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x17bc3cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x17bc40: 0x8063b578  lb          $v1, -0x4A88($v1)
    ctx->pc = 0x17bc40u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294948216)));
    // 0x17bc44: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x17BC44u;
    {
        const bool branch_taken_0x17bc44 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x17bc44) {
            ctx->pc = 0x17BC60u;
            goto label_17bc60;
        }
    }
    ctx->pc = 0x17BC4Cu;
    // 0x17bc4c: 0x3c04009c  lui         $a0, 0x9C
    ctx->pc = 0x17bc4cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)156 << 16));
    // 0x17bc50: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x17bc50u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x17bc54: 0x8c84a228  lw          $a0, -0x5DD8($a0)
    ctx->pc = 0x17bc54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294943272)));
    // 0x17bc58: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x17bc58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x17bc5c: 0xac64a228  sw          $a0, -0x5DD8($v1)
    ctx->pc = 0x17bc5cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294943272), GPR_U32(ctx, 4));
label_17bc60:
    // 0x17bc60: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x17bc60u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x17bc64: 0x8063a220  lb          $v1, -0x5DE0($v1)
    ctx->pc = 0x17bc64u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294943264)));
    // 0x17bc68: 0x50600008  beql        $v1, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x17BC68u;
    {
        const bool branch_taken_0x17bc68 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x17bc68) {
            ctx->pc = 0x17BC6Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17BC68u;
            // 0x17bc6c: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
            SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x17BC8Cu;
            goto label_17bc8c;
        }
    }
    ctx->pc = 0x17BC70u;
    // 0x17bc70: 0x3c040018  lui         $a0, 0x18
    ctx->pc = 0x17bc70u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)24 << 16));
    // 0x17bc74: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x17bc74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17bc78: 0xc055768  jal         func_155DA0
    ctx->pc = 0x17BC78u;
    SET_GPR_U32(ctx, 31, 0x17BC80u);
    ctx->pc = 0x17BC7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17BC78u;
    // 0x17bc7c: 0x2484bca0  addiu       $a0, $a0, -0x4360 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950048));
    ctx->in_delay_slot = false;
    ctx->pc = 0x155DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155DA0u, 0x17BC78u, 0x17BC80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17BC80u;
label_17bc80:
    // 0x17bc80: 0xc06833c  jal         func_1A0CF0
    ctx->pc = 0x17BC80u;
    SET_GPR_U32(ctx, 31, 0x17BC88u);
    ctx->pc = 0x1A0CF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0CF0u, 0x17BC80u, 0x17BC88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17BC88u;
label_17bc88:
    // 0x17bc88: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x17bc88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_17bc8c:
    // 0x17bc8c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x17bc8cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17bc90: 0x3e00008  jr          $ra
    ctx->pc = 0x17BC90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17BC94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17BC90u;
        // 0x17bc94: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17BC90u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17BC98u;
    // 0x17bc98: 0x0  nop
    ctx->pc = 0x17bc98u;
    // NOP
    // 0x17bc9c: 0x0  nop
    ctx->pc = 0x17bc9cu;
    // NOP
    // 0x17bca0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x17bca0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x17bca4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x17bca4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x17bca8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x17bca8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x17bcac: 0xc05e118  jal         func_178460
    ctx->pc = 0x17BCACu;
    SET_GPR_U32(ctx, 31, 0x17BCB4u);
    ctx->pc = 0x17BCB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17BCACu;
    // 0x17bcb0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x178460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x178460u, 0x17BCACu, 0x17BCB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17BCB4u;
label_17bcb4:
    // 0x17bcb4: 0x2163c  dsll32      $v0, $v0, 24
    ctx->pc = 0x17bcb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 24));
    // 0x17bcb8: 0x2163f  dsra32      $v0, $v0, 24
    ctx->pc = 0x17bcb8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 24));
    // 0x17bcbc: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x17BCBCu;
    {
        const bool branch_taken_0x17bcbc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x17bcbc) {
            ctx->pc = 0x17BCCCu;
            goto label_17bccc;
        }
    }
    ctx->pc = 0x17BCC4u;
    // 0x17bcc4: 0xc05e974  jal         func_17A5D0
    ctx->pc = 0x17BCC4u;
    SET_GPR_U32(ctx, 31, 0x17BCCCu);
    ctx->pc = 0x17A5D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A5D0u, 0x17BCC4u, 0x17BCCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17BCCCu;
label_17bccc:
    // 0x17bccc: 0xc05e118  jal         func_178460
    ctx->pc = 0x17BCCCu;
    SET_GPR_U32(ctx, 31, 0x17BCD4u);
    ctx->pc = 0x178460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x178460u, 0x17BCCCu, 0x17BCD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17BCD4u;
label_17bcd4:
    // 0x17bcd4: 0x2263c  dsll32      $a0, $v0, 24
    ctx->pc = 0x17bcd4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 24));
    // 0x17bcd8: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x17bcd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x17bcdc: 0x4263f  dsra32      $a0, $a0, 24
    ctx->pc = 0x17bcdcu;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 24));
    // 0x17bce0: 0x54830008  bnel        $a0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x17BCE0u;
    {
        const bool branch_taken_0x17bce0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x17bce0) {
            ctx->pc = 0x17BCE4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17BCE0u;
            // 0x17bce4: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
            SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x17BD04u;
            goto label_17bd04;
        }
    }
    ctx->pc = 0x17BCE8u;
    // 0x17bce8: 0xc055770  jal         func_155DC0
    ctx->pc = 0x17BCE8u;
    SET_GPR_U32(ctx, 31, 0x17BCF0u);
    ctx->pc = 0x17BCECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17BCE8u;
    // 0x17bcec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x155DC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155DC0u, 0x17BCE8u, 0x17BCF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17BCF0u;
label_17bcf0:
    // 0x17bcf0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x17bcf0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17bcf4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x17bcf4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17bcf8: 0xc0c79fc  jal         func_31E7F0
    ctx->pc = 0x17BCF8u;
    SET_GPR_U32(ctx, 31, 0x17BD00u);
    ctx->pc = 0x17BCFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17BCF8u;
    // 0x17bcfc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31E7F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31E7F0u, 0x17BCF8u, 0x17BD00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17BD00u;
label_17bd00:
    // 0x17bd00: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x17bd00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_17bd04:
    // 0x17bd04: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x17bd04u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17bd08: 0x3e00008  jr          $ra
    ctx->pc = 0x17BD08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17BD0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17BD08u;
        // 0x17bd0c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17BD08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17BD10u;
    // 0x17bd10: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x17bd10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x17bd14: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x17bd14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x17bd18: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x17bd18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x17bd1c: 0xc05c5f4  jal         func_1717D0
    ctx->pc = 0x17BD1Cu;
    SET_GPR_U32(ctx, 31, 0x17BD24u);
    ctx->pc = 0x17BD20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17BD1Cu;
    // 0x17bd20: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1717D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1717D0u, 0x17BD1Cu, 0x17BD24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17BD24u;
label_17bd24:
    // 0x17bd24: 0xc055684  jal         func_155A10
    ctx->pc = 0x17BD24u;
    SET_GPR_U32(ctx, 31, 0x17BD2Cu);
    ctx->pc = 0x155A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155A10u, 0x17BD24u, 0x17BD2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17BD2Cu;
label_17bd2c:
    // 0x17bd2c: 0xc05347c  jal         func_14D1F0
    ctx->pc = 0x17BD2Cu;
    SET_GPR_U32(ctx, 31, 0x17BD34u);
    ctx->pc = 0x14D1F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14D1F0u, 0x17BD2Cu, 0x17BD34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17BD34u;
label_17bd34:
    // 0x17bd34: 0xc068330  jal         func_1A0CC0
    ctx->pc = 0x17BD34u;
    SET_GPR_U32(ctx, 31, 0x17BD3Cu);
    ctx->pc = 0x1A0CC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0CC0u, 0x17BD34u, 0x17BD3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17BD3Cu;
label_17bd3c:
    // 0x17bd3c: 0x3c0200ff  lui         $v0, 0xFF
    ctx->pc = 0x17bd3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)255 << 16));
    // 0x17bd40: 0x3444ffff  ori         $a0, $v0, 0xFFFF
    ctx->pc = 0x17bd40u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x17bd44: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x17bd44u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17bd48: 0xc0c79fc  jal         func_31E7F0
    ctx->pc = 0x17BD48u;
    SET_GPR_U32(ctx, 31, 0x17BD50u);
    ctx->pc = 0x17BD4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17BD48u;
    // 0x17bd4c: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31E7F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31E7F0u, 0x17BD48u, 0x17BD50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17BD50u;
label_17bd50:
    // 0x17bd50: 0xc06814c  jal         func_1A0530
    ctx->pc = 0x17BD50u;
    SET_GPR_U32(ctx, 31, 0x17BD58u);
    ctx->pc = 0x17BD54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17BD50u;
    // 0x17bd54: 0x24040307  addiu       $a0, $zero, 0x307 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 775));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0530u, 0x17BD50u, 0x17BD58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17BD58u;
label_17bd58:
    // 0x17bd58: 0x3c04001a  lui         $a0, 0x1A
    ctx->pc = 0x17bd58u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)26 << 16));
    // 0x17bd5c: 0xc0558d0  jal         func_156340
    ctx->pc = 0x17BD5Cu;
    SET_GPR_U32(ctx, 31, 0x17BD64u);
    ctx->pc = 0x17BD60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17BD5Cu;
    // 0x17bd60: 0x2484d740  addiu       $a0, $a0, -0x28C0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294956864));
    ctx->in_delay_slot = false;
    ctx->pc = 0x156340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x156340u, 0x17BD5Cu, 0x17BD64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17BD64u;
label_17bd64:
    // 0x17bd64: 0xc05d8bc  jal         func_1762F0
    ctx->pc = 0x17BD64u;
    SET_GPR_U32(ctx, 31, 0x17BD6Cu);
    ctx->pc = 0x1762F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1762F0u, 0x17BD64u, 0x17BD6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17BD6Cu;
label_17bd6c:
    // 0x17bd6c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x17bd6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17bd70: 0xc05da28  jal         func_1768A0
    ctx->pc = 0x17BD70u;
    SET_GPR_U32(ctx, 31, 0x17BD78u);
    ctx->pc = 0x17BD74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17BD70u;
    // 0x17bd74: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1768A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1768A0u, 0x17BD70u, 0x17BD78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17BD78u;
label_17bd78:
    // 0x17bd78: 0xc05e114  jal         func_178450
    ctx->pc = 0x17BD78u;
    SET_GPR_U32(ctx, 31, 0x17BD80u);
    ctx->pc = 0x178450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x178450u, 0x17BD78u, 0x17BD80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17BD80u;
label_17bd80:
    // 0x17bd80: 0x3c040018  lui         $a0, 0x18
    ctx->pc = 0x17bd80u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)24 << 16));
    // 0x17bd84: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x17bd84u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17bd88: 0xc055768  jal         func_155DA0
    ctx->pc = 0x17BD88u;
    SET_GPR_U32(ctx, 31, 0x17BD90u);
    ctx->pc = 0x17BD8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17BD88u;
    // 0x17bd8c: 0x2484bdb0  addiu       $a0, $a0, -0x4250 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950320));
    ctx->in_delay_slot = false;
    ctx->pc = 0x155DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155DA0u, 0x17BD88u, 0x17BD90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17BD90u;
label_17bd90:
    // 0x17bd90: 0x3c04009c  lui         $a0, 0x9C
    ctx->pc = 0x17bd90u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)156 << 16));
    // 0x17bd94: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x17bd94u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x17bd98: 0xa080a220  sb          $zero, -0x5DE0($a0)
    ctx->pc = 0x17bd98u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 4294943264), (uint8_t)GPR_U32(ctx, 0));
    // 0x17bd9c: 0xac60a228  sw          $zero, -0x5DD8($v1)
    ctx->pc = 0x17bd9cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294943272), GPR_U32(ctx, 0));
    // 0x17bda0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x17bda0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17bda4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x17bda4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17bda8: 0x3e00008  jr          $ra
    ctx->pc = 0x17BDA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17BDACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17BDA8u;
        // 0x17bdac: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17BDA8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17BDB0u;
    // 0x17bdb0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x17bdb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x17bdb4: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x17bdb4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x17bdb8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x17bdb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x17bdbc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x17bdbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x17bdc0: 0x8c63a228  lw          $v1, -0x5DD8($v1)
    ctx->pc = 0x17bdc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294943272)));
    // 0x17bdc4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x17bdc4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17bdc8: 0x2c6100c9  sltiu       $at, $v1, 0xC9
    ctx->pc = 0x17bdc8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)201) ? 1 : 0);
    // 0x17bdcc: 0x14200004  bnez        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x17BDCCu;
    {
        const bool branch_taken_0x17bdcc = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x17BDD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17BDCCu;
        // 0x17bdd0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17bdcc) {
            ctx->pc = 0x17BDE0u;
            goto label_17bde0;
        }
    }
    ctx->pc = 0x17BDD4u;
    // 0x17bdd4: 0xc05da4c  jal         func_176930
    ctx->pc = 0x17BDD4u;
    SET_GPR_U32(ctx, 31, 0x17BDDCu);
    ctx->pc = 0x176930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176930u, 0x17BDD4u, 0x17BDDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17BDDCu;
label_17bddc:
    // 0x17bddc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x17bddcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_17bde0:
    // 0x17bde0: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x17bde0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x17bde4: 0x8063a220  lb          $v1, -0x5DE0($v1)
    ctx->pc = 0x17bde4u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294943264)));
    // 0x17bde8: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x17BDE8u;
    {
        const bool branch_taken_0x17bde8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x17bde8) {
            ctx->pc = 0x17BDF8u;
            goto label_17bdf8;
        }
    }
    ctx->pc = 0x17BDF0u;
    // 0x17bdf0: 0x10800009  beqz        $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x17BDF0u;
    {
        const bool branch_taken_0x17bdf0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x17bdf0) {
            ctx->pc = 0x17BE18u;
            goto label_17be18;
        }
    }
    ctx->pc = 0x17BDF8u;
label_17bdf8:
    // 0x17bdf8: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x17bdf8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x17bdfc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x17bdfcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17be00: 0xa044a218  sb          $a0, -0x5DE8($v0)
    ctx->pc = 0x17be00u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294943256), (uint8_t)GPR_U32(ctx, 4));
    // 0x17be04: 0x3c040018  lui         $a0, 0x18
    ctx->pc = 0x17be04u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)24 << 16));
    // 0x17be08: 0xc055768  jal         func_155DA0
    ctx->pc = 0x17BE08u;
    SET_GPR_U32(ctx, 31, 0x17BE10u);
    ctx->pc = 0x17BE0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17BE08u;
    // 0x17be0c: 0x2484be50  addiu       $a0, $a0, -0x41B0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950480));
    ctx->in_delay_slot = false;
    ctx->pc = 0x155DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155DA0u, 0x17BE08u, 0x17BE10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17BE10u;
label_17be10:
    // 0x17be10: 0xc068330  jal         func_1A0CC0
    ctx->pc = 0x17BE10u;
    SET_GPR_U32(ctx, 31, 0x17BE18u);
    ctx->pc = 0x1A0CC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0CC0u, 0x17BE10u, 0x17BE18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17BE18u;
label_17be18:
    // 0x17be18: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x17be18u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x17be1c: 0x8063b578  lb          $v1, -0x4A88($v1)
    ctx->pc = 0x17be1cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294948216)));
    // 0x17be20: 0x50600007  beql        $v1, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x17BE20u;
    {
        const bool branch_taken_0x17be20 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x17be20) {
            ctx->pc = 0x17BE24u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17BE20u;
            // 0x17be24: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
            SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x17BE40u;
            goto label_17be40;
        }
    }
    ctx->pc = 0x17BE28u;
    // 0x17be28: 0x3c04009c  lui         $a0, 0x9C
    ctx->pc = 0x17be28u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)156 << 16));
    // 0x17be2c: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x17be2cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x17be30: 0x8c84a228  lw          $a0, -0x5DD8($a0)
    ctx->pc = 0x17be30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294943272)));
    // 0x17be34: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x17be34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x17be38: 0xac64a228  sw          $a0, -0x5DD8($v1)
    ctx->pc = 0x17be38u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294943272), GPR_U32(ctx, 4));
    // 0x17be3c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x17be3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_17be40:
    // 0x17be40: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x17be40u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17be44: 0x3e00008  jr          $ra
    ctx->pc = 0x17BE44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17BE48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17BE44u;
        // 0x17be48: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17BE44u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17BE4Cu;
    // 0x17be4c: 0x0  nop
    ctx->pc = 0x17be4cu;
    // NOP
    // 0x17be50: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x17be50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x17be54: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x17be54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x17be58: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x17be58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x17be5c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x17be5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x17be60: 0x8042a218  lb          $v0, -0x5DE8($v0)
    ctx->pc = 0x17be60u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294943256)));
    // 0x17be64: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x17BE64u;
    {
        const bool branch_taken_0x17be64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17BE68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17BE64u;
        // 0x17be68: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17be64) {
            ctx->pc = 0x17BEC0u;
            goto label_17bec0;
        }
    }
    ctx->pc = 0x17BE6Cu;
    // 0x17be6c: 0xc0538d4  jal         func_14E350
    ctx->pc = 0x17BE6Cu;
    SET_GPR_U32(ctx, 31, 0x17BE74u);
    ctx->pc = 0x14E350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14E350u, 0x17BE6Cu, 0x17BE74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17BE74u;
label_17be74:
    // 0x17be74: 0x2163c  dsll32      $v0, $v0, 24
    ctx->pc = 0x17be74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 24));
    // 0x17be78: 0x2163f  dsra32      $v0, $v0, 24
    ctx->pc = 0x17be78u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 24));
    // 0x17be7c: 0x14400010  bnez        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x17BE7Cu;
    {
        const bool branch_taken_0x17be7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x17be7c) {
            ctx->pc = 0x17BEC0u;
            goto label_17bec0;
        }
    }
    ctx->pc = 0x17BE84u;
    // 0x17be84: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x17be84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x17be88: 0x8c42b6a0  lw          $v0, -0x4960($v0)
    ctx->pc = 0x17be88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294948512)));
    // 0x17be8c: 0x284100ff  slti        $at, $v0, 0xFF
    ctx->pc = 0x17be8cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)255) ? 1 : 0);
    // 0x17be90: 0x50200007  beql        $at, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x17BE90u;
    {
        const bool branch_taken_0x17be90 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x17be90) {
            ctx->pc = 0x17BE94u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17BE90u;
            // 0x17be94: 0x2203c  dsll32      $a0, $v0, 0 (Delay Slot)
            SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x17BEB0u;
            goto label_17beb0;
        }
    }
    ctx->pc = 0x17BE98u;
    // 0x17be98: 0x24430002  addiu       $v1, $v0, 0x2
    ctx->pc = 0x17be98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x17be9c: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x17be9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x17bea0: 0xac43b6a0  sw          $v1, -0x4960($v0)
    ctx->pc = 0x17bea0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294948512), GPR_U32(ctx, 3));
    // 0x17bea4: 0x3103c  dsll32      $v0, $v1, 0
    ctx->pc = 0x17bea4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 0));
    // 0x17bea8: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x17bea8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x17beac: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x17beacu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
label_17beb0:
    // 0x17beb0: 0xc05e8f4  jal         func_17A3D0
    ctx->pc = 0x17BEB0u;
    SET_GPR_U32(ctx, 31, 0x17BEB8u);
    ctx->pc = 0x17BEB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17BEB0u;
    // 0x17beb4: 0x4203f  dsra32      $a0, $a0, 0 (Delay Slot)
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A3D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A3D0u, 0x17BEB0u, 0x17BEB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17BEB8u;
label_17beb8:
    // 0x17beb8: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x17BEB8u;
    {
        const bool branch_taken_0x17beb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17BEBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17BEB8u;
        // 0x17bebc: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17beb8) {
            ctx->pc = 0x17BF14u;
            goto label_17bf14;
        }
    }
    ctx->pc = 0x17BEC0u;
label_17bec0:
    // 0x17bec0: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x17bec0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x17bec4: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x17bec4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x17bec8: 0xac60b6a0  sw          $zero, -0x4960($v1)
    ctx->pc = 0x17bec8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294948512), GPR_U32(ctx, 0));
    // 0x17becc: 0xc05e118  jal         func_178460
    ctx->pc = 0x17BECCu;
    SET_GPR_U32(ctx, 31, 0x17BED4u);
    ctx->pc = 0x17BED0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17BECCu;
    // 0x17bed0: 0xa040a218  sb          $zero, -0x5DE8($v0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294943256), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x178460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x178460u, 0x17BECCu, 0x17BED4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17BED4u;
label_17bed4:
    // 0x17bed4: 0x2163c  dsll32      $v0, $v0, 24
    ctx->pc = 0x17bed4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 24));
    // 0x17bed8: 0x2163f  dsra32      $v0, $v0, 24
    ctx->pc = 0x17bed8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 24));
    // 0x17bedc: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x17BEDCu;
    {
        const bool branch_taken_0x17bedc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x17bedc) {
            ctx->pc = 0x17BEECu;
            goto label_17beec;
        }
    }
    ctx->pc = 0x17BEE4u;
    // 0x17bee4: 0xc05e974  jal         func_17A5D0
    ctx->pc = 0x17BEE4u;
    SET_GPR_U32(ctx, 31, 0x17BEECu);
    ctx->pc = 0x17A5D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A5D0u, 0x17BEE4u, 0x17BEECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17BEECu;
label_17beec:
    // 0x17beec: 0xc05e118  jal         func_178460
    ctx->pc = 0x17BEECu;
    SET_GPR_U32(ctx, 31, 0x17BEF4u);
    ctx->pc = 0x178460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x178460u, 0x17BEECu, 0x17BEF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17BEF4u;
label_17bef4:
    // 0x17bef4: 0x2263c  dsll32      $a0, $v0, 24
    ctx->pc = 0x17bef4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 24));
    // 0x17bef8: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x17bef8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x17befc: 0x4263f  dsra32      $a0, $a0, 24
    ctx->pc = 0x17befcu;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 24));
    // 0x17bf00: 0x14830003  bne         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x17BF00u;
    {
        const bool branch_taken_0x17bf00 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x17bf00) {
            ctx->pc = 0x17BF10u;
            goto label_17bf10;
        }
    }
    ctx->pc = 0x17BF08u;
    // 0x17bf08: 0xc055770  jal         func_155DC0
    ctx->pc = 0x17BF08u;
    SET_GPR_U32(ctx, 31, 0x17BF10u);
    ctx->pc = 0x17BF0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17BF08u;
    // 0x17bf0c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x155DC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155DC0u, 0x17BF08u, 0x17BF10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17BF10u;
label_17bf10:
    // 0x17bf10: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x17bf10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_17bf14:
    // 0x17bf14: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x17bf14u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17bf18: 0x3e00008  jr          $ra
    ctx->pc = 0x17BF18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17BF1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17BF18u;
        // 0x17bf1c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17BF18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17BF20u;
    // 0x17bf20: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x17bf20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x17bf24: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x17bf24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x17bf28: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x17bf28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x17bf2c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x17bf2cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17bf30: 0xc06814c  jal         func_1A0530
    ctx->pc = 0x17BF30u;
    SET_GPR_U32(ctx, 31, 0x17BF38u);
    ctx->pc = 0x17BF34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17BF30u;
    // 0x17bf34: 0x2404030c  addiu       $a0, $zero, 0x30C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 780));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0530u, 0x17BF30u, 0x17BF38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17BF38u;
label_17bf38:
    // 0x17bf38: 0xc068350  jal         func_1A0D40
    ctx->pc = 0x17BF38u;
    SET_GPR_U32(ctx, 31, 0x17BF40u);
    ctx->pc = 0x1A0D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0D40u, 0x17BF38u, 0x17BF40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17BF40u;
label_17bf40:
    // 0x17bf40: 0xc055684  jal         func_155A10
    ctx->pc = 0x17BF40u;
    SET_GPR_U32(ctx, 31, 0x17BF48u);
    ctx->pc = 0x155A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155A10u, 0x17BF40u, 0x17BF48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17BF48u;
label_17bf48:
    // 0x17bf48: 0xc05347c  jal         func_14D1F0
    ctx->pc = 0x17BF48u;
    SET_GPR_U32(ctx, 31, 0x17BF50u);
    ctx->pc = 0x14D1F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14D1F0u, 0x17BF48u, 0x17BF50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17BF50u;
label_17bf50:
    // 0x17bf50: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x17bf50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17bf54: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x17bf54u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17bf58: 0xc0c79fc  jal         func_31E7F0
    ctx->pc = 0x17BF58u;
    SET_GPR_U32(ctx, 31, 0x17BF60u);
    ctx->pc = 0x17BF5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17BF58u;
    // 0x17bf5c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31E7F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31E7F0u, 0x17BF58u, 0x17BF60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17BF60u;
label_17bf60:
    // 0x17bf60: 0x3c04001a  lui         $a0, 0x1A
    ctx->pc = 0x17bf60u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)26 << 16));
    // 0x17bf64: 0xc0558d0  jal         func_156340
    ctx->pc = 0x17BF64u;
    SET_GPR_U32(ctx, 31, 0x17BF6Cu);
    ctx->pc = 0x17BF68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17BF64u;
    // 0x17bf68: 0x2484d740  addiu       $a0, $a0, -0x28C0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294956864));
    ctx->in_delay_slot = false;
    ctx->pc = 0x156340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x156340u, 0x17BF64u, 0x17BF6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17BF6Cu;
label_17bf6c:
    // 0x17bf6c: 0xc05f028  jal         func_17C0A0
    ctx->pc = 0x17BF6Cu;
    SET_GPR_U32(ctx, 31, 0x17BF74u);
    ctx->pc = 0x17C0A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17C0A0u, 0x17BF6Cu, 0x17BF74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17BF74u;
label_17bf74:
    // 0x17bf74: 0x3c040018  lui         $a0, 0x18
    ctx->pc = 0x17bf74u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)24 << 16));
    // 0x17bf78: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x17bf78u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17bf7c: 0xc055768  jal         func_155DA0
    ctx->pc = 0x17BF7Cu;
    SET_GPR_U32(ctx, 31, 0x17BF84u);
    ctx->pc = 0x17BF80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17BF7Cu;
    // 0x17bf80: 0x2484bfa0  addiu       $a0, $a0, -0x4060 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950816));
    ctx->in_delay_slot = false;
    ctx->pc = 0x155DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155DA0u, 0x17BF7Cu, 0x17BF84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17BF84u;
label_17bf84:
    // 0x17bf84: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x17bf84u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17bf88: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x17bf88u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17bf8c: 0x3e00008  jr          $ra
    ctx->pc = 0x17BF8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17BF90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17BF8Cu;
        // 0x17bf90: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17BF8Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17BF94u;
    // 0x17bf94: 0x0  nop
    ctx->pc = 0x17bf94u;
    // NOP
    // 0x17bf98: 0x0  nop
    ctx->pc = 0x17bf98u;
    // NOP
    // 0x17bf9c: 0x0  nop
    ctx->pc = 0x17bf9cu;
    // NOP
    // 0x17bfa0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x17bfa0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x17bfa4: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x17bfa4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x17bfa8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x17bfa8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x17bfac: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x17bfacu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17bfb0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x17bfb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x17bfb4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x17bfb4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17bfb8: 0x9065daa0  lbu         $a1, -0x2560($v1)
    ctx->pc = 0x17bfb8u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294957728)));
    // 0x17bfbc: 0x18a00012  blez        $a1, . + 4 + (0x12 << 2)
    ctx->pc = 0x17BFBCu;
    {
        const bool branch_taken_0x17bfbc = (GPR_S32(ctx, 5) <= 0);
        ctx->pc = 0x17BFC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17BFBCu;
        // 0x17bfc0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17bfbc) {
            ctx->pc = 0x17C008u;
            goto label_17c008;
        }
    }
    ctx->pc = 0x17BFC4u;
    // 0x17bfc4: 0x3c04009c  lui         $a0, 0x9C
    ctx->pc = 0x17bfc4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)156 << 16));
    // 0x17bfc8: 0x2484da58  addiu       $a0, $a0, -0x25A8
    ctx->pc = 0x17bfc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294957656));
    // 0x17bfcc: 0x30e300ff  andi        $v1, $a3, 0xFF
    ctx->pc = 0x17bfccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
label_17bfd0:
    // 0x17bfd0: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x17bfd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x17bfd4: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x17bfd4u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x17bfd8: 0x30630003  andi        $v1, $v1, 0x3
    ctx->pc = 0x17bfd8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
    // 0x17bfdc: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x17BFDCu;
    {
        const bool branch_taken_0x17bfdc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x17bfdc) {
            ctx->pc = 0x17BFF0u;
            goto label_17bff0;
        }
    }
    ctx->pc = 0x17BFE4u;
    // 0x17bfe4: 0x24c30001  addiu       $v1, $a2, 0x1
    ctx->pc = 0x17bfe4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x17bfe8: 0x306600ff  andi        $a2, $v1, 0xFF
    ctx->pc = 0x17bfe8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x17bfec: 0x0  nop
    ctx->pc = 0x17bfecu;
    // NOP
label_17bff0:
    // 0x17bff0: 0x24e30001  addiu       $v1, $a3, 0x1
    ctx->pc = 0x17bff0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x17bff4: 0x306700ff  andi        $a3, $v1, 0xFF
    ctx->pc = 0x17bff4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x17bff8: 0xe5182a  slt         $v1, $a3, $a1
    ctx->pc = 0x17bff8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x17bffc: 0x5460fff4  bnel        $v1, $zero, . + 4 + (-0xC << 2)
    ctx->pc = 0x17BFFCu;
    {
        const bool branch_taken_0x17bffc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x17bffc) {
            ctx->pc = 0x17C000u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17BFFCu;
            // 0x17c000: 0x30e300ff  andi        $v1, $a3, 0xFF (Delay Slot)
            SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
            ctx->in_delay_slot = false;
            ctx->pc = 0x17BFD0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_17bfd0;
        }
    }
    ctx->pc = 0x17C004u;
    // 0x17c004: 0x0  nop
    ctx->pc = 0x17c004u;
    // NOP
label_17c008:
    // 0x17c008: 0x54c00008  bnel        $a2, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x17C008u;
    {
        const bool branch_taken_0x17c008 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x17c008) {
            ctx->pc = 0x17C00Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17C008u;
            // 0x17c00c: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
            SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x17C02Cu;
            goto label_17c02c;
        }
    }
    ctx->pc = 0x17C010u;
    // 0x17c010: 0xc06833c  jal         func_1A0CF0
    ctx->pc = 0x17C010u;
    SET_GPR_U32(ctx, 31, 0x17C018u);
    ctx->pc = 0x1A0CF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0CF0u, 0x17C010u, 0x17C018u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17C018u;
label_17c018:
    // 0x17c018: 0x3c040018  lui         $a0, 0x18
    ctx->pc = 0x17c018u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)24 << 16));
    // 0x17c01c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x17c01cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17c020: 0xc055768  jal         func_155DA0
    ctx->pc = 0x17C020u;
    SET_GPR_U32(ctx, 31, 0x17C028u);
    ctx->pc = 0x17C024u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17C020u;
    // 0x17c024: 0x2484c040  addiu       $a0, $a0, -0x3FC0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950976));
    ctx->in_delay_slot = false;
    ctx->pc = 0x155DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155DA0u, 0x17C020u, 0x17C028u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17C028u;
label_17c028:
    // 0x17c028: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x17c028u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_17c02c:
    // 0x17c02c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x17c02cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17c030: 0x3e00008  jr          $ra
    ctx->pc = 0x17C030u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17C034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C030u;
        // 0x17c034: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17C030u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17C038u;
    // 0x17c038: 0x0  nop
    ctx->pc = 0x17c038u;
    // NOP
    // 0x17c03c: 0x0  nop
    ctx->pc = 0x17c03cu;
    // NOP
    // 0x17c040: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x17c040u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x17c044: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x17c044u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x17c048: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x17c048u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x17c04c: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x17c04cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x17c050: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x17c050u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x17c054: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x17c054u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17c058: 0xc055684  jal         func_155A10
    ctx->pc = 0x17C058u;
    SET_GPR_U32(ctx, 31, 0x17C060u);
    ctx->pc = 0x17C05Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17C058u;
    // 0x17c05c: 0xa043d9d0  sb          $v1, -0x2630($v0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294957520), (uint8_t)GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x155A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155A10u, 0x17C058u, 0x17C060u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17C060u;
label_17c060:
    // 0x17c060: 0xc05347c  jal         func_14D1F0
    ctx->pc = 0x17C060u;
    SET_GPR_U32(ctx, 31, 0x17C068u);
    ctx->pc = 0x14D1F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14D1F0u, 0x17C060u, 0x17C068u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17C068u;
label_17c068:
    // 0x17c068: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x17c068u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x17c06c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x17c06cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17c070: 0x9443da88  lhu         $v1, -0x2578($v0)
    ctx->pc = 0x17c070u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294957704)));
    // 0x17c074: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x17c074u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x17c078: 0x3063fffc  andi        $v1, $v1, 0xFFFC
    ctx->pc = 0x17c078u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65532);
    // 0x17c07c: 0xc055770  jal         func_155DC0
    ctx->pc = 0x17C07Cu;
    SET_GPR_U32(ctx, 31, 0x17C084u);
    ctx->pc = 0x17C080u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17C07Cu;
    // 0x17c080: 0xa443da88  sh          $v1, -0x2578($v0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 2), 4294957704), (uint16_t)GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x155DC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155DC0u, 0x17C07Cu, 0x17C084u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17C084u;
label_17c084:
    // 0x17c084: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x17c084u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17c088: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x17c088u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17c08c: 0x3e00008  jr          $ra
    ctx->pc = 0x17C08Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17C090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C08Cu;
        // 0x17c090: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17C08Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17C094u;
    // 0x17c094: 0x0  nop
    ctx->pc = 0x17c094u;
    // NOP
    // 0x17c098: 0x0  nop
    ctx->pc = 0x17c098u;
    // NOP
    // 0x17c09c: 0x0  nop
    ctx->pc = 0x17c09cu;
    // NOP
    if (ctx->pc == 0x17c09cu) { ctx->pc = 0x17c0a0u; }
}
