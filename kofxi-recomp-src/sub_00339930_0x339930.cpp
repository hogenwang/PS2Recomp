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

// Function: sub_00339930
// Address: 0x339930 - 0x339a40
void sub_00339930_0x339930(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00339930_0x339930");
#endif

    switch (ctx->pc) {
        case 0x339a1cu: goto label_339a1c;
        default: break;
    }

    ctx->pc = 0x339930u;

    // 0x339930: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x339930u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x339934: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x339934u;
    {
        const bool branch_taken_0x339934 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x339938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x339934u;
        // 0x339938: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x339934) {
            ctx->pc = 0x339954u;
            goto label_339954;
        }
    }
    ctx->pc = 0x33993Cu;
    // 0x33993c: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x33993cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x339940: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x339940u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x339944: 0xac43e8f0  sw          $v1, -0x1710($v0)
    ctx->pc = 0x339944u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294961392), GPR_U32(ctx, 3));
    // 0x339948: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x339948u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x33994c: 0x10000031  b           . + 4 + (0x31 << 2)
    ctx->pc = 0x33994Cu;
    {
        const bool branch_taken_0x33994c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x339950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33994Cu;
        // 0x339950: 0xa040e818  sb          $zero, -0x17E8($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 4294961176), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33994c) {
            ctx->pc = 0x339A14u;
            goto label_339a14;
        }
    }
    ctx->pc = 0x339954u;
label_339954:
    // 0x339954: 0x3c02009d  lui         $v0, 0x9D
    ctx->pc = 0x339954u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)157 << 16));
    // 0x339958: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x339958u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x33995c: 0x9047b240  lbu         $a3, -0x4DC0($v0)
    ctx->pc = 0x33995cu;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294947392)));
    // 0x339960: 0x3c0401de  lui         $a0, 0x1DE
    ctx->pc = 0x339960u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)478 << 16));
    // 0x339964: 0x3c0501de  lui         $a1, 0x1DE
    ctx->pc = 0x339964u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)478 << 16));
    // 0x339968: 0x3c02009d  lui         $v0, 0x9D
    ctx->pc = 0x339968u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)157 << 16));
    // 0x33996c: 0xa067e868  sb          $a3, -0x1798($v1)
    ctx->pc = 0x33996cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4294961256), (uint8_t)GPR_U32(ctx, 7));
    // 0x339970: 0x9046b241  lbu         $a2, -0x4DBF($v0)
    ctx->pc = 0x339970u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294947393)));
    // 0x339974: 0x3c03009d  lui         $v1, 0x9D
    ctx->pc = 0x339974u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)157 << 16));
    // 0x339978: 0x9067b243  lbu         $a3, -0x4DBD($v1)
    ctx->pc = 0x339978u;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294947395)));
    // 0x33997c: 0x3c02009d  lui         $v0, 0x9D
    ctx->pc = 0x33997cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)157 << 16));
    // 0x339980: 0xa086e869  sb          $a2, -0x1797($a0)
    ctx->pc = 0x339980u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 4294961257), (uint8_t)GPR_U32(ctx, 6));
    // 0x339984: 0x9048b242  lbu         $t0, -0x4DBE($v0)
    ctx->pc = 0x339984u;
    SET_GPR_U32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294947394)));
    // 0x339988: 0x3c0401de  lui         $a0, 0x1DE
    ctx->pc = 0x339988u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)478 << 16));
    // 0x33998c: 0xa087e86b  sb          $a3, -0x1795($a0)
    ctx->pc = 0x33998cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 4294961259), (uint8_t)GPR_U32(ctx, 7));
    // 0x339990: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x339990u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x339994: 0x3c04009d  lui         $a0, 0x9D
    ctx->pc = 0x339994u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)157 << 16));
    // 0x339998: 0x3c02009d  lui         $v0, 0x9D
    ctx->pc = 0x339998u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)157 << 16));
    // 0x33999c: 0xa0a8e86a  sb          $t0, -0x1796($a1)
    ctx->pc = 0x33999cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 4294961258), (uint8_t)GPR_U32(ctx, 8));
    // 0x3399a0: 0x9046b244  lbu         $a2, -0x4DBC($v0)
    ctx->pc = 0x3399a0u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294947396)));
    // 0x3399a4: 0x3c0501de  lui         $a1, 0x1DE
    ctx->pc = 0x3399a4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)478 << 16));
    // 0x3399a8: 0x9088b246  lbu         $t0, -0x4DBA($a0)
    ctx->pc = 0x3399a8u;
    SET_GPR_U32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 4294947398)));
    // 0x3399ac: 0xa066e86c  sb          $a2, -0x1794($v1)
    ctx->pc = 0x3399acu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4294961260), (uint8_t)GPR_U32(ctx, 6));
    // 0x3399b0: 0x3c02009d  lui         $v0, 0x9D
    ctx->pc = 0x3399b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)157 << 16));
    // 0x3399b4: 0x9046b245  lbu         $a2, -0x4DBB($v0)
    ctx->pc = 0x3399b4u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294947397)));
    // 0x3399b8: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x3399b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x3399bc: 0xa068e86e  sb          $t0, -0x1792($v1)
    ctx->pc = 0x3399bcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4294961262), (uint8_t)GPR_U32(ctx, 8));
    // 0x3399c0: 0x3c0401de  lui         $a0, 0x1DE
    ctx->pc = 0x3399c0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)478 << 16));
    // 0x3399c4: 0x3c03009d  lui         $v1, 0x9D
    ctx->pc = 0x3399c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)157 << 16));
    // 0x3399c8: 0x3c02009d  lui         $v0, 0x9D
    ctx->pc = 0x3399c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)157 << 16));
    // 0x3399cc: 0xa0a6e86d  sb          $a2, -0x1793($a1)
    ctx->pc = 0x3399ccu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 4294961261), (uint8_t)GPR_U32(ctx, 6));
    // 0x3399d0: 0x9047b247  lbu         $a3, -0x4DB9($v0)
    ctx->pc = 0x3399d0u;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294947399)));
    // 0x3399d4: 0x3c0601de  lui         $a2, 0x1DE
    ctx->pc = 0x3399d4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)478 << 16));
    // 0x3399d8: 0x9068b249  lbu         $t0, -0x4DB7($v1)
    ctx->pc = 0x3399d8u;
    SET_GPR_U32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294947401)));
    // 0x3399dc: 0x3c0501de  lui         $a1, 0x1DE
    ctx->pc = 0x3399dcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)478 << 16));
    // 0x3399e0: 0x3c02009d  lui         $v0, 0x9D
    ctx->pc = 0x3399e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)157 << 16));
    // 0x3399e4: 0xa087e86f  sb          $a3, -0x1791($a0)
    ctx->pc = 0x3399e4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 4294961263), (uint8_t)GPR_U32(ctx, 7));
    // 0x3399e8: 0x9049b248  lbu         $t1, -0x4DB8($v0)
    ctx->pc = 0x3399e8u;
    SET_GPR_U32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294947400)));
    // 0x3399ec: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x3399ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x3399f0: 0x3c0401de  lui         $a0, 0x1DE
    ctx->pc = 0x3399f0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)478 << 16));
    // 0x3399f4: 0xa0a8e871  sb          $t0, -0x178F($a1)
    ctx->pc = 0x3399f4u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 4294961265), (uint8_t)GPR_U32(ctx, 8));
    // 0x3399f8: 0xac60e8f0  sw          $zero, -0x1710($v1)
    ctx->pc = 0x3399f8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294961392), GPR_U32(ctx, 0));
    // 0x3399fc: 0x3c02009d  lui         $v0, 0x9D
    ctx->pc = 0x3399fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)157 << 16));
    // 0x339a00: 0xa0c9e870  sb          $t1, -0x1790($a2)
    ctx->pc = 0x339a00u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 4294961264), (uint8_t)GPR_U32(ctx, 9));
    // 0x339a04: 0x9047b24a  lbu         $a3, -0x4DB6($v0)
    ctx->pc = 0x339a04u;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294947402)));
    // 0x339a08: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x339a08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x339a0c: 0xa087e872  sb          $a3, -0x178E($a0)
    ctx->pc = 0x339a0cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 4294961266), (uint8_t)GPR_U32(ctx, 7));
    // 0x339a10: 0xa040e818  sb          $zero, -0x17E8($v0)
    ctx->pc = 0x339a10u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294961176), (uint8_t)GPR_U32(ctx, 0));
label_339a14:
    // 0x339a14: 0xc0cee84  jal         func_33BA10
    ctx->pc = 0x339A14u;
    SET_GPR_U32(ctx, 31, 0x339A1Cu);
    ctx->pc = 0x33BA10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33BA10u, 0x339A14u, 0x339A1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x339A1Cu;
label_339a1c:
    // 0x339a1c: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x339a1cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x339a20: 0x3c0401de  lui         $a0, 0x1DE
    ctx->pc = 0x339a20u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)478 << 16));
    // 0x339a24: 0xac60e8d8  sw          $zero, -0x1728($v1)
    ctx->pc = 0x339a24u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294961368), GPR_U32(ctx, 0));
    // 0x339a28: 0x3c03009f  lui         $v1, 0x9F
    ctx->pc = 0x339a28u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)159 << 16));
    // 0x339a2c: 0xac80e8d0  sw          $zero, -0x1730($a0)
    ctx->pc = 0x339a2cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4294961360), GPR_U32(ctx, 0));
    // 0x339a30: 0xa06095c0  sb          $zero, -0x6A40($v1)
    ctx->pc = 0x339a30u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4294940096), (uint8_t)GPR_U32(ctx, 0));
    // 0x339a34: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x339a34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x339a38: 0x3e00008  jr          $ra
    ctx->pc = 0x339A38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x339A3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x339A38u;
        // 0x339a3c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x339A38u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x339A40u;
}
